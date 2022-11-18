/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchCreateTableRowsAsync(...)  SubmitAsync(&HoneycodeClient::BatchCreateTableRows, __VA_ARGS__)
#define BatchCreateTableRowsCallable(REQUEST)  SubmitCallable(&HoneycodeClient::BatchCreateTableRows, REQUEST)

#define BatchDeleteTableRowsAsync(...)  SubmitAsync(&HoneycodeClient::BatchDeleteTableRows, __VA_ARGS__)
#define BatchDeleteTableRowsCallable(REQUEST)  SubmitCallable(&HoneycodeClient::BatchDeleteTableRows, REQUEST)

#define BatchUpdateTableRowsAsync(...)  SubmitAsync(&HoneycodeClient::BatchUpdateTableRows, __VA_ARGS__)
#define BatchUpdateTableRowsCallable(REQUEST)  SubmitCallable(&HoneycodeClient::BatchUpdateTableRows, REQUEST)

#define BatchUpsertTableRowsAsync(...)  SubmitAsync(&HoneycodeClient::BatchUpsertTableRows, __VA_ARGS__)
#define BatchUpsertTableRowsCallable(REQUEST)  SubmitCallable(&HoneycodeClient::BatchUpsertTableRows, REQUEST)

#define DescribeTableDataImportJobAsync(...)  SubmitAsync(&HoneycodeClient::DescribeTableDataImportJob, __VA_ARGS__)
#define DescribeTableDataImportJobCallable(REQUEST)  SubmitCallable(&HoneycodeClient::DescribeTableDataImportJob, REQUEST)

#define GetScreenDataAsync(...)  SubmitAsync(&HoneycodeClient::GetScreenData, __VA_ARGS__)
#define GetScreenDataCallable(REQUEST)  SubmitCallable(&HoneycodeClient::GetScreenData, REQUEST)

#define InvokeScreenAutomationAsync(...)  SubmitAsync(&HoneycodeClient::InvokeScreenAutomation, __VA_ARGS__)
#define InvokeScreenAutomationCallable(REQUEST)  SubmitCallable(&HoneycodeClient::InvokeScreenAutomation, REQUEST)

#define ListTableColumnsAsync(...)  SubmitAsync(&HoneycodeClient::ListTableColumns, __VA_ARGS__)
#define ListTableColumnsCallable(REQUEST)  SubmitCallable(&HoneycodeClient::ListTableColumns, REQUEST)

#define ListTableRowsAsync(...)  SubmitAsync(&HoneycodeClient::ListTableRows, __VA_ARGS__)
#define ListTableRowsCallable(REQUEST)  SubmitCallable(&HoneycodeClient::ListTableRows, REQUEST)

#define ListTablesAsync(...)  SubmitAsync(&HoneycodeClient::ListTables, __VA_ARGS__)
#define ListTablesCallable(REQUEST)  SubmitCallable(&HoneycodeClient::ListTables, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&HoneycodeClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&HoneycodeClient::ListTagsForResource, REQUEST)

#define QueryTableRowsAsync(...)  SubmitAsync(&HoneycodeClient::QueryTableRows, __VA_ARGS__)
#define QueryTableRowsCallable(REQUEST)  SubmitCallable(&HoneycodeClient::QueryTableRows, REQUEST)

#define StartTableDataImportJobAsync(...)  SubmitAsync(&HoneycodeClient::StartTableDataImportJob, __VA_ARGS__)
#define StartTableDataImportJobCallable(REQUEST)  SubmitCallable(&HoneycodeClient::StartTableDataImportJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&HoneycodeClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&HoneycodeClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&HoneycodeClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&HoneycodeClient::UntagResource, REQUEST)

