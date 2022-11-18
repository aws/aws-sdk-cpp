/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateCapacityProviderAsync(...)  SubmitAsync(&ECSClient::CreateCapacityProvider, __VA_ARGS__)
#define CreateCapacityProviderCallable(REQUEST)  SubmitCallable(&ECSClient::CreateCapacityProvider, REQUEST)

#define CreateClusterAsync(...)  SubmitAsync(&ECSClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&ECSClient::CreateCluster, REQUEST)

#define CreateServiceAsync(...)  SubmitAsync(&ECSClient::CreateService, __VA_ARGS__)
#define CreateServiceCallable(REQUEST)  SubmitCallable(&ECSClient::CreateService, REQUEST)

#define CreateTaskSetAsync(...)  SubmitAsync(&ECSClient::CreateTaskSet, __VA_ARGS__)
#define CreateTaskSetCallable(REQUEST)  SubmitCallable(&ECSClient::CreateTaskSet, REQUEST)

#define DeleteAccountSettingAsync(...)  SubmitAsync(&ECSClient::DeleteAccountSetting, __VA_ARGS__)
#define DeleteAccountSettingCallable(REQUEST)  SubmitCallable(&ECSClient::DeleteAccountSetting, REQUEST)

#define DeleteAttributesAsync(...)  SubmitAsync(&ECSClient::DeleteAttributes, __VA_ARGS__)
#define DeleteAttributesCallable(REQUEST)  SubmitCallable(&ECSClient::DeleteAttributes, REQUEST)

#define DeleteCapacityProviderAsync(...)  SubmitAsync(&ECSClient::DeleteCapacityProvider, __VA_ARGS__)
#define DeleteCapacityProviderCallable(REQUEST)  SubmitCallable(&ECSClient::DeleteCapacityProvider, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&ECSClient::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&ECSClient::DeleteCluster, REQUEST)

#define DeleteServiceAsync(...)  SubmitAsync(&ECSClient::DeleteService, __VA_ARGS__)
#define DeleteServiceCallable(REQUEST)  SubmitCallable(&ECSClient::DeleteService, REQUEST)

#define DeleteTaskSetAsync(...)  SubmitAsync(&ECSClient::DeleteTaskSet, __VA_ARGS__)
#define DeleteTaskSetCallable(REQUEST)  SubmitCallable(&ECSClient::DeleteTaskSet, REQUEST)

#define DeregisterContainerInstanceAsync(...)  SubmitAsync(&ECSClient::DeregisterContainerInstance, __VA_ARGS__)
#define DeregisterContainerInstanceCallable(REQUEST)  SubmitCallable(&ECSClient::DeregisterContainerInstance, REQUEST)

#define DeregisterTaskDefinitionAsync(...)  SubmitAsync(&ECSClient::DeregisterTaskDefinition, __VA_ARGS__)
#define DeregisterTaskDefinitionCallable(REQUEST)  SubmitCallable(&ECSClient::DeregisterTaskDefinition, REQUEST)

#define DescribeCapacityProvidersAsync(...)  SubmitAsync(&ECSClient::DescribeCapacityProviders, __VA_ARGS__)
#define DescribeCapacityProvidersCallable(REQUEST)  SubmitCallable(&ECSClient::DescribeCapacityProviders, REQUEST)

#define DescribeClustersAsync(...)  SubmitAsync(&ECSClient::DescribeClusters, __VA_ARGS__)
#define DescribeClustersCallable(REQUEST)  SubmitCallable(&ECSClient::DescribeClusters, REQUEST)

#define DescribeContainerInstancesAsync(...)  SubmitAsync(&ECSClient::DescribeContainerInstances, __VA_ARGS__)
#define DescribeContainerInstancesCallable(REQUEST)  SubmitCallable(&ECSClient::DescribeContainerInstances, REQUEST)

#define DescribeServicesAsync(...)  SubmitAsync(&ECSClient::DescribeServices, __VA_ARGS__)
#define DescribeServicesCallable(REQUEST)  SubmitCallable(&ECSClient::DescribeServices, REQUEST)

#define DescribeTaskDefinitionAsync(...)  SubmitAsync(&ECSClient::DescribeTaskDefinition, __VA_ARGS__)
#define DescribeTaskDefinitionCallable(REQUEST)  SubmitCallable(&ECSClient::DescribeTaskDefinition, REQUEST)

