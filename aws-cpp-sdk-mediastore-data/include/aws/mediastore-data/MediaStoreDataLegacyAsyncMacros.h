/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteObjectAsync(...)  SubmitAsync(&MediaStoreDataClient::DeleteObject, __VA_ARGS__)
#define DeleteObjectCallable(REQUEST)  SubmitCallable(&MediaStoreDataClient::DeleteObject, REQUEST)

#define DescribeObjectAsync(...)  SubmitAsync(&MediaStoreDataClient::DescribeObject, __VA_ARGS__)
#define DescribeObjectCallable(REQUEST)  SubmitCallable(&MediaStoreDataClient::DescribeObject, REQUEST)

#define GetObjectAsync(...)  SubmitAsync(&MediaStoreDataClient::GetObject, __VA_ARGS__)
#define GetObjectCallable(REQUEST)  SubmitCallable(&MediaStoreDataClient::GetObject, REQUEST)

#define ListItemsAsync(...)  SubmitAsync(&MediaStoreDataClient::ListItems, __VA_ARGS__)
#define ListItemsCallable(REQUEST)  SubmitCallable(&MediaStoreDataClient::ListItems, REQUEST)

#define PutObjectAsync(...)  SubmitAsync(&MediaStoreDataClient::PutObject, __VA_ARGS__)
#define PutObjectCallable(REQUEST)  SubmitCallable(&MediaStoreDataClient::PutObject, REQUEST)

