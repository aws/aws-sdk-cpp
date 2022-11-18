/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDevicePoolAsync(...)  SubmitAsync(&DeviceFarmClient::CreateDevicePool, __VA_ARGS__)
#define CreateDevicePoolCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateDevicePool, REQUEST)

#define CreateInstanceProfileAsync(...)  SubmitAsync(&DeviceFarmClient::CreateInstanceProfile, __VA_ARGS__)
#define CreateInstanceProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateInstanceProfile, REQUEST)

#define CreateNetworkProfileAsync(...)  SubmitAsync(&DeviceFarmClient::CreateNetworkProfile, __VA_ARGS__)
#define CreateNetworkProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateNetworkProfile, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&DeviceFarmClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateProject, REQUEST)

#define CreateRemoteAccessSessionAsync(...)  SubmitAsync(&DeviceFarmClient::CreateRemoteAccessSession, __VA_ARGS__)
#define CreateRemoteAccessSessionCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateRemoteAccessSession, REQUEST)

#define CreateTestGridProjectAsync(...)  SubmitAsync(&DeviceFarmClient::CreateTestGridProject, __VA_ARGS__)
#define CreateTestGridProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateTestGridProject, REQUEST)

#define CreateTestGridUrlAsync(...)  SubmitAsync(&DeviceFarmClient::CreateTestGridUrl, __VA_ARGS__)
#define CreateTestGridUrlCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateTestGridUrl, REQUEST)

#define CreateUploadAsync(...)  SubmitAsync(&DeviceFarmClient::CreateUpload, __VA_ARGS__)
#define CreateUploadCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateUpload, REQUEST)

#define CreateVPCEConfigurationAsync(...)  SubmitAsync(&DeviceFarmClient::CreateVPCEConfiguration, __VA_ARGS__)
#define CreateVPCEConfigurationCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::CreateVPCEConfiguration, REQUEST)

#define DeleteDevicePoolAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteDevicePool, __VA_ARGS__)
#define DeleteDevicePoolCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteDevicePool, REQUEST)

#define DeleteInstanceProfileAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteInstanceProfile, __VA_ARGS__)
#define DeleteInstanceProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteInstanceProfile, REQUEST)

#define DeleteNetworkProfileAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteNetworkProfile, __VA_ARGS__)
#define DeleteNetworkProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteNetworkProfile, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteProject, REQUEST)

#define DeleteRemoteAccessSessionAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteRemoteAccessSession, __VA_ARGS__)
#define DeleteRemoteAccessSessionCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteRemoteAccessSession, REQUEST)

#define DeleteRunAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteRun, __VA_ARGS__)
#define DeleteRunCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteRun, REQUEST)

#define DeleteTestGridProjectAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteTestGridProject, __VA_ARGS__)
#define DeleteTestGridProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteTestGridProject, REQUEST)

#define DeleteUploadAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteUpload, __VA_ARGS__)
#define DeleteUploadCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteUpload, REQUEST)

#define DeleteVPCEConfigurationAsync(...)  SubmitAsync(&DeviceFarmClient::DeleteVPCEConfiguration, __VA_ARGS__)
#define DeleteVPCEConfigurationCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::DeleteVPCEConfiguration, REQUEST)

#define GetAccountSettingsAsync(...)  SubmitAsync(&DeviceFarmClient::GetAccountSettings, __VA_ARGS__)
#define GetAccountSettingsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetAccountSettings, REQUEST)

#define GetDeviceAsync(...)  SubmitAsync(&DeviceFarmClient::GetDevice, __VA_ARGS__)
#define GetDeviceCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetDevice, REQUEST)

#define GetDeviceInstanceAsync(...)  SubmitAsync(&DeviceFarmClient::GetDeviceInstance, __VA_ARGS__)
#define GetDeviceInstanceCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetDeviceInstance, REQUEST)

#define GetDevicePoolAsync(...)  SubmitAsync(&DeviceFarmClient::GetDevicePool, __VA_ARGS__)
#define GetDevicePoolCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetDevicePool, REQUEST)

#define GetDevicePoolCompatibilityAsync(...)  SubmitAsync(&DeviceFarmClient::GetDevicePoolCompatibility, __VA_ARGS__)
#define GetDevicePoolCompatibilityCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetDevicePoolCompatibility, REQUEST)

#define GetInstanceProfileAsync(...)  SubmitAsync(&DeviceFarmClient::GetInstanceProfile, __VA_ARGS__)
#define GetInstanceProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetInstanceProfile, REQUEST)

#define GetJobAsync(...)  SubmitAsync(&DeviceFarmClient::GetJob, __VA_ARGS__)
#define GetJobCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetJob, REQUEST)

