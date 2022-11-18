/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchDeleteBuildsAsync(...)  SubmitAsync(&CodeBuildClient::BatchDeleteBuilds, __VA_ARGS__)
#define BatchDeleteBuildsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::BatchDeleteBuilds, REQUEST)

#define BatchGetBuildBatchesAsync(...)  SubmitAsync(&CodeBuildClient::BatchGetBuildBatches, __VA_ARGS__)
#define BatchGetBuildBatchesCallable(REQUEST)  SubmitCallable(&CodeBuildClient::BatchGetBuildBatches, REQUEST)

#define BatchGetBuildsAsync(...)  SubmitAsync(&CodeBuildClient::BatchGetBuilds, __VA_ARGS__)
#define BatchGetBuildsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::BatchGetBuilds, REQUEST)

#define BatchGetProjectsAsync(...)  SubmitAsync(&CodeBuildClient::BatchGetProjects, __VA_ARGS__)
#define BatchGetProjectsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::BatchGetProjects, REQUEST)

#define BatchGetReportGroupsAsync(...)  SubmitAsync(&CodeBuildClient::BatchGetReportGroups, __VA_ARGS__)
#define BatchGetReportGroupsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::BatchGetReportGroups, REQUEST)

#define BatchGetReportsAsync(...)  SubmitAsync(&CodeBuildClient::BatchGetReports, __VA_ARGS__)
#define BatchGetReportsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::BatchGetReports, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&CodeBuildClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&CodeBuildClient::CreateProject, REQUEST)

#define CreateReportGroupAsync(...)  SubmitAsync(&CodeBuildClient::CreateReportGroup, __VA_ARGS__)
#define CreateReportGroupCallable(REQUEST)  SubmitCallable(&CodeBuildClient::CreateReportGroup, REQUEST)

#define CreateWebhookAsync(...)  SubmitAsync(&CodeBuildClient::CreateWebhook, __VA_ARGS__)
#define CreateWebhookCallable(REQUEST)  SubmitCallable(&CodeBuildClient::CreateWebhook, REQUEST)

#define DeleteBuildBatchAsync(...)  SubmitAsync(&CodeBuildClient::DeleteBuildBatch, __VA_ARGS__)
#define DeleteBuildBatchCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DeleteBuildBatch, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&CodeBuildClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DeleteProject, REQUEST)

#define DeleteReportAsync(...)  SubmitAsync(&CodeBuildClient::DeleteReport, __VA_ARGS__)
#define DeleteReportCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DeleteReport, REQUEST)

#define DeleteReportGroupAsync(...)  SubmitAsync(&CodeBuildClient::DeleteReportGroup, __VA_ARGS__)
#define DeleteReportGroupCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DeleteReportGroup, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&CodeBuildClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DeleteResourcePolicy, REQUEST)

#define DeleteSourceCredentialsAsync(...)  SubmitAsync(&CodeBuildClient::DeleteSourceCredentials, __VA_ARGS__)
#define DeleteSourceCredentialsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DeleteSourceCredentials, REQUEST)

#define DeleteWebhookAsync(...)  SubmitAsync(&CodeBuildClient::DeleteWebhook, __VA_ARGS__)
#define DeleteWebhookCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DeleteWebhook, REQUEST)

#define DescribeCodeCoveragesAsync(...)  SubmitAsync(&CodeBuildClient::DescribeCodeCoverages, __VA_ARGS__)
#define DescribeCodeCoveragesCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DescribeCodeCoverages, REQUEST)

#define DescribeTestCasesAsync(...)  SubmitAsync(&CodeBuildClient::DescribeTestCases, __VA_ARGS__)
#define DescribeTestCasesCallable(REQUEST)  SubmitCallable(&CodeBuildClient::DescribeTestCases, REQUEST)

#define GetReportGroupTrendAsync(...)  SubmitAsync(&CodeBuildClient::GetReportGroupTrend, __VA_ARGS__)
#define GetReportGroupTrendCallable(REQUEST)  SubmitCallable(&CodeBuildClient::GetReportGroupTrend, REQUEST)

#define GetResourcePolicyAsync(...)  SubmitAsync(&CodeBuildClient::GetResourcePolicy, __VA_ARGS__)
#define GetResourcePolicyCallable(REQUEST)  SubmitCallable(&CodeBuildClient::GetResourcePolicy, REQUEST)

#define ImportSourceCredentialsAsync(...)  SubmitAsync(&CodeBuildClient::ImportSourceCredentials, __VA_ARGS__)
#define ImportSourceCredentialsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ImportSourceCredentials, REQUEST)

#define InvalidateProjectCacheAsync(...)  SubmitAsync(&CodeBuildClient::InvalidateProjectCache, __VA_ARGS__)
#define InvalidateProjectCacheCallable(REQUEST)  SubmitCallable(&CodeBuildClient::InvalidateProjectCache, REQUEST)

#define ListBuildBatchesAsync(...)  SubmitAsync(&CodeBuildClient::ListBuildBatches, __VA_ARGS__)
#define ListBuildBatchesCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListBuildBatches, REQUEST)

