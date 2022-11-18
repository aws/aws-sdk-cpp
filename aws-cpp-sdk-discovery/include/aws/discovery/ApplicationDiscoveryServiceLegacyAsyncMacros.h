/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateConfigurationItemsToApplicationAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplication, __VA_ARGS__)
#define AssociateConfigurationItemsToApplicationCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplication, REQUEST)

#define BatchDeleteImportDataAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::BatchDeleteImportData, __VA_ARGS__)
#define BatchDeleteImportDataCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::BatchDeleteImportData, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::CreateApplication, REQUEST)

#define CreateTagsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::CreateTags, __VA_ARGS__)
#define CreateTagsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::CreateTags, REQUEST)

#define DeleteApplicationsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DeleteApplications, __VA_ARGS__)
#define DeleteApplicationsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DeleteApplications, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DeleteTags, REQUEST)

#define DescribeAgentsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DescribeAgents, __VA_ARGS__)
#define DescribeAgentsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DescribeAgents, REQUEST)

#define DescribeConfigurationsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DescribeConfigurations, __VA_ARGS__)
#define DescribeConfigurationsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DescribeConfigurations, REQUEST)

#define DescribeContinuousExportsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DescribeContinuousExports, __VA_ARGS__)
#define DescribeContinuousExportsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DescribeContinuousExports, REQUEST)

#define DescribeExportTasksAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DescribeExportTasks, __VA_ARGS__)
#define DescribeExportTasksCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DescribeExportTasks, REQUEST)

#define DescribeImportTasksAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DescribeImportTasks, __VA_ARGS__)
#define DescribeImportTasksCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DescribeImportTasks, REQUEST)

#define DescribeTagsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DescribeTags, __VA_ARGS__)
#define DescribeTagsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DescribeTags, REQUEST)

#define DisassociateConfigurationItemsFromApplicationAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplication, __VA_ARGS__)
#define DisassociateConfigurationItemsFromApplicationCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplication, REQUEST)

#define GetDiscoverySummaryAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::GetDiscoverySummary, __VA_ARGS__)
#define GetDiscoverySummaryCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::GetDiscoverySummary, REQUEST)

#define ListConfigurationsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::ListConfigurations, __VA_ARGS__)
#define ListConfigurationsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::ListConfigurations, REQUEST)

#define ListServerNeighborsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::ListServerNeighbors, __VA_ARGS__)
#define ListServerNeighborsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::ListServerNeighbors, REQUEST)

#define StartContinuousExportAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::StartContinuousExport, __VA_ARGS__)
#define StartContinuousExportCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::StartContinuousExport, REQUEST)

#define StartDataCollectionByAgentIdsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIds, __VA_ARGS__)
#define StartDataCollectionByAgentIdsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIds, REQUEST)

#define StartExportTaskAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::StartExportTask, __VA_ARGS__)
#define StartExportTaskCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::StartExportTask, REQUEST)

#define StartImportTaskAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::StartImportTask, __VA_ARGS__)
#define StartImportTaskCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::StartImportTask, REQUEST)

#define StopContinuousExportAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::StopContinuousExport, __VA_ARGS__)
#define StopContinuousExportCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::StopContinuousExport, REQUEST)

#define StopDataCollectionByAgentIdsAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIds, __VA_ARGS__)
#define StopDataCollectionByAgentIdsCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIds, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&ApplicationDiscoveryServiceClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&ApplicationDiscoveryServiceClient::UpdateApplication, REQUEST)

