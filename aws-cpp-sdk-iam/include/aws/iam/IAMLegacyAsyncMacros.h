/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddClientIDToOpenIDConnectProviderAsync(...)  SubmitAsync(&IAMClient::AddClientIDToOpenIDConnectProvider, __VA_ARGS__)
#define AddClientIDToOpenIDConnectProviderCallable(REQUEST)  SubmitCallable(&IAMClient::AddClientIDToOpenIDConnectProvider, REQUEST)

#define AddRoleToInstanceProfileAsync(...)  SubmitAsync(&IAMClient::AddRoleToInstanceProfile, __VA_ARGS__)
#define AddRoleToInstanceProfileCallable(REQUEST)  SubmitCallable(&IAMClient::AddRoleToInstanceProfile, REQUEST)

#define AddUserToGroupAsync(...)  SubmitAsync(&IAMClient::AddUserToGroup, __VA_ARGS__)
#define AddUserToGroupCallable(REQUEST)  SubmitCallable(&IAMClient::AddUserToGroup, REQUEST)

#define AttachGroupPolicyAsync(...)  SubmitAsync(&IAMClient::AttachGroupPolicy, __VA_ARGS__)
#define AttachGroupPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::AttachGroupPolicy, REQUEST)

#define AttachRolePolicyAsync(...)  SubmitAsync(&IAMClient::AttachRolePolicy, __VA_ARGS__)
#define AttachRolePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::AttachRolePolicy, REQUEST)

#define AttachUserPolicyAsync(...)  SubmitAsync(&IAMClient::AttachUserPolicy, __VA_ARGS__)
#define AttachUserPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::AttachUserPolicy, REQUEST)

#define ChangePasswordAsync(...)  SubmitAsync(&IAMClient::ChangePassword, __VA_ARGS__)
#define ChangePasswordCallable(REQUEST)  SubmitCallable(&IAMClient::ChangePassword, REQUEST)

#define CreateAccessKeyAsync(...)  SubmitAsync(&IAMClient::CreateAccessKey, __VA_ARGS__)
#define CreateAccessKeyCallable(REQUEST)  SubmitCallable(&IAMClient::CreateAccessKey, REQUEST)

#define CreateAccountAliasAsync(...)  SubmitAsync(&IAMClient::CreateAccountAlias, __VA_ARGS__)
#define CreateAccountAliasCallable(REQUEST)  SubmitCallable(&IAMClient::CreateAccountAlias, REQUEST)

#define CreateGroupAsync(...)  SubmitAsync(&IAMClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&IAMClient::CreateGroup, REQUEST)

#define CreateInstanceProfileAsync(...)  SubmitAsync(&IAMClient::CreateInstanceProfile, __VA_ARGS__)
#define CreateInstanceProfileCallable(REQUEST)  SubmitCallable(&IAMClient::CreateInstanceProfile, REQUEST)

#define CreateLoginProfileAsync(...)  SubmitAsync(&IAMClient::CreateLoginProfile, __VA_ARGS__)
#define CreateLoginProfileCallable(REQUEST)  SubmitCallable(&IAMClient::CreateLoginProfile, REQUEST)

#define CreateOpenIDConnectProviderAsync(...)  SubmitAsync(&IAMClient::CreateOpenIDConnectProvider, __VA_ARGS__)
#define CreateOpenIDConnectProviderCallable(REQUEST)  SubmitCallable(&IAMClient::CreateOpenIDConnectProvider, REQUEST)

#define CreatePolicyAsync(...)  SubmitAsync(&IAMClient::CreatePolicy, __VA_ARGS__)
#define CreatePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::CreatePolicy, REQUEST)

#define CreatePolicyVersionAsync(...)  SubmitAsync(&IAMClient::CreatePolicyVersion, __VA_ARGS__)
#define CreatePolicyVersionCallable(REQUEST)  SubmitCallable(&IAMClient::CreatePolicyVersion, REQUEST)

#define CreateRoleAsync(...)  SubmitAsync(&IAMClient::CreateRole, __VA_ARGS__)
#define CreateRoleCallable(REQUEST)  SubmitCallable(&IAMClient::CreateRole, REQUEST)

#define CreateSAMLProviderAsync(...)  SubmitAsync(&IAMClient::CreateSAMLProvider, __VA_ARGS__)
#define CreateSAMLProviderCallable(REQUEST)  SubmitCallable(&IAMClient::CreateSAMLProvider, REQUEST)

#define CreateServiceLinkedRoleAsync(...)  SubmitAsync(&IAMClient::CreateServiceLinkedRole, __VA_ARGS__)
#define CreateServiceLinkedRoleCallable(REQUEST)  SubmitCallable(&IAMClient::CreateServiceLinkedRole, REQUEST)

#define CreateServiceSpecificCredentialAsync(...)  SubmitAsync(&IAMClient::CreateServiceSpecificCredential, __VA_ARGS__)
#define CreateServiceSpecificCredentialCallable(REQUEST)  SubmitCallable(&IAMClient::CreateServiceSpecificCredential, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&IAMClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&IAMClient::CreateUser, REQUEST)

