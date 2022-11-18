/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptEnvironmentAccountConnectionAsync(...)  SubmitAsync(&ProtonClient::AcceptEnvironmentAccountConnection, __VA_ARGS__)
#define AcceptEnvironmentAccountConnectionCallable(REQUEST)  SubmitCallable(&ProtonClient::AcceptEnvironmentAccountConnection, REQUEST)

#define CancelComponentDeploymentAsync(...)  SubmitAsync(&ProtonClient::CancelComponentDeployment, __VA_ARGS__)
#define CancelComponentDeploymentCallable(REQUEST)  SubmitCallable(&ProtonClient::CancelComponentDeployment, REQUEST)

#define CancelEnvironmentDeploymentAsync(...)  SubmitAsync(&ProtonClient::CancelEnvironmentDeployment, __VA_ARGS__)
#define CancelEnvironmentDeploymentCallable(REQUEST)  SubmitCallable(&ProtonClient::CancelEnvironmentDeployment, REQUEST)

#define CancelServiceInstanceDeploymentAsync(...)  SubmitAsync(&ProtonClient::CancelServiceInstanceDeployment, __VA_ARGS__)
#define CancelServiceInstanceDeploymentCallable(REQUEST)  SubmitCallable(&ProtonClient::CancelServiceInstanceDeployment, REQUEST)

#define CancelServicePipelineDeploymentAsync(...)  SubmitAsync(&ProtonClient::CancelServicePipelineDeployment, __VA_ARGS__)
#define CancelServicePipelineDeploymentCallable(REQUEST)  SubmitCallable(&ProtonClient::CancelServicePipelineDeployment, REQUEST)

#define CreateComponentAsync(...)  SubmitAsync(&ProtonClient::CreateComponent, __VA_ARGS__)
#define CreateComponentCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateComponent, REQUEST)

#define CreateEnvironmentAsync(...)  SubmitAsync(&ProtonClient::CreateEnvironment, __VA_ARGS__)
#define CreateEnvironmentCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateEnvironment, REQUEST)

#define CreateEnvironmentAccountConnectionAsync(...)  SubmitAsync(&ProtonClient::CreateEnvironmentAccountConnection, __VA_ARGS__)
#define CreateEnvironmentAccountConnectionCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateEnvironmentAccountConnection, REQUEST)

#define CreateEnvironmentTemplateAsync(...)  SubmitAsync(&ProtonClient::CreateEnvironmentTemplate, __VA_ARGS__)
#define CreateEnvironmentTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateEnvironmentTemplate, REQUEST)

#define CreateEnvironmentTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::CreateEnvironmentTemplateVersion, __VA_ARGS__)
#define CreateEnvironmentTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateEnvironmentTemplateVersion, REQUEST)

#define CreateRepositoryAsync(...)  SubmitAsync(&ProtonClient::CreateRepository, __VA_ARGS__)
#define CreateRepositoryCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateRepository, REQUEST)

#define CreateServiceAsync(...)  SubmitAsync(&ProtonClient::CreateService, __VA_ARGS__)
#define CreateServiceCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateService, REQUEST)

#define CreateServiceTemplateAsync(...)  SubmitAsync(&ProtonClient::CreateServiceTemplate, __VA_ARGS__)
#define CreateServiceTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateServiceTemplate, REQUEST)

#define CreateServiceTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::CreateServiceTemplateVersion, __VA_ARGS__)
#define CreateServiceTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateServiceTemplateVersion, REQUEST)

#define CreateTemplateSyncConfigAsync(...)  SubmitAsync(&ProtonClient::CreateTemplateSyncConfig, __VA_ARGS__)
#define CreateTemplateSyncConfigCallable(REQUEST)  SubmitCallable(&ProtonClient::CreateTemplateSyncConfig, REQUEST)

#define DeleteComponentAsync(...)  SubmitAsync(&ProtonClient::DeleteComponent, __VA_ARGS__)
#define DeleteComponentCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteComponent, REQUEST)

#define DeleteEnvironmentAsync(...)  SubmitAsync(&ProtonClient::DeleteEnvironment, __VA_ARGS__)
#define DeleteEnvironmentCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteEnvironment, REQUEST)

#define DeleteEnvironmentAccountConnectionAsync(...)  SubmitAsync(&ProtonClient::DeleteEnvironmentAccountConnection, __VA_ARGS__)
#define DeleteEnvironmentAccountConnectionCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteEnvironmentAccountConnection, REQUEST)

