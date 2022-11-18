/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchGetNamedQueryAsync(...)  SubmitAsync(&AthenaClient::BatchGetNamedQuery, __VA_ARGS__)
#define BatchGetNamedQueryCallable(REQUEST)  SubmitCallable(&AthenaClient::BatchGetNamedQuery, REQUEST)

#define BatchGetPreparedStatementAsync(...)  SubmitAsync(&AthenaClient::BatchGetPreparedStatement, __VA_ARGS__)
#define BatchGetPreparedStatementCallable(REQUEST)  SubmitCallable(&AthenaClient::BatchGetPreparedStatement, REQUEST)

#define BatchGetQueryExecutionAsync(...)  SubmitAsync(&AthenaClient::BatchGetQueryExecution, __VA_ARGS__)
#define BatchGetQueryExecutionCallable(REQUEST)  SubmitCallable(&AthenaClient::BatchGetQueryExecution, REQUEST)

#define CreateDataCatalogAsync(...)  SubmitAsync(&AthenaClient::CreateDataCatalog, __VA_ARGS__)
#define CreateDataCatalogCallable(REQUEST)  SubmitCallable(&AthenaClient::CreateDataCatalog, REQUEST)

#define CreateNamedQueryAsync(...)  SubmitAsync(&AthenaClient::CreateNamedQuery, __VA_ARGS__)
#define CreateNamedQueryCallable(REQUEST)  SubmitCallable(&AthenaClient::CreateNamedQuery, REQUEST)

#define CreatePreparedStatementAsync(...)  SubmitAsync(&AthenaClient::CreatePreparedStatement, __VA_ARGS__)
#define CreatePreparedStatementCallable(REQUEST)  SubmitCallable(&AthenaClient::CreatePreparedStatement, REQUEST)

#define CreateWorkGroupAsync(...)  SubmitAsync(&AthenaClient::CreateWorkGroup, __VA_ARGS__)
#define CreateWorkGroupCallable(REQUEST)  SubmitCallable(&AthenaClient::CreateWorkGroup, REQUEST)

#define DeleteDataCatalogAsync(...)  SubmitAsync(&AthenaClient::DeleteDataCatalog, __VA_ARGS__)
#define DeleteDataCatalogCallable(REQUEST)  SubmitCallable(&AthenaClient::DeleteDataCatalog, REQUEST)

#define DeleteNamedQueryAsync(...)  SubmitAsync(&AthenaClient::DeleteNamedQuery, __VA_ARGS__)
#define DeleteNamedQueryCallable(REQUEST)  SubmitCallable(&AthenaClient::DeleteNamedQuery, REQUEST)

#define DeletePreparedStatementAsync(...)  SubmitAsync(&AthenaClient::DeletePreparedStatement, __VA_ARGS__)
#define DeletePreparedStatementCallable(REQUEST)  SubmitCallable(&AthenaClient::DeletePreparedStatement, REQUEST)

#define DeleteWorkGroupAsync(...)  SubmitAsync(&AthenaClient::DeleteWorkGroup, __VA_ARGS__)
#define DeleteWorkGroupCallable(REQUEST)  SubmitCallable(&AthenaClient::DeleteWorkGroup, REQUEST)

#define GetDataCatalogAsync(...)  SubmitAsync(&AthenaClient::GetDataCatalog, __VA_ARGS__)
#define GetDataCatalogCallable(REQUEST)  SubmitCallable(&AthenaClient::GetDataCatalog, REQUEST)

#define GetDatabaseAsync(...)  SubmitAsync(&AthenaClient::GetDatabase, __VA_ARGS__)
#define GetDatabaseCallable(REQUEST)  SubmitCallable(&AthenaClient::GetDatabase, REQUEST)

#define GetNamedQueryAsync(...)  SubmitAsync(&AthenaClient::GetNamedQuery, __VA_ARGS__)
#define GetNamedQueryCallable(REQUEST)  SubmitCallable(&AthenaClient::GetNamedQuery, REQUEST)

#define GetPreparedStatementAsync(...)  SubmitAsync(&AthenaClient::GetPreparedStatement, __VA_ARGS__)
#define GetPreparedStatementCallable(REQUEST)  SubmitCallable(&AthenaClient::GetPreparedStatement, REQUEST)

#define GetQueryExecutionAsync(...)  SubmitAsync(&AthenaClient::GetQueryExecution, __VA_ARGS__)
#define GetQueryExecutionCallable(REQUEST)  SubmitCallable(&AthenaClient::GetQueryExecution, REQUEST)

#define GetQueryResultsAsync(...)  SubmitAsync(&AthenaClient::GetQueryResults, __VA_ARGS__)
#define GetQueryResultsCallable(REQUEST)  SubmitCallable(&AthenaClient::GetQueryResults, REQUEST)

