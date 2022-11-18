/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDatabaseAsync(...)  SubmitAsync(&TimestreamWriteClient::CreateDatabase, __VA_ARGS__)
#define CreateDatabaseCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::CreateDatabase, REQUEST)

#define CreateTableAsync(...)  SubmitAsync(&TimestreamWriteClient::CreateTable, __VA_ARGS__)
#define CreateTableCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::CreateTable, REQUEST)

#define DeleteDatabaseAsync(...)  SubmitAsync(&TimestreamWriteClient::DeleteDatabase, __VA_ARGS__)
#define DeleteDatabaseCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::DeleteDatabase, REQUEST)

#define DeleteTableAsync(...)  SubmitAsync(&TimestreamWriteClient::DeleteTable, __VA_ARGS__)
#define DeleteTableCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::DeleteTable, REQUEST)

#define DescribeDatabaseAsync(...)  SubmitAsync(&TimestreamWriteClient::DescribeDatabase, __VA_ARGS__)
#define DescribeDatabaseCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::DescribeDatabase, REQUEST)

#define DescribeEndpointsAsync(...)  SubmitAsync(&TimestreamWriteClient::DescribeEndpoints, __VA_ARGS__)
#define DescribeEndpointsCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::DescribeEndpoints, REQUEST)

#define DescribeTableAsync(...)  SubmitAsync(&TimestreamWriteClient::DescribeTable, __VA_ARGS__)
#define DescribeTableCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::DescribeTable, REQUEST)

#define ListDatabasesAsync(...)  SubmitAsync(&TimestreamWriteClient::ListDatabases, __VA_ARGS__)
#define ListDatabasesCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::ListDatabases, REQUEST)

#define ListTablesAsync(...)  SubmitAsync(&TimestreamWriteClient::ListTables, __VA_ARGS__)
#define ListTablesCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::ListTables, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&TimestreamWriteClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&TimestreamWriteClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&TimestreamWriteClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::UntagResource, REQUEST)

#define UpdateDatabaseAsync(...)  SubmitAsync(&TimestreamWriteClient::UpdateDatabase, __VA_ARGS__)
#define UpdateDatabaseCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::UpdateDatabase, REQUEST)

#define UpdateTableAsync(...)  SubmitAsync(&TimestreamWriteClient::UpdateTable, __VA_ARGS__)
#define UpdateTableCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::UpdateTable, REQUEST)

#define WriteRecordsAsync(...)  SubmitAsync(&TimestreamWriteClient::WriteRecords, __VA_ARGS__)
#define WriteRecordsCallable(REQUEST)  SubmitCallable(&TimestreamWriteClient::WriteRecords, REQUEST)