#define DescribeTaskSetsAsync(...)  SubmitAsync(&ECSClient::DescribeTaskSets, __VA_ARGS__)
#define DescribeTaskSetsCallable(REQUEST)  SubmitCallable(&ECSClient::DescribeTaskSets, REQUEST)

#define DescribeTasksAsync(...)  SubmitAsync(&ECSClient::DescribeTasks, __VA_ARGS__)
#define DescribeTasksCallable(REQUEST)  SubmitCallable(&ECSClient::DescribeTasks, REQUEST)

#define DiscoverPollEndpointAsync(...)  SubmitAsync(&ECSClient::DiscoverPollEndpoint, __VA_ARGS__)
#define DiscoverPollEndpointCallable(REQUEST)  SubmitCallable(&ECSClient::DiscoverPollEndpoint, REQUEST)

#define ExecuteCommandAsync(...)  SubmitAsync(&ECSClient::ExecuteCommand, __VA_ARGS__)
#define ExecuteCommandCallable(REQUEST)  SubmitCallable(&ECSClient::ExecuteCommand, REQUEST)

#define GetTaskProtectionAsync(...)  SubmitAsync(&ECSClient::GetTaskProtection, __VA_ARGS__)
#define GetTaskProtectionCallable(REQUEST)  SubmitCallable(&ECSClient::GetTaskProtection, REQUEST)

#define ListAccountSettingsAsync(...)  SubmitAsync(&ECSClient::ListAccountSettings, __VA_ARGS__)
#define ListAccountSettingsCallable(REQUEST)  SubmitCallable(&ECSClient::ListAccountSettings, REQUEST)

#define ListAttributesAsync(...)  SubmitAsync(&ECSClient::ListAttributes, __VA_ARGS__)
#define ListAttributesCallable(REQUEST)  SubmitCallable(&ECSClient::ListAttributes, REQUEST)

#define ListClustersAsync(...)  SubmitAsync(&ECSClient::ListClusters, __VA_ARGS__)
#define ListClustersCallable(REQUEST)  SubmitCallable(&ECSClient::ListClusters, REQUEST)

#define ListContainerInstancesAsync(...)  SubmitAsync(&ECSClient::ListContainerInstances, __VA_ARGS__)
#define ListContainerInstancesCallable(REQUEST)  SubmitCallable(&ECSClient::ListContainerInstances, REQUEST)

#define ListServicesAsync(...)  SubmitAsync(&ECSClient::ListServices, __VA_ARGS__)
#define ListServicesCallable(REQUEST)  SubmitCallable(&ECSClient::ListServices, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ECSClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ECSClient::ListTagsForResource, REQUEST)

#define ListTaskDefinitionFamiliesAsync(...)  SubmitAsync(&ECSClient::ListTaskDefinitionFamilies, __VA_ARGS__)
#define ListTaskDefinitionFamiliesCallable(REQUEST)  SubmitCallable(&ECSClient::ListTaskDefinitionFamilies, REQUEST)

#define ListTaskDefinitionsAsync(...)  SubmitAsync(&ECSClient::ListTaskDefinitions, __VA_ARGS__)
#define ListTaskDefinitionsCallable(REQUEST)  SubmitCallable(&ECSClient::ListTaskDefinitions, REQUEST)

#define ListTasksAsync(...)  SubmitAsync(&ECSClient::ListTasks, __VA_ARGS__)
#define ListTasksCallable(REQUEST)  SubmitCallable(&ECSClient::ListTasks, REQUEST)

#define PutAccountSettingAsync(...)  SubmitAsync(&ECSClient::PutAccountSetting, __VA_ARGS__)
#define PutAccountSettingCallable(REQUEST)  SubmitCallable(&ECSClient::PutAccountSetting, REQUEST)

#define PutAccountSettingDefaultAsync(...)  SubmitAsync(&ECSClient::PutAccountSettingDefault, __VA_ARGS__)
#define PutAccountSettingDefaultCallable(REQUEST)  SubmitCallable(&ECSClient::PutAccountSettingDefault, REQUEST)

#define PutAttributesAsync(...)  SubmitAsync(&ECSClient::PutAttributes, __VA_ARGS__)
#define PutAttributesCallable(REQUEST)  SubmitCallable(&ECSClient::PutAttributes, REQUEST)

#define PutClusterCapacityProvidersAsync(...)  SubmitAsync(&ECSClient::PutClusterCapacityProviders, __VA_ARGS__)
#define PutClusterCapacityProvidersCallable(REQUEST)  SubmitCallable(&ECSClient::PutClusterCapacityProviders, REQUEST)

