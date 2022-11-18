/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelBatchJobExecutionAsync(...)  SubmitAsync(&MainframeModernizationClient::CancelBatchJobExecution, __VA_ARGS__)
#define CancelBatchJobExecutionCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::CancelBatchJobExecution, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&MainframeModernizationClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::CreateApplication, REQUEST)

#define CreateDataSetImportTaskAsync(...)  SubmitAsync(&MainframeModernizationClient::CreateDataSetImportTask, __VA_ARGS__)
#define CreateDataSetImportTaskCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::CreateDataSetImportTask, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&MainframeModernizationClient::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::CreateDeployment, REQUEST)

#define CreateEnvironmentAsync(...)  SubmitAsync(&MainframeModernizationClient::CreateEnvironment, __VA_ARGS__)
#define CreateEnvironmentCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::CreateEnvironment, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&MainframeModernizationClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::DeleteApplication, REQUEST)

#define DeleteApplicationFromEnvironmentAsync(...)  SubmitAsync(&MainframeModernizationClient::DeleteApplicationFromEnvironment, __VA_ARGS__)
#define DeleteApplicationFromEnvironmentCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::DeleteApplicationFromEnvironment, REQUEST)

#define DeleteEnvironmentAsync(...)  SubmitAsync(&MainframeModernizationClient::DeleteEnvironment, __VA_ARGS__)
#define DeleteEnvironmentCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::DeleteEnvironment, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&MainframeModernizationClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::GetApplication, REQUEST)

#define GetApplicationVersionAsync(...)  SubmitAsync(&MainframeModernizationClient::GetApplicationVersion, __VA_ARGS__)
#define GetApplicationVersionCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::GetApplicationVersion, REQUEST)

#define GetBatchJobExecutionAsync(...)  SubmitAsync(&MainframeModernizationClient::GetBatchJobExecution, __VA_ARGS__)
#define GetBatchJobExecutionCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::GetBatchJobExecution, REQUEST)

#define GetDataSetDetailsAsync(...)  SubmitAsync(&MainframeModernizationClient::GetDataSetDetails, __VA_ARGS__)
#define GetDataSetDetailsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::GetDataSetDetails, REQUEST)

#define GetDataSetImportTaskAsync(...)  SubmitAsync(&MainframeModernizationClient::GetDataSetImportTask, __VA_ARGS__)
#define GetDataSetImportTaskCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::GetDataSetImportTask, REQUEST)

#define GetDeploymentAsync(...)  SubmitAsync(&MainframeModernizationClient::GetDeployment, __VA_ARGS__)
#define GetDeploymentCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::GetDeployment, REQUEST)

#define GetEnvironmentAsync(...)  SubmitAsync(&MainframeModernizationClient::GetEnvironment, __VA_ARGS__)
#define GetEnvironmentCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::GetEnvironment, REQUEST)

#define ListApplicationVersionsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListApplicationVersions, __VA_ARGS__)
#define ListApplicationVersionsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListApplicationVersions, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListApplications, REQUEST)

#define ListBatchJobDefinitionsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListBatchJobDefinitions, __VA_ARGS__)
#define ListBatchJobDefinitionsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListBatchJobDefinitions, REQUEST)

#define ListBatchJobExecutionsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListBatchJobExecutions, __VA_ARGS__)
#define ListBatchJobExecutionsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListBatchJobExecutions, REQUEST)

#define ListDataSetImportHistoryAsync(...)  SubmitAsync(&MainframeModernizationClient::ListDataSetImportHistory, __VA_ARGS__)
#define ListDataSetImportHistoryCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListDataSetImportHistory, REQUEST)

#define ListDataSetsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListDataSets, __VA_ARGS__)
#define ListDataSetsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListDataSets, REQUEST)

#define ListDeploymentsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListDeployments, __VA_ARGS__)
#define ListDeploymentsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListDeployments, REQUEST)

#define ListEngineVersionsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListEngineVersions, __VA_ARGS__)
#define ListEngineVersionsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListEngineVersions, REQUEST)

#define ListEnvironmentsAsync(...)  SubmitAsync(&MainframeModernizationClient::ListEnvironments, __VA_ARGS__)
#define ListEnvironmentsCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListEnvironments, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MainframeModernizationClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::ListTagsForResource, REQUEST)

#define StartApplicationAsync(...)  SubmitAsync(&MainframeModernizationClient::StartApplication, __VA_ARGS__)
#define StartApplicationCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::StartApplication, REQUEST)

#define StartBatchJobAsync(...)  SubmitAsync(&MainframeModernizationClient::StartBatchJob, __VA_ARGS__)
#define StartBatchJobCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::StartBatchJob, REQUEST)

#define StopApplicationAsync(...)  SubmitAsync(&MainframeModernizationClient::StopApplication, __VA_ARGS__)
#define StopApplicationCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::StopApplication, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MainframeModernizationClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MainframeModernizationClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&MainframeModernizationClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::UpdateApplication, REQUEST)

#define UpdateEnvironmentAsync(...)  SubmitAsync(&MainframeModernizationClient::UpdateEnvironment, __VA_ARGS__)
#define UpdateEnvironmentCallable(REQUEST)  SubmitCallable(&MainframeModernizationClient::UpdateEnvironment, REQUEST)

