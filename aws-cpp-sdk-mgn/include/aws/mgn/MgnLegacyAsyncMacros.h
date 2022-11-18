/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ChangeServerLifeCycleStateAsync(...)  SubmitAsync(&MgnClient::ChangeServerLifeCycleState, __VA_ARGS__)
#define ChangeServerLifeCycleStateCallable(REQUEST)  SubmitCallable(&MgnClient::ChangeServerLifeCycleState, REQUEST)

#define CreateLaunchConfigurationTemplateAsync(...)  SubmitAsync(&MgnClient::CreateLaunchConfigurationTemplate, __VA_ARGS__)
#define CreateLaunchConfigurationTemplateCallable(REQUEST)  SubmitCallable(&MgnClient::CreateLaunchConfigurationTemplate, REQUEST)

#define CreateReplicationConfigurationTemplateAsync(...)  SubmitAsync(&MgnClient::CreateReplicationConfigurationTemplate, __VA_ARGS__)
#define CreateReplicationConfigurationTemplateCallable(REQUEST)  SubmitCallable(&MgnClient::CreateReplicationConfigurationTemplate, REQUEST)

#define DeleteJobAsync(...)  SubmitAsync(&MgnClient::DeleteJob, __VA_ARGS__)
#define DeleteJobCallable(REQUEST)  SubmitCallable(&MgnClient::DeleteJob, REQUEST)

#define DeleteLaunchConfigurationTemplateAsync(...)  SubmitAsync(&MgnClient::DeleteLaunchConfigurationTemplate, __VA_ARGS__)
#define DeleteLaunchConfigurationTemplateCallable(REQUEST)  SubmitCallable(&MgnClient::DeleteLaunchConfigurationTemplate, REQUEST)

#define DeleteReplicationConfigurationTemplateAsync(...)  SubmitAsync(&MgnClient::DeleteReplicationConfigurationTemplate, __VA_ARGS__)
#define DeleteReplicationConfigurationTemplateCallable(REQUEST)  SubmitCallable(&MgnClient::DeleteReplicationConfigurationTemplate, REQUEST)

#define DeleteSourceServerAsync(...)  SubmitAsync(&MgnClient::DeleteSourceServer, __VA_ARGS__)
#define DeleteSourceServerCallable(REQUEST)  SubmitCallable(&MgnClient::DeleteSourceServer, REQUEST)

#define DeleteVcenterClientAsync(...)  SubmitAsync(&MgnClient::DeleteVcenterClient, __VA_ARGS__)
#define DeleteVcenterClientCallable(REQUEST)  SubmitCallable(&MgnClient::DeleteVcenterClient, REQUEST)

#define DescribeJobLogItemsAsync(...)  SubmitAsync(&MgnClient::DescribeJobLogItems, __VA_ARGS__)
#define DescribeJobLogItemsCallable(REQUEST)  SubmitCallable(&MgnClient::DescribeJobLogItems, REQUEST)

#define DescribeJobsAsync(...)  SubmitAsync(&MgnClient::DescribeJobs, __VA_ARGS__)
#define DescribeJobsCallable(REQUEST)  SubmitCallable(&MgnClient::DescribeJobs, REQUEST)

#define DescribeLaunchConfigurationTemplatesAsync(...)  SubmitAsync(&MgnClient::DescribeLaunchConfigurationTemplates, __VA_ARGS__)
#define DescribeLaunchConfigurationTemplatesCallable(REQUEST)  SubmitCallable(&MgnClient::DescribeLaunchConfigurationTemplates, REQUEST)

#define DescribeReplicationConfigurationTemplatesAsync(...)  SubmitAsync(&MgnClient::DescribeReplicationConfigurationTemplates, __VA_ARGS__)
#define DescribeReplicationConfigurationTemplatesCallable(REQUEST)  SubmitCallable(&MgnClient::DescribeReplicationConfigurationTemplates, REQUEST)

#define DescribeSourceServersAsync(...)  SubmitAsync(&MgnClient::DescribeSourceServers, __VA_ARGS__)
#define DescribeSourceServersCallable(REQUEST)  SubmitCallable(&MgnClient::DescribeSourceServers, REQUEST)

#define DescribeVcenterClientsAsync(...)  SubmitAsync(&MgnClient::DescribeVcenterClients, __VA_ARGS__)
#define DescribeVcenterClientsCallable(REQUEST)  SubmitCallable(&MgnClient::DescribeVcenterClients, REQUEST)

