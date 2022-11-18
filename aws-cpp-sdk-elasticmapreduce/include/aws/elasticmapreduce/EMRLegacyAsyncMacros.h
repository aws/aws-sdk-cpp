/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddInstanceFleetAsync(...)  SubmitAsync(&EMRClient::AddInstanceFleet, __VA_ARGS__)
#define AddInstanceFleetCallable(REQUEST)  SubmitCallable(&EMRClient::AddInstanceFleet, REQUEST)

#define AddInstanceGroupsAsync(...)  SubmitAsync(&EMRClient::AddInstanceGroups, __VA_ARGS__)
#define AddInstanceGroupsCallable(REQUEST)  SubmitCallable(&EMRClient::AddInstanceGroups, REQUEST)

#define AddJobFlowStepsAsync(...)  SubmitAsync(&EMRClient::AddJobFlowSteps, __VA_ARGS__)
#define AddJobFlowStepsCallable(REQUEST)  SubmitCallable(&EMRClient::AddJobFlowSteps, REQUEST)

#define AddTagsAsync(...)  SubmitAsync(&EMRClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&EMRClient::AddTags, REQUEST)

#define CancelStepsAsync(...)  SubmitAsync(&EMRClient::CancelSteps, __VA_ARGS__)
#define CancelStepsCallable(REQUEST)  SubmitCallable(&EMRClient::CancelSteps, REQUEST)

#define CreateSecurityConfigurationAsync(...)  SubmitAsync(&EMRClient::CreateSecurityConfiguration, __VA_ARGS__)
#define CreateSecurityConfigurationCallable(REQUEST)  SubmitCallable(&EMRClient::CreateSecurityConfiguration, REQUEST)

#define CreateStudioAsync(...)  SubmitAsync(&EMRClient::CreateStudio, __VA_ARGS__)
#define CreateStudioCallable(REQUEST)  SubmitCallable(&EMRClient::CreateStudio, REQUEST)

#define CreateStudioSessionMappingAsync(...)  SubmitAsync(&EMRClient::CreateStudioSessionMapping, __VA_ARGS__)
#define CreateStudioSessionMappingCallable(REQUEST)  SubmitCallable(&EMRClient::CreateStudioSessionMapping, REQUEST)

#define DeleteSecurityConfigurationAsync(...)  SubmitAsync(&EMRClient::DeleteSecurityConfiguration, __VA_ARGS__)
#define DeleteSecurityConfigurationCallable(REQUEST)  SubmitCallable(&EMRClient::DeleteSecurityConfiguration, REQUEST)

#define DeleteStudioAsync(...)  SubmitAsync(&EMRClient::DeleteStudio, __VA_ARGS__)
#define DeleteStudioCallable(REQUEST)  SubmitCallable(&EMRClient::DeleteStudio, REQUEST)

#define DeleteStudioSessionMappingAsync(...)  SubmitAsync(&EMRClient::DeleteStudioSessionMapping, __VA_ARGS__)
#define DeleteStudioSessionMappingCallable(REQUEST)  SubmitCallable(&EMRClient::DeleteStudioSessionMapping, REQUEST)

#define DescribeClusterAsync(...)  SubmitAsync(&EMRClient::DescribeCluster, __VA_ARGS__)
#define DescribeClusterCallable(REQUEST)  SubmitCallable(&EMRClient::DescribeCluster, REQUEST)

#define DescribeNotebookExecutionAsync(...)  SubmitAsync(&EMRClient::DescribeNotebookExecution, __VA_ARGS__)
#define DescribeNotebookExecutionCallable(REQUEST)  SubmitCallable(&EMRClient::DescribeNotebookExecution, REQUEST)

#define DescribeReleaseLabelAsync(...)  SubmitAsync(&EMRClient::DescribeReleaseLabel, __VA_ARGS__)
#define DescribeReleaseLabelCallable(REQUEST)  SubmitCallable(&EMRClient::DescribeReleaseLabel, REQUEST)

#define DescribeSecurityConfigurationAsync(...)  SubmitAsync(&EMRClient::DescribeSecurityConfiguration, __VA_ARGS__)
#define DescribeSecurityConfigurationCallable(REQUEST)  SubmitCallable(&EMRClient::DescribeSecurityConfiguration, REQUEST)

#define DescribeStepAsync(...)  SubmitAsync(&EMRClient::DescribeStep, __VA_ARGS__)
#define DescribeStepCallable(REQUEST)  SubmitCallable(&EMRClient::DescribeStep, REQUEST)

#define DescribeStudioAsync(...)  SubmitAsync(&EMRClient::DescribeStudio, __VA_ARGS__)
#define DescribeStudioCallable(REQUEST)  SubmitCallable(&EMRClient::DescribeStudio, REQUEST)

