/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AbortEnvironmentUpdateAsync(...)  SubmitAsync(&ElasticBeanstalkClient::AbortEnvironmentUpdate, __VA_ARGS__)
#define AbortEnvironmentUpdateCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::AbortEnvironmentUpdate, REQUEST)

#define ApplyEnvironmentManagedActionAsync(...)  SubmitAsync(&ElasticBeanstalkClient::ApplyEnvironmentManagedAction, __VA_ARGS__)
#define ApplyEnvironmentManagedActionCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::ApplyEnvironmentManagedAction, REQUEST)

#define AssociateEnvironmentOperationsRoleAsync(...)  SubmitAsync(&ElasticBeanstalkClient::AssociateEnvironmentOperationsRole, __VA_ARGS__)
#define AssociateEnvironmentOperationsRoleCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::AssociateEnvironmentOperationsRole, REQUEST)

#define CheckDNSAvailabilityAsync(...)  SubmitAsync(&ElasticBeanstalkClient::CheckDNSAvailability, __VA_ARGS__)
#define CheckDNSAvailabilityCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::CheckDNSAvailability, REQUEST)

#define ComposeEnvironmentsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::ComposeEnvironments, __VA_ARGS__)
#define ComposeEnvironmentsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::ComposeEnvironments, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&ElasticBeanstalkClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::CreateApplication, REQUEST)

#define CreateApplicationVersionAsync(...)  SubmitAsync(&ElasticBeanstalkClient::CreateApplicationVersion, __VA_ARGS__)
#define CreateApplicationVersionCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::CreateApplicationVersion, REQUEST)

#define CreateConfigurationTemplateAsync(...)  SubmitAsync(&ElasticBeanstalkClient::CreateConfigurationTemplate, __VA_ARGS__)
#define CreateConfigurationTemplateCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::CreateConfigurationTemplate, REQUEST)

#define CreateEnvironmentAsync(...)  SubmitAsync(&ElasticBeanstalkClient::CreateEnvironment, __VA_ARGS__)
#define CreateEnvironmentCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::CreateEnvironment, REQUEST)

#define CreatePlatformVersionAsync(...)  SubmitAsync(&ElasticBeanstalkClient::CreatePlatformVersion, __VA_ARGS__)
#define CreatePlatformVersionCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::CreatePlatformVersion, REQUEST)

#define CreateStorageLocationAsync(...)  SubmitAsync(&ElasticBeanstalkClient::CreateStorageLocation, __VA_ARGS__)
#define CreateStorageLocationCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::CreateStorageLocation, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DeleteApplication, REQUEST)

#define DeleteApplicationVersionAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DeleteApplicationVersion, __VA_ARGS__)
#define DeleteApplicationVersionCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DeleteApplicationVersion, REQUEST)

#define DeleteConfigurationTemplateAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DeleteConfigurationTemplate, __VA_ARGS__)
#define DeleteConfigurationTemplateCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DeleteConfigurationTemplate, REQUEST)

#define DeleteEnvironmentConfigurationAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DeleteEnvironmentConfiguration, __VA_ARGS__)
#define DeleteEnvironmentConfigurationCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DeleteEnvironmentConfiguration, REQUEST)

#define DeletePlatformVersionAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DeletePlatformVersion, __VA_ARGS__)
#define DeletePlatformVersionCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DeletePlatformVersion, REQUEST)

#define DescribeAccountAttributesAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeAccountAttributes, __VA_ARGS__)
#define DescribeAccountAttributesCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeAccountAttributes, REQUEST)

#define DescribeApplicationVersionsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeApplicationVersions, __VA_ARGS__)
#define DescribeApplicationVersionsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeApplicationVersions, REQUEST)

#define DescribeApplicationsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeApplications, __VA_ARGS__)
#define DescribeApplicationsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeApplications, REQUEST)

#define DescribeConfigurationOptionsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeConfigurationOptions, __VA_ARGS__)
#define DescribeConfigurationOptionsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeConfigurationOptions, REQUEST)

#define DescribeConfigurationSettingsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeConfigurationSettings, __VA_ARGS__)
#define DescribeConfigurationSettingsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeConfigurationSettings, REQUEST)

#define DescribeEnvironmentHealthAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentHealth, __VA_ARGS__)
#define DescribeEnvironmentHealthCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentHealth, REQUEST)

#define DescribeEnvironmentManagedActionHistoryAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistory, __VA_ARGS__)
#define DescribeEnvironmentManagedActionHistoryCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistory, REQUEST)

#define DescribeEnvironmentManagedActionsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentManagedActions, __VA_ARGS__)
#define DescribeEnvironmentManagedActionsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentManagedActions, REQUEST)

#define DescribeEnvironmentResourcesAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentResources, __VA_ARGS__)
#define DescribeEnvironmentResourcesCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentResources, REQUEST)

