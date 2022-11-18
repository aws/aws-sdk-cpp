/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateExtendedSourceServerAsync(...)  SubmitAsync(&DrsClient::CreateExtendedSourceServer, __VA_ARGS__)
#define CreateExtendedSourceServerCallable(REQUEST)  SubmitCallable(&DrsClient::CreateExtendedSourceServer, REQUEST)

#define CreateReplicationConfigurationTemplateAsync(...)  SubmitAsync(&DrsClient::CreateReplicationConfigurationTemplate, __VA_ARGS__)
#define CreateReplicationConfigurationTemplateCallable(REQUEST)  SubmitCallable(&DrsClient::CreateReplicationConfigurationTemplate, REQUEST)

#define DeleteJobAsync(...)  SubmitAsync(&DrsClient::DeleteJob, __VA_ARGS__)
#define DeleteJobCallable(REQUEST)  SubmitCallable(&DrsClient::DeleteJob, REQUEST)

#define DeleteRecoveryInstanceAsync(...)  SubmitAsync(&DrsClient::DeleteRecoveryInstance, __VA_ARGS__)
#define DeleteRecoveryInstanceCallable(REQUEST)  SubmitCallable(&DrsClient::DeleteRecoveryInstance, REQUEST)

#define DeleteReplicationConfigurationTemplateAsync(...)  SubmitAsync(&DrsClient::DeleteReplicationConfigurationTemplate, __VA_ARGS__)
#define DeleteReplicationConfigurationTemplateCallable(REQUEST)  SubmitCallable(&DrsClient::DeleteReplicationConfigurationTemplate, REQUEST)

#define DeleteSourceServerAsync(...)  SubmitAsync(&DrsClient::DeleteSourceServer, __VA_ARGS__)
#define DeleteSourceServerCallable(REQUEST)  SubmitCallable(&DrsClient::DeleteSourceServer, REQUEST)

#define DescribeJobLogItemsAsync(...)  SubmitAsync(&DrsClient::DescribeJobLogItems, __VA_ARGS__)
#define DescribeJobLogItemsCallable(REQUEST)  SubmitCallable(&DrsClient::DescribeJobLogItems, REQUEST)

#define DescribeJobsAsync(...)  SubmitAsync(&DrsClient::DescribeJobs, __VA_ARGS__)
#define DescribeJobsCallable(REQUEST)  SubmitCallable(&DrsClient::DescribeJobs, REQUEST)

#define DescribeRecoveryInstancesAsync(...)  SubmitAsync(&DrsClient::DescribeRecoveryInstances, __VA_ARGS__)
#define DescribeRecoveryInstancesCallable(REQUEST)  SubmitCallable(&DrsClient::DescribeRecoveryInstances, REQUEST)

#define DescribeRecoverySnapshotsAsync(...)  SubmitAsync(&DrsClient::DescribeRecoverySnapshots, __VA_ARGS__)
#define DescribeRecoverySnapshotsCallable(REQUEST)  SubmitCallable(&DrsClient::DescribeRecoverySnapshots, REQUEST)

#define DescribeReplicationConfigurationTemplatesAsync(...)  SubmitAsync(&DrsClient::DescribeReplicationConfigurationTemplates, __VA_ARGS__)
#define DescribeReplicationConfigurationTemplatesCallable(REQUEST)  SubmitCallable(&DrsClient::DescribeReplicationConfigurationTemplates, REQUEST)

#define DescribeSourceServersAsync(...)  SubmitAsync(&DrsClient::DescribeSourceServers, __VA_ARGS__)
#define DescribeSourceServersCallable(REQUEST)  SubmitCallable(&DrsClient::DescribeSourceServers, REQUEST)

#define DisconnectRecoveryInstanceAsync(...)  SubmitAsync(&DrsClient::DisconnectRecoveryInstance, __VA_ARGS__)
#define DisconnectRecoveryInstanceCallable(REQUEST)  SubmitCallable(&DrsClient::DisconnectRecoveryInstance, REQUEST)

#define DisconnectSourceServerAsync(...)  SubmitAsync(&DrsClient::DisconnectSourceServer, __VA_ARGS__)
#define DisconnectSourceServerCallable(REQUEST)  SubmitCallable(&DrsClient::DisconnectSourceServer, REQUEST)

