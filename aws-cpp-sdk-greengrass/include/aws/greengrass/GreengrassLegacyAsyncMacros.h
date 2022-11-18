/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateRoleToGroupAsync(...)  SubmitAsync(&GreengrassClient::AssociateRoleToGroup, __VA_ARGS__)
#define AssociateRoleToGroupCallable(REQUEST)  SubmitCallable(&GreengrassClient::AssociateRoleToGroup, REQUEST)

#define AssociateServiceRoleToAccountAsync(...)  SubmitAsync(&GreengrassClient::AssociateServiceRoleToAccount, __VA_ARGS__)
#define AssociateServiceRoleToAccountCallable(REQUEST)  SubmitCallable(&GreengrassClient::AssociateServiceRoleToAccount, REQUEST)

#define CreateConnectorDefinitionAsync(...)  SubmitAsync(&GreengrassClient::CreateConnectorDefinition, __VA_ARGS__)
#define CreateConnectorDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateConnectorDefinition, REQUEST)

#define CreateConnectorDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateConnectorDefinitionVersion, __VA_ARGS__)
#define CreateConnectorDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateConnectorDefinitionVersion, REQUEST)

#define CreateCoreDefinitionAsync(...)  SubmitAsync(&GreengrassClient::CreateCoreDefinition, __VA_ARGS__)
#define CreateCoreDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateCoreDefinition, REQUEST)

#define CreateCoreDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateCoreDefinitionVersion, __VA_ARGS__)
#define CreateCoreDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateCoreDefinitionVersion, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&GreengrassClient::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateDeployment, REQUEST)

#define CreateDeviceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::CreateDeviceDefinition, __VA_ARGS__)
#define CreateDeviceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateDeviceDefinition, REQUEST)

#define CreateDeviceDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateDeviceDefinitionVersion, __VA_ARGS__)
#define CreateDeviceDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateDeviceDefinitionVersion, REQUEST)

#define CreateFunctionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::CreateFunctionDefinition, __VA_ARGS__)
#define CreateFunctionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateFunctionDefinition, REQUEST)

#define CreateFunctionDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateFunctionDefinitionVersion, __VA_ARGS__)
#define CreateFunctionDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateFunctionDefinitionVersion, REQUEST)

#define CreateGroupAsync(...)  SubmitAsync(&GreengrassClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateGroup, REQUEST)

#define CreateGroupCertificateAuthorityAsync(...)  SubmitAsync(&GreengrassClient::CreateGroupCertificateAuthority, __VA_ARGS__)
#define CreateGroupCertificateAuthorityCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateGroupCertificateAuthority, REQUEST)

#define CreateGroupVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateGroupVersion, __VA_ARGS__)
#define CreateGroupVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateGroupVersion, REQUEST)

#define CreateLoggerDefinitionAsync(...)  SubmitAsync(&GreengrassClient::CreateLoggerDefinition, __VA_ARGS__)
#define CreateLoggerDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateLoggerDefinition, REQUEST)

#define CreateLoggerDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateLoggerDefinitionVersion, __VA_ARGS__)
#define CreateLoggerDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateLoggerDefinitionVersion, REQUEST)

#define CreateResourceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::CreateResourceDefinition, __VA_ARGS__)
#define CreateResourceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateResourceDefinition, REQUEST)

#define CreateResourceDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateResourceDefinitionVersion, __VA_ARGS__)
#define CreateResourceDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateResourceDefinitionVersion, REQUEST)

#define CreateSoftwareUpdateJobAsync(...)  SubmitAsync(&GreengrassClient::CreateSoftwareUpdateJob, __VA_ARGS__)
#define CreateSoftwareUpdateJobCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateSoftwareUpdateJob, REQUEST)

#define CreateSubscriptionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::CreateSubscriptionDefinition, __VA_ARGS__)
#define CreateSubscriptionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateSubscriptionDefinition, REQUEST)

#define CreateSubscriptionDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::CreateSubscriptionDefinitionVersion, __VA_ARGS__)
#define CreateSubscriptionDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::CreateSubscriptionDefinitionVersion, REQUEST)

#define DeleteConnectorDefinitionAsync(...)  SubmitAsync(&GreengrassClient::DeleteConnectorDefinition, __VA_ARGS__)
#define DeleteConnectorDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteConnectorDefinition, REQUEST)

#define DeleteCoreDefinitionAsync(...)  SubmitAsync(&GreengrassClient::DeleteCoreDefinition, __VA_ARGS__)
#define DeleteCoreDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteCoreDefinition, REQUEST)

#define DeleteDeviceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::DeleteDeviceDefinition, __VA_ARGS__)
#define DeleteDeviceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteDeviceDefinition, REQUEST)