#define CreateVirtualMFADeviceAsync(...)  SubmitAsync(&IAMClient::CreateVirtualMFADevice, __VA_ARGS__)
#define CreateVirtualMFADeviceCallable(REQUEST)  SubmitCallable(&IAMClient::CreateVirtualMFADevice, REQUEST)

#define DeactivateMFADeviceAsync(...)  SubmitAsync(&IAMClient::DeactivateMFADevice, __VA_ARGS__)
#define DeactivateMFADeviceCallable(REQUEST)  SubmitCallable(&IAMClient::DeactivateMFADevice, REQUEST)

#define DeleteAccessKeyAsync(...)  SubmitAsync(&IAMClient::DeleteAccessKey, __VA_ARGS__)
#define DeleteAccessKeyCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteAccessKey, REQUEST)

#define DeleteAccountAliasAsync(...)  SubmitAsync(&IAMClient::DeleteAccountAlias, __VA_ARGS__)
#define DeleteAccountAliasCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteAccountAlias, REQUEST)

#define DeleteAccountPasswordPolicyAsync(...)  SubmitAsync(&IAMClient::DeleteAccountPasswordPolicy, __VA_ARGS__)
#define DeleteAccountPasswordPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteAccountPasswordPolicy, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&IAMClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteGroup, REQUEST)

#define DeleteGroupPolicyAsync(...)  SubmitAsync(&IAMClient::DeleteGroupPolicy, __VA_ARGS__)
#define DeleteGroupPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteGroupPolicy, REQUEST)

#define DeleteInstanceProfileAsync(...)  SubmitAsync(&IAMClient::DeleteInstanceProfile, __VA_ARGS__)
#define DeleteInstanceProfileCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteInstanceProfile, REQUEST)

#define DeleteLoginProfileAsync(...)  SubmitAsync(&IAMClient::DeleteLoginProfile, __VA_ARGS__)
#define DeleteLoginProfileCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteLoginProfile, REQUEST)

#define DeleteOpenIDConnectProviderAsync(...)  SubmitAsync(&IAMClient::DeleteOpenIDConnectProvider, __VA_ARGS__)
#define DeleteOpenIDConnectProviderCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteOpenIDConnectProvider, REQUEST)

#define DeletePolicyAsync(...)  SubmitAsync(&IAMClient::DeletePolicy, __VA_ARGS__)
#define DeletePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DeletePolicy, REQUEST)

#define DeletePolicyVersionAsync(...)  SubmitAsync(&IAMClient::DeletePolicyVersion, __VA_ARGS__)
#define DeletePolicyVersionCallable(REQUEST)  SubmitCallable(&IAMClient::DeletePolicyVersion, REQUEST)

#define DeleteRoleAsync(...)  SubmitAsync(&IAMClient::DeleteRole, __VA_ARGS__)
#define DeleteRoleCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteRole, REQUEST)

#define DeleteRolePermissionsBoundaryAsync(...)  SubmitAsync(&IAMClient::DeleteRolePermissionsBoundary, __VA_ARGS__)
#define DeleteRolePermissionsBoundaryCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteRolePermissionsBoundary, REQUEST)

#define DeleteRolePolicyAsync(...)  SubmitAsync(&IAMClient::DeleteRolePolicy, __VA_ARGS__)
#define DeleteRolePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteRolePolicy, REQUEST)

#define DeleteSAMLProviderAsync(...)  SubmitAsync(&IAMClient::DeleteSAMLProvider, __VA_ARGS__)
#define DeleteSAMLProviderCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteSAMLProvider, REQUEST)

#define DeleteSSHPublicKeyAsync(...)  SubmitAsync(&IAMClient::DeleteSSHPublicKey, __VA_ARGS__)
#define DeleteSSHPublicKeyCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteSSHPublicKey, REQUEST)

#define DeleteServerCertificateAsync(...)  SubmitAsync(&IAMClient::DeleteServerCertificate, __VA_ARGS__)
#define DeleteServerCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteServerCertificate, REQUEST)

#define DeleteServiceLinkedRoleAsync(...)  SubmitAsync(&IAMClient::DeleteServiceLinkedRole, __VA_ARGS__)
#define DeleteServiceLinkedRoleCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteServiceLinkedRole, REQUEST)

#define DeleteServiceSpecificCredentialAsync(...)  SubmitAsync(&IAMClient::DeleteServiceSpecificCredential, __VA_ARGS__)
#define DeleteServiceSpecificCredentialCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteServiceSpecificCredential, REQUEST)

#define DeleteSigningCertificateAsync(...)  SubmitAsync(&IAMClient::DeleteSigningCertificate, __VA_ARGS__)
#define DeleteSigningCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteSigningCertificate, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&IAMClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteUser, REQUEST)

