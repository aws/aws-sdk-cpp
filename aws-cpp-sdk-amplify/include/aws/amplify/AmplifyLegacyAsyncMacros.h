/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAppAsync(...)  SubmitAsync(&AmplifyClient::CreateApp, __VA_ARGS__)
#define CreateAppCallable(REQUEST)  SubmitCallable(&AmplifyClient::CreateApp, REQUEST)

#define CreateBackendEnvironmentAsync(...)  SubmitAsync(&AmplifyClient::CreateBackendEnvironment, __VA_ARGS__)
#define CreateBackendEnvironmentCallable(REQUEST)  SubmitCallable(&AmplifyClient::CreateBackendEnvironment, REQUEST)

#define CreateBranchAsync(...)  SubmitAsync(&AmplifyClient::CreateBranch, __VA_ARGS__)
#define CreateBranchCallable(REQUEST)  SubmitCallable(&AmplifyClient::CreateBranch, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&AmplifyClient::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&AmplifyClient::CreateDeployment, REQUEST)

#define CreateDomainAssociationAsync(...)  SubmitAsync(&AmplifyClient::CreateDomainAssociation, __VA_ARGS__)
#define CreateDomainAssociationCallable(REQUEST)  SubmitCallable(&AmplifyClient::CreateDomainAssociation, REQUEST)

#define CreateWebhookAsync(...)  SubmitAsync(&AmplifyClient::CreateWebhook, __VA_ARGS__)
#define CreateWebhookCallable(REQUEST)  SubmitCallable(&AmplifyClient::CreateWebhook, REQUEST)

#define DeleteAppAsync(...)  SubmitAsync(&AmplifyClient::DeleteApp, __VA_ARGS__)
#define DeleteAppCallable(REQUEST)  SubmitCallable(&AmplifyClient::DeleteApp, REQUEST)

#define DeleteBackendEnvironmentAsync(...)  SubmitAsync(&AmplifyClient::DeleteBackendEnvironment, __VA_ARGS__)
#define DeleteBackendEnvironmentCallable(REQUEST)  SubmitCallable(&AmplifyClient::DeleteBackendEnvironment, REQUEST)

#define DeleteBranchAsync(...)  SubmitAsync(&AmplifyClient::DeleteBranch, __VA_ARGS__)
#define DeleteBranchCallable(REQUEST)  SubmitCallable(&AmplifyClient::DeleteBranch, REQUEST)

#define DeleteDomainAssociationAsync(...)  SubmitAsync(&AmplifyClient::DeleteDomainAssociation, __VA_ARGS__)
#define DeleteDomainAssociationCallable(REQUEST)  SubmitCallable(&AmplifyClient::DeleteDomainAssociation, REQUEST)

#define DeleteJobAsync(...)  SubmitAsync(&AmplifyClient::DeleteJob, __VA_ARGS__)
#define DeleteJobCallable(REQUEST)  SubmitCallable(&AmplifyClient::DeleteJob, REQUEST)

#define DeleteWebhookAsync(...)  SubmitAsync(&AmplifyClient::DeleteWebhook, __VA_ARGS__)
#define DeleteWebhookCallable(REQUEST)  SubmitCallable(&AmplifyClient::DeleteWebhook, REQUEST)

#define GenerateAccessLogsAsync(...)  SubmitAsync(&AmplifyClient::GenerateAccessLogs, __VA_ARGS__)
#define GenerateAccessLogsCallable(REQUEST)  SubmitCallable(&AmplifyClient::GenerateAccessLogs, REQUEST)

#define GetAppAsync(...)  SubmitAsync(&AmplifyClient::GetApp, __VA_ARGS__)
#define GetAppCallable(REQUEST)  SubmitCallable(&AmplifyClient::GetApp, REQUEST)

#define GetArtifactUrlAsync(...)  SubmitAsync(&AmplifyClient::GetArtifactUrl, __VA_ARGS__)
#define GetArtifactUrlCallable(REQUEST)  SubmitCallable(&AmplifyClient::GetArtifactUrl, REQUEST)

#define GetBackendEnvironmentAsync(...)  SubmitAsync(&AmplifyClient::GetBackendEnvironment, __VA_ARGS__)
#define GetBackendEnvironmentCallable(REQUEST)  SubmitCallable(&AmplifyClient::GetBackendEnvironment, REQUEST)

