/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchCreatePartitionAsync(...)  SubmitAsync(&GlueClient::BatchCreatePartition, __VA_ARGS__)
#define BatchCreatePartitionCallable(REQUEST)  SubmitCallable(&GlueClient::BatchCreatePartition, REQUEST)

#define BatchDeleteConnectionAsync(...)  SubmitAsync(&GlueClient::BatchDeleteConnection, __VA_ARGS__)
#define BatchDeleteConnectionCallable(REQUEST)  SubmitCallable(&GlueClient::BatchDeleteConnection, REQUEST)

#define BatchDeletePartitionAsync(...)  SubmitAsync(&GlueClient::BatchDeletePartition, __VA_ARGS__)
#define BatchDeletePartitionCallable(REQUEST)  SubmitCallable(&GlueClient::BatchDeletePartition, REQUEST)

#define BatchDeleteTableAsync(...)  SubmitAsync(&GlueClient::BatchDeleteTable, __VA_ARGS__)
#define BatchDeleteTableCallable(REQUEST)  SubmitCallable(&GlueClient::BatchDeleteTable, REQUEST)

#define BatchDeleteTableVersionAsync(...)  SubmitAsync(&GlueClient::BatchDeleteTableVersion, __VA_ARGS__)
#define BatchDeleteTableVersionCallable(REQUEST)  SubmitCallable(&GlueClient::BatchDeleteTableVersion, REQUEST)

#define BatchGetBlueprintsAsync(...)  SubmitAsync(&GlueClient::BatchGetBlueprints, __VA_ARGS__)
#define BatchGetBlueprintsCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetBlueprints, REQUEST)

#define BatchGetCrawlersAsync(...)  SubmitAsync(&GlueClient::BatchGetCrawlers, __VA_ARGS__)
#define BatchGetCrawlersCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetCrawlers, REQUEST)

#define BatchGetCustomEntityTypesAsync(...)  SubmitAsync(&GlueClient::BatchGetCustomEntityTypes, __VA_ARGS__)
#define BatchGetCustomEntityTypesCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetCustomEntityTypes, REQUEST)

#define BatchGetDevEndpointsAsync(...)  SubmitAsync(&GlueClient::BatchGetDevEndpoints, __VA_ARGS__)
#define BatchGetDevEndpointsCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetDevEndpoints, REQUEST)

#define BatchGetJobsAsync(...)  SubmitAsync(&GlueClient::BatchGetJobs, __VA_ARGS__)
#define BatchGetJobsCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetJobs, REQUEST)

#define BatchGetPartitionAsync(...)  SubmitAsync(&GlueClient::BatchGetPartition, __VA_ARGS__)
#define BatchGetPartitionCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetPartition, REQUEST)

#define BatchGetTriggersAsync(...)  SubmitAsync(&GlueClient::BatchGetTriggers, __VA_ARGS__)
#define BatchGetTriggersCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetTriggers, REQUEST)

#define BatchGetWorkflowsAsync(...)  SubmitAsync(&GlueClient::BatchGetWorkflows, __VA_ARGS__)
#define BatchGetWorkflowsCallable(REQUEST)  SubmitCallable(&GlueClient::BatchGetWorkflows, REQUEST)

#define BatchStopJobRunAsync(...)  SubmitAsync(&GlueClient::BatchStopJobRun, __VA_ARGS__)
#define BatchStopJobRunCallable(REQUEST)  SubmitCallable(&GlueClient::BatchStopJobRun, REQUEST)

#define BatchUpdatePartitionAsync(...)  SubmitAsync(&GlueClient::BatchUpdatePartition, __VA_ARGS__)
#define BatchUpdatePartitionCallable(REQUEST)  SubmitCallable(&GlueClient::BatchUpdatePartition, REQUEST)

#define CancelMLTaskRunAsync(...)  SubmitAsync(&GlueClient::CancelMLTaskRun, __VA_ARGS__)
#define CancelMLTaskRunCallable(REQUEST)  SubmitCallable(&GlueClient::CancelMLTaskRun, REQUEST)

#define CancelStatementAsync(...)  SubmitAsync(&GlueClient::CancelStatement, __VA_ARGS__)
#define CancelStatementCallable(REQUEST)  SubmitCallable(&GlueClient::CancelStatement, REQUEST)

#define CheckSchemaVersionValidityAsync(...)  SubmitAsync(&GlueClient::CheckSchemaVersionValidity, __VA_ARGS__)
#define CheckSchemaVersionValidityCallable(REQUEST)  SubmitCallable(&GlueClient::CheckSchemaVersionValidity, REQUEST)

#define CreateBlueprintAsync(...)  SubmitAsync(&GlueClient::CreateBlueprint, __VA_ARGS__)
#define CreateBlueprintCallable(REQUEST)  SubmitCallable(&GlueClient::CreateBlueprint, REQUEST)

#define CreateClassifierAsync(...)  SubmitAsync(&GlueClient::CreateClassifier, __VA_ARGS__)
#define CreateClassifierCallable(REQUEST)  SubmitCallable(&GlueClient::CreateClassifier, REQUEST)

#define CreateConnectionAsync(...)  SubmitAsync(&GlueClient::CreateConnection, __VA_ARGS__)
#define CreateConnectionCallable(REQUEST)  SubmitCallable(&GlueClient::CreateConnection, REQUEST)

#define CreateCrawlerAsync(...)  SubmitAsync(&GlueClient::CreateCrawler, __VA_ARGS__)
#define CreateCrawlerCallable(REQUEST)  SubmitCallable(&GlueClient::CreateCrawler, REQUEST)

#define CreateCustomEntityTypeAsync(...)  SubmitAsync(&GlueClient::CreateCustomEntityType, __VA_ARGS__)
#define CreateCustomEntityTypeCallable(REQUEST)  SubmitCallable(&GlueClient::CreateCustomEntityType, REQUEST)

