/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsToOnPremisesInstancesAsync(...)  SubmitAsync(&CodeDeployClient::AddTagsToOnPremisesInstances, __VA_ARGS__)
#define AddTagsToOnPremisesInstancesCallable(REQUEST)  SubmitCallable(&CodeDeployClient::AddTagsToOnPremisesInstances, REQUEST)

#define BatchGetApplicationRevisionsAsync(...)  SubmitAsync(&CodeDeployClient::BatchGetApplicationRevisions, __VA_ARGS__)
#define BatchGetApplicationRevisionsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::BatchGetApplicationRevisions, REQUEST)

#define BatchGetApplicationsAsync(...)  SubmitAsync(&CodeDeployClient::BatchGetApplications, __VA_ARGS__)
#define BatchGetApplicationsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::BatchGetApplications, REQUEST)

#define BatchGetDeploymentGroupsAsync(...)  SubmitAsync(&CodeDeployClient::BatchGetDeploymentGroups, __VA_ARGS__)
#define BatchGetDeploymentGroupsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::BatchGetDeploymentGroups, REQUEST)

#define BatchGetDeploymentTargetsAsync(...)  SubmitAsync(&CodeDeployClient::BatchGetDeploymentTargets, __VA_ARGS__)
#define BatchGetDeploymentTargetsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::BatchGetDeploymentTargets, REQUEST)

#define BatchGetDeploymentsAsync(...)  SubmitAsync(&CodeDeployClient::BatchGetDeployments, __VA_ARGS__)
#define BatchGetDeploymentsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::BatchGetDeployments, REQUEST)

#define BatchGetOnPremisesInstancesAsync(...)  SubmitAsync(&CodeDeployClient::BatchGetOnPremisesInstances, __VA_ARGS__)
#define BatchGetOnPremisesInstancesCallable(REQUEST)  SubmitCallable(&CodeDeployClient::BatchGetOnPremisesInstances, REQUEST)

#define ContinueDeploymentAsync(...)  SubmitAsync(&CodeDeployClient::ContinueDeployment, __VA_ARGS__)
#define ContinueDeploymentCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ContinueDeployment, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&CodeDeployClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&CodeDeployClient::CreateApplication, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&CodeDeployClient::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&CodeDeployClient::CreateDeployment, REQUEST)

#define CreateDeploymentConfigAsync(...)  SubmitAsync(&CodeDeployClient::CreateDeploymentConfig, __VA_ARGS__)
#define CreateDeploymentConfigCallable(REQUEST)  SubmitCallable(&CodeDeployClient::CreateDeploymentConfig, REQUEST)

#define CreateDeploymentGroupAsync(...)  SubmitAsync(&CodeDeployClient::CreateDeploymentGroup, __VA_ARGS__)
#define CreateDeploymentGroupCallable(REQUEST)  SubmitCallable(&CodeDeployClient::CreateDeploymentGroup, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&CodeDeployClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&CodeDeployClient::DeleteApplication, REQUEST)

#define DeleteDeploymentConfigAsync(...)  SubmitAsync(&CodeDeployClient::DeleteDeploymentConfig, __VA_ARGS__)
#define DeleteDeploymentConfigCallable(REQUEST)  SubmitCallable(&CodeDeployClient::DeleteDeploymentConfig, REQUEST)

#define DeleteDeploymentGroupAsync(...)  SubmitAsync(&CodeDeployClient::DeleteDeploymentGroup, __VA_ARGS__)
#define DeleteDeploymentGroupCallable(REQUEST)  SubmitCallable(&CodeDeployClient::DeleteDeploymentGroup, REQUEST)

#define DeleteGitHubAccountTokenAsync(...)  SubmitAsync(&CodeDeployClient::DeleteGitHubAccountToken, __VA_ARGS__)
#define DeleteGitHubAccountTokenCallable(REQUEST)  SubmitCallable(&CodeDeployClient::DeleteGitHubAccountToken, REQUEST)

#define DeleteResourcesByExternalIdAsync(...)  SubmitAsync(&CodeDeployClient::DeleteResourcesByExternalId, __VA_ARGS__)
#define DeleteResourcesByExternalIdCallable(REQUEST)  SubmitCallable(&CodeDeployClient::DeleteResourcesByExternalId, REQUEST)

#define DeregisterOnPremisesInstanceAsync(...)  SubmitAsync(&CodeDeployClient::DeregisterOnPremisesInstance, __VA_ARGS__)
#define DeregisterOnPremisesInstanceCallable(REQUEST)  SubmitCallable(&CodeDeployClient::DeregisterOnPremisesInstance, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&CodeDeployClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&CodeDeployClient::GetApplication, REQUEST)

#define GetApplicationRevisionAsync(...)  SubmitAsync(&CodeDeployClient::GetApplicationRevision, __VA_ARGS__)
#define GetApplicationRevisionCallable(REQUEST)  SubmitCallable(&CodeDeployClient::GetApplicationRevision, REQUEST)

#define GetDeploymentAsync(...)  SubmitAsync(&CodeDeployClient::GetDeployment, __VA_ARGS__)
#define GetDeploymentCallable(REQUEST)  SubmitCallable(&CodeDeployClient::GetDeployment, REQUEST)

