/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchExecuteStatementAsync(...)  SubmitAsync(&DynamoDBClient::BatchExecuteStatement, __VA_ARGS__)
#define BatchExecuteStatementCallable(REQUEST)  SubmitCallable(&DynamoDBClient::BatchExecuteStatement, REQUEST)

#define BatchGetItemAsync(...)  SubmitAsync(&DynamoDBClient::BatchGetItem, __VA_ARGS__)
#define BatchGetItemCallable(REQUEST)  SubmitCallable(&DynamoDBClient::BatchGetItem, REQUEST)

#define BatchWriteItemAsync(...)  SubmitAsync(&DynamoDBClient::BatchWriteItem, __VA_ARGS__)
#define BatchWriteItemCallable(REQUEST)  SubmitCallable(&DynamoDBClient::BatchWriteItem, REQUEST)

#define CreateBackupAsync(...)  SubmitAsync(&DynamoDBClient::CreateBackup, __VA_ARGS__)
#define CreateBackupCallable(REQUEST)  SubmitCallable(&DynamoDBClient::CreateBackup, REQUEST)

#define CreateGlobalTableAsync(...)  SubmitAsync(&DynamoDBClient::CreateGlobalTable, __VA_ARGS__)
#define CreateGlobalTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::CreateGlobalTable, REQUEST)

#define CreateTableAsync(...)  SubmitAsync(&DynamoDBClient::CreateTable, __VA_ARGS__)
#define CreateTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::CreateTable, REQUEST)

#define DeleteBackupAsync(...)  SubmitAsync(&DynamoDBClient::DeleteBackup, __VA_ARGS__)
#define DeleteBackupCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DeleteBackup, REQUEST)

#define DeleteItemAsync(...)  SubmitAsync(&DynamoDBClient::DeleteItem, __VA_ARGS__)
#define DeleteItemCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DeleteItem, REQUEST)

#define DeleteTableAsync(...)  SubmitAsync(&DynamoDBClient::DeleteTable, __VA_ARGS__)
#define DeleteTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DeleteTable, REQUEST)

#define DescribeBackupAsync(...)  SubmitAsync(&DynamoDBClient::DescribeBackup, __VA_ARGS__)
#define DescribeBackupCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeBackup, REQUEST)

#define DescribeContinuousBackupsAsync(...)  SubmitAsync(&DynamoDBClient::DescribeContinuousBackups, __VA_ARGS__)
#define DescribeContinuousBackupsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeContinuousBackups, REQUEST)

#define DescribeContributorInsightsAsync(...)  SubmitAsync(&DynamoDBClient::DescribeContributorInsights, __VA_ARGS__)
#define DescribeContributorInsightsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeContributorInsights, REQUEST)

#define DescribeEndpointsAsync(...)  SubmitAsync(&DynamoDBClient::DescribeEndpoints, __VA_ARGS__)
#define DescribeEndpointsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeEndpoints, REQUEST)

#define DescribeExportAsync(...)  SubmitAsync(&DynamoDBClient::DescribeExport, __VA_ARGS__)
#define DescribeExportCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeExport, REQUEST)

#define DescribeGlobalTableAsync(...)  SubmitAsync(&DynamoDBClient::DescribeGlobalTable, __VA_ARGS__)
#define DescribeGlobalTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeGlobalTable, REQUEST)

#define DescribeGlobalTableSettingsAsync(...)  SubmitAsync(&DynamoDBClient::DescribeGlobalTableSettings, __VA_ARGS__)
#define DescribeGlobalTableSettingsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeGlobalTableSettings, REQUEST)

#define DescribeImportAsync(...)  SubmitAsync(&DynamoDBClient::DescribeImport, __VA_ARGS__)
#define DescribeImportCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeImport, REQUEST)

#define DescribeKinesisStreamingDestinationAsync(...)  SubmitAsync(&DynamoDBClient::DescribeKinesisStreamingDestination, __VA_ARGS__)
#define DescribeKinesisStreamingDestinationCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeKinesisStreamingDestination, REQUEST)