#define DeleteEnvironmentTemplateAsync(...)  SubmitAsync(&ProtonClient::DeleteEnvironmentTemplate, __VA_ARGS__)
#define DeleteEnvironmentTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteEnvironmentTemplate, REQUEST)

#define DeleteEnvironmentTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::DeleteEnvironmentTemplateVersion, __VA_ARGS__)
#define DeleteEnvironmentTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteEnvironmentTemplateVersion, REQUEST)

#define DeleteRepositoryAsync(...)  SubmitAsync(&ProtonClient::DeleteRepository, __VA_ARGS__)
#define DeleteRepositoryCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteRepository, REQUEST)

#define DeleteServiceAsync(...)  SubmitAsync(&ProtonClient::DeleteService, __VA_ARGS__)
#define DeleteServiceCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteService, REQUEST)

#define DeleteServiceTemplateAsync(...)  SubmitAsync(&ProtonClient::DeleteServiceTemplate, __VA_ARGS__)
#define DeleteServiceTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteServiceTemplate, REQUEST)

#define DeleteServiceTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::DeleteServiceTemplateVersion, __VA_ARGS__)
#define DeleteServiceTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteServiceTemplateVersion, REQUEST)

#define DeleteTemplateSyncConfigAsync(...)  SubmitAsync(&ProtonClient::DeleteTemplateSyncConfig, __VA_ARGS__)
#define DeleteTemplateSyncConfigCallable(REQUEST)  SubmitCallable(&ProtonClient::DeleteTemplateSyncConfig, REQUEST)

#define GetAccountSettingsAsync(...)  SubmitAsync(&ProtonClient::GetAccountSettings, __VA_ARGS__)
#define GetAccountSettingsCallable(REQUEST)  SubmitCallable(&ProtonClient::GetAccountSettings, REQUEST)

#define GetComponentAsync(...)  SubmitAsync(&ProtonClient::GetComponent, __VA_ARGS__)
#define GetComponentCallable(REQUEST)  SubmitCallable(&ProtonClient::GetComponent, REQUEST)

#define GetEnvironmentAsync(...)  SubmitAsync(&ProtonClient::GetEnvironment, __VA_ARGS__)
#define GetEnvironmentCallable(REQUEST)  SubmitCallable(&ProtonClient::GetEnvironment, REQUEST)

#define GetEnvironmentAccountConnectionAsync(...)  SubmitAsync(&ProtonClient::GetEnvironmentAccountConnection, __VA_ARGS__)
#define GetEnvironmentAccountConnectionCallable(REQUEST)  SubmitCallable(&ProtonClient::GetEnvironmentAccountConnection, REQUEST)

#define GetEnvironmentTemplateAsync(...)  SubmitAsync(&ProtonClient::GetEnvironmentTemplate, __VA_ARGS__)
#define GetEnvironmentTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::GetEnvironmentTemplate, REQUEST)

#define GetEnvironmentTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::GetEnvironmentTemplateVersion, __VA_ARGS__)
#define GetEnvironmentTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::GetEnvironmentTemplateVersion, REQUEST)

#define GetRepositoryAsync(...)  SubmitAsync(&ProtonClient::GetRepository, __VA_ARGS__)
#define GetRepositoryCallable(REQUEST)  SubmitCallable(&ProtonClient::GetRepository, REQUEST)

#define GetRepositorySyncStatusAsync(...)  SubmitAsync(&ProtonClient::GetRepositorySyncStatus, __VA_ARGS__)
#define GetRepositorySyncStatusCallable(REQUEST)  SubmitCallable(&ProtonClient::GetRepositorySyncStatus, REQUEST)

#define GetServiceAsync(...)  SubmitAsync(&ProtonClient::GetService, __VA_ARGS__)
#define GetServiceCallable(REQUEST)  SubmitCallable(&ProtonClient::GetService, REQUEST)

#define GetServiceInstanceAsync(...)  SubmitAsync(&ProtonClient::GetServiceInstance, __VA_ARGS__)
#define GetServiceInstanceCallable(REQUEST)  SubmitCallable(&ProtonClient::GetServiceInstance, REQUEST)

#define GetServiceTemplateAsync(...)  SubmitAsync(&ProtonClient::GetServiceTemplate, __VA_ARGS__)
#define GetServiceTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::GetServiceTemplate, REQUEST)