#define GetNetworkProfileAsync(...)  SubmitAsync(&DeviceFarmClient::GetNetworkProfile, __VA_ARGS__)
#define GetNetworkProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetNetworkProfile, REQUEST)

#define GetOfferingStatusAsync(...)  SubmitAsync(&DeviceFarmClient::GetOfferingStatus, __VA_ARGS__)
#define GetOfferingStatusCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetOfferingStatus, REQUEST)

#define GetProjectAsync(...)  SubmitAsync(&DeviceFarmClient::GetProject, __VA_ARGS__)
#define GetProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetProject, REQUEST)

#define GetRemoteAccessSessionAsync(...)  SubmitAsync(&DeviceFarmClient::GetRemoteAccessSession, __VA_ARGS__)
#define GetRemoteAccessSessionCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetRemoteAccessSession, REQUEST)

#define GetRunAsync(...)  SubmitAsync(&DeviceFarmClient::GetRun, __VA_ARGS__)
#define GetRunCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetRun, REQUEST)

#define GetSuiteAsync(...)  SubmitAsync(&DeviceFarmClient::GetSuite, __VA_ARGS__)
#define GetSuiteCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetSuite, REQUEST)

#define GetTestAsync(...)  SubmitAsync(&DeviceFarmClient::GetTest, __VA_ARGS__)
#define GetTestCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetTest, REQUEST)

#define GetTestGridProjectAsync(...)  SubmitAsync(&DeviceFarmClient::GetTestGridProject, __VA_ARGS__)
#define GetTestGridProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetTestGridProject, REQUEST)

#define GetTestGridSessionAsync(...)  SubmitAsync(&DeviceFarmClient::GetTestGridSession, __VA_ARGS__)
#define GetTestGridSessionCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetTestGridSession, REQUEST)

#define GetUploadAsync(...)  SubmitAsync(&DeviceFarmClient::GetUpload, __VA_ARGS__)
#define GetUploadCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetUpload, REQUEST)

#define GetVPCEConfigurationAsync(...)  SubmitAsync(&DeviceFarmClient::GetVPCEConfiguration, __VA_ARGS__)
#define GetVPCEConfigurationCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::GetVPCEConfiguration, REQUEST)

#define InstallToRemoteAccessSessionAsync(...)  SubmitAsync(&DeviceFarmClient::InstallToRemoteAccessSession, __VA_ARGS__)
#define InstallToRemoteAccessSessionCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::InstallToRemoteAccessSession, REQUEST)

#define ListArtifactsAsync(...)  SubmitAsync(&DeviceFarmClient::ListArtifacts, __VA_ARGS__)
#define ListArtifactsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListArtifacts, REQUEST)

#define ListDeviceInstancesAsync(...)  SubmitAsync(&DeviceFarmClient::ListDeviceInstances, __VA_ARGS__)
#define ListDeviceInstancesCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListDeviceInstances, REQUEST)

#define ListDevicePoolsAsync(...)  SubmitAsync(&DeviceFarmClient::ListDevicePools, __VA_ARGS__)
#define ListDevicePoolsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListDevicePools, REQUEST)

#define ListDevicesAsync(...)  SubmitAsync(&DeviceFarmClient::ListDevices, __VA_ARGS__)
#define ListDevicesCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListDevices, REQUEST)

#define ListInstanceProfilesAsync(...)  SubmitAsync(&DeviceFarmClient::ListInstanceProfiles, __VA_ARGS__)
#define ListInstanceProfilesCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListInstanceProfiles, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&DeviceFarmClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListJobs, REQUEST)

#define ListNetworkProfilesAsync(...)  SubmitAsync(&DeviceFarmClient::ListNetworkProfiles, __VA_ARGS__)
#define ListNetworkProfilesCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListNetworkProfiles, REQUEST)

#define ListOfferingPromotionsAsync(...)  SubmitAsync(&DeviceFarmClient::ListOfferingPromotions, __VA_ARGS__)
#define ListOfferingPromotionsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListOfferingPromotions, REQUEST)

#define ListOfferingTransactionsAsync(...)  SubmitAsync(&DeviceFarmClient::ListOfferingTransactions, __VA_ARGS__)
#define ListOfferingTransactionsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListOfferingTransactions, REQUEST)

#define ListOfferingsAsync(...)  SubmitAsync(&DeviceFarmClient::ListOfferings, __VA_ARGS__)
#define ListOfferingsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListOfferings, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&DeviceFarmClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListProjects, REQUEST)

#define ListRemoteAccessSessionsAsync(...)  SubmitAsync(&DeviceFarmClient::ListRemoteAccessSessions, __VA_ARGS__)
#define ListRemoteAccessSessionsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListRemoteAccessSessions, REQUEST)

#define ListRunsAsync(...)  SubmitAsync(&DeviceFarmClient::ListRuns, __VA_ARGS__)
#define ListRunsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListRuns, REQUEST)

