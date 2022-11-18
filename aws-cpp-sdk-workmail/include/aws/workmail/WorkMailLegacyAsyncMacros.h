/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateDelegateToResourceAsync(...)  SubmitAsync(&WorkMailClient::AssociateDelegateToResource, __VA_ARGS__)
#define AssociateDelegateToResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::AssociateDelegateToResource, REQUEST)

#define AssociateMemberToGroupAsync(...)  SubmitAsync(&WorkMailClient::AssociateMemberToGroup, __VA_ARGS__)
#define AssociateMemberToGroupCallable(REQUEST)  SubmitCallable(&WorkMailClient::AssociateMemberToGroup, REQUEST)

#define AssumeImpersonationRoleAsync(...)  SubmitAsync(&WorkMailClient::AssumeImpersonationRole, __VA_ARGS__)
#define AssumeImpersonationRoleCallable(REQUEST)  SubmitCallable(&WorkMailClient::AssumeImpersonationRole, REQUEST)

#define CancelMailboxExportJobAsync(...)  SubmitAsync(&WorkMailClient::CancelMailboxExportJob, __VA_ARGS__)
#define CancelMailboxExportJobCallable(REQUEST)  SubmitCallable(&WorkMailClient::CancelMailboxExportJob, REQUEST)

#define CreateAliasAsync(...)  SubmitAsync(&WorkMailClient::CreateAlias, __VA_ARGS__)
#define CreateAliasCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateAlias, REQUEST)

#define CreateAvailabilityConfigurationAsync(...)  SubmitAsync(&WorkMailClient::CreateAvailabilityConfiguration, __VA_ARGS__)
#define CreateAvailabilityConfigurationCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateAvailabilityConfiguration, REQUEST)

#define CreateGroupAsync(...)  SubmitAsync(&WorkMailClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateGroup, REQUEST)

#define CreateImpersonationRoleAsync(...)  SubmitAsync(&WorkMailClient::CreateImpersonationRole, __VA_ARGS__)
#define CreateImpersonationRoleCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateImpersonationRole, REQUEST)

#define CreateMobileDeviceAccessRuleAsync(...)  SubmitAsync(&WorkMailClient::CreateMobileDeviceAccessRule, __VA_ARGS__)
#define CreateMobileDeviceAccessRuleCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateMobileDeviceAccessRule, REQUEST)

#define CreateOrganizationAsync(...)  SubmitAsync(&WorkMailClient::CreateOrganization, __VA_ARGS__)
#define CreateOrganizationCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateOrganization, REQUEST)

#define CreateResourceAsync(...)  SubmitAsync(&WorkMailClient::CreateResource, __VA_ARGS__)
#define CreateResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateResource, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&WorkMailClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&WorkMailClient::CreateUser, REQUEST)

#define DeleteAccessControlRuleAsync(...)  SubmitAsync(&WorkMailClient::DeleteAccessControlRule, __VA_ARGS__)
#define DeleteAccessControlRuleCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteAccessControlRule, REQUEST)

#define DeleteAliasAsync(...)  SubmitAsync(&WorkMailClient::DeleteAlias, __VA_ARGS__)
#define DeleteAliasCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteAlias, REQUEST)

#define DeleteAvailabilityConfigurationAsync(...)  SubmitAsync(&WorkMailClient::DeleteAvailabilityConfiguration, __VA_ARGS__)
#define DeleteAvailabilityConfigurationCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteAvailabilityConfiguration, REQUEST)

#define DeleteEmailMonitoringConfigurationAsync(...)  SubmitAsync(&WorkMailClient::DeleteEmailMonitoringConfiguration, __VA_ARGS__)
#define DeleteEmailMonitoringConfigurationCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteEmailMonitoringConfiguration, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&WorkMailClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteGroup, REQUEST)

#define DeleteImpersonationRoleAsync(...)  SubmitAsync(&WorkMailClient::DeleteImpersonationRole, __VA_ARGS__)
#define DeleteImpersonationRoleCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteImpersonationRole, REQUEST)

#define DeleteMailboxPermissionsAsync(...)  SubmitAsync(&WorkMailClient::DeleteMailboxPermissions, __VA_ARGS__)
#define DeleteMailboxPermissionsCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteMailboxPermissions, REQUEST)

#define DeleteMobileDeviceAccessOverrideAsync(...)  SubmitAsync(&WorkMailClient::DeleteMobileDeviceAccessOverride, __VA_ARGS__)
#define DeleteMobileDeviceAccessOverrideCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteMobileDeviceAccessOverride, REQUEST)

#define DeleteMobileDeviceAccessRuleAsync(...)  SubmitAsync(&WorkMailClient::DeleteMobileDeviceAccessRule, __VA_ARGS__)
#define DeleteMobileDeviceAccessRuleCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteMobileDeviceAccessRule, REQUEST)