#define GetServiceTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::GetServiceTemplateVersion, __VA_ARGS__)
#define GetServiceTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::GetServiceTemplateVersion, REQUEST)

#define GetTemplateSyncConfigAsync(...)  SubmitAsync(&ProtonClient::GetTemplateSyncConfig, __VA_ARGS__)
#define GetTemplateSyncConfigCallable(REQUEST)  SubmitCallable(&ProtonClient::GetTemplateSyncConfig, REQUEST)

#define GetTemplateSyncStatusAsync(...)  SubmitAsync(&ProtonClient::GetTemplateSyncStatus, __VA_ARGS__)
#define GetTemplateSyncStatusCallable(REQUEST)  SubmitCallable(&ProtonClient::GetTemplateSyncStatus, REQUEST)

#define ListComponentOutputsAsync(...)  SubmitAsync(&ProtonClient::ListComponentOutputs, __VA_ARGS__)
#define ListComponentOutputsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListComponentOutputs, REQUEST)

#define ListComponentProvisionedResourcesAsync(...)  SubmitAsync(&ProtonClient::ListComponentProvisionedResources, __VA_ARGS__)
#define ListComponentProvisionedResourcesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListComponentProvisionedResources, REQUEST)

#define ListComponentsAsync(...)  SubmitAsync(&ProtonClient::ListComponents, __VA_ARGS__)
#define ListComponentsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListComponents, REQUEST)

#define ListEnvironmentAccountConnectionsAsync(...)  SubmitAsync(&ProtonClient::ListEnvironmentAccountConnections, __VA_ARGS__)
#define ListEnvironmentAccountConnectionsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListEnvironmentAccountConnections, REQUEST)

#define ListEnvironmentOutputsAsync(...)  SubmitAsync(&ProtonClient::ListEnvironmentOutputs, __VA_ARGS__)
#define ListEnvironmentOutputsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListEnvironmentOutputs, REQUEST)

#define ListEnvironmentProvisionedResourcesAsync(...)  SubmitAsync(&ProtonClient::ListEnvironmentProvisionedResources, __VA_ARGS__)
#define ListEnvironmentProvisionedResourcesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListEnvironmentProvisionedResources, REQUEST)

#define ListEnvironmentTemplateVersionsAsync(...)  SubmitAsync(&ProtonClient::ListEnvironmentTemplateVersions, __VA_ARGS__)
#define ListEnvironmentTemplateVersionsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListEnvironmentTemplateVersions, REQUEST)

#define ListEnvironmentTemplatesAsync(...)  SubmitAsync(&ProtonClient::ListEnvironmentTemplates, __VA_ARGS__)
#define ListEnvironmentTemplatesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListEnvironmentTemplates, REQUEST)

#define ListEnvironmentsAsync(...)  SubmitAsync(&ProtonClient::ListEnvironments, __VA_ARGS__)
#define ListEnvironmentsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListEnvironments, REQUEST)

#define ListRepositoriesAsync(...)  SubmitAsync(&ProtonClient::ListRepositories, __VA_ARGS__)
#define ListRepositoriesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListRepositories, REQUEST)

#define ListRepositorySyncDefinitionsAsync(...)  SubmitAsync(&ProtonClient::ListRepositorySyncDefinitions, __VA_ARGS__)
#define ListRepositorySyncDefinitionsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListRepositorySyncDefinitions, REQUEST)

#define ListServiceInstanceOutputsAsync(...)  SubmitAsync(&ProtonClient::ListServiceInstanceOutputs, __VA_ARGS__)
#define ListServiceInstanceOutputsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServiceInstanceOutputs, REQUEST)

#define ListServiceInstanceProvisionedResourcesAsync(...)  SubmitAsync(&ProtonClient::ListServiceInstanceProvisionedResources, __VA_ARGS__)
#define ListServiceInstanceProvisionedResourcesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServiceInstanceProvisionedResources, REQUEST)

#define ListServiceInstancesAsync(...)  SubmitAsync(&ProtonClient::ListServiceInstances, __VA_ARGS__)
#define ListServiceInstancesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServiceInstances, REQUEST)

#define ListServicePipelineOutputsAsync(...)  SubmitAsync(&ProtonClient::ListServicePipelineOutputs, __VA_ARGS__)
#define ListServicePipelineOutputsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServicePipelineOutputs, REQUEST)

#define ListServicePipelineProvisionedResourcesAsync(...)  SubmitAsync(&ProtonClient::ListServicePipelineProvisionedResources, __VA_ARGS__)
#define ListServicePipelineProvisionedResourcesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServicePipelineProvisionedResources, REQUEST)