#define GetQueryRuntimeStatisticsAsync(...)  SubmitAsync(&AthenaClient::GetQueryRuntimeStatistics, __VA_ARGS__)
#define GetQueryRuntimeStatisticsCallable(REQUEST)  SubmitCallable(&AthenaClient::GetQueryRuntimeStatistics, REQUEST)

#define GetTableMetadataAsync(...)  SubmitAsync(&AthenaClient::GetTableMetadata, __VA_ARGS__)
#define GetTableMetadataCallable(REQUEST)  SubmitCallable(&AthenaClient::GetTableMetadata, REQUEST)

#define GetWorkGroupAsync(...)  SubmitAsync(&AthenaClient::GetWorkGroup, __VA_ARGS__)
#define GetWorkGroupCallable(REQUEST)  SubmitCallable(&AthenaClient::GetWorkGroup, REQUEST)

#define ListDataCatalogsAsync(...)  SubmitAsync(&AthenaClient::ListDataCatalogs, __VA_ARGS__)
#define ListDataCatalogsCallable(REQUEST)  SubmitCallable(&AthenaClient::ListDataCatalogs, REQUEST)

#define ListDatabasesAsync(...)  SubmitAsync(&AthenaClient::ListDatabases, __VA_ARGS__)
#define ListDatabasesCallable(REQUEST)  SubmitCallable(&AthenaClient::ListDatabases, REQUEST)

#define ListEngineVersionsAsync(...)  SubmitAsync(&AthenaClient::ListEngineVersions, __VA_ARGS__)
#define ListEngineVersionsCallable(REQUEST)  SubmitCallable(&AthenaClient::ListEngineVersions, REQUEST)

#define ListNamedQueriesAsync(...)  SubmitAsync(&AthenaClient::ListNamedQueries, __VA_ARGS__)
#define ListNamedQueriesCallable(REQUEST)  SubmitCallable(&AthenaClient::ListNamedQueries, REQUEST)

#define ListPreparedStatementsAsync(...)  SubmitAsync(&AthenaClient::ListPreparedStatements, __VA_ARGS__)
#define ListPreparedStatementsCallable(REQUEST)  SubmitCallable(&AthenaClient::ListPreparedStatements, REQUEST)

#define ListQueryExecutionsAsync(...)  SubmitAsync(&AthenaClient::ListQueryExecutions, __VA_ARGS__)
#define ListQueryExecutionsCallable(REQUEST)  SubmitCallable(&AthenaClient::ListQueryExecutions, REQUEST)

#define ListTableMetadataAsync(...)  SubmitAsync(&AthenaClient::ListTableMetadata, __VA_ARGS__)
#define ListTableMetadataCallable(REQUEST)  SubmitCallable(&AthenaClient::ListTableMetadata, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AthenaClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AthenaClient::ListTagsForResource, REQUEST)

#define ListWorkGroupsAsync(...)  SubmitAsync(&AthenaClient::ListWorkGroups, __VA_ARGS__)
#define ListWorkGroupsCallable(REQUEST)  SubmitCallable(&AthenaClient::ListWorkGroups, REQUEST)

#define StartQueryExecutionAsync(...)  SubmitAsync(&AthenaClient::StartQueryExecution, __VA_ARGS__)
#define StartQueryExecutionCallable(REQUEST)  SubmitCallable(&AthenaClient::StartQueryExecution, REQUEST)

#define StopQueryExecutionAsync(...)  SubmitAsync(&AthenaClient::StopQueryExecution, __VA_ARGS__)
#define StopQueryExecutionCallable(REQUEST)  SubmitCallable(&AthenaClient::StopQueryExecution, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AthenaClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AthenaClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AthenaClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AthenaClient::UntagResource, REQUEST)

#define UpdateDataCatalogAsync(...)  SubmitAsync(&AthenaClient::UpdateDataCatalog, __VA_ARGS__)
#define UpdateDataCatalogCallable(REQUEST)  SubmitCallable(&AthenaClient::UpdateDataCatalog, REQUEST)

#define UpdateNamedQueryAsync(...)  SubmitAsync(&AthenaClient::UpdateNamedQuery, __VA_ARGS__)
#define UpdateNamedQueryCallable(REQUEST)  SubmitCallable(&AthenaClient::UpdateNamedQuery, REQUEST)

#define UpdatePreparedStatementAsync(...)  SubmitAsync(&AthenaClient::UpdatePreparedStatement, __VA_ARGS__)
#define UpdatePreparedStatementCallable(REQUEST)  SubmitCallable(&AthenaClient::UpdatePreparedStatement, REQUEST)

#define UpdateWorkGroupAsync(...)  SubmitAsync(&AthenaClient::UpdateWorkGroup, __VA_ARGS__)
#define UpdateWorkGroupCallable(REQUEST)  SubmitCallable(&AthenaClient::UpdateWorkGroup, REQUEST)