#define CreateDatabaseAsync(...)  SubmitAsync(&GlueClient::CreateDatabase, __VA_ARGS__)
#define CreateDatabaseCallable(REQUEST)  SubmitCallable(&GlueClient::CreateDatabase, REQUEST)

#define CreateDevEndpointAsync(...)  SubmitAsync(&GlueClient::CreateDevEndpoint, __VA_ARGS__)
#define CreateDevEndpointCallable(REQUEST)  SubmitCallable(&GlueClient::CreateDevEndpoint, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&GlueClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&GlueClient::CreateJob, REQUEST)

#define CreateMLTransformAsync(...)  SubmitAsync(&GlueClient::CreateMLTransform, __VA_ARGS__)
#define CreateMLTransformCallable(REQUEST)  SubmitCallable(&GlueClient::CreateMLTransform, REQUEST)

#define CreatePartitionAsync(...)  SubmitAsync(&GlueClient::CreatePartition, __VA_ARGS__)
#define CreatePartitionCallable(REQUEST)  SubmitCallable(&GlueClient::CreatePartition, REQUEST)

#define CreatePartitionIndexAsync(...)  SubmitAsync(&GlueClient::CreatePartitionIndex, __VA_ARGS__)
#define CreatePartitionIndexCallable(REQUEST)  SubmitCallable(&GlueClient::CreatePartitionIndex, REQUEST)

#define CreateRegistryAsync(...)  SubmitAsync(&GlueClient::CreateRegistry, __VA_ARGS__)
#define CreateRegistryCallable(REQUEST)  SubmitCallable(&GlueClient::CreateRegistry, REQUEST)

#define CreateSchemaAsync(...)  SubmitAsync(&GlueClient::CreateSchema, __VA_ARGS__)
#define CreateSchemaCallable(REQUEST)  SubmitCallable(&GlueClient::CreateSchema, REQUEST)

#define CreateScriptAsync(...)  SubmitAsync(&GlueClient::CreateScript, __VA_ARGS__)
#define CreateScriptCallable(REQUEST)  SubmitCallable(&GlueClient::CreateScript, REQUEST)

#define CreateSecurityConfigurationAsync(...)  SubmitAsync(&GlueClient::CreateSecurityConfiguration, __VA_ARGS__)
#define CreateSecurityConfigurationCallable(REQUEST)  SubmitCallable(&GlueClient::CreateSecurityConfiguration, REQUEST)

#define CreateSessionAsync(...)  SubmitAsync(&GlueClient::CreateSession, __VA_ARGS__)
#define CreateSessionCallable(REQUEST)  SubmitCallable(&GlueClient::CreateSession, REQUEST)

#define CreateTableAsync(...)  SubmitAsync(&GlueClient::CreateTable, __VA_ARGS__)
#define CreateTableCallable(REQUEST)  SubmitCallable(&GlueClient::CreateTable, REQUEST)

#define CreateTriggerAsync(...)  SubmitAsync(&GlueClient::CreateTrigger, __VA_ARGS__)
#define CreateTriggerCallable(REQUEST)  SubmitCallable(&GlueClient::CreateTrigger, REQUEST)

#define CreateUserDefinedFunctionAsync(...)  SubmitAsync(&GlueClient::CreateUserDefinedFunction, __VA_ARGS__)
#define CreateUserDefinedFunctionCallable(REQUEST)  SubmitCallable(&GlueClient::CreateUserDefinedFunction, REQUEST)

#define CreateWorkflowAsync(...)  SubmitAsync(&GlueClient::CreateWorkflow, __VA_ARGS__)
#define CreateWorkflowCallable(REQUEST)  SubmitCallable(&GlueClient::CreateWorkflow, REQUEST)

#define DeleteBlueprintAsync(...)  SubmitAsync(&GlueClient::DeleteBlueprint, __VA_ARGS__)
#define DeleteBlueprintCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteBlueprint, REQUEST)

#define DeleteClassifierAsync(...)  SubmitAsync(&GlueClient::DeleteClassifier, __VA_ARGS__)
#define DeleteClassifierCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteClassifier, REQUEST)

#define DeleteColumnStatisticsForPartitionAsync(...)  SubmitAsync(&GlueClient::DeleteColumnStatisticsForPartition, __VA_ARGS__)
#define DeleteColumnStatisticsForPartitionCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteColumnStatisticsForPartition, REQUEST)

#define DeleteColumnStatisticsForTableAsync(...)  SubmitAsync(&GlueClient::DeleteColumnStatisticsForTable, __VA_ARGS__)
#define DeleteColumnStatisticsForTableCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteColumnStatisticsForTable, REQUEST)

#define DeleteConnectionAsync(...)  SubmitAsync(&GlueClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteConnection, REQUEST)

#define DeleteCrawlerAsync(...)  SubmitAsync(&GlueClient::DeleteCrawler, __VA_ARGS__)
#define DeleteCrawlerCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteCrawler, REQUEST)

#define DeleteCustomEntityTypeAsync(...)  SubmitAsync(&GlueClient::DeleteCustomEntityType, __VA_ARGS__)
#define DeleteCustomEntityTypeCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteCustomEntityType, REQUEST)

#define DeleteDatabaseAsync(...)  SubmitAsync(&GlueClient::DeleteDatabase, __VA_ARGS__)
#define DeleteDatabaseCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteDatabase, REQUEST)

#define DeleteDevEndpointAsync(...)  SubmitAsync(&GlueClient::DeleteDevEndpoint, __VA_ARGS__)
#define DeleteDevEndpointCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteDevEndpoint, REQUEST)