#define DeleteUserPermissionsBoundaryAsync(...)  SubmitAsync(&IAMClient::DeleteUserPermissionsBoundary, __VA_ARGS__)
#define DeleteUserPermissionsBoundaryCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteUserPermissionsBoundary, REQUEST)

#define DeleteUserPolicyAsync(...)  SubmitAsync(&IAMClient::DeleteUserPolicy, __VA_ARGS__)
#define DeleteUserPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteUserPolicy, REQUEST)

#define DeleteVirtualMFADeviceAsync(...)  SubmitAsync(&IAMClient::DeleteVirtualMFADevice, __VA_ARGS__)
#define DeleteVirtualMFADeviceCallable(REQUEST)  SubmitCallable(&IAMClient::DeleteVirtualMFADevice, REQUEST)

#define DetachGroupPolicyAsync(...)  SubmitAsync(&IAMClient::DetachGroupPolicy, __VA_ARGS__)
#define DetachGroupPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DetachGroupPolicy, REQUEST)

#define DetachRolePolicyAsync(...)  SubmitAsync(&IAMClient::DetachRolePolicy, __VA_ARGS__)
#define DetachRolePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DetachRolePolicy, REQUEST)

#define DetachUserPolicyAsync(...)  SubmitAsync(&IAMClient::DetachUserPolicy, __VA_ARGS__)
#define DetachUserPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::DetachUserPolicy, REQUEST)

#define EnableMFADeviceAsync(...)  SubmitAsync(&IAMClient::EnableMFADevice, __VA_ARGS__)
#define EnableMFADeviceCallable(REQUEST)  SubmitCallable(&IAMClient::EnableMFADevice, REQUEST)

#define GenerateCredentialReportAsync(...)  SubmitAsync(&IAMClient::GenerateCredentialReport, __VA_ARGS__)
#define GenerateCredentialReportCallable(REQUEST)  SubmitCallable(&IAMClient::GenerateCredentialReport, REQUEST)

#define GenerateOrganizationsAccessReportAsync(...)  SubmitAsync(&IAMClient::GenerateOrganizationsAccessReport, __VA_ARGS__)
#define GenerateOrganizationsAccessReportCallable(REQUEST)  SubmitCallable(&IAMClient::GenerateOrganizationsAccessReport, REQUEST)

#define GenerateServiceLastAccessedDetailsAsync(...)  SubmitAsync(&IAMClient::GenerateServiceLastAccessedDetails, __VA_ARGS__)
#define GenerateServiceLastAccessedDetailsCallable(REQUEST)  SubmitCallable(&IAMClient::GenerateServiceLastAccessedDetails, REQUEST)

#define GetAccessKeyLastUsedAsync(...)  SubmitAsync(&IAMClient::GetAccessKeyLastUsed, __VA_ARGS__)
#define GetAccessKeyLastUsedCallable(REQUEST)  SubmitCallable(&IAMClient::GetAccessKeyLastUsed, REQUEST)

#define GetAccountAuthorizationDetailsAsync(...)  SubmitAsync(&IAMClient::GetAccountAuthorizationDetails, __VA_ARGS__)
#define GetAccountAuthorizationDetailsCallable(REQUEST)  SubmitCallable(&IAMClient::GetAccountAuthorizationDetails, REQUEST)

#define GetAccountPasswordPolicyAsync(...)  SubmitAsync(&IAMClient::GetAccountPasswordPolicy, __VA_ARGS__)
#define GetAccountPasswordPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::GetAccountPasswordPolicy, REQUEST)

#define GetAccountSummaryAsync(...)  SubmitAsync(&IAMClient::GetAccountSummary, __VA_ARGS__)
#define GetAccountSummaryCallable(REQUEST)  SubmitCallable(&IAMClient::GetAccountSummary, REQUEST)

#define GetContextKeysForCustomPolicyAsync(...)  SubmitAsync(&IAMClient::GetContextKeysForCustomPolicy, __VA_ARGS__)
#define GetContextKeysForCustomPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::GetContextKeysForCustomPolicy, REQUEST)

#define GetContextKeysForPrincipalPolicyAsync(...)  SubmitAsync(&IAMClient::GetContextKeysForPrincipalPolicy, __VA_ARGS__)
#define GetContextKeysForPrincipalPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::GetContextKeysForPrincipalPolicy, REQUEST)

#define GetCredentialReportAsync(...)  SubmitAsync(&IAMClient::GetCredentialReport, __VA_ARGS__)
#define GetCredentialReportCallable(REQUEST)  SubmitCallable(&IAMClient::GetCredentialReport, REQUEST)

#define GetGroupAsync(...)  SubmitAsync(&IAMClient::GetGroup, __VA_ARGS__)
#define GetGroupCallable(REQUEST)  SubmitCallable(&IAMClient::GetGroup, REQUEST)

#define GetGroupPolicyAsync(...)  SubmitAsync(&IAMClient::GetGroupPolicy, __VA_ARGS__)
#define GetGroupPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::GetGroupPolicy, REQUEST)