#define DescribeLimitsAsync(...)  SubmitAsync(&DynamoDBClient::DescribeLimits, __VA_ARGS__)
#define DescribeLimitsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeLimits, REQUEST)

#define DescribeTableAsync(...)  SubmitAsync(&DynamoDBClient::DescribeTable, __VA_ARGS__)
#define DescribeTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeTable, REQUEST)

#define DescribeTableReplicaAutoScalingAsync(...)  SubmitAsync(&DynamoDBClient::DescribeTableReplicaAutoScaling, __VA_ARGS__)
#define DescribeTableReplicaAutoScalingCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeTableReplicaAutoScaling, REQUEST)

#define DescribeTimeToLiveAsync(...)  SubmitAsync(&DynamoDBClient::DescribeTimeToLive, __VA_ARGS__)
#define DescribeTimeToLiveCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DescribeTimeToLive, REQUEST)

#define DisableKinesisStreamingDestinationAsync(...)  SubmitAsync(&DynamoDBClient::DisableKinesisStreamingDestination, __VA_ARGS__)
#define DisableKinesisStreamingDestinationCallable(REQUEST)  SubmitCallable(&DynamoDBClient::DisableKinesisStreamingDestination, REQUEST)

#define EnableKinesisStreamingDestinationAsync(...)  SubmitAsync(&DynamoDBClient::EnableKinesisStreamingDestination, __VA_ARGS__)
#define EnableKinesisStreamingDestinationCallable(REQUEST)  SubmitCallable(&DynamoDBClient::EnableKinesisStreamingDestination, REQUEST)

#define ExecuteStatementAsync(...)  SubmitAsync(&DynamoDBClient::ExecuteStatement, __VA_ARGS__)
#define ExecuteStatementCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ExecuteStatement, REQUEST)

#define ExecuteTransactionAsync(...)  SubmitAsync(&DynamoDBClient::ExecuteTransaction, __VA_ARGS__)
#define ExecuteTransactionCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ExecuteTransaction, REQUEST)

#define ExportTableToPointInTimeAsync(...)  SubmitAsync(&DynamoDBClient::ExportTableToPointInTime, __VA_ARGS__)
#define ExportTableToPointInTimeCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ExportTableToPointInTime, REQUEST)

#define GetItemAsync(...)  SubmitAsync(&DynamoDBClient::GetItem, __VA_ARGS__)
#define GetItemCallable(REQUEST)  SubmitCallable(&DynamoDBClient::GetItem, REQUEST)

#define ImportTableAsync(...)  SubmitAsync(&DynamoDBClient::ImportTable, __VA_ARGS__)
#define ImportTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ImportTable, REQUEST)

#define ListBackupsAsync(...)  SubmitAsync(&DynamoDBClient::ListBackups, __VA_ARGS__)
#define ListBackupsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ListBackups, REQUEST)

#define ListContributorInsightsAsync(...)  SubmitAsync(&DynamoDBClient::ListContributorInsights, __VA_ARGS__)
#define ListContributorInsightsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ListContributorInsights, REQUEST)

#define ListExportsAsync(...)  SubmitAsync(&DynamoDBClient::ListExports, __VA_ARGS__)
#define ListExportsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ListExports, REQUEST)

#define ListGlobalTablesAsync(...)  SubmitAsync(&DynamoDBClient::ListGlobalTables, __VA_ARGS__)
#define ListGlobalTablesCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ListGlobalTables, REQUEST)

#define ListImportsAsync(...)  SubmitAsync(&DynamoDBClient::ListImports, __VA_ARGS__)
#define ListImportsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ListImports, REQUEST)

#define ListTablesAsync(...)  SubmitAsync(&DynamoDBClient::ListTables, __VA_ARGS__)
#define ListTablesCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ListTables, REQUEST)