#define DeleteFunctionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::DeleteFunctionDefinition, __VA_ARGS__)
#define DeleteFunctionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteFunctionDefinition, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&GreengrassClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteGroup, REQUEST)

#define DeleteLoggerDefinitionAsync(...)  SubmitAsync(&GreengrassClient::DeleteLoggerDefinition, __VA_ARGS__)
#define DeleteLoggerDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteLoggerDefinition, REQUEST)

#define DeleteResourceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::DeleteResourceDefinition, __VA_ARGS__)
#define DeleteResourceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteResourceDefinition, REQUEST)

#define DeleteSubscriptionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::DeleteSubscriptionDefinition, __VA_ARGS__)
#define DeleteSubscriptionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::DeleteSubscriptionDefinition, REQUEST)

#define DisassociateRoleFromGroupAsync(...)  SubmitAsync(&GreengrassClient::DisassociateRoleFromGroup, __VA_ARGS__)
#define DisassociateRoleFromGroupCallable(REQUEST)  SubmitCallable(&GreengrassClient::DisassociateRoleFromGroup, REQUEST)

#define DisassociateServiceRoleFromAccountAsync(...)  SubmitAsync(&GreengrassClient::DisassociateServiceRoleFromAccount, __VA_ARGS__)
#define DisassociateServiceRoleFromAccountCallable(REQUEST)  SubmitCallable(&GreengrassClient::DisassociateServiceRoleFromAccount, REQUEST)

#define GetAssociatedRoleAsync(...)  SubmitAsync(&GreengrassClient::GetAssociatedRole, __VA_ARGS__)
#define GetAssociatedRoleCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetAssociatedRole, REQUEST)

#define GetBulkDeploymentStatusAsync(...)  SubmitAsync(&GreengrassClient::GetBulkDeploymentStatus, __VA_ARGS__)
#define GetBulkDeploymentStatusCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetBulkDeploymentStatus, REQUEST)

#define GetConnectivityInfoAsync(...)  SubmitAsync(&GreengrassClient::GetConnectivityInfo, __VA_ARGS__)
#define GetConnectivityInfoCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetConnectivityInfo, REQUEST)

#define GetConnectorDefinitionAsync(...)  SubmitAsync(&GreengrassClient::GetConnectorDefinition, __VA_ARGS__)
#define GetConnectorDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetConnectorDefinition, REQUEST)

#define GetConnectorDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::GetConnectorDefinitionVersion, __VA_ARGS__)
#define GetConnectorDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetConnectorDefinitionVersion, REQUEST)

#define GetCoreDefinitionAsync(...)  SubmitAsync(&GreengrassClient::GetCoreDefinition, __VA_ARGS__)
#define GetCoreDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetCoreDefinition, REQUEST)

#define GetCoreDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::GetCoreDefinitionVersion, __VA_ARGS__)
#define GetCoreDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetCoreDefinitionVersion, REQUEST)

#define GetDeploymentStatusAsync(...)  SubmitAsync(&GreengrassClient::GetDeploymentStatus, __VA_ARGS__)
#define GetDeploymentStatusCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetDeploymentStatus, REQUEST)

#define GetDeviceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::GetDeviceDefinition, __VA_ARGS__)
#define GetDeviceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetDeviceDefinition, REQUEST)

#define GetDeviceDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::GetDeviceDefinitionVersion, __VA_ARGS__)
#define GetDeviceDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetDeviceDefinitionVersion, REQUEST)

#define GetFunctionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::GetFunctionDefinition, __VA_ARGS__)
#define GetFunctionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetFunctionDefinition, REQUEST)

#define GetFunctionDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::GetFunctionDefinitionVersion, __VA_ARGS__)
#define GetFunctionDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetFunctionDefinitionVersion, REQUEST)

#define GetGroupAsync(...)  SubmitAsync(&GreengrassClient::GetGroup, __VA_ARGS__)
#define GetGroupCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetGroup, REQUEST)

#define GetGroupCertificateAuthorityAsync(...)  SubmitAsync(&GreengrassClient::GetGroupCertificateAuthority, __VA_ARGS__)
#define GetGroupCertificateAuthorityCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetGroupCertificateAuthority, REQUEST)

#define GetGroupCertificateConfigurationAsync(...)  SubmitAsync(&GreengrassClient::GetGroupCertificateConfiguration, __VA_ARGS__)
#define GetGroupCertificateConfigurationCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetGroupCertificateConfiguration, REQUEST)

#define GetGroupVersionAsync(...)  SubmitAsync(&GreengrassClient::GetGroupVersion, __VA_ARGS__)
#define GetGroupVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetGroupVersion, REQUEST)