#define DeleteJobAsync(...)  SubmitAsync(&GlueClient::DeleteJob, __VA_ARGS__)
#define DeleteJobCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteJob, REQUEST)

#define DeleteMLTransformAsync(...)  SubmitAsync(&GlueClient::DeleteMLTransform, __VA_ARGS__)
#define DeleteMLTransformCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteMLTransform, REQUEST)

#define DeletePartitionAsync(...)  SubmitAsync(&GlueClient::DeletePartition, __VA_ARGS__)
#define DeletePartitionCallable(REQUEST)  SubmitCallable(&GlueClient::DeletePartition, REQUEST)

#define DeletePartitionIndexAsync(...)  SubmitAsync(&GlueClient::DeletePartitionIndex, __VA_ARGS__)
#define DeletePartitionIndexCallable(REQUEST)  SubmitCallable(&GlueClient::DeletePartitionIndex, REQUEST)

#define DeleteRegistryAsync(...)  SubmitAsync(&GlueClient::DeleteRegistry, __VA_ARGS__)
#define DeleteRegistryCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteRegistry, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&GlueClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteResourcePolicy, REQUEST)

#define DeleteSchemaAsync(...)  SubmitAsync(&GlueClient::DeleteSchema, __VA_ARGS__)
#define DeleteSchemaCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteSchema, REQUEST)

#define DeleteSchemaVersionsAsync(...)  SubmitAsync(&GlueClient::DeleteSchemaVersions, __VA_ARGS__)
#define DeleteSchemaVersionsCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteSchemaVersions, REQUEST)

#define DeleteSecurityConfigurationAsync(...)  SubmitAsync(&GlueClient::DeleteSecurityConfiguration, __VA_ARGS__)
#define DeleteSecurityConfigurationCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteSecurityConfiguration, REQUEST)

#define DeleteSessionAsync(...)  SubmitAsync(&GlueClient::DeleteSession, __VA_ARGS__)
#define DeleteSessionCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteSession, REQUEST)

#define DeleteTableAsync(...)  SubmitAsync(&GlueClient::DeleteTable, __VA_ARGS__)
#define DeleteTableCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteTable, REQUEST)

#define DeleteTableVersionAsync(...)  SubmitAsync(&GlueClient::DeleteTableVersion, __VA_ARGS__)
#define DeleteTableVersionCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteTableVersion, REQUEST)

#define DeleteTriggerAsync(...)  SubmitAsync(&GlueClient::DeleteTrigger, __VA_ARGS__)
#define DeleteTriggerCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteTrigger, REQUEST)

#define DeleteUserDefinedFunctionAsync(...)  SubmitAsync(&GlueClient::DeleteUserDefinedFunction, __VA_ARGS__)
#define DeleteUserDefinedFunctionCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteUserDefinedFunction, REQUEST)

#define DeleteWorkflowAsync(...)  SubmitAsync(&GlueClient::DeleteWorkflow, __VA_ARGS__)
#define DeleteWorkflowCallable(REQUEST)  SubmitCallable(&GlueClient::DeleteWorkflow, REQUEST)

#define GetBlueprintAsync(...)  SubmitAsync(&GlueClient::GetBlueprint, __VA_ARGS__)
#define GetBlueprintCallable(REQUEST)  SubmitCallable(&GlueClient::GetBlueprint, REQUEST)

#define GetBlueprintRunAsync(...)  SubmitAsync(&GlueClient::GetBlueprintRun, __VA_ARGS__)
#define GetBlueprintRunCallable(REQUEST)  SubmitCallable(&GlueClient::GetBlueprintRun, REQUEST)

#define GetBlueprintRunsAsync(...)  SubmitAsync(&GlueClient::GetBlueprintRuns, __VA_ARGS__)
#define GetBlueprintRunsCallable(REQUEST)  SubmitCallable(&GlueClient::GetBlueprintRuns, REQUEST)

#define GetCatalogImportStatusAsync(...)  SubmitAsync(&GlueClient::GetCatalogImportStatus, __VA_ARGS__)
#define GetCatalogImportStatusCallable(REQUEST)  SubmitCallable(&GlueClient::GetCatalogImportStatus, REQUEST)

#define GetClassifierAsync(...)  SubmitAsync(&GlueClient::GetClassifier, __VA_ARGS__)
#define GetClassifierCallable(REQUEST)  SubmitCallable(&GlueClient::GetClassifier, REQUEST)

#define GetClassifiersAsync(...)  SubmitAsync(&GlueClient::GetClassifiers, __VA_ARGS__)
#define GetClassifiersCallable(REQUEST)  SubmitCallable(&GlueClient::GetClassifiers, REQUEST)

#define GetColumnStatisticsForPartitionAsync(...)  SubmitAsync(&GlueClient::GetColumnStatisticsForPartition, __VA_ARGS__)
#define GetColumnStatisticsForPartitionCallable(REQUEST)  SubmitCallable(&GlueClient::GetColumnStatisticsForPartition, REQUEST)

#define GetColumnStatisticsForTableAsync(...)  SubmitAsync(&GlueClient::GetColumnStatisticsForTable, __VA_ARGS__)
#define GetColumnStatisticsForTableCallable(REQUEST)  SubmitCallable(&GlueClient::GetColumnStatisticsForTable, REQUEST)

#define GetConnectionAsync(...)  SubmitAsync(&GlueClient::GetConnection, __VA_ARGS__)
#define GetConnectionCallable(REQUEST)  SubmitCallable(&GlueClient::GetConnection, REQUEST)

#define GetConnectionsAsync(...)  SubmitAsync(&GlueClient::GetConnections, __VA_ARGS__)
#define GetConnectionsCallable(REQUEST)  SubmitCallable(&GlueClient::GetConnections, REQUEST)

