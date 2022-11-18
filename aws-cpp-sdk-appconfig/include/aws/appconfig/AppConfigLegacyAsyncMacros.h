/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApplicationAsync(...)  SubmitAsync(&AppConfigClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&AppConfigClient::CreateApplication, REQUEST)

#define CreateConfigurationProfileAsync(...)  SubmitAsync(&AppConfigClient::CreateConfigurationProfile, __VA_ARGS__)
#define CreateConfigurationProfileCallable(REQUEST)  SubmitCallable(&AppConfigClient::CreateConfigurationProfile, REQUEST)

#define CreateDeploymentStrategyAsync(...)  SubmitAsync(&AppConfigClient::CreateDeploymentStrategy, __VA_ARGS__)
#define CreateDeploymentStrategyCallable(REQUEST)  SubmitCallable(&AppConfigClient::CreateDeploymentStrategy, REQUEST)

#define CreateEnvironmentAsync(...)  SubmitAsync(&AppConfigClient::CreateEnvironment, __VA_ARGS__)
#define CreateEnvironmentCallable(REQUEST)  SubmitCallable(&AppConfigClient::CreateEnvironment, REQUEST)

#define CreateExtensionAsync(...)  SubmitAsync(&AppConfigClient::CreateExtension, __VA_ARGS__)
#define CreateExtensionCallable(REQUEST)  SubmitCallable(&AppConfigClient::CreateExtension, REQUEST)

#define CreateExtensionAssociationAsync(...)  SubmitAsync(&AppConfigClient::CreateExtensionAssociation, __VA_ARGS__)
#define CreateExtensionAssociationCallable(REQUEST)  SubmitCallable(&AppConfigClient::CreateExtensionAssociation, REQUEST)

#define CreateHostedConfigurationVersionAsync(...)  SubmitAsync(&AppConfigClient::CreateHostedConfigurationVersion, __VA_ARGS__)
#define CreateHostedConfigurationVersionCallable(REQUEST)  SubmitCallable(&AppConfigClient::CreateHostedConfigurationVersion, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&AppConfigClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&AppConfigClient::DeleteApplication, REQUEST)

#define DeleteConfigurationProfileAsync(...)  SubmitAsync(&AppConfigClient::DeleteConfigurationProfile, __VA_ARGS__)
#define DeleteConfigurationProfileCallable(REQUEST)  SubmitCallable(&AppConfigClient::DeleteConfigurationProfile, REQUEST)

#define DeleteDeploymentStrategyAsync(...)  SubmitAsync(&AppConfigClient::DeleteDeploymentStrategy, __VA_ARGS__)
#define DeleteDeploymentStrategyCallable(REQUEST)  SubmitCallable(&AppConfigClient::DeleteDeploymentStrategy, REQUEST)

#define DeleteEnvironmentAsync(...)  SubmitAsync(&AppConfigClient::DeleteEnvironment, __VA_ARGS__)
#define DeleteEnvironmentCallable(REQUEST)  SubmitCallable(&AppConfigClient::DeleteEnvironment, REQUEST)

#define DeleteExtensionAsync(...)  SubmitAsync(&AppConfigClient::DeleteExtension, __VA_ARGS__)
#define DeleteExtensionCallable(REQUEST)  SubmitCallable(&AppConfigClient::DeleteExtension, REQUEST)

#define DeleteExtensionAssociationAsync(...)  SubmitAsync(&AppConfigClient::DeleteExtensionAssociation, __VA_ARGS__)
#define DeleteExtensionAssociationCallable(REQUEST)  SubmitCallable(&AppConfigClient::DeleteExtensionAssociation, REQUEST)

#define DeleteHostedConfigurationVersionAsync(...)  SubmitAsync(&AppConfigClient::DeleteHostedConfigurationVersion, __VA_ARGS__)
#define DeleteHostedConfigurationVersionCallable(REQUEST)  SubmitCallable(&AppConfigClient::DeleteHostedConfigurationVersion, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&AppConfigClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetApplication, REQUEST)

#define GetConfigurationProfileAsync(...)  SubmitAsync(&AppConfigClient::GetConfigurationProfile, __VA_ARGS__)
#define GetConfigurationProfileCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetConfigurationProfile, REQUEST)

#define GetDeploymentAsync(...)  SubmitAsync(&AppConfigClient::GetDeployment, __VA_ARGS__)
#define GetDeploymentCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetDeployment, REQUEST)

#define GetDeploymentStrategyAsync(...)  SubmitAsync(&AppConfigClient::GetDeploymentStrategy, __VA_ARGS__)
#define GetDeploymentStrategyCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetDeploymentStrategy, REQUEST)

#define GetEnvironmentAsync(...)  SubmitAsync(&AppConfigClient::GetEnvironment, __VA_ARGS__)
#define GetEnvironmentCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetEnvironment, REQUEST)