#define GetAutoTerminationPolicyAsync(...)  SubmitAsync(&EMRClient::GetAutoTerminationPolicy, __VA_ARGS__)
#define GetAutoTerminationPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::GetAutoTerminationPolicy, REQUEST)

#define GetBlockPublicAccessConfigurationAsync(...)  SubmitAsync(&EMRClient::GetBlockPublicAccessConfiguration, __VA_ARGS__)
#define GetBlockPublicAccessConfigurationCallable(REQUEST)  SubmitCallable(&EMRClient::GetBlockPublicAccessConfiguration, REQUEST)

#define GetManagedScalingPolicyAsync(...)  SubmitAsync(&EMRClient::GetManagedScalingPolicy, __VA_ARGS__)
#define GetManagedScalingPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::GetManagedScalingPolicy, REQUEST)

#define GetStudioSessionMappingAsync(...)  SubmitAsync(&EMRClient::GetStudioSessionMapping, __VA_ARGS__)
#define GetStudioSessionMappingCallable(REQUEST)  SubmitCallable(&EMRClient::GetStudioSessionMapping, REQUEST)

#define ListBootstrapActionsAsync(...)  SubmitAsync(&EMRClient::ListBootstrapActions, __VA_ARGS__)
#define ListBootstrapActionsCallable(REQUEST)  SubmitCallable(&EMRClient::ListBootstrapActions, REQUEST)

#define ListClustersAsync(...)  SubmitAsync(&EMRClient::ListClusters, __VA_ARGS__)
#define ListClustersCallable(REQUEST)  SubmitCallable(&EMRClient::ListClusters, REQUEST)

#define ListInstanceFleetsAsync(...)  SubmitAsync(&EMRClient::ListInstanceFleets, __VA_ARGS__)
#define ListInstanceFleetsCallable(REQUEST)  SubmitCallable(&EMRClient::ListInstanceFleets, REQUEST)

#define ListInstanceGroupsAsync(...)  SubmitAsync(&EMRClient::ListInstanceGroups, __VA_ARGS__)
#define ListInstanceGroupsCallable(REQUEST)  SubmitCallable(&EMRClient::ListInstanceGroups, REQUEST)

#define ListInstancesAsync(...)  SubmitAsync(&EMRClient::ListInstances, __VA_ARGS__)
#define ListInstancesCallable(REQUEST)  SubmitCallable(&EMRClient::ListInstances, REQUEST)

#define ListNotebookExecutionsAsync(...)  SubmitAsync(&EMRClient::ListNotebookExecutions, __VA_ARGS__)
#define ListNotebookExecutionsCallable(REQUEST)  SubmitCallable(&EMRClient::ListNotebookExecutions, REQUEST)

#define ListReleaseLabelsAsync(...)  SubmitAsync(&EMRClient::ListReleaseLabels, __VA_ARGS__)
#define ListReleaseLabelsCallable(REQUEST)  SubmitCallable(&EMRClient::ListReleaseLabels, REQUEST)

#define ListSecurityConfigurationsAsync(...)  SubmitAsync(&EMRClient::ListSecurityConfigurations, __VA_ARGS__)
#define ListSecurityConfigurationsCallable(REQUEST)  SubmitCallable(&EMRClient::ListSecurityConfigurations, REQUEST)

#define ListStepsAsync(...)  SubmitAsync(&EMRClient::ListSteps, __VA_ARGS__)
#define ListStepsCallable(REQUEST)  SubmitCallable(&EMRClient::ListSteps, REQUEST)

#define ListStudioSessionMappingsAsync(...)  SubmitAsync(&EMRClient::ListStudioSessionMappings, __VA_ARGS__)
#define ListStudioSessionMappingsCallable(REQUEST)  SubmitCallable(&EMRClient::ListStudioSessionMappings, REQUEST)

#define ListStudiosAsync(...)  SubmitAsync(&EMRClient::ListStudios, __VA_ARGS__)
#define ListStudiosCallable(REQUEST)  SubmitCallable(&EMRClient::ListStudios, REQUEST)

#define ModifyClusterAsync(...)  SubmitAsync(&EMRClient::ModifyCluster, __VA_ARGS__)
#define ModifyClusterCallable(REQUEST)  SubmitCallable(&EMRClient::ModifyCluster, REQUEST)

#define ModifyInstanceFleetAsync(...)  SubmitAsync(&EMRClient::ModifyInstanceFleet, __VA_ARGS__)
#define ModifyInstanceFleetCallable(REQUEST)  SubmitCallable(&EMRClient::ModifyInstanceFleet, REQUEST)