#define DescribeEnvironmentsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironments, __VA_ARGS__)
#define DescribeEnvironmentsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironments, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeEvents, REQUEST)

#define DescribeInstancesHealthAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribeInstancesHealth, __VA_ARGS__)
#define DescribeInstancesHealthCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribeInstancesHealth, REQUEST)

#define DescribePlatformVersionAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DescribePlatformVersion, __VA_ARGS__)
#define DescribePlatformVersionCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DescribePlatformVersion, REQUEST)

#define DisassociateEnvironmentOperationsRoleAsync(...)  SubmitAsync(&ElasticBeanstalkClient::DisassociateEnvironmentOperationsRole, __VA_ARGS__)
#define DisassociateEnvironmentOperationsRoleCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::DisassociateEnvironmentOperationsRole, REQUEST)

#define ListAvailableSolutionStacksAsync(...)  SubmitAsync(&ElasticBeanstalkClient::ListAvailableSolutionStacks, __VA_ARGS__)
#define ListAvailableSolutionStacksCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::ListAvailableSolutionStacks, REQUEST)

#define ListPlatformBranchesAsync(...)  SubmitAsync(&ElasticBeanstalkClient::ListPlatformBranches, __VA_ARGS__)
#define ListPlatformBranchesCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::ListPlatformBranches, REQUEST)

#define ListPlatformVersionsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::ListPlatformVersions, __VA_ARGS__)
#define ListPlatformVersionsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::ListPlatformVersions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ElasticBeanstalkClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::ListTagsForResource, REQUEST)

#define RebuildEnvironmentAsync(...)  SubmitAsync(&ElasticBeanstalkClient::RebuildEnvironment, __VA_ARGS__)
#define RebuildEnvironmentCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::RebuildEnvironment, REQUEST)

#define RequestEnvironmentInfoAsync(...)  SubmitAsync(&ElasticBeanstalkClient::RequestEnvironmentInfo, __VA_ARGS__)
#define RequestEnvironmentInfoCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::RequestEnvironmentInfo, REQUEST)

#define RestartAppServerAsync(...)  SubmitAsync(&ElasticBeanstalkClient::RestartAppServer, __VA_ARGS__)
#define RestartAppServerCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::RestartAppServer, REQUEST)

#define RetrieveEnvironmentInfoAsync(...)  SubmitAsync(&ElasticBeanstalkClient::RetrieveEnvironmentInfo, __VA_ARGS__)
#define RetrieveEnvironmentInfoCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::RetrieveEnvironmentInfo, REQUEST)

#define SwapEnvironmentCNAMEsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::SwapEnvironmentCNAMEs, __VA_ARGS__)
#define SwapEnvironmentCNAMEsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::SwapEnvironmentCNAMEs, REQUEST)

#define TerminateEnvironmentAsync(...)  SubmitAsync(&ElasticBeanstalkClient::TerminateEnvironment, __VA_ARGS__)
#define TerminateEnvironmentCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::TerminateEnvironment, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&ElasticBeanstalkClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::UpdateApplication, REQUEST)

#define UpdateApplicationResourceLifecycleAsync(...)  SubmitAsync(&ElasticBeanstalkClient::UpdateApplicationResourceLifecycle, __VA_ARGS__)
#define UpdateApplicationResourceLifecycleCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::UpdateApplicationResourceLifecycle, REQUEST)

#define UpdateApplicationVersionAsync(...)  SubmitAsync(&ElasticBeanstalkClient::UpdateApplicationVersion, __VA_ARGS__)
#define UpdateApplicationVersionCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::UpdateApplicationVersion, REQUEST)

#define UpdateConfigurationTemplateAsync(...)  SubmitAsync(&ElasticBeanstalkClient::UpdateConfigurationTemplate, __VA_ARGS__)
#define UpdateConfigurationTemplateCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::UpdateConfigurationTemplate, REQUEST)

#define UpdateEnvironmentAsync(...)  SubmitAsync(&ElasticBeanstalkClient::UpdateEnvironment, __VA_ARGS__)
#define UpdateEnvironmentCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::UpdateEnvironment, REQUEST)

#define UpdateTagsForResourceAsync(...)  SubmitAsync(&ElasticBeanstalkClient::UpdateTagsForResource, __VA_ARGS__)
#define UpdateTagsForResourceCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::UpdateTagsForResource, REQUEST)

#define ValidateConfigurationSettingsAsync(...)  SubmitAsync(&ElasticBeanstalkClient::ValidateConfigurationSettings, __VA_ARGS__)
#define ValidateConfigurationSettingsCallable(REQUEST)  SubmitCallable(&ElasticBeanstalkClient::ValidateConfigurationSettings, REQUEST)