#define ListBuildBatchesForProjectAsync(...)  SubmitAsync(&CodeBuildClient::ListBuildBatchesForProject, __VA_ARGS__)
#define ListBuildBatchesForProjectCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListBuildBatchesForProject, REQUEST)

#define ListBuildsAsync(...)  SubmitAsync(&CodeBuildClient::ListBuilds, __VA_ARGS__)
#define ListBuildsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListBuilds, REQUEST)

#define ListBuildsForProjectAsync(...)  SubmitAsync(&CodeBuildClient::ListBuildsForProject, __VA_ARGS__)
#define ListBuildsForProjectCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListBuildsForProject, REQUEST)

#define ListCuratedEnvironmentImagesAsync(...)  SubmitAsync(&CodeBuildClient::ListCuratedEnvironmentImages, __VA_ARGS__)
#define ListCuratedEnvironmentImagesCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListCuratedEnvironmentImages, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&CodeBuildClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListProjects, REQUEST)

#define ListReportGroupsAsync(...)  SubmitAsync(&CodeBuildClient::ListReportGroups, __VA_ARGS__)
#define ListReportGroupsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListReportGroups, REQUEST)

#define ListReportsAsync(...)  SubmitAsync(&CodeBuildClient::ListReports, __VA_ARGS__)
#define ListReportsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListReports, REQUEST)

#define ListReportsForReportGroupAsync(...)  SubmitAsync(&CodeBuildClient::ListReportsForReportGroup, __VA_ARGS__)
#define ListReportsForReportGroupCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListReportsForReportGroup, REQUEST)

#define ListSharedProjectsAsync(...)  SubmitAsync(&CodeBuildClient::ListSharedProjects, __VA_ARGS__)
#define ListSharedProjectsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListSharedProjects, REQUEST)

#define ListSharedReportGroupsAsync(...)  SubmitAsync(&CodeBuildClient::ListSharedReportGroups, __VA_ARGS__)
#define ListSharedReportGroupsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListSharedReportGroups, REQUEST)

#define ListSourceCredentialsAsync(...)  SubmitAsync(&CodeBuildClient::ListSourceCredentials, __VA_ARGS__)
#define ListSourceCredentialsCallable(REQUEST)  SubmitCallable(&CodeBuildClient::ListSourceCredentials, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&CodeBuildClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&CodeBuildClient::PutResourcePolicy, REQUEST)

#define RetryBuildAsync(...)  SubmitAsync(&CodeBuildClient::RetryBuild, __VA_ARGS__)
#define RetryBuildCallable(REQUEST)  SubmitCallable(&CodeBuildClient::RetryBuild, REQUEST)

#define RetryBuildBatchAsync(...)  SubmitAsync(&CodeBuildClient::RetryBuildBatch, __VA_ARGS__)
#define RetryBuildBatchCallable(REQUEST)  SubmitCallable(&CodeBuildClient::RetryBuildBatch, REQUEST)

#define StartBuildAsync(...)  SubmitAsync(&CodeBuildClient::StartBuild, __VA_ARGS__)
#define StartBuildCallable(REQUEST)  SubmitCallable(&CodeBuildClient::StartBuild, REQUEST)

#define StartBuildBatchAsync(...)  SubmitAsync(&CodeBuildClient::StartBuildBatch, __VA_ARGS__)
#define StartBuildBatchCallable(REQUEST)  SubmitCallable(&CodeBuildClient::StartBuildBatch, REQUEST)

#define StopBuildAsync(...)  SubmitAsync(&CodeBuildClient::StopBuild, __VA_ARGS__)
#define StopBuildCallable(REQUEST)  SubmitCallable(&CodeBuildClient::StopBuild, REQUEST)

#define StopBuildBatchAsync(...)  SubmitAsync(&CodeBuildClient::StopBuildBatch, __VA_ARGS__)
#define StopBuildBatchCallable(REQUEST)  SubmitCallable(&CodeBuildClient::StopBuildBatch, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&CodeBuildClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&CodeBuildClient::UpdateProject, REQUEST)

#define UpdateProjectVisibilityAsync(...)  SubmitAsync(&CodeBuildClient::UpdateProjectVisibility, __VA_ARGS__)
#define UpdateProjectVisibilityCallable(REQUEST)  SubmitCallable(&CodeBuildClient::UpdateProjectVisibility, REQUEST)

#define UpdateReportGroupAsync(...)  SubmitAsync(&CodeBuildClient::UpdateReportGroup, __VA_ARGS__)
#define UpdateReportGroupCallable(REQUEST)  SubmitCallable(&CodeBuildClient::UpdateReportGroup, REQUEST)

#define UpdateWebhookAsync(...)  SubmitAsync(&CodeBuildClient::UpdateWebhook, __VA_ARGS__)
#define UpdateWebhookCallable(REQUEST)  SubmitCallable(&CodeBuildClient::UpdateWebhook, REQUEST)