#define GetCrawlerAsync(...)  SubmitAsync(&GlueClient::GetCrawler, __VA_ARGS__)
#define GetCrawlerCallable(REQUEST)  SubmitCallable(&GlueClient::GetCrawler, REQUEST)

#define GetCrawlerMetricsAsync(...)  SubmitAsync(&GlueClient::GetCrawlerMetrics, __VA_ARGS__)
#define GetCrawlerMetricsCallable(REQUEST)  SubmitCallable(&GlueClient::GetCrawlerMetrics, REQUEST)

#define GetCrawlersAsync(...)  SubmitAsync(&GlueClient::GetCrawlers, __VA_ARGS__)
#define GetCrawlersCallable(REQUEST)  SubmitCallable(&GlueClient::GetCrawlers, REQUEST)

#define GetCustomEntityTypeAsync(...)  SubmitAsync(&GlueClient::GetCustomEntityType, __VA_ARGS__)
#define GetCustomEntityTypeCallable(REQUEST)  SubmitCallable(&GlueClient::GetCustomEntityType, REQUEST)

#define GetDataCatalogEncryptionSettingsAsync(...)  SubmitAsync(&GlueClient::GetDataCatalogEncryptionSettings, __VA_ARGS__)
#define GetDataCatalogEncryptionSettingsCallable(REQUEST)  SubmitCallable(&GlueClient::GetDataCatalogEncryptionSettings, REQUEST)

#define GetDatabaseAsync(...)  SubmitAsync(&GlueClient::GetDatabase, __VA_ARGS__)
#define GetDatabaseCallable(REQUEST)  SubmitCallable(&GlueClient::GetDatabase, REQUEST)

#define GetDatabasesAsync(...)  SubmitAsync(&GlueClient::GetDatabases, __VA_ARGS__)
#define GetDatabasesCallable(REQUEST)  SubmitCallable(&GlueClient::GetDatabases, REQUEST)

#define GetDataflowGraphAsync(...)  SubmitAsync(&GlueClient::GetDataflowGraph, __VA_ARGS__)
#define GetDataflowGraphCallable(REQUEST)  SubmitCallable(&GlueClient::GetDataflowGraph, REQUEST)

#define GetDevEndpointAsync(...)  SubmitAsync(&GlueClient::GetDevEndpoint, __VA_ARGS__)
#define GetDevEndpointCallable(REQUEST)  SubmitCallable(&GlueClient::GetDevEndpoint, REQUEST)

#define GetDevEndpointsAsync(...)  SubmitAsync(&GlueClient::GetDevEndpoints, __VA_ARGS__)
#define GetDevEndpointsCallable(REQUEST)  SubmitCallable(&GlueClient::GetDevEndpoints, REQUEST)

#define GetJobAsync(...)  SubmitAsync(&GlueClient::GetJob, __VA_ARGS__)
#define GetJobCallable(REQUEST)  SubmitCallable(&GlueClient::GetJob, REQUEST)

#define GetJobBookmarkAsync(...)  SubmitAsync(&GlueClient::GetJobBookmark, __VA_ARGS__)
#define GetJobBookmarkCallable(REQUEST)  SubmitCallable(&GlueClient::GetJobBookmark, REQUEST)

#define GetJobRunAsync(...)  SubmitAsync(&GlueClient::GetJobRun, __VA_ARGS__)
#define GetJobRunCallable(REQUEST)  SubmitCallable(&GlueClient::GetJobRun, REQUEST)

#define GetJobRunsAsync(...)  SubmitAsync(&GlueClient::GetJobRuns, __VA_ARGS__)
#define GetJobRunsCallable(REQUEST)  SubmitCallable(&GlueClient::GetJobRuns, REQUEST)

#define GetJobsAsync(...)  SubmitAsync(&GlueClient::GetJobs, __VA_ARGS__)
#define GetJobsCallable(REQUEST)  SubmitCallable(&GlueClient::GetJobs, REQUEST)

#define GetMLTaskRunAsync(...)  SubmitAsync(&GlueClient::GetMLTaskRun, __VA_ARGS__)
#define GetMLTaskRunCallable(REQUEST)  SubmitCallable(&GlueClient::GetMLTaskRun, REQUEST)

#define GetMLTaskRunsAsync(...)  SubmitAsync(&GlueClient::GetMLTaskRuns, __VA_ARGS__)
#define GetMLTaskRunsCallable(REQUEST)  SubmitCallable(&GlueClient::GetMLTaskRuns, REQUEST)

#define GetMLTransformAsync(...)  SubmitAsync(&GlueClient::GetMLTransform, __VA_ARGS__)
#define GetMLTransformCallable(REQUEST)  SubmitCallable(&GlueClient::GetMLTransform, REQUEST)

#define GetMLTransformsAsync(...)  SubmitAsync(&GlueClient::GetMLTransforms, __VA_ARGS__)
#define GetMLTransformsCallable(REQUEST)  SubmitCallable(&GlueClient::GetMLTransforms, REQUEST)

#define GetMappingAsync(...)  SubmitAsync(&GlueClient::GetMapping, __VA_ARGS__)
#define GetMappingCallable(REQUEST)  SubmitCallable(&GlueClient::GetMapping, REQUEST)

#define GetPartitionAsync(...)  SubmitAsync(&GlueClient::GetPartition, __VA_ARGS__)
#define GetPartitionCallable(REQUEST)  SubmitCallable(&GlueClient::GetPartition, REQUEST)

#define GetPartitionIndexesAsync(...)  SubmitAsync(&GlueClient::GetPartitionIndexes, __VA_ARGS__)
#define GetPartitionIndexesCallable(REQUEST)  SubmitCallable(&GlueClient::GetPartitionIndexes, REQUEST)

