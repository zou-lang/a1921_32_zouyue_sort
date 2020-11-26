#ifndef sort_h
#define sort_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

//冒泡排序
void bubble1(int a[], int n);
void bubble2(int a[], int n);
void bubble3(int a[], int n);
//插入、选择排序
void InsertSort(int a[], int n);
void SelectSort(int a[], int n);
//快速排序
int Partition(int a[], int low, int high);
int Pattition(int a[], int low, int high);
void QSort(int a[], int low, int high);
void QuickSort(int a[], int n);

#endif
