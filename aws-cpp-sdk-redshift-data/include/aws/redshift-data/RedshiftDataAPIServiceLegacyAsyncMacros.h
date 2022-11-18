/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchExecuteStatementAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::BatchExecuteStatement, __VA_ARGS__)
#define BatchExecuteStatementCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::BatchExecuteStatement, REQUEST)

#define CancelStatementAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::CancelStatement, __VA_ARGS__)
#define CancelStatementCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::CancelStatement, REQUEST)

#define DescribeStatementAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::DescribeStatement, __VA_ARGS__)
#define DescribeStatementCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::DescribeStatement, REQUEST)

#define DescribeTableAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::DescribeTable, __VA_ARGS__)
#define DescribeTableCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::DescribeTable, REQUEST)

#define ExecuteStatementAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::ExecuteStatement, __VA_ARGS__)
#define ExecuteStatementCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::ExecuteStatement, REQUEST)

#define GetStatementResultAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::GetStatementResult, __VA_ARGS__)
#define GetStatementResultCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::GetStatementResult, REQUEST)

#define ListDatabasesAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::ListDatabases, __VA_ARGS__)
#define ListDatabasesCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::ListDatabases, REQUEST)

#define ListSchemasAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::ListSchemas, __VA_ARGS__)
#define ListSchemasCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::ListSchemas, REQUEST)

#define ListStatementsAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::ListStatements, __VA_ARGS__)
#define ListStatementsCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::ListStatements, REQUEST)

#define ListTablesAsync(...)  SubmitAsync(&RedshiftDataAPIServiceClient::ListTables, __VA_ARGS__)
#define ListTablesCallable(REQUEST)  SubmitCallable(&RedshiftDataAPIServiceClient::ListTables, REQUEST)