#define GetPartitionsAsync(...)  SubmitAsync(&GlueClient::GetPartitions, __VA_ARGS__)
#define GetPartitionsCallable(REQUEST)  SubmitCallable(&GlueClient::GetPartitions, REQUEST)

#define GetPlanAsync(...)  SubmitAsync(&GlueClient::GetPlan, __VA_ARGS__)
#define GetPlanCallable(REQUEST)  SubmitCallable(&GlueClient::GetPlan, REQUEST)

#define GetRegistryAsync(...)  SubmitAsync(&GlueClient::GetRegistry, __VA_ARGS__)
#define GetRegistryCallable(REQUEST)  SubmitCallable(&GlueClient::GetRegistry, REQUEST)

#define GetResourcePoliciesAsync(...)  SubmitAsync(&GlueClient::GetResourcePolicies, __VA_ARGS__)
#define GetResourcePoliciesCallable(REQUEST)  SubmitCallable(&GlueClient::GetResourcePolicies, REQUEST)

#define GetResourcePolicyAsync(...)  SubmitAsync(&GlueClient::GetResourcePolicy, __VA_ARGS__)
#define GetResourcePolicyCallable(REQUEST)  SubmitCallable(&GlueClient::GetResourcePolicy, REQUEST)

#define GetSchemaAsync(...)  SubmitAsync(&GlueClient::GetSchema, __VA_ARGS__)
#define GetSchemaCallable(REQUEST)  SubmitCallable(&GlueClient::GetSchema, REQUEST)

#define GetSchemaByDefinitionAsync(...)  SubmitAsync(&GlueClient::GetSchemaByDefinition, __VA_ARGS__)
#define GetSchemaByDefinitionCallable(REQUEST)  SubmitCallable(&GlueClient::GetSchemaByDefinition, REQUEST)

#define GetSchemaVersionAsync(...)  SubmitAsync(&GlueClient::GetSchemaVersion, __VA_ARGS__)
#define GetSchemaVersionCallable(REQUEST)  SubmitCallable(&GlueClient::GetSchemaVersion, REQUEST)

#define GetSchemaVersionsDiffAsync(...)  SubmitAsync(&GlueClient::GetSchemaVersionsDiff, __VA_ARGS__)
#define GetSchemaVersionsDiffCallable(REQUEST)  SubmitCallable(&GlueClient::GetSchemaVersionsDiff, REQUEST)

#define GetSecurityConfigurationAsync(...)  SubmitAsync(&GlueClient::GetSecurityConfiguration, __VA_ARGS__)
#define GetSecurityConfigurationCallable(REQUEST)  SubmitCallable(&GlueClient::GetSecurityConfiguration, REQUEST)

#define GetSecurityConfigurationsAsync(...)  SubmitAsync(&GlueClient::GetSecurityConfigurations, __VA_ARGS__)
#define GetSecurityConfigurationsCallable(REQUEST)  SubmitCallable(&GlueClient::GetSecurityConfigurations, REQUEST)

#define GetSessionAsync(...)  SubmitAsync(&GlueClient::GetSession, __VA_ARGS__)
#define GetSessionCallable(REQUEST)  SubmitCallable(&GlueClient::GetSession, REQUEST)

#define GetStatementAsync(...)  SubmitAsync(&GlueClient::GetStatement, __VA_ARGS__)
#define GetStatementCallable(REQUEST)  SubmitCallable(&GlueClient::GetStatement, REQUEST)

#define GetTableAsync(...)  SubmitAsync(&GlueClient::GetTable, __VA_ARGS__)
#define GetTableCallable(REQUEST)  SubmitCallable(&GlueClient::GetTable, REQUEST)

#define GetTableVersionAsync(...)  SubmitAsync(&GlueClient::GetTableVersion, __VA_ARGS__)
#define GetTableVersionCallable(REQUEST)  SubmitCallable(&GlueClient::GetTableVersion, REQUEST)

#define GetTableVersionsAsync(...)  SubmitAsync(&GlueClient::GetTableVersions, __VA_ARGS__)
#define GetTableVersionsCallable(REQUEST)  SubmitCallable(&GlueClient::GetTableVersions, REQUEST)

#define GetTablesAsync(...)  SubmitAsync(&GlueClient::GetTables, __VA_ARGS__)
#define GetTablesCallable(REQUEST)  SubmitCallable(&GlueClient::GetTables, REQUEST)

#define GetTagsAsync(...)  SubmitAsync(&GlueClient::GetTags, __VA_ARGS__)
#define GetTagsCallable(REQUEST)  SubmitCallable(&GlueClient::GetTags, REQUEST)

#define GetTriggerAsync(...)  SubmitAsync(&GlueClient::GetTrigger, __VA_ARGS__)
#define GetTriggerCallable(REQUEST)  SubmitCallable(&GlueClient::GetTrigger, REQUEST)

#define GetTriggersAsync(...)  SubmitAsync(&GlueClient::GetTriggers, __VA_ARGS__)
#define GetTriggersCallable(REQUEST)  SubmitCallable(&GlueClient::GetTriggers, REQUEST)

#define GetUnfilteredPartitionMetadataAsync(...)  SubmitAsync(&GlueClient::GetUnfilteredPartitionMetadata, __VA_ARGS__)
#define GetUnfilteredPartitionMetadataCallable(REQUEST)  SubmitCallable(&GlueClient::GetUnfilteredPartitionMetadata, REQUEST)

#define GetUnfilteredPartitionsMetadataAsync(...)  SubmitAsync(&GlueClient::GetUnfilteredPartitionsMetadata, __VA_ARGS__)
#define GetUnfilteredPartitionsMetadataCallable(REQUEST)  SubmitCallable(&GlueClient::GetUnfilteredPartitionsMetadata, REQUEST)

