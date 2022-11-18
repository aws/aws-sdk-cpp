/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAppAsync(...)  SubmitAsync(&SMSClient::CreateApp, __VA_ARGS__)
#define CreateAppCallable(REQUEST)  SubmitCallable(&SMSClient::CreateApp, REQUEST)

#define CreateReplicationJobAsync(...)  SubmitAsync(&SMSClient::CreateReplicationJob, __VA_ARGS__)
#define CreateReplicationJobCallable(REQUEST)  SubmitCallable(&SMSClient::CreateReplicationJob, REQUEST)

#define DeleteAppAsync(...)  SubmitAsync(&SMSClient::DeleteApp, __VA_ARGS__)
#define DeleteAppCallable(REQUEST)  SubmitCallable(&SMSClient::DeleteApp, REQUEST)

#define DeleteAppLaunchConfigurationAsync(...)  SubmitAsync(&SMSClient::DeleteAppLaunchConfiguration, __VA_ARGS__)
#define DeleteAppLaunchConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::DeleteAppLaunchConfiguration, REQUEST)

#define DeleteAppReplicationConfigurationAsync(...)  SubmitAsync(&SMSClient::DeleteAppReplicationConfiguration, __VA_ARGS__)
#define DeleteAppReplicationConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::DeleteAppReplicationConfiguration, REQUEST)

#define DeleteAppValidationConfigurationAsync(...)  SubmitAsync(&SMSClient::DeleteAppValidationConfiguration, __VA_ARGS__)
#define DeleteAppValidationConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::DeleteAppValidationConfiguration, REQUEST)

#define DeleteReplicationJobAsync(...)  SubmitAsync(&SMSClient::DeleteReplicationJob, __VA_ARGS__)
#define DeleteReplicationJobCallable(REQUEST)  SubmitCallable(&SMSClient::DeleteReplicationJob, REQUEST)

#define DeleteServerCatalogAsync(...)  SubmitAsync(&SMSClient::DeleteServerCatalog, __VA_ARGS__)
#define DeleteServerCatalogCallable(REQUEST)  SubmitCallable(&SMSClient::DeleteServerCatalog, REQUEST)

#define DisassociateConnectorAsync(...)  SubmitAsync(&SMSClient::DisassociateConnector, __VA_ARGS__)
#define DisassociateConnectorCallable(REQUEST)  SubmitCallable(&SMSClient::DisassociateConnector, REQUEST)

#define GenerateChangeSetAsync(...)  SubmitAsync(&SMSClient::GenerateChangeSet, __VA_ARGS__)
#define GenerateChangeSetCallable(REQUEST)  SubmitCallable(&SMSClient::GenerateChangeSet, REQUEST)

#define GenerateTemplateAsync(...)  SubmitAsync(&SMSClient::GenerateTemplate, __VA_ARGS__)
#define GenerateTemplateCallable(REQUEST)  SubmitCallable(&SMSClient::GenerateTemplate, REQUEST)

#define GetAppAsync(...)  SubmitAsync(&SMSClient::GetApp, __VA_ARGS__)
#define GetAppCallable(REQUEST)  SubmitCallable(&SMSClient::GetApp, REQUEST)

#define GetAppLaunchConfigurationAsync(...)  SubmitAsync(&SMSClient::GetAppLaunchConfiguration, __VA_ARGS__)
#define GetAppLaunchConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::GetAppLaunchConfiguration, REQUEST)

#define GetAppReplicationConfigurationAsync(...)  SubmitAsync(&SMSClient::GetAppReplicationConfiguration, __VA_ARGS__)
#define GetAppReplicationConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::GetAppReplicationConfiguration, REQUEST)

#define GetAppValidationConfigurationAsync(...)  SubmitAsync(&SMSClient::GetAppValidationConfiguration, __VA_ARGS__)
#define GetAppValidationConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::GetAppValidationConfiguration, REQUEST)

#define GetAppValidationOutputAsync(...)  SubmitAsync(&SMSClient::GetAppValidationOutput, __VA_ARGS__)
#define GetAppValidationOutputCallable(REQUEST)  SubmitCallable(&SMSClient::GetAppValidationOutput, REQUEST)

#define GetConnectorsAsync(...)  SubmitAsync(&SMSClient::GetConnectors, __VA_ARGS__)
#define GetConnectorsCallable(REQUEST)  SubmitCallable(&SMSClient::GetConnectors, REQUEST)

#define GetReplicationJobsAsync(...)  SubmitAsync(&SMSClient::GetReplicationJobs, __VA_ARGS__)
#define GetReplicationJobsCallable(REQUEST)  SubmitCallable(&SMSClient::GetReplicationJobs, REQUEST)