#define GetInstanceProfileAsync(...)  SubmitAsync(&IAMClient::GetInstanceProfile, __VA_ARGS__)
#define GetInstanceProfileCallable(REQUEST)  SubmitCallable(&IAMClient::GetInstanceProfile, REQUEST)

#define GetLoginProfileAsync(...)  SubmitAsync(&IAMClient::GetLoginProfile, __VA_ARGS__)
#define GetLoginProfileCallable(REQUEST)  SubmitCallable(&IAMClient::GetLoginProfile, REQUEST)

#define GetOpenIDConnectProviderAsync(...)  SubmitAsync(&IAMClient::GetOpenIDConnectProvider, __VA_ARGS__)
#define GetOpenIDConnectProviderCallable(REQUEST)  SubmitCallable(&IAMClient::GetOpenIDConnectProvider, REQUEST)

#define GetOrganizationsAccessReportAsync(...)  SubmitAsync(&IAMClient::GetOrganizationsAccessReport, __VA_ARGS__)
#define GetOrganizationsAccessReportCallable(REQUEST)  SubmitCallable(&IAMClient::GetOrganizationsAccessReport, REQUEST)

#define GetPolicyAsync(...)  SubmitAsync(&IAMClient::GetPolicy, __VA_ARGS__)
#define GetPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::GetPolicy, REQUEST)

#define GetPolicyVersionAsync(...)  SubmitAsync(&IAMClient::GetPolicyVersion, __VA_ARGS__)
#define GetPolicyVersionCallable(REQUEST)  SubmitCallable(&IAMClient::GetPolicyVersion, REQUEST)

#define GetRoleAsync(...)  SubmitAsync(&IAMClient::GetRole, __VA_ARGS__)
#define GetRoleCallable(REQUEST)  SubmitCallable(&IAMClient::GetRole, REQUEST)

#define GetRolePolicyAsync(...)  SubmitAsync(&IAMClient::GetRolePolicy, __VA_ARGS__)
#define GetRolePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::GetRolePolicy, REQUEST)

#define GetSAMLProviderAsync(...)  SubmitAsync(&IAMClient::GetSAMLProvider, __VA_ARGS__)
#define GetSAMLProviderCallable(REQUEST)  SubmitCallable(&IAMClient::GetSAMLProvider, REQUEST)

#define GetSSHPublicKeyAsync(...)  SubmitAsync(&IAMClient::GetSSHPublicKey, __VA_ARGS__)
#define GetSSHPublicKeyCallable(REQUEST)  SubmitCallable(&IAMClient::GetSSHPublicKey, REQUEST)

#define GetServerCertificateAsync(...)  SubmitAsync(&IAMClient::GetServerCertificate, __VA_ARGS__)
#define GetServerCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::GetServerCertificate, REQUEST)

#define GetServiceLastAccessedDetailsAsync(...)  SubmitAsync(&IAMClient::GetServiceLastAccessedDetails, __VA_ARGS__)
#define GetServiceLastAccessedDetailsCallable(REQUEST)  SubmitCallable(&IAMClient::GetServiceLastAccessedDetails, REQUEST)

#define GetServiceLastAccessedDetailsWithEntitiesAsync(...)  SubmitAsync(&IAMClient::GetServiceLastAccessedDetailsWithEntities, __VA_ARGS__)
#define GetServiceLastAccessedDetailsWithEntitiesCallable(REQUEST)  SubmitCallable(&IAMClient::GetServiceLastAccessedDetailsWithEntities, REQUEST)

#define GetServiceLinkedRoleDeletionStatusAsync(...)  SubmitAsync(&IAMClient::GetServiceLinkedRoleDeletionStatus, __VA_ARGS__)
#define GetServiceLinkedRoleDeletionStatusCallable(REQUEST)  SubmitCallable(&IAMClient::GetServiceLinkedRoleDeletionStatus, REQUEST)

#define GetUserAsync(...)  SubmitAsync(&IAMClient::GetUser, __VA_ARGS__)
#define GetUserCallable(REQUEST)  SubmitCallable(&IAMClient::GetUser, REQUEST)

#define GetUserPolicyAsync(...)  SubmitAsync(&IAMClient::GetUserPolicy, __VA_ARGS__)
#define GetUserPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::GetUserPolicy, REQUEST)

#define ListAccessKeysAsync(...)  SubmitAsync(&IAMClient::ListAccessKeys, __VA_ARGS__)
#define ListAccessKeysCallable(REQUEST)  SubmitCallable(&IAMClient::ListAccessKeys, REQUEST)

#define ListAccountAliasesAsync(...)  SubmitAsync(&IAMClient::ListAccountAliases, __VA_ARGS__)
#define ListAccountAliasesCallable(REQUEST)  SubmitCallable(&IAMClient::ListAccountAliases, REQUEST)

