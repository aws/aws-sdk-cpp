/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddCustomAttributesAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AddCustomAttributes, __VA_ARGS__)
#define AddCustomAttributesCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AddCustomAttributes, REQUEST)

#define AdminAddUserToGroupAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminAddUserToGroup, __VA_ARGS__)
#define AdminAddUserToGroupCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminAddUserToGroup, REQUEST)

#define AdminConfirmSignUpAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminConfirmSignUp, __VA_ARGS__)
#define AdminConfirmSignUpCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminConfirmSignUp, REQUEST)

#define AdminCreateUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminCreateUser, __VA_ARGS__)
#define AdminCreateUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminCreateUser, REQUEST)

#define AdminDeleteUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminDeleteUser, __VA_ARGS__)
#define AdminDeleteUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminDeleteUser, REQUEST)

#define AdminDeleteUserAttributesAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminDeleteUserAttributes, __VA_ARGS__)
#define AdminDeleteUserAttributesCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminDeleteUserAttributes, REQUEST)

#define AdminDisableProviderForUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminDisableProviderForUser, __VA_ARGS__)
#define AdminDisableProviderForUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminDisableProviderForUser, REQUEST)

#define AdminDisableUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminDisableUser, __VA_ARGS__)
#define AdminDisableUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminDisableUser, REQUEST)

#define AdminEnableUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminEnableUser, __VA_ARGS__)
#define AdminEnableUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminEnableUser, REQUEST)

#define AdminForgetDeviceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminForgetDevice, __VA_ARGS__)
#define AdminForgetDeviceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminForgetDevice, REQUEST)

#define AdminGetDeviceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminGetDevice, __VA_ARGS__)
#define AdminGetDeviceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminGetDevice, REQUEST)

#define AdminGetUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminGetUser, __VA_ARGS__)
#define AdminGetUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminGetUser, REQUEST)

#define AdminInitiateAuthAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminInitiateAuth, __VA_ARGS__)
#define AdminInitiateAuthCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminInitiateAuth, REQUEST)

#define AdminLinkProviderForUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminLinkProviderForUser, __VA_ARGS__)
#define AdminLinkProviderForUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminLinkProviderForUser, REQUEST)

#define AdminListDevicesAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminListDevices, __VA_ARGS__)
#define AdminListDevicesCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminListDevices, REQUEST)

#define AdminListGroupsForUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminListGroupsForUser, __VA_ARGS__)
#define AdminListGroupsForUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminListGroupsForUser, REQUEST)

#define AdminListUserAuthEventsAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminListUserAuthEvents, __VA_ARGS__)
#define AdminListUserAuthEventsCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminListUserAuthEvents, REQUEST)

#define AdminRemoveUserFromGroupAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminRemoveUserFromGroup, __VA_ARGS__)
#define AdminRemoveUserFromGroupCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminRemoveUserFromGroup, REQUEST)

#define AdminResetUserPasswordAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminResetUserPassword, __VA_ARGS__)
#define AdminResetUserPasswordCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminResetUserPassword, REQUEST)

#define AdminRespondToAuthChallengeAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminRespondToAuthChallenge, __VA_ARGS__)
#define AdminRespondToAuthChallengeCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminRespondToAuthChallenge, REQUEST)

#define AdminSetUserMFAPreferenceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminSetUserMFAPreference, __VA_ARGS__)
#define AdminSetUserMFAPreferenceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminSetUserMFAPreference, REQUEST)

#define AdminSetUserPasswordAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminSetUserPassword, __VA_ARGS__)
#define AdminSetUserPasswordCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminSetUserPassword, REQUEST)

#define AdminSetUserSettingsAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminSetUserSettings, __VA_ARGS__)
#define AdminSetUserSettingsCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminSetUserSettings, REQUEST)

#define AdminUpdateAuthEventFeedbackAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback, __VA_ARGS__)
#define AdminUpdateAuthEventFeedbackCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback, REQUEST)

#define AdminUpdateDeviceStatusAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminUpdateDeviceStatus, __VA_ARGS__)
#define AdminUpdateDeviceStatusCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminUpdateDeviceStatus, REQUEST)

#define AdminUpdateUserAttributesAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminUpdateUserAttributes, __VA_ARGS__)
#define AdminUpdateUserAttributesCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminUpdateUserAttributes, REQUEST)

#define AdminUserGlobalSignOutAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AdminUserGlobalSignOut, __VA_ARGS__)
#define AdminUserGlobalSignOutCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AdminUserGlobalSignOut, REQUEST)

#define AssociateSoftwareTokenAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::AssociateSoftwareToken, __VA_ARGS__)
#define AssociateSoftwareTokenCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::AssociateSoftwareToken, REQUEST)

#define ChangePasswordAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ChangePassword, __VA_ARGS__)
#define ChangePasswordCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ChangePassword, REQUEST)

#define ConfirmDeviceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ConfirmDevice, __VA_ARGS__)
#define ConfirmDeviceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ConfirmDevice, REQUEST)

#define ConfirmForgotPasswordAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ConfirmForgotPassword, __VA_ARGS__)
#define ConfirmForgotPasswordCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ConfirmForgotPassword, REQUEST)

#define ConfirmSignUpAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ConfirmSignUp, __VA_ARGS__)
#define ConfirmSignUpCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ConfirmSignUp, REQUEST)

#define CreateGroupAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::CreateGroup, REQUEST)

#define CreateIdentityProviderAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::CreateIdentityProvider, __VA_ARGS__)
#define CreateIdentityProviderCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::CreateIdentityProvider, REQUEST)

#define CreateResourceServerAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::CreateResourceServer, __VA_ARGS__)
#define CreateResourceServerCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::CreateResourceServer, REQUEST)

#define CreateUserImportJobAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::CreateUserImportJob, __VA_ARGS__)
#define CreateUserImportJobCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::CreateUserImportJob, REQUEST)

#define CreateUserPoolAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::CreateUserPool, __VA_ARGS__)
#define CreateUserPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::CreateUserPool, REQUEST)

#define CreateUserPoolClientAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::CreateUserPoolClient, __VA_ARGS__)
#define CreateUserPoolClientCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::CreateUserPoolClient, REQUEST)

#define CreateUserPoolDomainAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::CreateUserPoolDomain, __VA_ARGS__)
#define CreateUserPoolDomainCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::CreateUserPoolDomain, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteGroup, REQUEST)

#define DeleteIdentityProviderAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteIdentityProvider, __VA_ARGS__)
#define DeleteIdentityProviderCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteIdentityProvider, REQUEST)

#define DeleteResourceServerAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteResourceServer, __VA_ARGS__)
#define DeleteResourceServerCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteResourceServer, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteUser, REQUEST)

#define DeleteUserAttributesAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteUserAttributes, __VA_ARGS__)
#define DeleteUserAttributesCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteUserAttributes, REQUEST)

#define DeleteUserPoolAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteUserPool, __VA_ARGS__)
#define DeleteUserPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteUserPool, REQUEST)

#define DeleteUserPoolClientAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteUserPoolClient, __VA_ARGS__)
#define DeleteUserPoolClientCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteUserPoolClient, REQUEST)

#define DeleteUserPoolDomainAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DeleteUserPoolDomain, __VA_ARGS__)
#define DeleteUserPoolDomainCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DeleteUserPoolDomain, REQUEST)

#define DescribeIdentityProviderAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DescribeIdentityProvider, __VA_ARGS__)
#define DescribeIdentityProviderCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DescribeIdentityProvider, REQUEST)

#define DescribeResourceServerAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DescribeResourceServer, __VA_ARGS__)
#define DescribeResourceServerCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DescribeResourceServer, REQUEST)

#define DescribeRiskConfigurationAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DescribeRiskConfiguration, __VA_ARGS__)
#define DescribeRiskConfigurationCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DescribeRiskConfiguration, REQUEST)

#define DescribeUserImportJobAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DescribeUserImportJob, __VA_ARGS__)
#define DescribeUserImportJobCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DescribeUserImportJob, REQUEST)

#define DescribeUserPoolAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DescribeUserPool, __VA_ARGS__)
#define DescribeUserPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DescribeUserPool, REQUEST)

#define DescribeUserPoolClientAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DescribeUserPoolClient, __VA_ARGS__)
#define DescribeUserPoolClientCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DescribeUserPoolClient, REQUEST)

#define DescribeUserPoolDomainAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::DescribeUserPoolDomain, __VA_ARGS__)
#define DescribeUserPoolDomainCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::DescribeUserPoolDomain, REQUEST)

#define ForgetDeviceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ForgetDevice, __VA_ARGS__)
#define ForgetDeviceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ForgetDevice, REQUEST)

#define ForgotPasswordAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ForgotPassword, __VA_ARGS__)
#define ForgotPasswordCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ForgotPassword, REQUEST)

#define GetCSVHeaderAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetCSVHeader, __VA_ARGS__)
#define GetCSVHeaderCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetCSVHeader, REQUEST)

#define GetDeviceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetDevice, __VA_ARGS__)
#define GetDeviceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetDevice, REQUEST)

#define GetGroupAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetGroup, __VA_ARGS__)
#define GetGroupCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetGroup, REQUEST)

#define GetIdentityProviderByIdentifierAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetIdentityProviderByIdentifier, __VA_ARGS__)
#define GetIdentityProviderByIdentifierCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetIdentityProviderByIdentifier, REQUEST)

#define GetSigningCertificateAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetSigningCertificate, __VA_ARGS__)
#define GetSigningCertificateCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetSigningCertificate, REQUEST)

#define GetUICustomizationAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetUICustomization, __VA_ARGS__)
#define GetUICustomizationCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetUICustomization, REQUEST)

#define GetUserAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetUser, __VA_ARGS__)
#define GetUserCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetUser, REQUEST)

#define GetUserAttributeVerificationCodeAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetUserAttributeVerificationCode, __VA_ARGS__)
#define GetUserAttributeVerificationCodeCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetUserAttributeVerificationCode, REQUEST)

#define GetUserPoolMfaConfigAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GetUserPoolMfaConfig, __VA_ARGS__)
#define GetUserPoolMfaConfigCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GetUserPoolMfaConfig, REQUEST)

#define GlobalSignOutAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::GlobalSignOut, __VA_ARGS__)
#define GlobalSignOutCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::GlobalSignOut, REQUEST)

#define InitiateAuthAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::InitiateAuth, __VA_ARGS__)
#define InitiateAuthCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::InitiateAuth, REQUEST)

#define ListDevicesAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListDevices, __VA_ARGS__)
#define ListDevicesCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListDevices, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListGroups, REQUEST)

#define ListIdentityProvidersAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListIdentityProviders, __VA_ARGS__)
#define ListIdentityProvidersCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListIdentityProviders, REQUEST)

#define ListResourceServersAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListResourceServers, __VA_ARGS__)
#define ListResourceServersCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListResourceServers, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListTagsForResource, REQUEST)

#define ListUserImportJobsAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListUserImportJobs, __VA_ARGS__)
#define ListUserImportJobsCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListUserImportJobs, REQUEST)

#define ListUserPoolClientsAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListUserPoolClients, __VA_ARGS__)
#define ListUserPoolClientsCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListUserPoolClients, REQUEST)

#define ListUserPoolsAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListUserPools, __VA_ARGS__)
#define ListUserPoolsCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListUserPools, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListUsers, REQUEST)

