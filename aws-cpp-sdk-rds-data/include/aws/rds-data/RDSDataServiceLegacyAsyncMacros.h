/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchExecuteStatementAsync(...)  SubmitAsync(&RDSDataServiceClient::BatchExecuteStatement, __VA_ARGS__)
#define BatchExecuteStatementCallable(REQUEST)  SubmitCallable(&RDSDataServiceClient::BatchExecuteStatement, REQUEST)

#define BeginTransactionAsync(...)  SubmitAsync(&RDSDataServiceClient::BeginTransaction, __VA_ARGS__)
#define BeginTransactionCallable(REQUEST)  SubmitCallable(&RDSDataServiceClient::BeginTransaction, REQUEST)

#define CommitTransactionAsync(...)  SubmitAsync(&RDSDataServiceClient::CommitTransaction, __VA_ARGS__)
#define CommitTransactionCallable(REQUEST)  SubmitCallable(&RDSDataServiceClient::CommitTransaction, REQUEST)

#define ExecuteStatementAsync(...)  SubmitAsync(&RDSDataServiceClient::ExecuteStatement, __VA_ARGS__)
#define ExecuteStatementCallable(REQUEST)  SubmitCallable(&RDSDataServiceClient::ExecuteStatement, REQUEST)

#define RollbackTransactionAsync(...)  SubmitAsync(&RDSDataServiceClient::RollbackTransaction, __VA_ARGS__)
#define RollbackTransactionCallable(REQUEST)  SubmitCallable(&RDSDataServiceClient::RollbackTransaction, REQUEST)