#define DisconnectFromServiceAsync(...)  SubmitAsync(&MgnClient::DisconnectFromService, __VA_ARGS__)
#define DisconnectFromServiceCallable(REQUEST)  SubmitCallable(&MgnClient::DisconnectFromService, REQUEST)

#define FinalizeCutoverAsync(...)  SubmitAsync(&MgnClient::FinalizeCutover, __VA_ARGS__)
#define FinalizeCutoverCallable(REQUEST)  SubmitCallable(&MgnClient::FinalizeCutover, REQUEST)

#define GetLaunchConfigurationAsync(...)  SubmitAsync(&MgnClient::GetLaunchConfiguration, __VA_ARGS__)
#define GetLaunchConfigurationCallable(REQUEST)  SubmitCallable(&MgnClient::GetLaunchConfiguration, REQUEST)

#define GetReplicationConfigurationAsync(...)  SubmitAsync(&MgnClient::GetReplicationConfiguration, __VA_ARGS__)
#define GetReplicationConfigurationCallable(REQUEST)  SubmitCallable(&MgnClient::GetReplicationConfiguration, REQUEST)

#define InitializeServiceAsync(...)  SubmitAsync(&MgnClient::InitializeService, __VA_ARGS__)
#define InitializeServiceCallable(REQUEST)  SubmitCallable(&MgnClient::InitializeService, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MgnClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MgnClient::ListTagsForResource, REQUEST)

#define MarkAsArchivedAsync(...)  SubmitAsync(&MgnClient::MarkAsArchived, __VA_ARGS__)
#define MarkAsArchivedCallable(REQUEST)  SubmitCallable(&MgnClient::MarkAsArchived, REQUEST)

#define RetryDataReplicationAsync(...)  SubmitAsync(&MgnClient::RetryDataReplication, __VA_ARGS__)
#define RetryDataReplicationCallable(REQUEST)  SubmitCallable(&MgnClient::RetryDataReplication, REQUEST)

#define StartCutoverAsync(...)  SubmitAsync(&MgnClient::StartCutover, __VA_ARGS__)
#define StartCutoverCallable(REQUEST)  SubmitCallable(&MgnClient::StartCutover, REQUEST)

#define StartReplicationAsync(...)  SubmitAsync(&MgnClient::StartReplication, __VA_ARGS__)
#define StartReplicationCallable(REQUEST)  SubmitCallable(&MgnClient::StartReplication, REQUEST)

#define StartTestAsync(...)  SubmitAsync(&MgnClient::StartTest, __VA_ARGS__)
#define StartTestCallable(REQUEST)  SubmitCallable(&MgnClient::StartTest, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MgnClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MgnClient::TagResource, REQUEST)

#define TerminateTargetInstancesAsync(...)  SubmitAsync(&MgnClient::TerminateTargetInstances, __VA_ARGS__)
#define TerminateTargetInstancesCallable(REQUEST)  SubmitCallable(&MgnClient::TerminateTargetInstances, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MgnClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MgnClient::UntagResource, REQUEST)

#define UpdateLaunchConfigurationAsync(...)  SubmitAsync(&MgnClient::UpdateLaunchConfiguration, __VA_ARGS__)
#define UpdateLaunchConfigurationCallable(REQUEST)  SubmitCallable(&MgnClient::UpdateLaunchConfiguration, REQUEST)

#define UpdateLaunchConfigurationTemplateAsync(...)  SubmitAsync(&MgnClient::UpdateLaunchConfigurationTemplate, __VA_ARGS__)
#define UpdateLaunchConfigurationTemplateCallable(REQUEST)  SubmitCallable(&MgnClient::UpdateLaunchConfigurationTemplate, REQUEST)

#define UpdateReplicationConfigurationAsync(...)  SubmitAsync(&MgnClient::UpdateReplicationConfiguration, __VA_ARGS__)
#define UpdateReplicationConfigurationCallable(REQUEST)  SubmitCallable(&MgnClient::UpdateReplicationConfiguration, REQUEST)

#define UpdateReplicationConfigurationTemplateAsync(...)  SubmitAsync(&MgnClient::UpdateReplicationConfigurationTemplate, __VA_ARGS__)
#define UpdateReplicationConfigurationTemplateCallable(REQUEST)  SubmitCallable(&MgnClient::UpdateReplicationConfigurationTemplate, REQUEST)

#define UpdateSourceServerReplicationTypeAsync(...)  SubmitAsync(&MgnClient::UpdateSourceServerReplicationType, __VA_ARGS__)
#define UpdateSourceServerReplicationTypeCallable(REQUEST)  SubmitCallable(&MgnClient::UpdateSourceServerReplicationType, REQUEST)