#define GetLoggerDefinitionAsync(...)  SubmitAsync(&GreengrassClient::GetLoggerDefinition, __VA_ARGS__)
#define GetLoggerDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetLoggerDefinition, REQUEST)

#define GetLoggerDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::GetLoggerDefinitionVersion, __VA_ARGS__)
#define GetLoggerDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetLoggerDefinitionVersion, REQUEST)

#define GetResourceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::GetResourceDefinition, __VA_ARGS__)
#define GetResourceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetResourceDefinition, REQUEST)

#define GetResourceDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::GetResourceDefinitionVersion, __VA_ARGS__)
#define GetResourceDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetResourceDefinitionVersion, REQUEST)

#define GetServiceRoleForAccountAsync(...)  SubmitAsync(&GreengrassClient::GetServiceRoleForAccount, __VA_ARGS__)
#define GetServiceRoleForAccountCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetServiceRoleForAccount, REQUEST)

#define GetSubscriptionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::GetSubscriptionDefinition, __VA_ARGS__)
#define GetSubscriptionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetSubscriptionDefinition, REQUEST)

#define GetSubscriptionDefinitionVersionAsync(...)  SubmitAsync(&GreengrassClient::GetSubscriptionDefinitionVersion, __VA_ARGS__)
#define GetSubscriptionDefinitionVersionCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetSubscriptionDefinitionVersion, REQUEST)

#define GetThingRuntimeConfigurationAsync(...)  SubmitAsync(&GreengrassClient::GetThingRuntimeConfiguration, __VA_ARGS__)
#define GetThingRuntimeConfigurationCallable(REQUEST)  SubmitCallable(&GreengrassClient::GetThingRuntimeConfiguration, REQUEST)

#define ListBulkDeploymentDetailedReportsAsync(...)  SubmitAsync(&GreengrassClient::ListBulkDeploymentDetailedReports, __VA_ARGS__)
#define ListBulkDeploymentDetailedReportsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListBulkDeploymentDetailedReports, REQUEST)

#define ListBulkDeploymentsAsync(...)  SubmitAsync(&GreengrassClient::ListBulkDeployments, __VA_ARGS__)
#define ListBulkDeploymentsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListBulkDeployments, REQUEST)

#define ListConnectorDefinitionVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListConnectorDefinitionVersions, __VA_ARGS__)
#define ListConnectorDefinitionVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListConnectorDefinitionVersions, REQUEST)

#define ListConnectorDefinitionsAsync(...)  SubmitAsync(&GreengrassClient::ListConnectorDefinitions, __VA_ARGS__)
#define ListConnectorDefinitionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListConnectorDefinitions, REQUEST)

#define ListCoreDefinitionVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListCoreDefinitionVersions, __VA_ARGS__)
#define ListCoreDefinitionVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListCoreDefinitionVersions, REQUEST)

#define ListCoreDefinitionsAsync(...)  SubmitAsync(&GreengrassClient::ListCoreDefinitions, __VA_ARGS__)
#define ListCoreDefinitionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListCoreDefinitions, REQUEST)

#define ListDeploymentsAsync(...)  SubmitAsync(&GreengrassClient::ListDeployments, __VA_ARGS__)
#define ListDeploymentsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListDeployments, REQUEST)

#define ListDeviceDefinitionVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListDeviceDefinitionVersions, __VA_ARGS__)
#define ListDeviceDefinitionVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListDeviceDefinitionVersions, REQUEST)

#define ListDeviceDefinitionsAsync(...)  SubmitAsync(&GreengrassClient::ListDeviceDefinitions, __VA_ARGS__)
#define ListDeviceDefinitionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListDeviceDefinitions, REQUEST)

#define ListFunctionDefinitionVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListFunctionDefinitionVersions, __VA_ARGS__)
#define ListFunctionDefinitionVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListFunctionDefinitionVersions, REQUEST)

#define ListFunctionDefinitionsAsync(...)  SubmitAsync(&GreengrassClient::ListFunctionDefinitions, __VA_ARGS__)
#define ListFunctionDefinitionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListFunctionDefinitions, REQUEST)

#define ListGroupCertificateAuthoritiesAsync(...)  SubmitAsync(&GreengrassClient::ListGroupCertificateAuthorities, __VA_ARGS__)
#define ListGroupCertificateAuthoritiesCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListGroupCertificateAuthorities, REQUEST)

#define ListGroupVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListGroupVersions, __VA_ARGS__)
#define ListGroupVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListGroupVersions, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&GreengrassClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListGroups, REQUEST)

#define ListLoggerDefinitionVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListLoggerDefinitionVersions, __VA_ARGS__)
#define ListLoggerDefinitionVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListLoggerDefinitionVersions, REQUEST)