#define DeleteOrganizationAsync(...)  SubmitAsync(&WorkMailClient::DeleteOrganization, __VA_ARGS__)
#define DeleteOrganizationCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteOrganization, REQUEST)

#define DeleteResourceAsync(...)  SubmitAsync(&WorkMailClient::DeleteResource, __VA_ARGS__)
#define DeleteResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteResource, REQUEST)

#define DeleteRetentionPolicyAsync(...)  SubmitAsync(&WorkMailClient::DeleteRetentionPolicy, __VA_ARGS__)
#define DeleteRetentionPolicyCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteRetentionPolicy, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&WorkMailClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeleteUser, REQUEST)

#define DeregisterFromWorkMailAsync(...)  SubmitAsync(&WorkMailClient::DeregisterFromWorkMail, __VA_ARGS__)
#define DeregisterFromWorkMailCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeregisterFromWorkMail, REQUEST)

#define DeregisterMailDomainAsync(...)  SubmitAsync(&WorkMailClient::DeregisterMailDomain, __VA_ARGS__)
#define DeregisterMailDomainCallable(REQUEST)  SubmitCallable(&WorkMailClient::DeregisterMailDomain, REQUEST)

#define DescribeEmailMonitoringConfigurationAsync(...)  SubmitAsync(&WorkMailClient::DescribeEmailMonitoringConfiguration, __VA_ARGS__)
#define DescribeEmailMonitoringConfigurationCallable(REQUEST)  SubmitCallable(&WorkMailClient::DescribeEmailMonitoringConfiguration, REQUEST)

#define DescribeGroupAsync(...)  SubmitAsync(&WorkMailClient::DescribeGroup, __VA_ARGS__)
#define DescribeGroupCallable(REQUEST)  SubmitCallable(&WorkMailClient::DescribeGroup, REQUEST)

#define DescribeInboundDmarcSettingsAsync(...)  SubmitAsync(&WorkMailClient::DescribeInboundDmarcSettings, __VA_ARGS__)
#define DescribeInboundDmarcSettingsCallable(REQUEST)  SubmitCallable(&WorkMailClient::DescribeInboundDmarcSettings, REQUEST)

#define DescribeMailboxExportJobAsync(...)  SubmitAsync(&WorkMailClient::DescribeMailboxExportJob, __VA_ARGS__)
#define DescribeMailboxExportJobCallable(REQUEST)  SubmitCallable(&WorkMailClient::DescribeMailboxExportJob, REQUEST)

#define DescribeOrganizationAsync(...)  SubmitAsync(&WorkMailClient::DescribeOrganization, __VA_ARGS__)
#define DescribeOrganizationCallable(REQUEST)  SubmitCallable(&WorkMailClient::DescribeOrganization, REQUEST)

#define DescribeResourceAsync(...)  SubmitAsync(&WorkMailClient::DescribeResource, __VA_ARGS__)
#define DescribeResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::DescribeResource, REQUEST)

#define DescribeUserAsync(...)  SubmitAsync(&WorkMailClient::DescribeUser, __VA_ARGS__)
#define DescribeUserCallable(REQUEST)  SubmitCallable(&WorkMailClient::DescribeUser, REQUEST)

#define DisassociateDelegateFromResourceAsync(...)  SubmitAsync(&WorkMailClient::DisassociateDelegateFromResource, __VA_ARGS__)
#define DisassociateDelegateFromResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::DisassociateDelegateFromResource, REQUEST)

#define DisassociateMemberFromGroupAsync(...)  SubmitAsync(&WorkMailClient::DisassociateMemberFromGroup, __VA_ARGS__)
#define DisassociateMemberFromGroupCallable(REQUEST)  SubmitCallable(&WorkMailClient::DisassociateMemberFromGroup, REQUEST)

#define GetAccessControlEffectAsync(...)  SubmitAsync(&WorkMailClient::GetAccessControlEffect, __VA_ARGS__)
#define GetAccessControlEffectCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetAccessControlEffect, REQUEST)

#define GetDefaultRetentionPolicyAsync(...)  SubmitAsync(&WorkMailClient::GetDefaultRetentionPolicy, __VA_ARGS__)
#define GetDefaultRetentionPolicyCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetDefaultRetentionPolicy, REQUEST)

#define GetImpersonationRoleAsync(...)  SubmitAsync(&WorkMailClient::GetImpersonationRole, __VA_ARGS__)
#define GetImpersonationRoleCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetImpersonationRole, REQUEST)

#define GetImpersonationRoleEffectAsync(...)  SubmitAsync(&WorkMailClient::GetImpersonationRoleEffect, __VA_ARGS__)
#define GetImpersonationRoleEffectCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetImpersonationRoleEffect, REQUEST)