#define ListAttachedGroupPoliciesAsync(...)  SubmitAsync(&IAMClient::ListAttachedGroupPolicies, __VA_ARGS__)
#define ListAttachedGroupPoliciesCallable(REQUEST)  SubmitCallable(&IAMClient::ListAttachedGroupPolicies, REQUEST)

#define ListAttachedRolePoliciesAsync(...)  SubmitAsync(&IAMClient::ListAttachedRolePolicies, __VA_ARGS__)
#define ListAttachedRolePoliciesCallable(REQUEST)  SubmitCallable(&IAMClient::ListAttachedRolePolicies, REQUEST)

#define ListAttachedUserPoliciesAsync(...)  SubmitAsync(&IAMClient::ListAttachedUserPolicies, __VA_ARGS__)
#define ListAttachedUserPoliciesCallable(REQUEST)  SubmitCallable(&IAMClient::ListAttachedUserPolicies, REQUEST)

#define ListEntitiesForPolicyAsync(...)  SubmitAsync(&IAMClient::ListEntitiesForPolicy, __VA_ARGS__)
#define ListEntitiesForPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::ListEntitiesForPolicy, REQUEST)

#define ListGroupPoliciesAsync(...)  SubmitAsync(&IAMClient::ListGroupPolicies, __VA_ARGS__)
#define ListGroupPoliciesCallable(REQUEST)  SubmitCallable(&IAMClient::ListGroupPolicies, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&IAMClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&IAMClient::ListGroups, REQUEST)

#define ListGroupsForUserAsync(...)  SubmitAsync(&IAMClient::ListGroupsForUser, __VA_ARGS__)
#define ListGroupsForUserCallable(REQUEST)  SubmitCallable(&IAMClient::ListGroupsForUser, REQUEST)

#define ListInstanceProfileTagsAsync(...)  SubmitAsync(&IAMClient::ListInstanceProfileTags, __VA_ARGS__)
#define ListInstanceProfileTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListInstanceProfileTags, REQUEST)

#define ListInstanceProfilesAsync(...)  SubmitAsync(&IAMClient::ListInstanceProfiles, __VA_ARGS__)
#define ListInstanceProfilesCallable(REQUEST)  SubmitCallable(&IAMClient::ListInstanceProfiles, REQUEST)

#define ListInstanceProfilesForRoleAsync(...)  SubmitAsync(&IAMClient::ListInstanceProfilesForRole, __VA_ARGS__)
#define ListInstanceProfilesForRoleCallable(REQUEST)  SubmitCallable(&IAMClient::ListInstanceProfilesForRole, REQUEST)

#define ListMFADeviceTagsAsync(...)  SubmitAsync(&IAMClient::ListMFADeviceTags, __VA_ARGS__)
#define ListMFADeviceTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListMFADeviceTags, REQUEST)

#define ListMFADevicesAsync(...)  SubmitAsync(&IAMClient::ListMFADevices, __VA_ARGS__)
#define ListMFADevicesCallable(REQUEST)  SubmitCallable(&IAMClient::ListMFADevices, REQUEST)

#define ListOpenIDConnectProviderTagsAsync(...)  SubmitAsync(&IAMClient::ListOpenIDConnectProviderTags, __VA_ARGS__)
#define ListOpenIDConnectProviderTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListOpenIDConnectProviderTags, REQUEST)

#define ListOpenIDConnectProvidersAsync(...)  SubmitAsync(&IAMClient::ListOpenIDConnectProviders, __VA_ARGS__)
#define ListOpenIDConnectProvidersCallable(REQUEST)  SubmitCallable(&IAMClient::ListOpenIDConnectProviders, REQUEST)

#define ListPoliciesAsync(...)  SubmitAsync(&IAMClient::ListPolicies, __VA_ARGS__)
#define ListPoliciesCallable(REQUEST)  SubmitCallable(&IAMClient::ListPolicies, REQUEST)

#define ListPoliciesGrantingServiceAccessAsync(...)  SubmitAsync(&IAMClient::ListPoliciesGrantingServiceAccess, __VA_ARGS__)
#define ListPoliciesGrantingServiceAccessCallable(REQUEST)  SubmitCallable(&IAMClient::ListPoliciesGrantingServiceAccess, REQUEST)

#define ListPolicyTagsAsync(...)  SubmitAsync(&IAMClient::ListPolicyTags, __VA_ARGS__)
#define ListPolicyTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListPolicyTags, REQUEST)

#define ListPolicyVersionsAsync(...)  SubmitAsync(&IAMClient::ListPolicyVersions, __VA_ARGS__)
#define ListPolicyVersionsCallable(REQUEST)  SubmitCallable(&IAMClient::ListPolicyVersions, REQUEST)

#define ListRolePoliciesAsync(...)  SubmitAsync(&IAMClient::ListRolePolicies, __VA_ARGS__)
#define ListRolePoliciesCallable(REQUEST)  SubmitCallable(&IAMClient::ListRolePolicies, REQUEST)