#define ListLoggerDefinitionsAsync(...)  SubmitAsync(&GreengrassClient::ListLoggerDefinitions, __VA_ARGS__)
#define ListLoggerDefinitionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListLoggerDefinitions, REQUEST)

#define ListResourceDefinitionVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListResourceDefinitionVersions, __VA_ARGS__)
#define ListResourceDefinitionVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListResourceDefinitionVersions, REQUEST)

#define ListResourceDefinitionsAsync(...)  SubmitAsync(&GreengrassClient::ListResourceDefinitions, __VA_ARGS__)
#define ListResourceDefinitionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListResourceDefinitions, REQUEST)

#define ListSubscriptionDefinitionVersionsAsync(...)  SubmitAsync(&GreengrassClient::ListSubscriptionDefinitionVersions, __VA_ARGS__)
#define ListSubscriptionDefinitionVersionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListSubscriptionDefinitionVersions, REQUEST)

#define ListSubscriptionDefinitionsAsync(...)  SubmitAsync(&GreengrassClient::ListSubscriptionDefinitions, __VA_ARGS__)
#define ListSubscriptionDefinitionsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListSubscriptionDefinitions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GreengrassClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GreengrassClient::ListTagsForResource, REQUEST)

#define ResetDeploymentsAsync(...)  SubmitAsync(&GreengrassClient::ResetDeployments, __VA_ARGS__)
#define ResetDeploymentsCallable(REQUEST)  SubmitCallable(&GreengrassClient::ResetDeployments, REQUEST)

#define StartBulkDeploymentAsync(...)  SubmitAsync(&GreengrassClient::StartBulkDeployment, __VA_ARGS__)
#define StartBulkDeploymentCallable(REQUEST)  SubmitCallable(&GreengrassClient::StartBulkDeployment, REQUEST)

#define StopBulkDeploymentAsync(...)  SubmitAsync(&GreengrassClient::StopBulkDeployment, __VA_ARGS__)
#define StopBulkDeploymentCallable(REQUEST)  SubmitCallable(&GreengrassClient::StopBulkDeployment, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GreengrassClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GreengrassClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GreengrassClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GreengrassClient::UntagResource, REQUEST)

#define UpdateConnectivityInfoAsync(...)  SubmitAsync(&GreengrassClient::UpdateConnectivityInfo, __VA_ARGS__)
#define UpdateConnectivityInfoCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateConnectivityInfo, REQUEST)

#define UpdateConnectorDefinitionAsync(...)  SubmitAsync(&GreengrassClient::UpdateConnectorDefinition, __VA_ARGS__)
#define UpdateConnectorDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateConnectorDefinition, REQUEST)

#define UpdateCoreDefinitionAsync(...)  SubmitAsync(&GreengrassClient::UpdateCoreDefinition, __VA_ARGS__)
#define UpdateCoreDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateCoreDefinition, REQUEST)

#define UpdateDeviceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::UpdateDeviceDefinition, __VA_ARGS__)
#define UpdateDeviceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateDeviceDefinition, REQUEST)

#define UpdateFunctionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::UpdateFunctionDefinition, __VA_ARGS__)
#define UpdateFunctionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateFunctionDefinition, REQUEST)

#define UpdateGroupAsync(...)  SubmitAsync(&GreengrassClient::UpdateGroup, __VA_ARGS__)
#define UpdateGroupCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateGroup, REQUEST)

#define UpdateGroupCertificateConfigurationAsync(...)  SubmitAsync(&GreengrassClient::UpdateGroupCertificateConfiguration, __VA_ARGS__)
#define UpdateGroupCertificateConfigurationCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateGroupCertificateConfiguration, REQUEST)

#define UpdateLoggerDefinitionAsync(...)  SubmitAsync(&GreengrassClient::UpdateLoggerDefinition, __VA_ARGS__)
#define UpdateLoggerDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateLoggerDefinition, REQUEST)

#define UpdateResourceDefinitionAsync(...)  SubmitAsync(&GreengrassClient::UpdateResourceDefinition, __VA_ARGS__)
#define UpdateResourceDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateResourceDefinition, REQUEST)

#define UpdateSubscriptionDefinitionAsync(...)  SubmitAsync(&GreengrassClient::UpdateSubscriptionDefinition, __VA_ARGS__)
#define UpdateSubscriptionDefinitionCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateSubscriptionDefinition, REQUEST)

#define UpdateThingRuntimeConfigurationAsync(...)  SubmitAsync(&GreengrassClient::UpdateThingRuntimeConfiguration, __VA_ARGS__)
#define UpdateThingRuntimeConfigurationCallable(REQUEST)  SubmitCallable(&GreengrassClient::UpdateThingRuntimeConfiguration, REQUEST)