#define GetBranchAsync(...)  SubmitAsync(&AmplifyClient::GetBranch, __VA_ARGS__)
#define GetBranchCallable(REQUEST)  SubmitCallable(&AmplifyClient::GetBranch, REQUEST)

#define GetDomainAssociationAsync(...)  SubmitAsync(&AmplifyClient::GetDomainAssociation, __VA_ARGS__)
#define GetDomainAssociationCallable(REQUEST)  SubmitCallable(&AmplifyClient::GetDomainAssociation, REQUEST)

#define GetJobAsync(...)  SubmitAsync(&AmplifyClient::GetJob, __VA_ARGS__)
#define GetJobCallable(REQUEST)  SubmitCallable(&AmplifyClient::GetJob, REQUEST)

#define GetWebhookAsync(...)  SubmitAsync(&AmplifyClient::GetWebhook, __VA_ARGS__)
#define GetWebhookCallable(REQUEST)  SubmitCallable(&AmplifyClient::GetWebhook, REQUEST)

#define ListAppsAsync(...)  SubmitAsync(&AmplifyClient::ListApps, __VA_ARGS__)
#define ListAppsCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListApps, REQUEST)

#define ListArtifactsAsync(...)  SubmitAsync(&AmplifyClient::ListArtifacts, __VA_ARGS__)
#define ListArtifactsCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListArtifacts, REQUEST)

#define ListBackendEnvironmentsAsync(...)  SubmitAsync(&AmplifyClient::ListBackendEnvironments, __VA_ARGS__)
#define ListBackendEnvironmentsCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListBackendEnvironments, REQUEST)

#define ListBranchesAsync(...)  SubmitAsync(&AmplifyClient::ListBranches, __VA_ARGS__)
#define ListBranchesCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListBranches, REQUEST)

#define ListDomainAssociationsAsync(...)  SubmitAsync(&AmplifyClient::ListDomainAssociations, __VA_ARGS__)
#define ListDomainAssociationsCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListDomainAssociations, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&AmplifyClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListJobs, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AmplifyClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListTagsForResource, REQUEST)

#define ListWebhooksAsync(...)  SubmitAsync(&AmplifyClient::ListWebhooks, __VA_ARGS__)
#define ListWebhooksCallable(REQUEST)  SubmitCallable(&AmplifyClient::ListWebhooks, REQUEST)

#define StartDeploymentAsync(...)  SubmitAsync(&AmplifyClient::StartDeployment, __VA_ARGS__)
#define StartDeploymentCallable(REQUEST)  SubmitCallable(&AmplifyClient::StartDeployment, REQUEST)

#define StartJobAsync(...)  SubmitAsync(&AmplifyClient::StartJob, __VA_ARGS__)
#define StartJobCallable(REQUEST)  SubmitCallable(&AmplifyClient::StartJob, REQUEST)

#define StopJobAsync(...)  SubmitAsync(&AmplifyClient::StopJob, __VA_ARGS__)
#define StopJobCallable(REQUEST)  SubmitCallable(&AmplifyClient::StopJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AmplifyClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AmplifyClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AmplifyClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AmplifyClient::UntagResource, REQUEST)

#define UpdateAppAsync(...)  SubmitAsync(&AmplifyClient::UpdateApp, __VA_ARGS__)
#define UpdateAppCallable(REQUEST)  SubmitCallable(&AmplifyClient::UpdateApp, REQUEST)

#define UpdateBranchAsync(...)  SubmitAsync(&AmplifyClient::UpdateBranch, __VA_ARGS__)
#define UpdateBranchCallable(REQUEST)  SubmitCallable(&AmplifyClient::UpdateBranch, REQUEST)

#define UpdateDomainAssociationAsync(...)  SubmitAsync(&AmplifyClient::UpdateDomainAssociation, __VA_ARGS__)
#define UpdateDomainAssociationCallable(REQUEST)  SubmitCallable(&AmplifyClient::UpdateDomainAssociation, REQUEST)

#define UpdateWebhookAsync(...)  SubmitAsync(&AmplifyClient::UpdateWebhook, __VA_ARGS__)
#define UpdateWebhookCallable(REQUEST)  SubmitCallable(&AmplifyClient::UpdateWebhook, REQUEST)