#define ModifyInstanceGroupsAsync(...)  SubmitAsync(&EMRClient::ModifyInstanceGroups, __VA_ARGS__)
#define ModifyInstanceGroupsCallable(REQUEST)  SubmitCallable(&EMRClient::ModifyInstanceGroups, REQUEST)

#define PutAutoScalingPolicyAsync(...)  SubmitAsync(&EMRClient::PutAutoScalingPolicy, __VA_ARGS__)
#define PutAutoScalingPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::PutAutoScalingPolicy, REQUEST)

#define PutAutoTerminationPolicyAsync(...)  SubmitAsync(&EMRClient::PutAutoTerminationPolicy, __VA_ARGS__)
#define PutAutoTerminationPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::PutAutoTerminationPolicy, REQUEST)

#define PutBlockPublicAccessConfigurationAsync(...)  SubmitAsync(&EMRClient::PutBlockPublicAccessConfiguration, __VA_ARGS__)
#define PutBlockPublicAccessConfigurationCallable(REQUEST)  SubmitCallable(&EMRClient::PutBlockPublicAccessConfiguration, REQUEST)

#define PutManagedScalingPolicyAsync(...)  SubmitAsync(&EMRClient::PutManagedScalingPolicy, __VA_ARGS__)
#define PutManagedScalingPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::PutManagedScalingPolicy, REQUEST)

#define RemoveAutoScalingPolicyAsync(...)  SubmitAsync(&EMRClient::RemoveAutoScalingPolicy, __VA_ARGS__)
#define RemoveAutoScalingPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::RemoveAutoScalingPolicy, REQUEST)

#define RemoveAutoTerminationPolicyAsync(...)  SubmitAsync(&EMRClient::RemoveAutoTerminationPolicy, __VA_ARGS__)
#define RemoveAutoTerminationPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::RemoveAutoTerminationPolicy, REQUEST)

#define RemoveManagedScalingPolicyAsync(...)  SubmitAsync(&EMRClient::RemoveManagedScalingPolicy, __VA_ARGS__)
#define RemoveManagedScalingPolicyCallable(REQUEST)  SubmitCallable(&EMRClient::RemoveManagedScalingPolicy, REQUEST)

#define RemoveTagsAsync(...)  SubmitAsync(&EMRClient::RemoveTags, __VA_ARGS__)
#define RemoveTagsCallable(REQUEST)  SubmitCallable(&EMRClient::RemoveTags, REQUEST)

#define RunJobFlowAsync(...)  SubmitAsync(&EMRClient::RunJobFlow, __VA_ARGS__)
#define RunJobFlowCallable(REQUEST)  SubmitCallable(&EMRClient::RunJobFlow, REQUEST)

#define SetTerminationProtectionAsync(...)  SubmitAsync(&EMRClient::SetTerminationProtection, __VA_ARGS__)
#define SetTerminationProtectionCallable(REQUEST)  SubmitCallable(&EMRClient::SetTerminationProtection, REQUEST)

#define SetVisibleToAllUsersAsync(...)  SubmitAsync(&EMRClient::SetVisibleToAllUsers, __VA_ARGS__)
#define SetVisibleToAllUsersCallable(REQUEST)  SubmitCallable(&EMRClient::SetVisibleToAllUsers, REQUEST)

#define StartNotebookExecutionAsync(...)  SubmitAsync(&EMRClient::StartNotebookExecution, __VA_ARGS__)
#define StartNotebookExecutionCallable(REQUEST)  SubmitCallable(&EMRClient::StartNotebookExecution, REQUEST)

#define StopNotebookExecutionAsync(...)  SubmitAsync(&EMRClient::StopNotebookExecution, __VA_ARGS__)
#define StopNotebookExecutionCallable(REQUEST)  SubmitCallable(&EMRClient::StopNotebookExecution, REQUEST)

#define TerminateJobFlowsAsync(...)  SubmitAsync(&EMRClient::TerminateJobFlows, __VA_ARGS__)
#define TerminateJobFlowsCallable(REQUEST)  SubmitCallable(&EMRClient::TerminateJobFlows, REQUEST)

#define UpdateStudioAsync(...)  SubmitAsync(&EMRClient::UpdateStudio, __VA_ARGS__)
#define UpdateStudioCallable(REQUEST)  SubmitCallable(&EMRClient::UpdateStudio, REQUEST)

#define UpdateStudioSessionMappingAsync(...)  SubmitAsync(&EMRClient::UpdateStudioSessionMapping, __VA_ARGS__)
#define UpdateStudioSessionMappingCallable(REQUEST)  SubmitCallable(&EMRClient::UpdateStudioSessionMapping, REQUEST)