#define ListSamplesAsync(...)  SubmitAsync(&DeviceFarmClient::ListSamples, __VA_ARGS__)
#define ListSamplesCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListSamples, REQUEST)

#define ListSuitesAsync(...)  SubmitAsync(&DeviceFarmClient::ListSuites, __VA_ARGS__)
#define ListSuitesCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListSuites, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DeviceFarmClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListTagsForResource, REQUEST)

#define ListTestGridProjectsAsync(...)  SubmitAsync(&DeviceFarmClient::ListTestGridProjects, __VA_ARGS__)
#define ListTestGridProjectsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListTestGridProjects, REQUEST)

#define ListTestGridSessionActionsAsync(...)  SubmitAsync(&DeviceFarmClient::ListTestGridSessionActions, __VA_ARGS__)
#define ListTestGridSessionActionsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListTestGridSessionActions, REQUEST)

#define ListTestGridSessionArtifactsAsync(...)  SubmitAsync(&DeviceFarmClient::ListTestGridSessionArtifacts, __VA_ARGS__)
#define ListTestGridSessionArtifactsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListTestGridSessionArtifacts, REQUEST)

#define ListTestGridSessionsAsync(...)  SubmitAsync(&DeviceFarmClient::ListTestGridSessions, __VA_ARGS__)
#define ListTestGridSessionsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListTestGridSessions, REQUEST)

#define ListTestsAsync(...)  SubmitAsync(&DeviceFarmClient::ListTests, __VA_ARGS__)
#define ListTestsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListTests, REQUEST)

#define ListUniqueProblemsAsync(...)  SubmitAsync(&DeviceFarmClient::ListUniqueProblems, __VA_ARGS__)
#define ListUniqueProblemsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListUniqueProblems, REQUEST)

#define ListUploadsAsync(...)  SubmitAsync(&DeviceFarmClient::ListUploads, __VA_ARGS__)
#define ListUploadsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListUploads, REQUEST)

#define ListVPCEConfigurationsAsync(...)  SubmitAsync(&DeviceFarmClient::ListVPCEConfigurations, __VA_ARGS__)
#define ListVPCEConfigurationsCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ListVPCEConfigurations, REQUEST)

#define PurchaseOfferingAsync(...)  SubmitAsync(&DeviceFarmClient::PurchaseOffering, __VA_ARGS__)
#define PurchaseOfferingCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::PurchaseOffering, REQUEST)

#define RenewOfferingAsync(...)  SubmitAsync(&DeviceFarmClient::RenewOffering, __VA_ARGS__)
#define RenewOfferingCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::RenewOffering, REQUEST)

#define ScheduleRunAsync(...)  SubmitAsync(&DeviceFarmClient::ScheduleRun, __VA_ARGS__)
#define ScheduleRunCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::ScheduleRun, REQUEST)

#define StopJobAsync(...)  SubmitAsync(&DeviceFarmClient::StopJob, __VA_ARGS__)
#define StopJobCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::StopJob, REQUEST)

#define StopRemoteAccessSessionAsync(...)  SubmitAsync(&DeviceFarmClient::StopRemoteAccessSession, __VA_ARGS__)
#define StopRemoteAccessSessionCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::StopRemoteAccessSession, REQUEST)

#define StopRunAsync(...)  SubmitAsync(&DeviceFarmClient::StopRun, __VA_ARGS__)
#define StopRunCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::StopRun, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DeviceFarmClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DeviceFarmClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UntagResource, REQUEST)

#define UpdateDeviceInstanceAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateDeviceInstance, __VA_ARGS__)
#define UpdateDeviceInstanceCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateDeviceInstance, REQUEST)

#define UpdateDevicePoolAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateDevicePool, __VA_ARGS__)
#define UpdateDevicePoolCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateDevicePool, REQUEST)

#define UpdateInstanceProfileAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateInstanceProfile, __VA_ARGS__)
#define UpdateInstanceProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateInstanceProfile, REQUEST)

#define UpdateNetworkProfileAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateNetworkProfile, __VA_ARGS__)
#define UpdateNetworkProfileCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateNetworkProfile, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateProject, REQUEST)

#define UpdateTestGridProjectAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateTestGridProject, __VA_ARGS__)
#define UpdateTestGridProjectCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateTestGridProject, REQUEST)

#define UpdateUploadAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateUpload, __VA_ARGS__)
#define UpdateUploadCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateUpload, REQUEST)

#define UpdateVPCEConfigurationAsync(...)  SubmitAsync(&DeviceFarmClient::UpdateVPCEConfiguration, __VA_ARGS__)
#define UpdateVPCEConfigurationCallable(REQUEST)  SubmitCallable(&DeviceFarmClient::UpdateVPCEConfiguration, REQUEST)