#define GetUnfilteredTableMetadataAsync(...)  SubmitAsync(&GlueClient::GetUnfilteredTableMetadata, __VA_ARGS__)
#define GetUnfilteredTableMetadataCallable(REQUEST)  SubmitCallable(&GlueClient::GetUnfilteredTableMetadata, REQUEST)

#define GetUserDefinedFunctionAsync(...)  SubmitAsync(&GlueClient::GetUserDefinedFunction, __VA_ARGS__)
#define GetUserDefinedFunctionCallable(REQUEST)  SubmitCallable(&GlueClient::GetUserDefinedFunction, REQUEST)

#define GetUserDefinedFunctionsAsync(...)  SubmitAsync(&GlueClient::GetUserDefinedFunctions, __VA_ARGS__)
#define GetUserDefinedFunctionsCallable(REQUEST)  SubmitCallable(&GlueClient::GetUserDefinedFunctions, REQUEST)

#define GetWorkflowAsync(...)  SubmitAsync(&GlueClient::GetWorkflow, __VA_ARGS__)
#define GetWorkflowCallable(REQUEST)  SubmitCallable(&GlueClient::GetWorkflow, REQUEST)

#define GetWorkflowRunAsync(...)  SubmitAsync(&GlueClient::GetWorkflowRun, __VA_ARGS__)
#define GetWorkflowRunCallable(REQUEST)  SubmitCallable(&GlueClient::GetWorkflowRun, REQUEST)

#define GetWorkflowRunPropertiesAsync(...)  SubmitAsync(&GlueClient::GetWorkflowRunProperties, __VA_ARGS__)
#define GetWorkflowRunPropertiesCallable(REQUEST)  SubmitCallable(&GlueClient::GetWorkflowRunProperties, REQUEST)

#define GetWorkflowRunsAsync(...)  SubmitAsync(&GlueClient::GetWorkflowRuns, __VA_ARGS__)
#define GetWorkflowRunsCallable(REQUEST)  SubmitCallable(&GlueClient::GetWorkflowRuns, REQUEST)

#define ImportCatalogToGlueAsync(...)  SubmitAsync(&GlueClient::ImportCatalogToGlue, __VA_ARGS__)
#define ImportCatalogToGlueCallable(REQUEST)  SubmitCallable(&GlueClient::ImportCatalogToGlue, REQUEST)

#define ListBlueprintsAsync(...)  SubmitAsync(&GlueClient::ListBlueprints, __VA_ARGS__)
#define ListBlueprintsCallable(REQUEST)  SubmitCallable(&GlueClient::ListBlueprints, REQUEST)

#define ListCrawlersAsync(...)  SubmitAsync(&GlueClient::ListCrawlers, __VA_ARGS__)
#define ListCrawlersCallable(REQUEST)  SubmitCallable(&GlueClient::ListCrawlers, REQUEST)

#define ListCrawlsAsync(...)  SubmitAsync(&GlueClient::ListCrawls, __VA_ARGS__)
#define ListCrawlsCallable(REQUEST)  SubmitCallable(&GlueClient::ListCrawls, REQUEST)

#define ListCustomEntityTypesAsync(...)  SubmitAsync(&GlueClient::ListCustomEntityTypes, __VA_ARGS__)
#define ListCustomEntityTypesCallable(REQUEST)  SubmitCallable(&GlueClient::ListCustomEntityTypes, REQUEST)

#define ListDevEndpointsAsync(...)  SubmitAsync(&GlueClient::ListDevEndpoints, __VA_ARGS__)
#define ListDevEndpointsCallable(REQUEST)  SubmitCallable(&GlueClient::ListDevEndpoints, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&GlueClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&GlueClient::ListJobs, REQUEST)

#define ListMLTransformsAsync(...)  SubmitAsync(&GlueClient::ListMLTransforms, __VA_ARGS__)
#define ListMLTransformsCallable(REQUEST)  SubmitCallable(&GlueClient::ListMLTransforms, REQUEST)

#define ListRegistriesAsync(...)  SubmitAsync(&GlueClient::ListRegistries, __VA_ARGS__)
#define ListRegistriesCallable(REQUEST)  SubmitCallable(&GlueClient::ListRegistries, REQUEST)

#define ListSchemaVersionsAsync(...)  SubmitAsync(&GlueClient::ListSchemaVersions, __VA_ARGS__)
#define ListSchemaVersionsCallable(REQUEST)  SubmitCallable(&GlueClient::ListSchemaVersions, REQUEST)

#define ListSchemasAsync(...)  SubmitAsync(&GlueClient::ListSchemas, __VA_ARGS__)
#define ListSchemasCallable(REQUEST)  SubmitCallable(&GlueClient::ListSchemas, REQUEST)

#define ListSessionsAsync(...)  SubmitAsync(&GlueClient::ListSessions, __VA_ARGS__)
#define ListSessionsCallable(REQUEST)  SubmitCallable(&GlueClient::ListSessions, REQUEST)

#define ListStatementsAsync(...)  SubmitAsync(&GlueClient::ListStatements, __VA_ARGS__)
#define ListStatementsCallable(REQUEST)  SubmitCallable(&GlueClient::ListStatements, REQUEST)

#define ListTriggersAsync(...)  SubmitAsync(&GlueClient::ListTriggers, __VA_ARGS__)
#define ListTriggersCallable(REQUEST)  SubmitCallable(&GlueClient::ListTriggers, REQUEST)

#define ListWorkflowsAsync(...)  SubmitAsync(&GlueClient::ListWorkflows, __VA_ARGS__)
#define ListWorkflowsCallable(REQUEST)  SubmitCallable(&GlueClient::ListWorkflows, REQUEST)