#define ListServiceTemplateVersionsAsync(...)  SubmitAsync(&ProtonClient::ListServiceTemplateVersions, __VA_ARGS__)
#define ListServiceTemplateVersionsCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServiceTemplateVersions, REQUEST)

#define ListServiceTemplatesAsync(...)  SubmitAsync(&ProtonClient::ListServiceTemplates, __VA_ARGS__)
#define ListServiceTemplatesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServiceTemplates, REQUEST)

#define ListServicesAsync(...)  SubmitAsync(&ProtonClient::ListServices, __VA_ARGS__)
#define ListServicesCallable(REQUEST)  SubmitCallable(&ProtonClient::ListServices, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ProtonClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ProtonClient::ListTagsForResource, REQUEST)

#define NotifyResourceDeploymentStatusChangeAsync(...)  SubmitAsync(&ProtonClient::NotifyResourceDeploymentStatusChange, __VA_ARGS__)
#define NotifyResourceDeploymentStatusChangeCallable(REQUEST)  SubmitCallable(&ProtonClient::NotifyResourceDeploymentStatusChange, REQUEST)

#define RejectEnvironmentAccountConnectionAsync(...)  SubmitAsync(&ProtonClient::RejectEnvironmentAccountConnection, __VA_ARGS__)
#define RejectEnvironmentAccountConnectionCallable(REQUEST)  SubmitCallable(&ProtonClient::RejectEnvironmentAccountConnection, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ProtonClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ProtonClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ProtonClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ProtonClient::UntagResource, REQUEST)

#define UpdateAccountSettingsAsync(...)  SubmitAsync(&ProtonClient::UpdateAccountSettings, __VA_ARGS__)
#define UpdateAccountSettingsCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateAccountSettings, REQUEST)

#define UpdateComponentAsync(...)  SubmitAsync(&ProtonClient::UpdateComponent, __VA_ARGS__)
#define UpdateComponentCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateComponent, REQUEST)

#define UpdateEnvironmentAsync(...)  SubmitAsync(&ProtonClient::UpdateEnvironment, __VA_ARGS__)
#define UpdateEnvironmentCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateEnvironment, REQUEST)

#define UpdateEnvironmentAccountConnectionAsync(...)  SubmitAsync(&ProtonClient::UpdateEnvironmentAccountConnection, __VA_ARGS__)
#define UpdateEnvironmentAccountConnectionCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateEnvironmentAccountConnection, REQUEST)

#define UpdateEnvironmentTemplateAsync(...)  SubmitAsync(&ProtonClient::UpdateEnvironmentTemplate, __VA_ARGS__)
#define UpdateEnvironmentTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateEnvironmentTemplate, REQUEST)

#define UpdateEnvironmentTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::UpdateEnvironmentTemplateVersion, __VA_ARGS__)
#define UpdateEnvironmentTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateEnvironmentTemplateVersion, REQUEST)

#define UpdateServiceAsync(...)  SubmitAsync(&ProtonClient::UpdateService, __VA_ARGS__)
#define UpdateServiceCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateService, REQUEST)

#define UpdateServiceInstanceAsync(...)  SubmitAsync(&ProtonClient::UpdateServiceInstance, __VA_ARGS__)
#define UpdateServiceInstanceCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateServiceInstance, REQUEST)

#define UpdateServicePipelineAsync(...)  SubmitAsync(&ProtonClient::UpdateServicePipeline, __VA_ARGS__)
#define UpdateServicePipelineCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateServicePipeline, REQUEST)

#define UpdateServiceTemplateAsync(...)  SubmitAsync(&ProtonClient::UpdateServiceTemplate, __VA_ARGS__)
#define UpdateServiceTemplateCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateServiceTemplate, REQUEST)

#define UpdateServiceTemplateVersionAsync(...)  SubmitAsync(&ProtonClient::UpdateServiceTemplateVersion, __VA_ARGS__)
#define UpdateServiceTemplateVersionCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateServiceTemplateVersion, REQUEST)

#define UpdateTemplateSyncConfigAsync(...)  SubmitAsync(&ProtonClient::UpdateTemplateSyncConfig, __VA_ARGS__)
#define UpdateTemplateSyncConfigCallable(REQUEST)  SubmitCallable(&ProtonClient::UpdateTemplateSyncConfig, REQUEST)