#define GetMailDomainAsync(...)  SubmitAsync(&WorkMailClient::GetMailDomain, __VA_ARGS__)
#define GetMailDomainCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetMailDomain, REQUEST)

#define GetMailboxDetailsAsync(...)  SubmitAsync(&WorkMailClient::GetMailboxDetails, __VA_ARGS__)
#define GetMailboxDetailsCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetMailboxDetails, REQUEST)

#define GetMobileDeviceAccessEffectAsync(...)  SubmitAsync(&WorkMailClient::GetMobileDeviceAccessEffect, __VA_ARGS__)
#define GetMobileDeviceAccessEffectCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetMobileDeviceAccessEffect, REQUEST)

#define GetMobileDeviceAccessOverrideAsync(...)  SubmitAsync(&WorkMailClient::GetMobileDeviceAccessOverride, __VA_ARGS__)
#define GetMobileDeviceAccessOverrideCallable(REQUEST)  SubmitCallable(&WorkMailClient::GetMobileDeviceAccessOverride, REQUEST)

#define ListAccessControlRulesAsync(...)  SubmitAsync(&WorkMailClient::ListAccessControlRules, __VA_ARGS__)
#define ListAccessControlRulesCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListAccessControlRules, REQUEST)

#define ListAliasesAsync(...)  SubmitAsync(&WorkMailClient::ListAliases, __VA_ARGS__)
#define ListAliasesCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListAliases, REQUEST)

#define ListAvailabilityConfigurationsAsync(...)  SubmitAsync(&WorkMailClient::ListAvailabilityConfigurations, __VA_ARGS__)
#define ListAvailabilityConfigurationsCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListAvailabilityConfigurations, REQUEST)

#define ListGroupMembersAsync(...)  SubmitAsync(&WorkMailClient::ListGroupMembers, __VA_ARGS__)
#define ListGroupMembersCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListGroupMembers, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&WorkMailClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListGroups, REQUEST)

#define ListImpersonationRolesAsync(...)  SubmitAsync(&WorkMailClient::ListImpersonationRoles, __VA_ARGS__)
#define ListImpersonationRolesCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListImpersonationRoles, REQUEST)

#define ListMailDomainsAsync(...)  SubmitAsync(&WorkMailClient::ListMailDomains, __VA_ARGS__)
#define ListMailDomainsCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListMailDomains, REQUEST)

#define ListMailboxExportJobsAsync(...)  SubmitAsync(&WorkMailClient::ListMailboxExportJobs, __VA_ARGS__)
#define ListMailboxExportJobsCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListMailboxExportJobs, REQUEST)

#define ListMailboxPermissionsAsync(...)  SubmitAsync(&WorkMailClient::ListMailboxPermissions, __VA_ARGS__)
#define ListMailboxPermissionsCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListMailboxPermissions, REQUEST)

#define ListMobileDeviceAccessOverridesAsync(...)  SubmitAsync(&WorkMailClient::ListMobileDeviceAccessOverrides, __VA_ARGS__)
#define ListMobileDeviceAccessOverridesCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListMobileDeviceAccessOverrides, REQUEST)

#define ListMobileDeviceAccessRulesAsync(...)  SubmitAsync(&WorkMailClient::ListMobileDeviceAccessRules, __VA_ARGS__)
#define ListMobileDeviceAccessRulesCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListMobileDeviceAccessRules, REQUEST)

#define ListOrganizationsAsync(...)  SubmitAsync(&WorkMailClient::ListOrganizations, __VA_ARGS__)
#define ListOrganizationsCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListOrganizations, REQUEST)

#define ListResourceDelegatesAsync(...)  SubmitAsync(&WorkMailClient::ListResourceDelegates, __VA_ARGS__)
#define ListResourceDelegatesCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListResourceDelegates, REQUEST)

#define ListResourcesAsync(...)  SubmitAsync(&WorkMailClient::ListResources, __VA_ARGS__)
#define ListResourcesCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListResources, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&WorkMailClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListTagsForResource, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&WorkMailClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&WorkMailClient::ListUsers, REQUEST)

#define PutAccessControlRuleAsync(...)  SubmitAsync(&WorkMailClient::PutAccessControlRule, __VA_ARGS__)
#define PutAccessControlRuleCallable(REQUEST)  SubmitCallable(&WorkMailClient::PutAccessControlRule, REQUEST)

#define PutEmailMonitoringConfigurationAsync(...)  SubmitAsync(&WorkMailClient::PutEmailMonitoringConfiguration, __VA_ARGS__)
#define PutEmailMonitoringConfigurationCallable(REQUEST)  SubmitCallable(&WorkMailClient::PutEmailMonitoringConfiguration, REQUEST)

#define PutInboundDmarcSettingsAsync(...)  SubmitAsync(&WorkMailClient::PutInboundDmarcSettings, __VA_ARGS__)
#define PutInboundDmarcSettingsCallable(REQUEST)  SubmitCallable(&WorkMailClient::PutInboundDmarcSettings, REQUEST)