#define ListUsersInGroupAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ListUsersInGroup, __VA_ARGS__)
#define ListUsersInGroupCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ListUsersInGroup, REQUEST)

#define ResendConfirmationCodeAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::ResendConfirmationCode, __VA_ARGS__)
#define ResendConfirmationCodeCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::ResendConfirmationCode, REQUEST)

#define RespondToAuthChallengeAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::RespondToAuthChallenge, __VA_ARGS__)
#define RespondToAuthChallengeCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::RespondToAuthChallenge, REQUEST)

#define RevokeTokenAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::RevokeToken, __VA_ARGS__)
#define RevokeTokenCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::RevokeToken, REQUEST)

#define SetRiskConfigurationAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::SetRiskConfiguration, __VA_ARGS__)
#define SetRiskConfigurationCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::SetRiskConfiguration, REQUEST)

#define SetUICustomizationAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::SetUICustomization, __VA_ARGS__)
#define SetUICustomizationCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::SetUICustomization, REQUEST)

#define SetUserMFAPreferenceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::SetUserMFAPreference, __VA_ARGS__)
#define SetUserMFAPreferenceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::SetUserMFAPreference, REQUEST)

#define SetUserPoolMfaConfigAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::SetUserPoolMfaConfig, __VA_ARGS__)
#define SetUserPoolMfaConfigCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::SetUserPoolMfaConfig, REQUEST)

#define SetUserSettingsAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::SetUserSettings, __VA_ARGS__)
#define SetUserSettingsCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::SetUserSettings, REQUEST)

#define SignUpAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::SignUp, __VA_ARGS__)
#define SignUpCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::SignUp, REQUEST)

#define StartUserImportJobAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::StartUserImportJob, __VA_ARGS__)
#define StartUserImportJobCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::StartUserImportJob, REQUEST)

#define StopUserImportJobAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::StopUserImportJob, __VA_ARGS__)
#define StopUserImportJobCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::StopUserImportJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UntagResource, REQUEST)

#define UpdateAuthEventFeedbackAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateAuthEventFeedback, __VA_ARGS__)
#define UpdateAuthEventFeedbackCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateAuthEventFeedback, REQUEST)

#define UpdateDeviceStatusAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateDeviceStatus, __VA_ARGS__)
#define UpdateDeviceStatusCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateDeviceStatus, REQUEST)

#define UpdateGroupAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateGroup, __VA_ARGS__)
#define UpdateGroupCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateGroup, REQUEST)

#define UpdateIdentityProviderAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateIdentityProvider, __VA_ARGS__)
#define UpdateIdentityProviderCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateIdentityProvider, REQUEST)

#define UpdateResourceServerAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateResourceServer, __VA_ARGS__)
#define UpdateResourceServerCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateResourceServer, REQUEST)

#define UpdateUserAttributesAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateUserAttributes, __VA_ARGS__)
#define UpdateUserAttributesCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateUserAttributes, REQUEST)

#define UpdateUserPoolAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateUserPool, __VA_ARGS__)
#define UpdateUserPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateUserPool, REQUEST)

#define UpdateUserPoolClientAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateUserPoolClient, __VA_ARGS__)
#define UpdateUserPoolClientCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateUserPoolClient, REQUEST)

#define UpdateUserPoolDomainAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::UpdateUserPoolDomain, __VA_ARGS__)
#define UpdateUserPoolDomainCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::UpdateUserPoolDomain, REQUEST)

#define VerifySoftwareTokenAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::VerifySoftwareToken, __VA_ARGS__)
#define VerifySoftwareTokenCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::VerifySoftwareToken, REQUEST)

#define VerifyUserAttributeAsync(...)  SubmitAsync(&CognitoIdentityProviderClient::VerifyUserAttribute, __VA_ARGS__)
#define VerifyUserAttributeCallable(REQUEST)  SubmitCallable(&CognitoIdentityProviderClient::VerifyUserAttribute, REQUEST)