#define ListRoleTagsAsync(...)  SubmitAsync(&IAMClient::ListRoleTags, __VA_ARGS__)
#define ListRoleTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListRoleTags, REQUEST)

#define ListRolesAsync(...)  SubmitAsync(&IAMClient::ListRoles, __VA_ARGS__)
#define ListRolesCallable(REQUEST)  SubmitCallable(&IAMClient::ListRoles, REQUEST)

#define ListSAMLProviderTagsAsync(...)  SubmitAsync(&IAMClient::ListSAMLProviderTags, __VA_ARGS__)
#define ListSAMLProviderTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListSAMLProviderTags, REQUEST)

#define ListSAMLProvidersAsync(...)  SubmitAsync(&IAMClient::ListSAMLProviders, __VA_ARGS__)
#define ListSAMLProvidersCallable(REQUEST)  SubmitCallable(&IAMClient::ListSAMLProviders, REQUEST)

#define ListSSHPublicKeysAsync(...)  SubmitAsync(&IAMClient::ListSSHPublicKeys, __VA_ARGS__)
#define ListSSHPublicKeysCallable(REQUEST)  SubmitCallable(&IAMClient::ListSSHPublicKeys, REQUEST)

#define ListServerCertificateTagsAsync(...)  SubmitAsync(&IAMClient::ListServerCertificateTags, __VA_ARGS__)
#define ListServerCertificateTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListServerCertificateTags, REQUEST)

#define ListServerCertificatesAsync(...)  SubmitAsync(&IAMClient::ListServerCertificates, __VA_ARGS__)
#define ListServerCertificatesCallable(REQUEST)  SubmitCallable(&IAMClient::ListServerCertificates, REQUEST)

#define ListServiceSpecificCredentialsAsync(...)  SubmitAsync(&IAMClient::ListServiceSpecificCredentials, __VA_ARGS__)
#define ListServiceSpecificCredentialsCallable(REQUEST)  SubmitCallable(&IAMClient::ListServiceSpecificCredentials, REQUEST)

#define ListSigningCertificatesAsync(...)  SubmitAsync(&IAMClient::ListSigningCertificates, __VA_ARGS__)
#define ListSigningCertificatesCallable(REQUEST)  SubmitCallable(&IAMClient::ListSigningCertificates, REQUEST)

#define ListUserPoliciesAsync(...)  SubmitAsync(&IAMClient::ListUserPolicies, __VA_ARGS__)
#define ListUserPoliciesCallable(REQUEST)  SubmitCallable(&IAMClient::ListUserPolicies, REQUEST)

#define ListUserTagsAsync(...)  SubmitAsync(&IAMClient::ListUserTags, __VA_ARGS__)
#define ListUserTagsCallable(REQUEST)  SubmitCallable(&IAMClient::ListUserTags, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&IAMClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&IAMClient::ListUsers, REQUEST)

#define ListVirtualMFADevicesAsync(...)  SubmitAsync(&IAMClient::ListVirtualMFADevices, __VA_ARGS__)
#define ListVirtualMFADevicesCallable(REQUEST)  SubmitCallable(&IAMClient::ListVirtualMFADevices, REQUEST)

#define PutGroupPolicyAsync(...)  SubmitAsync(&IAMClient::PutGroupPolicy, __VA_ARGS__)
#define PutGroupPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::PutGroupPolicy, REQUEST)

#define PutRolePermissionsBoundaryAsync(...)  SubmitAsync(&IAMClient::PutRolePermissionsBoundary, __VA_ARGS__)
#define PutRolePermissionsBoundaryCallable(REQUEST)  SubmitCallable(&IAMClient::PutRolePermissionsBoundary, REQUEST)

#define PutRolePolicyAsync(...)  SubmitAsync(&IAMClient::PutRolePolicy, __VA_ARGS__)
#define PutRolePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::PutRolePolicy, REQUEST)

#define PutUserPermissionsBoundaryAsync(...)  SubmitAsync(&IAMClient::PutUserPermissionsBoundary, __VA_ARGS__)
#define PutUserPermissionsBoundaryCallable(REQUEST)  SubmitCallable(&IAMClient::PutUserPermissionsBoundary, REQUEST)

#define PutUserPolicyAsync(...)  SubmitAsync(&IAMClient::PutUserPolicy, __VA_ARGS__)
#define PutUserPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::PutUserPolicy, REQUEST)

#define RemoveClientIDFromOpenIDConnectProviderAsync(...)  SubmitAsync(&IAMClient::RemoveClientIDFromOpenIDConnectProvider, __VA_ARGS__)
#define RemoveClientIDFromOpenIDConnectProviderCallable(REQUEST)  SubmitCallable(&IAMClient::RemoveClientIDFromOpenIDConnectProvider, REQUEST)

#define RemoveRoleFromInstanceProfileAsync(...)  SubmitAsync(&IAMClient::RemoveRoleFromInstanceProfile, __VA_ARGS__)
#define RemoveRoleFromInstanceProfileCallable(REQUEST)  SubmitCallable(&IAMClient::RemoveRoleFromInstanceProfile, REQUEST)