#define PutDataCatalogEncryptionSettingsAsync(...)  SubmitAsync(&GlueClient::PutDataCatalogEncryptionSettings, __VA_ARGS__)
#define PutDataCatalogEncryptionSettingsCallable(REQUEST)  SubmitCallable(&GlueClient::PutDataCatalogEncryptionSettings, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&GlueClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&GlueClient::PutResourcePolicy, REQUEST)

#define PutSchemaVersionMetadataAsync(...)  SubmitAsync(&GlueClient::PutSchemaVersionMetadata, __VA_ARGS__)
#define PutSchemaVersionMetadataCallable(REQUEST)  SubmitCallable(&GlueClient::PutSchemaVersionMetadata, REQUEST)

#define PutWorkflowRunPropertiesAsync(...)  SubmitAsync(&GlueClient::PutWorkflowRunProperties, __VA_ARGS__)
#define PutWorkflowRunPropertiesCallable(REQUEST)  SubmitCallable(&GlueClient::PutWorkflowRunProperties, REQUEST)

#define QuerySchemaVersionMetadataAsync(...)  SubmitAsync(&GlueClient::QuerySchemaVersionMetadata, __VA_ARGS__)
#define QuerySchemaVersionMetadataCallable(REQUEST)  SubmitCallable(&GlueClient::QuerySchemaVersionMetadata, REQUEST)

#define RegisterSchemaVersionAsync(...)  SubmitAsync(&GlueClient::RegisterSchemaVersion, __VA_ARGS__)
#define RegisterSchemaVersionCallable(REQUEST)  SubmitCallable(&GlueClient::RegisterSchemaVersion, REQUEST)

#define RemoveSchemaVersionMetadataAsync(...)  SubmitAsync(&GlueClient::RemoveSchemaVersionMetadata, __VA_ARGS__)
#define RemoveSchemaVersionMetadataCallable(REQUEST)  SubmitCallable(&GlueClient::RemoveSchemaVersionMetadata, REQUEST)

#define ResetJobBookmarkAsync(...)  SubmitAsync(&GlueClient::ResetJobBookmark, __VA_ARGS__)
#define ResetJobBookmarkCallable(REQUEST)  SubmitCallable(&GlueClient::ResetJobBookmark, REQUEST)

#define ResumeWorkflowRunAsync(...)  SubmitAsync(&GlueClient::ResumeWorkflowRun, __VA_ARGS__)
#define ResumeWorkflowRunCallable(REQUEST)  SubmitCallable(&GlueClient::ResumeWorkflowRun, REQUEST)

#define RunStatementAsync(...)  SubmitAsync(&GlueClient::RunStatement, __VA_ARGS__)
#define RunStatementCallable(REQUEST)  SubmitCallable(&GlueClient::RunStatement, REQUEST)

#define SearchTablesAsync(...)  SubmitAsync(&GlueClient::SearchTables, __VA_ARGS__)
#define SearchTablesCallable(REQUEST)  SubmitCallable(&GlueClient::SearchTables, REQUEST)

#define StartBlueprintRunAsync(...)  SubmitAsync(&GlueClient::StartBlueprintRun, __VA_ARGS__)
#define StartBlueprintRunCallable(REQUEST)  SubmitCallable(&GlueClient::StartBlueprintRun, REQUEST)

#define StartCrawlerAsync(...)  SubmitAsync(&GlueClient::StartCrawler, __VA_ARGS__)
#define StartCrawlerCallable(REQUEST)  SubmitCallable(&GlueClient::StartCrawler, REQUEST)

#define StartCrawlerScheduleAsync(...)  SubmitAsync(&GlueClient::StartCrawlerSchedule, __VA_ARGS__)
#define StartCrawlerScheduleCallable(REQUEST)  SubmitCallable(&GlueClient::StartCrawlerSchedule, REQUEST)

#define StartExportLabelsTaskRunAsync(...)  SubmitAsync(&GlueClient::StartExportLabelsTaskRun, __VA_ARGS__)
#define StartExportLabelsTaskRunCallable(REQUEST)  SubmitCallable(&GlueClient::StartExportLabelsTaskRun, REQUEST)

#define StartImportLabelsTaskRunAsync(...)  SubmitAsync(&GlueClient::StartImportLabelsTaskRun, __VA_ARGS__)
#define StartImportLabelsTaskRunCallable(REQUEST)  SubmitCallable(&GlueClient::StartImportLabelsTaskRun, REQUEST)

#define StartJobRunAsync(...)  SubmitAsync(&GlueClient::StartJobRun, __VA_ARGS__)
#define StartJobRunCallable(REQUEST)  SubmitCallable(&GlueClient::StartJobRun, REQUEST)

#define StartMLEvaluationTaskRunAsync(...)  SubmitAsync(&GlueClient::StartMLEvaluationTaskRun, __VA_ARGS__)
#define StartMLEvaluationTaskRunCallable(REQUEST)  SubmitCallable(&GlueClient::StartMLEvaluationTaskRun, REQUEST)

#define StartMLLabelingSetGenerationTaskRunAsync(...)  SubmitAsync(&GlueClient::StartMLLabelingSetGenerationTaskRun, __VA_ARGS__)
#define StartMLLabelingSetGenerationTaskRunCallable(REQUEST)  SubmitCallable(&GlueClient::StartMLLabelingSetGenerationTaskRun, REQUEST)

#define StartTriggerAsync(...)  SubmitAsync(&GlueClient::StartTrigger, __VA_ARGS__)
#define StartTriggerCallable(REQUEST)  SubmitCallable(&GlueClient::StartTrigger, REQUEST)

#define StartWorkflowRunAsync(...)  SubmitAsync(&GlueClient::StartWorkflowRun, __VA_ARGS__)
#define StartWorkflowRunCallable(REQUEST)  SubmitCallable(&GlueClient::StartWorkflowRun, REQUEST)