#define GetFailbackReplicationConfigurationAsync(...)  SubmitAsync(&DrsClient::GetFailbackReplicationConfiguration, __VA_ARGS__)
#define GetFailbackReplicationConfigurationCallable(REQUEST)  SubmitCallable(&DrsClient::GetFailbackReplicationConfiguration, REQUEST)

#define GetLaunchConfigurationAsync(...)  SubmitAsync(&DrsClient::GetLaunchConfiguration, __VA_ARGS__)
#define GetLaunchConfigurationCallable(REQUEST)  SubmitCallable(&DrsClient::GetLaunchConfiguration, REQUEST)

#define GetReplicationConfigurationAsync(...)  SubmitAsync(&DrsClient::GetReplicationConfiguration, __VA_ARGS__)
#define GetReplicationConfigurationCallable(REQUEST)  SubmitCallable(&DrsClient::GetReplicationConfiguration, REQUEST)

#define InitializeServiceAsync(...)  SubmitAsync(&DrsClient::InitializeService, __VA_ARGS__)
#define InitializeServiceCallable(REQUEST)  SubmitCallable(&DrsClient::InitializeService, REQUEST)

#define ListExtensibleSourceServersAsync(...)  SubmitAsync(&DrsClient::ListExtensibleSourceServers, __VA_ARGS__)
#define ListExtensibleSourceServersCallable(REQUEST)  SubmitCallable(&DrsClient::ListExtensibleSourceServers, REQUEST)

#define ListStagingAccountsAsync(...)  SubmitAsync(&DrsClient::ListStagingAccounts, __VA_ARGS__)
#define ListStagingAccountsCallable(REQUEST)  SubmitCallable(&DrsClient::ListStagingAccounts, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DrsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DrsClient::ListTagsForResource, REQUEST)

#define RetryDataReplicationAsync(...)  SubmitAsync(&DrsClient::RetryDataReplication, __VA_ARGS__)
#define RetryDataReplicationCallable(REQUEST)  SubmitCallable(&DrsClient::RetryDataReplication, REQUEST)

#define StartFailbackLaunchAsync(...)  SubmitAsync(&DrsClient::StartFailbackLaunch, __VA_ARGS__)
#define StartFailbackLaunchCallable(REQUEST)  SubmitCallable(&DrsClient::StartFailbackLaunch, REQUEST)

#define StartRecoveryAsync(...)  SubmitAsync(&DrsClient::StartRecovery, __VA_ARGS__)
#define StartRecoveryCallable(REQUEST)  SubmitCallable(&DrsClient::StartRecovery, REQUEST)

#define StopFailbackAsync(...)  SubmitAsync(&DrsClient::StopFailback, __VA_ARGS__)
#define StopFailbackCallable(REQUEST)  SubmitCallable(&DrsClient::StopFailback, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DrsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DrsClient::TagResource, REQUEST)

#define TerminateRecoveryInstancesAsync(...)  SubmitAsync(&DrsClient::TerminateRecoveryInstances, __VA_ARGS__)
#define TerminateRecoveryInstancesCallable(REQUEST)  SubmitCallable(&DrsClient::TerminateRecoveryInstances, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DrsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DrsClient::UntagResource, REQUEST)

#define UpdateFailbackReplicationConfigurationAsync(...)  SubmitAsync(&DrsClient::UpdateFailbackReplicationConfiguration, __VA_ARGS__)
#define UpdateFailbackReplicationConfigurationCallable(REQUEST)  SubmitCallable(&DrsClient::UpdateFailbackReplicationConfiguration, REQUEST)

#define UpdateLaunchConfigurationAsync(...)  SubmitAsync(&DrsClient::UpdateLaunchConfiguration, __VA_ARGS__)
#define UpdateLaunchConfigurationCallable(REQUEST)  SubmitCallable(&DrsClient::UpdateLaunchConfiguration, REQUEST)

#define UpdateReplicationConfigurationAsync(...)  SubmitAsync(&DrsClient::UpdateReplicationConfiguration, __VA_ARGS__)
#define UpdateReplicationConfigurationCallable(REQUEST)  SubmitCallable(&DrsClient::UpdateReplicationConfiguration, REQUEST)

#define UpdateReplicationConfigurationTemplateAsync(...)  SubmitAsync(&DrsClient::UpdateReplicationConfigurationTemplate, __VA_ARGS__)
#define UpdateReplicationConfigurationTemplateCallable(REQUEST)  SubmitCallable(&DrsClient::UpdateReplicationConfigurationTemplate, REQUEST)