#define RemoveUserFromGroupAsync(...)  SubmitAsync(&IAMClient::RemoveUserFromGroup, __VA_ARGS__)
#define RemoveUserFromGroupCallable(REQUEST)  SubmitCallable(&IAMClient::RemoveUserFromGroup, REQUEST)

#define ResetServiceSpecificCredentialAsync(...)  SubmitAsync(&IAMClient::ResetServiceSpecificCredential, __VA_ARGS__)
#define ResetServiceSpecificCredentialCallable(REQUEST)  SubmitCallable(&IAMClient::ResetServiceSpecificCredential, REQUEST)

#define ResyncMFADeviceAsync(...)  SubmitAsync(&IAMClient::ResyncMFADevice, __VA_ARGS__)
#define ResyncMFADeviceCallable(REQUEST)  SubmitCallable(&IAMClient::ResyncMFADevice, REQUEST)

#define SetDefaultPolicyVersionAsync(...)  SubmitAsync(&IAMClient::SetDefaultPolicyVersion, __VA_ARGS__)
#define SetDefaultPolicyVersionCallable(REQUEST)  SubmitCallable(&IAMClient::SetDefaultPolicyVersion, REQUEST)

#define SetSecurityTokenServicePreferencesAsync(...)  SubmitAsync(&IAMClient::SetSecurityTokenServicePreferences, __VA_ARGS__)
#define SetSecurityTokenServicePreferencesCallable(REQUEST)  SubmitCallable(&IAMClient::SetSecurityTokenServicePreferences, REQUEST)

#define SimulateCustomPolicyAsync(...)  SubmitAsync(&IAMClient::SimulateCustomPolicy, __VA_ARGS__)
#define SimulateCustomPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::SimulateCustomPolicy, REQUEST)

#define SimulatePrincipalPolicyAsync(...)  SubmitAsync(&IAMClient::SimulatePrincipalPolicy, __VA_ARGS__)
#define SimulatePrincipalPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::SimulatePrincipalPolicy, REQUEST)

#define TagInstanceProfileAsync(...)  SubmitAsync(&IAMClient::TagInstanceProfile, __VA_ARGS__)
#define TagInstanceProfileCallable(REQUEST)  SubmitCallable(&IAMClient::TagInstanceProfile, REQUEST)

#define TagMFADeviceAsync(...)  SubmitAsync(&IAMClient::TagMFADevice, __VA_ARGS__)
#define TagMFADeviceCallable(REQUEST)  SubmitCallable(&IAMClient::TagMFADevice, REQUEST)

#define TagOpenIDConnectProviderAsync(...)  SubmitAsync(&IAMClient::TagOpenIDConnectProvider, __VA_ARGS__)
#define TagOpenIDConnectProviderCallable(REQUEST)  SubmitCallable(&IAMClient::TagOpenIDConnectProvider, REQUEST)

#define TagPolicyAsync(...)  SubmitAsync(&IAMClient::TagPolicy, __VA_ARGS__)
#define TagPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::TagPolicy, REQUEST)

#define TagRoleAsync(...)  SubmitAsync(&IAMClient::TagRole, __VA_ARGS__)
#define TagRoleCallable(REQUEST)  SubmitCallable(&IAMClient::TagRole, REQUEST)

#define TagSAMLProviderAsync(...)  SubmitAsync(&IAMClient::TagSAMLProvider, __VA_ARGS__)
#define TagSAMLProviderCallable(REQUEST)  SubmitCallable(&IAMClient::TagSAMLProvider, REQUEST)

#define TagServerCertificateAsync(...)  SubmitAsync(&IAMClient::TagServerCertificate, __VA_ARGS__)
#define TagServerCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::TagServerCertificate, REQUEST)

#define TagUserAsync(...)  SubmitAsync(&IAMClient::TagUser, __VA_ARGS__)
#define TagUserCallable(REQUEST)  SubmitCallable(&IAMClient::TagUser, REQUEST)

#define UntagInstanceProfileAsync(...)  SubmitAsync(&IAMClient::UntagInstanceProfile, __VA_ARGS__)
#define UntagInstanceProfileCallable(REQUEST)  SubmitCallable(&IAMClient::UntagInstanceProfile, REQUEST)

#define UntagMFADeviceAsync(...)  SubmitAsync(&IAMClient::UntagMFADevice, __VA_ARGS__)
#define UntagMFADeviceCallable(REQUEST)  SubmitCallable(&IAMClient::UntagMFADevice, REQUEST)

#define UntagOpenIDConnectProviderAsync(...)  SubmitAsync(&IAMClient::UntagOpenIDConnectProvider, __VA_ARGS__)
#define UntagOpenIDConnectProviderCallable(REQUEST)  SubmitCallable(&IAMClient::UntagOpenIDConnectProvider, REQUEST)