#define StopCrawlerAsync(...)  SubmitAsync(&GlueClient::StopCrawler, __VA_ARGS__)
#define StopCrawlerCallable(REQUEST)  SubmitCallable(&GlueClient::StopCrawler, REQUEST)

#define StopCrawlerScheduleAsync(...)  SubmitAsync(&GlueClient::StopCrawlerSchedule, __VA_ARGS__)
#define StopCrawlerScheduleCallable(REQUEST)  SubmitCallable(&GlueClient::StopCrawlerSchedule, REQUEST)

#define StopSessionAsync(...)  SubmitAsync(&GlueClient::StopSession, __VA_ARGS__)
#define StopSessionCallable(REQUEST)  SubmitCallable(&GlueClient::StopSession, REQUEST)

#define StopTriggerAsync(...)  SubmitAsync(&GlueClient::StopTrigger, __VA_ARGS__)
#define StopTriggerCallable(REQUEST)  SubmitCallable(&GlueClient::StopTrigger, REQUEST)

#define StopWorkflowRunAsync(...)  SubmitAsync(&GlueClient::StopWorkflowRun, __VA_ARGS__)
#define StopWorkflowRunCallable(REQUEST)  SubmitCallable(&GlueClient::StopWorkflowRun, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GlueClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GlueClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GlueClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GlueClient::UntagResource, REQUEST)

#define UpdateBlueprintAsync(...)  SubmitAsync(&GlueClient::UpdateBlueprint, __VA_ARGS__)
#define UpdateBlueprintCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateBlueprint, REQUEST)

#define UpdateClassifierAsync(...)  SubmitAsync(&GlueClient::UpdateClassifier, __VA_ARGS__)
#define UpdateClassifierCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateClassifier, REQUEST)

#define UpdateColumnStatisticsForPartitionAsync(...)  SubmitAsync(&GlueClient::UpdateColumnStatisticsForPartition, __VA_ARGS__)
#define UpdateColumnStatisticsForPartitionCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateColumnStatisticsForPartition, REQUEST)

#define UpdateColumnStatisticsForTableAsync(...)  SubmitAsync(&GlueClient::UpdateColumnStatisticsForTable, __VA_ARGS__)
#define UpdateColumnStatisticsForTableCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateColumnStatisticsForTable, REQUEST)

#define UpdateConnectionAsync(...)  SubmitAsync(&GlueClient::UpdateConnection, __VA_ARGS__)
#define UpdateConnectionCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateConnection, REQUEST)

#define UpdateCrawlerAsync(...)  SubmitAsync(&GlueClient::UpdateCrawler, __VA_ARGS__)
#define UpdateCrawlerCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateCrawler, REQUEST)

#define UpdateCrawlerScheduleAsync(...)  SubmitAsync(&GlueClient::UpdateCrawlerSchedule, __VA_ARGS__)
#define UpdateCrawlerScheduleCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateCrawlerSchedule, REQUEST)

#define UpdateDatabaseAsync(...)  SubmitAsync(&GlueClient::UpdateDatabase, __VA_ARGS__)
#define UpdateDatabaseCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateDatabase, REQUEST)

#define UpdateDevEndpointAsync(...)  SubmitAsync(&GlueClient::UpdateDevEndpoint, __VA_ARGS__)
#define UpdateDevEndpointCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateDevEndpoint, REQUEST)

#define UpdateJobAsync(...)  SubmitAsync(&GlueClient::UpdateJob, __VA_ARGS__)
#define UpdateJobCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateJob, REQUEST)

#define UpdateJobFromSourceControlAsync(...)  SubmitAsync(&GlueClient::UpdateJobFromSourceControl, __VA_ARGS__)
#define UpdateJobFromSourceControlCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateJobFromSourceControl, REQUEST)

#define UpdateMLTransformAsync(...)  SubmitAsync(&GlueClient::UpdateMLTransform, __VA_ARGS__)
#define UpdateMLTransformCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateMLTransform, REQUEST)

#define UpdatePartitionAsync(...)  SubmitAsync(&GlueClient::UpdatePartition, __VA_ARGS__)
#define UpdatePartitionCallable(REQUEST)  SubmitCallable(&GlueClient::UpdatePartition, REQUEST)

#define UpdateRegistryAsync(...)  SubmitAsync(&GlueClient::UpdateRegistry, __VA_ARGS__)
#define UpdateRegistryCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateRegistry, REQUEST)

#define UpdateSchemaAsync(...)  SubmitAsync(&GlueClient::UpdateSchema, __VA_ARGS__)
#define UpdateSchemaCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateSchema, REQUEST)

#define UpdateSourceControlFromJobAsync(...)  SubmitAsync(&GlueClient::UpdateSourceControlFromJob, __VA_ARGS__)
#define UpdateSourceControlFromJobCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateSourceControlFromJob, REQUEST)

#define UpdateTableAsync(...)  SubmitAsync(&GlueClient::UpdateTable, __VA_ARGS__)
#define UpdateTableCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateTable, REQUEST)

#define UpdateTriggerAsync(...)  SubmitAsync(&GlueClient::UpdateTrigger, __VA_ARGS__)
#define UpdateTriggerCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateTrigger, REQUEST)

#define UpdateUserDefinedFunctionAsync(...)  SubmitAsync(&GlueClient::UpdateUserDefinedFunction, __VA_ARGS__)
#define UpdateUserDefinedFunctionCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateUserDefinedFunction, REQUEST)

#define UpdateWorkflowAsync(...)  SubmitAsync(&GlueClient::UpdateWorkflow, __VA_ARGS__)
#define UpdateWorkflowCallable(REQUEST)  SubmitCallable(&GlueClient::UpdateWorkflow, REQUEST)