#define PutMailboxPermissionsAsync(...)  SubmitAsync(&WorkMailClient::PutMailboxPermissions, __VA_ARGS__)
#define PutMailboxPermissionsCallable(REQUEST)  SubmitCallable(&WorkMailClient::PutMailboxPermissions, REQUEST)

#define PutMobileDeviceAccessOverrideAsync(...)  SubmitAsync(&WorkMailClient::PutMobileDeviceAccessOverride, __VA_ARGS__)
#define PutMobileDeviceAccessOverrideCallable(REQUEST)  SubmitCallable(&WorkMailClient::PutMobileDeviceAccessOverride, REQUEST)

#define PutRetentionPolicyAsync(...)  SubmitAsync(&WorkMailClient::PutRetentionPolicy, __VA_ARGS__)
#define PutRetentionPolicyCallable(REQUEST)  SubmitCallable(&WorkMailClient::PutRetentionPolicy, REQUEST)

#define RegisterMailDomainAsync(...)  SubmitAsync(&WorkMailClient::RegisterMailDomain, __VA_ARGS__)
#define RegisterMailDomainCallable(REQUEST)  SubmitCallable(&WorkMailClient::RegisterMailDomain, REQUEST)

#define RegisterToWorkMailAsync(...)  SubmitAsync(&WorkMailClient::RegisterToWorkMail, __VA_ARGS__)
#define RegisterToWorkMailCallable(REQUEST)  SubmitCallable(&WorkMailClient::RegisterToWorkMail, REQUEST)

#define ResetPasswordAsync(...)  SubmitAsync(&WorkMailClient::ResetPassword, __VA_ARGS__)
#define ResetPasswordCallable(REQUEST)  SubmitCallable(&WorkMailClient::ResetPassword, REQUEST)

#define StartMailboxExportJobAsync(...)  SubmitAsync(&WorkMailClient::StartMailboxExportJob, __VA_ARGS__)
#define StartMailboxExportJobCallable(REQUEST)  SubmitCallable(&WorkMailClient::StartMailboxExportJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&WorkMailClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::TagResource, REQUEST)

#define TestAvailabilityConfigurationAsync(...)  SubmitAsync(&WorkMailClient::TestAvailabilityConfiguration, __VA_ARGS__)
#define TestAvailabilityConfigurationCallable(REQUEST)  SubmitCallable(&WorkMailClient::TestAvailabilityConfiguration, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&WorkMailClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::UntagResource, REQUEST)

#define UpdateAvailabilityConfigurationAsync(...)  SubmitAsync(&WorkMailClient::UpdateAvailabilityConfiguration, __VA_ARGS__)
#define UpdateAvailabilityConfigurationCallable(REQUEST)  SubmitCallable(&WorkMailClient::UpdateAvailabilityConfiguration, REQUEST)

#define UpdateDefaultMailDomainAsync(...)  SubmitAsync(&WorkMailClient::UpdateDefaultMailDomain, __VA_ARGS__)
#define UpdateDefaultMailDomainCallable(REQUEST)  SubmitCallable(&WorkMailClient::UpdateDefaultMailDomain, REQUEST)

#define UpdateImpersonationRoleAsync(...)  SubmitAsync(&WorkMailClient::UpdateImpersonationRole, __VA_ARGS__)
#define UpdateImpersonationRoleCallable(REQUEST)  SubmitCallable(&WorkMailClient::UpdateImpersonationRole, REQUEST)

#define UpdateMailboxQuotaAsync(...)  SubmitAsync(&WorkMailClient::UpdateMailboxQuota, __VA_ARGS__)
#define UpdateMailboxQuotaCallable(REQUEST)  SubmitCallable(&WorkMailClient::UpdateMailboxQuota, REQUEST)

#define UpdateMobileDeviceAccessRuleAsync(...)  SubmitAsync(&WorkMailClient::UpdateMobileDeviceAccessRule, __VA_ARGS__)
#define UpdateMobileDeviceAccessRuleCallable(REQUEST)  SubmitCallable(&WorkMailClient::UpdateMobileDeviceAccessRule, REQUEST)

#define UpdatePrimaryEmailAddressAsync(...)  SubmitAsync(&WorkMailClient::UpdatePrimaryEmailAddress, __VA_ARGS__)
#define UpdatePrimaryEmailAddressCallable(REQUEST)  SubmitCallable(&WorkMailClient::UpdatePrimaryEmailAddress, REQUEST)

#define UpdateResourceAsync(...)  SubmitAsync(&WorkMailClient::UpdateResource, __VA_ARGS__)
#define UpdateResourceCallable(REQUEST)  SubmitCallable(&WorkMailClient::UpdateResource, REQUEST)