#define GetDeploymentConfigAsync(...)  SubmitAsync(&CodeDeployClient::GetDeploymentConfig, __VA_ARGS__)
#define GetDeploymentConfigCallable(REQUEST)  SubmitCallable(&CodeDeployClient::GetDeploymentConfig, REQUEST)

#define GetDeploymentGroupAsync(...)  SubmitAsync(&CodeDeployClient::GetDeploymentGroup, __VA_ARGS__)
#define GetDeploymentGroupCallable(REQUEST)  SubmitCallable(&CodeDeployClient::GetDeploymentGroup, REQUEST)

#define GetDeploymentTargetAsync(...)  SubmitAsync(&CodeDeployClient::GetDeploymentTarget, __VA_ARGS__)
#define GetDeploymentTargetCallable(REQUEST)  SubmitCallable(&CodeDeployClient::GetDeploymentTarget, REQUEST)

#define GetOnPremisesInstanceAsync(...)  SubmitAsync(&CodeDeployClient::GetOnPremisesInstance, __VA_ARGS__)
#define GetOnPremisesInstanceCallable(REQUEST)  SubmitCallable(&CodeDeployClient::GetOnPremisesInstance, REQUEST)

#define ListApplicationRevisionsAsync(...)  SubmitAsync(&CodeDeployClient::ListApplicationRevisions, __VA_ARGS__)
#define ListApplicationRevisionsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListApplicationRevisions, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&CodeDeployClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListApplications, REQUEST)

#define ListDeploymentConfigsAsync(...)  SubmitAsync(&CodeDeployClient::ListDeploymentConfigs, __VA_ARGS__)
#define ListDeploymentConfigsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListDeploymentConfigs, REQUEST)

#define ListDeploymentGroupsAsync(...)  SubmitAsync(&CodeDeployClient::ListDeploymentGroups, __VA_ARGS__)
#define ListDeploymentGroupsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListDeploymentGroups, REQUEST)

#define ListDeploymentTargetsAsync(...)  SubmitAsync(&CodeDeployClient::ListDeploymentTargets, __VA_ARGS__)
#define ListDeploymentTargetsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListDeploymentTargets, REQUEST)

#define ListDeploymentsAsync(...)  SubmitAsync(&CodeDeployClient::ListDeployments, __VA_ARGS__)
#define ListDeploymentsCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListDeployments, REQUEST)

#define ListGitHubAccountTokenNamesAsync(...)  SubmitAsync(&CodeDeployClient::ListGitHubAccountTokenNames, __VA_ARGS__)
#define ListGitHubAccountTokenNamesCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListGitHubAccountTokenNames, REQUEST)

#define ListOnPremisesInstancesAsync(...)  SubmitAsync(&CodeDeployClient::ListOnPremisesInstances, __VA_ARGS__)
#define ListOnPremisesInstancesCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListOnPremisesInstances, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodeDeployClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodeDeployClient::ListTagsForResource, REQUEST)

#define PutLifecycleEventHookExecutionStatusAsync(...)  SubmitAsync(&CodeDeployClient::PutLifecycleEventHookExecutionStatus, __VA_ARGS__)
#define PutLifecycleEventHookExecutionStatusCallable(REQUEST)  SubmitCallable(&CodeDeployClient::PutLifecycleEventHookExecutionStatus, REQUEST)

#define RegisterApplicationRevisionAsync(...)  SubmitAsync(&CodeDeployClient::RegisterApplicationRevision, __VA_ARGS__)
#define RegisterApplicationRevisionCallable(REQUEST)  SubmitCallable(&CodeDeployClient::RegisterApplicationRevision, REQUEST)

#define RegisterOnPremisesInstanceAsync(...)  SubmitAsync(&CodeDeployClient::RegisterOnPremisesInstance, __VA_ARGS__)
#define RegisterOnPremisesInstanceCallable(REQUEST)  SubmitCallable(&CodeDeployClient::RegisterOnPremisesInstance, REQUEST)

#define RemoveTagsFromOnPremisesInstancesAsync(...)  SubmitAsync(&CodeDeployClient::RemoveTagsFromOnPremisesInstances, __VA_ARGS__)
#define RemoveTagsFromOnPremisesInstancesCallable(REQUEST)  SubmitCallable(&CodeDeployClient::RemoveTagsFromOnPremisesInstances, REQUEST)

#define StopDeploymentAsync(...)  SubmitAsync(&CodeDeployClient::StopDeployment, __VA_ARGS__)
#define StopDeploymentCallable(REQUEST)  SubmitCallable(&CodeDeployClient::StopDeployment, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodeDeployClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodeDeployClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodeDeployClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodeDeployClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&CodeDeployClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&CodeDeployClient::UpdateApplication, REQUEST)

#define UpdateDeploymentGroupAsync(...)  SubmitAsync(&CodeDeployClient::UpdateDeploymentGroup, __VA_ARGS__)
#define UpdateDeploymentGroupCallable(REQUEST)  SubmitCallable(&CodeDeployClient::UpdateDeploymentGroup, REQUEST)