#define UntagPolicyAsync(...)  SubmitAsync(&IAMClient::UntagPolicy, __VA_ARGS__)
#define UntagPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::UntagPolicy, REQUEST)

#define UntagRoleAsync(...)  SubmitAsync(&IAMClient::UntagRole, __VA_ARGS__)
#define UntagRoleCallable(REQUEST)  SubmitCallable(&IAMClient::UntagRole, REQUEST)

#define UntagSAMLProviderAsync(...)  SubmitAsync(&IAMClient::UntagSAMLProvider, __VA_ARGS__)
#define UntagSAMLProviderCallable(REQUEST)  SubmitCallable(&IAMClient::UntagSAMLProvider, REQUEST)

#define UntagServerCertificateAsync(...)  SubmitAsync(&IAMClient::UntagServerCertificate, __VA_ARGS__)
#define UntagServerCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::UntagServerCertificate, REQUEST)

#define UntagUserAsync(...)  SubmitAsync(&IAMClient::UntagUser, __VA_ARGS__)
#define UntagUserCallable(REQUEST)  SubmitCallable(&IAMClient::UntagUser, REQUEST)

#define UpdateAccessKeyAsync(...)  SubmitAsync(&IAMClient::UpdateAccessKey, __VA_ARGS__)
#define UpdateAccessKeyCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateAccessKey, REQUEST)

#define UpdateAccountPasswordPolicyAsync(...)  SubmitAsync(&IAMClient::UpdateAccountPasswordPolicy, __VA_ARGS__)
#define UpdateAccountPasswordPolicyCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateAccountPasswordPolicy, REQUEST)

#define UpdateAssumeRolePolicyAsync(...)  SubmitAsync(&IAMClient::UpdateAssumeRolePolicy, __VA_ARGS__)
#define UpdateAssumeRolePolicyCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateAssumeRolePolicy, REQUEST)

#define UpdateGroupAsync(...)  SubmitAsync(&IAMClient::UpdateGroup, __VA_ARGS__)
#define UpdateGroupCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateGroup, REQUEST)

#define UpdateLoginProfileAsync(...)  SubmitAsync(&IAMClient::UpdateLoginProfile, __VA_ARGS__)
#define UpdateLoginProfileCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateLoginProfile, REQUEST)

#define UpdateOpenIDConnectProviderThumbprintAsync(...)  SubmitAsync(&IAMClient::UpdateOpenIDConnectProviderThumbprint, __VA_ARGS__)
#define UpdateOpenIDConnectProviderThumbprintCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateOpenIDConnectProviderThumbprint, REQUEST)

#define UpdateRoleAsync(...)  SubmitAsync(&IAMClient::UpdateRole, __VA_ARGS__)
#define UpdateRoleCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateRole, REQUEST)

#define UpdateRoleDescriptionAsync(...)  SubmitAsync(&IAMClient::UpdateRoleDescription, __VA_ARGS__)
#define UpdateRoleDescriptionCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateRoleDescription, REQUEST)

#define UpdateSAMLProviderAsync(...)  SubmitAsync(&IAMClient::UpdateSAMLProvider, __VA_ARGS__)
#define UpdateSAMLProviderCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateSAMLProvider, REQUEST)

#define UpdateSSHPublicKeyAsync(...)  SubmitAsync(&IAMClient::UpdateSSHPublicKey, __VA_ARGS__)
#define UpdateSSHPublicKeyCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateSSHPublicKey, REQUEST)

#define UpdateServerCertificateAsync(...)  SubmitAsync(&IAMClient::UpdateServerCertificate, __VA_ARGS__)
#define UpdateServerCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateServerCertificate, REQUEST)

#define UpdateServiceSpecificCredentialAsync(...)  SubmitAsync(&IAMClient::UpdateServiceSpecificCredential, __VA_ARGS__)
#define UpdateServiceSpecificCredentialCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateServiceSpecificCredential, REQUEST)

#define UpdateSigningCertificateAsync(...)  SubmitAsync(&IAMClient::UpdateSigningCertificate, __VA_ARGS__)
#define UpdateSigningCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateSigningCertificate, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&IAMClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&IAMClient::UpdateUser, REQUEST)

#define UploadSSHPublicKeyAsync(...)  SubmitAsync(&IAMClient::UploadSSHPublicKey, __VA_ARGS__)
#define UploadSSHPublicKeyCallable(REQUEST)  SubmitCallable(&IAMClient::UploadSSHPublicKey, REQUEST)

#define UploadServerCertificateAsync(...)  SubmitAsync(&IAMClient::UploadServerCertificate, __VA_ARGS__)
#define UploadServerCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::UploadServerCertificate, REQUEST)

#define UploadSigningCertificateAsync(...)  SubmitAsync(&IAMClient::UploadSigningCertificate, __VA_ARGS__)
#define UploadSigningCertificateCallable(REQUEST)  SubmitCallable(&IAMClient::UploadSigningCertificate, REQUEST)