#define GetReplicationRunsAsync(...)  SubmitAsync(&SMSClient::GetReplicationRuns, __VA_ARGS__)
#define GetReplicationRunsCallable(REQUEST)  SubmitCallable(&SMSClient::GetReplicationRuns, REQUEST)

#define GetServersAsync(...)  SubmitAsync(&SMSClient::GetServers, __VA_ARGS__)
#define GetServersCallable(REQUEST)  SubmitCallable(&SMSClient::GetServers, REQUEST)

#define ImportAppCatalogAsync(...)  SubmitAsync(&SMSClient::ImportAppCatalog, __VA_ARGS__)
#define ImportAppCatalogCallable(REQUEST)  SubmitCallable(&SMSClient::ImportAppCatalog, REQUEST)

#define ImportServerCatalogAsync(...)  SubmitAsync(&SMSClient::ImportServerCatalog, __VA_ARGS__)
#define ImportServerCatalogCallable(REQUEST)  SubmitCallable(&SMSClient::ImportServerCatalog, REQUEST)

#define LaunchAppAsync(...)  SubmitAsync(&SMSClient::LaunchApp, __VA_ARGS__)
#define LaunchAppCallable(REQUEST)  SubmitCallable(&SMSClient::LaunchApp, REQUEST)

#define ListAppsAsync(...)  SubmitAsync(&SMSClient::ListApps, __VA_ARGS__)
#define ListAppsCallable(REQUEST)  SubmitCallable(&SMSClient::ListApps, REQUEST)

#define NotifyAppValidationOutputAsync(...)  SubmitAsync(&SMSClient::NotifyAppValidationOutput, __VA_ARGS__)
#define NotifyAppValidationOutputCallable(REQUEST)  SubmitCallable(&SMSClient::NotifyAppValidationOutput, REQUEST)

#define PutAppLaunchConfigurationAsync(...)  SubmitAsync(&SMSClient::PutAppLaunchConfiguration, __VA_ARGS__)
#define PutAppLaunchConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::PutAppLaunchConfiguration, REQUEST)

#define PutAppReplicationConfigurationAsync(...)  SubmitAsync(&SMSClient::PutAppReplicationConfiguration, __VA_ARGS__)
#define PutAppReplicationConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::PutAppReplicationConfiguration, REQUEST)

#define PutAppValidationConfigurationAsync(...)  SubmitAsync(&SMSClient::PutAppValidationConfiguration, __VA_ARGS__)
#define PutAppValidationConfigurationCallable(REQUEST)  SubmitCallable(&SMSClient::PutAppValidationConfiguration, REQUEST)

#define StartAppReplicationAsync(...)  SubmitAsync(&SMSClient::StartAppReplication, __VA_ARGS__)
#define StartAppReplicationCallable(REQUEST)  SubmitCallable(&SMSClient::StartAppReplication, REQUEST)

#define StartOnDemandAppReplicationAsync(...)  SubmitAsync(&SMSClient::StartOnDemandAppReplication, __VA_ARGS__)
#define StartOnDemandAppReplicationCallable(REQUEST)  SubmitCallable(&SMSClient::StartOnDemandAppReplication, REQUEST)

#define StartOnDemandReplicationRunAsync(...)  SubmitAsync(&SMSClient::StartOnDemandReplicationRun, __VA_ARGS__)
#define StartOnDemandReplicationRunCallable(REQUEST)  SubmitCallable(&SMSClient::StartOnDemandReplicationRun, REQUEST)

#define StopAppReplicationAsync(...)  SubmitAsync(&SMSClient::StopAppReplication, __VA_ARGS__)
#define StopAppReplicationCallable(REQUEST)  SubmitCallable(&SMSClient::StopAppReplication, REQUEST)

#define TerminateAppAsync(...)  SubmitAsync(&SMSClient::TerminateApp, __VA_ARGS__)
#define TerminateAppCallable(REQUEST)  SubmitCallable(&SMSClient::TerminateApp, REQUEST)

#define UpdateAppAsync(...)  SubmitAsync(&SMSClient::UpdateApp, __VA_ARGS__)
#define UpdateAppCallable(REQUEST)  SubmitCallable(&SMSClient::UpdateApp, REQUEST)

#define UpdateReplicationJobAsync(...)  SubmitAsync(&SMSClient::UpdateReplicationJob, __VA_ARGS__)
#define UpdateReplicationJobCallable(REQUEST)  SubmitCallable(&SMSClient::UpdateReplicationJob, REQUEST)