#define ListTagsOfResourceAsync(...)  SubmitAsync(&DynamoDBClient::ListTagsOfResource, __VA_ARGS__)
#define ListTagsOfResourceCallable(REQUEST)  SubmitCallable(&DynamoDBClient::ListTagsOfResource, REQUEST)

#define PutItemAsync(...)  SubmitAsync(&DynamoDBClient::PutItem, __VA_ARGS__)
#define PutItemCallable(REQUEST)  SubmitCallable(&DynamoDBClient::PutItem, REQUEST)

#define QueryAsync(...)  SubmitAsync(&DynamoDBClient::Query, __VA_ARGS__)
#define QueryCallable(REQUEST)  SubmitCallable(&DynamoDBClient::Query, REQUEST)

#define RestoreTableFromBackupAsync(...)  SubmitAsync(&DynamoDBClient::RestoreTableFromBackup, __VA_ARGS__)
#define RestoreTableFromBackupCallable(REQUEST)  SubmitCallable(&DynamoDBClient::RestoreTableFromBackup, REQUEST)

#define RestoreTableToPointInTimeAsync(...)  SubmitAsync(&DynamoDBClient::RestoreTableToPointInTime, __VA_ARGS__)
#define RestoreTableToPointInTimeCallable(REQUEST)  SubmitCallable(&DynamoDBClient::RestoreTableToPointInTime, REQUEST)

#define ScanAsync(...)  SubmitAsync(&DynamoDBClient::Scan, __VA_ARGS__)
#define ScanCallable(REQUEST)  SubmitCallable(&DynamoDBClient::Scan, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DynamoDBClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DynamoDBClient::TagResource, REQUEST)

#define TransactGetItemsAsync(...)  SubmitAsync(&DynamoDBClient::TransactGetItems, __VA_ARGS__)
#define TransactGetItemsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::TransactGetItems, REQUEST)

#define TransactWriteItemsAsync(...)  SubmitAsync(&DynamoDBClient::TransactWriteItems, __VA_ARGS__)
#define TransactWriteItemsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::TransactWriteItems, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DynamoDBClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UntagResource, REQUEST)

#define UpdateContinuousBackupsAsync(...)  SubmitAsync(&DynamoDBClient::UpdateContinuousBackups, __VA_ARGS__)
#define UpdateContinuousBackupsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateContinuousBackups, REQUEST)

#define UpdateContributorInsightsAsync(...)  SubmitAsync(&DynamoDBClient::UpdateContributorInsights, __VA_ARGS__)
#define UpdateContributorInsightsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateContributorInsights, REQUEST)

#define UpdateGlobalTableAsync(...)  SubmitAsync(&DynamoDBClient::UpdateGlobalTable, __VA_ARGS__)
#define UpdateGlobalTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateGlobalTable, REQUEST)

#define UpdateGlobalTableSettingsAsync(...)  SubmitAsync(&DynamoDBClient::UpdateGlobalTableSettings, __VA_ARGS__)
#define UpdateGlobalTableSettingsCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateGlobalTableSettings, REQUEST)

#define UpdateItemAsync(...)  SubmitAsync(&DynamoDBClient::UpdateItem, __VA_ARGS__)
#define UpdateItemCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateItem, REQUEST)

#define UpdateTableAsync(...)  SubmitAsync(&DynamoDBClient::UpdateTable, __VA_ARGS__)
#define UpdateTableCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateTable, REQUEST)

#define UpdateTableReplicaAutoScalingAsync(...)  SubmitAsync(&DynamoDBClient::UpdateTableReplicaAutoScaling, __VA_ARGS__)
#define UpdateTableReplicaAutoScalingCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateTableReplicaAutoScaling, REQUEST)

#define UpdateTimeToLiveAsync(...)  SubmitAsync(&DynamoDBClient::UpdateTimeToLive, __VA_ARGS__)
#define UpdateTimeToLiveCallable(REQUEST)  SubmitCallable(&DynamoDBClient::UpdateTimeToLive, REQUEST)