#define RegisterContainerInstanceAsync(...)  SubmitAsync(&ECSClient::RegisterContainerInstance, __VA_ARGS__)
#define RegisterContainerInstanceCallable(REQUEST)  SubmitCallable(&ECSClient::RegisterContainerInstance, REQUEST)

#define RegisterTaskDefinitionAsync(...)  SubmitAsync(&ECSClient::RegisterTaskDefinition, __VA_ARGS__)
#define RegisterTaskDefinitionCallable(REQUEST)  SubmitCallable(&ECSClient::RegisterTaskDefinition, REQUEST)

#define RunTaskAsync(...)  SubmitAsync(&ECSClient::RunTask, __VA_ARGS__)
#define RunTaskCallable(REQUEST)  SubmitCallable(&ECSClient::RunTask, REQUEST)

#define StartTaskAsync(...)  SubmitAsync(&ECSClient::StartTask, __VA_ARGS__)
#define StartTaskCallable(REQUEST)  SubmitCallable(&ECSClient::StartTask, REQUEST)

#define StopTaskAsync(...)  SubmitAsync(&ECSClient::StopTask, __VA_ARGS__)
#define StopTaskCallable(REQUEST)  SubmitCallable(&ECSClient::StopTask, REQUEST)

#define SubmitAttachmentStateChangesAsync(...)  SubmitAsync(&ECSClient::SubmitAttachmentStateChanges, __VA_ARGS__)
#define SubmitAttachmentStateChangesCallable(REQUEST)  SubmitCallable(&ECSClient::SubmitAttachmentStateChanges, REQUEST)

#define SubmitContainerStateChangeAsync(...)  SubmitAsync(&ECSClient::SubmitContainerStateChange, __VA_ARGS__)
#define SubmitContainerStateChangeCallable(REQUEST)  SubmitCallable(&ECSClient::SubmitContainerStateChange, REQUEST)

#define SubmitTaskStateChangeAsync(...)  SubmitAsync(&ECSClient::SubmitTaskStateChange, __VA_ARGS__)
#define SubmitTaskStateChangeCallable(REQUEST)  SubmitCallable(&ECSClient::SubmitTaskStateChange, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ECSClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ECSClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ECSClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ECSClient::UntagResource, REQUEST)

#define UpdateCapacityProviderAsync(...)  SubmitAsync(&ECSClient::UpdateCapacityProvider, __VA_ARGS__)
#define UpdateCapacityProviderCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateCapacityProvider, REQUEST)

#define UpdateClusterAsync(...)  SubmitAsync(&ECSClient::UpdateCluster, __VA_ARGS__)
#define UpdateClusterCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateCluster, REQUEST)

#define UpdateClusterSettingsAsync(...)  SubmitAsync(&ECSClient::UpdateClusterSettings, __VA_ARGS__)
#define UpdateClusterSettingsCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateClusterSettings, REQUEST)

#define UpdateContainerAgentAsync(...)  SubmitAsync(&ECSClient::UpdateContainerAgent, __VA_ARGS__)
#define UpdateContainerAgentCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateContainerAgent, REQUEST)

#define UpdateContainerInstancesStateAsync(...)  SubmitAsync(&ECSClient::UpdateContainerInstancesState, __VA_ARGS__)
#define UpdateContainerInstancesStateCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateContainerInstancesState, REQUEST)

#define UpdateServiceAsync(...)  SubmitAsync(&ECSClient::UpdateService, __VA_ARGS__)
#define UpdateServiceCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateService, REQUEST)

#define UpdateServicePrimaryTaskSetAsync(...)  SubmitAsync(&ECSClient::UpdateServicePrimaryTaskSet, __VA_ARGS__)
#define UpdateServicePrimaryTaskSetCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateServicePrimaryTaskSet, REQUEST)

#define UpdateTaskProtectionAsync(...)  SubmitAsync(&ECSClient::UpdateTaskProtection, __VA_ARGS__)
#define UpdateTaskProtectionCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateTaskProtection, REQUEST)

#define UpdateTaskSetAsync(...)  SubmitAsync(&ECSClient::UpdateTaskSet, __VA_ARGS__)
#define UpdateTaskSetCallable(REQUEST)  SubmitCallable(&ECSClient::UpdateTaskSet, REQUEST)