#define GetExtensionAsync(...)  SubmitAsync(&AppConfigClient::GetExtension, __VA_ARGS__)
#define GetExtensionCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetExtension, REQUEST)

#define GetExtensionAssociationAsync(...)  SubmitAsync(&AppConfigClient::GetExtensionAssociation, __VA_ARGS__)
#define GetExtensionAssociationCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetExtensionAssociation, REQUEST)

#define GetHostedConfigurationVersionAsync(...)  SubmitAsync(&AppConfigClient::GetHostedConfigurationVersion, __VA_ARGS__)
#define GetHostedConfigurationVersionCallable(REQUEST)  SubmitCallable(&AppConfigClient::GetHostedConfigurationVersion, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&AppConfigClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListApplications, REQUEST)

#define ListConfigurationProfilesAsync(...)  SubmitAsync(&AppConfigClient::ListConfigurationProfiles, __VA_ARGS__)
#define ListConfigurationProfilesCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListConfigurationProfiles, REQUEST)

#define ListDeploymentStrategiesAsync(...)  SubmitAsync(&AppConfigClient::ListDeploymentStrategies, __VA_ARGS__)
#define ListDeploymentStrategiesCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListDeploymentStrategies, REQUEST)

#define ListDeploymentsAsync(...)  SubmitAsync(&AppConfigClient::ListDeployments, __VA_ARGS__)
#define ListDeploymentsCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListDeployments, REQUEST)

#define ListEnvironmentsAsync(...)  SubmitAsync(&AppConfigClient::ListEnvironments, __VA_ARGS__)
#define ListEnvironmentsCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListEnvironments, REQUEST)

#define ListExtensionAssociationsAsync(...)  SubmitAsync(&AppConfigClient::ListExtensionAssociations, __VA_ARGS__)
#define ListExtensionAssociationsCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListExtensionAssociations, REQUEST)

#define ListExtensionsAsync(...)  SubmitAsync(&AppConfigClient::ListExtensions, __VA_ARGS__)
#define ListExtensionsCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListExtensions, REQUEST)

#define ListHostedConfigurationVersionsAsync(...)  SubmitAsync(&AppConfigClient::ListHostedConfigurationVersions, __VA_ARGS__)
#define ListHostedConfigurationVersionsCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListHostedConfigurationVersions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppConfigClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppConfigClient::ListTagsForResource, REQUEST)

#define StartDeploymentAsync(...)  SubmitAsync(&AppConfigClient::StartDeployment, __VA_ARGS__)
#define StartDeploymentCallable(REQUEST)  SubmitCallable(&AppConfigClient::StartDeployment, REQUEST)

#define StopDeploymentAsync(...)  SubmitAsync(&AppConfigClient::StopDeployment, __VA_ARGS__)
#define StopDeploymentCallable(REQUEST)  SubmitCallable(&AppConfigClient::StopDeployment, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppConfigClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppConfigClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppConfigClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppConfigClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&AppConfigClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&AppConfigClient::UpdateApplication, REQUEST)

#define UpdateConfigurationProfileAsync(...)  SubmitAsync(&AppConfigClient::UpdateConfigurationProfile, __VA_ARGS__)
#define UpdateConfigurationProfileCallable(REQUEST)  SubmitCallable(&AppConfigClient::UpdateConfigurationProfile, REQUEST)

#define UpdateDeploymentStrategyAsync(...)  SubmitAsync(&AppConfigClient::UpdateDeploymentStrategy, __VA_ARGS__)
#define UpdateDeploymentStrategyCallable(REQUEST)  SubmitCallable(&AppConfigClient::UpdateDeploymentStrategy, REQUEST)

#define UpdateEnvironmentAsync(...)  SubmitAsync(&AppConfigClient::UpdateEnvironment, __VA_ARGS__)
#define UpdateEnvironmentCallable(REQUEST)  SubmitCallable(&AppConfigClient::UpdateEnvironment, REQUEST)

#define UpdateExtensionAsync(...)  SubmitAsync(&AppConfigClient::UpdateExtension, __VA_ARGS__)
#define UpdateExtensionCallable(REQUEST)  SubmitCallable(&AppConfigClient::UpdateExtension, REQUEST)

#define UpdateExtensionAssociationAsync(...)  SubmitAsync(&AppConfigClient::UpdateExtensionAssociation, __VA_ARGS__)
#define UpdateExtensionAssociationCallable(REQUEST)  SubmitCallable(&AppConfigClient::UpdateExtensionAssociation, REQUEST)

#define ValidateConfigurationAsync(...)  SubmitAsync(&AppConfigClient::ValidateConfiguration, __VA_ARGS__)
#define ValidateConfigurationCallable(REQUEST)  SubmitCallable(&AppConfigClient::ValidateConfiguration, REQUEST)

