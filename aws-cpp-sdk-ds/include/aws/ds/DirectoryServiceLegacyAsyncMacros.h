/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptSharedDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::AcceptSharedDirectory, __VA_ARGS__)
#define AcceptSharedDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::AcceptSharedDirectory, REQUEST)

#define AddIpRoutesAsync(...)  SubmitAsync(&DirectoryServiceClient::AddIpRoutes, __VA_ARGS__)
#define AddIpRoutesCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::AddIpRoutes, REQUEST)

#define AddRegionAsync(...)  SubmitAsync(&DirectoryServiceClient::AddRegion, __VA_ARGS__)
#define AddRegionCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::AddRegion, REQUEST)

#define AddTagsToResourceAsync(...)  SubmitAsync(&DirectoryServiceClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::AddTagsToResource, REQUEST)

#define CancelSchemaExtensionAsync(...)  SubmitAsync(&DirectoryServiceClient::CancelSchemaExtension, __VA_ARGS__)
#define CancelSchemaExtensionCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CancelSchemaExtension, REQUEST)

#define ConnectDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::ConnectDirectory, __VA_ARGS__)
#define ConnectDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ConnectDirectory, REQUEST)

#define CreateAliasAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateAlias, __VA_ARGS__)
#define CreateAliasCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateAlias, REQUEST)

#define CreateComputerAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateComputer, __VA_ARGS__)
#define CreateComputerCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateComputer, REQUEST)

#define CreateConditionalForwarderAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateConditionalForwarder, __VA_ARGS__)
#define CreateConditionalForwarderCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateConditionalForwarder, REQUEST)

#define CreateDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateDirectory, __VA_ARGS__)
#define CreateDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateDirectory, REQUEST)

#define CreateLogSubscriptionAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateLogSubscription, __VA_ARGS__)
#define CreateLogSubscriptionCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateLogSubscription, REQUEST)

#define CreateMicrosoftADAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateMicrosoftAD, __VA_ARGS__)
#define CreateMicrosoftADCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateMicrosoftAD, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateSnapshot, REQUEST)

#define CreateTrustAsync(...)  SubmitAsync(&DirectoryServiceClient::CreateTrust, __VA_ARGS__)
#define CreateTrustCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::CreateTrust, REQUEST)

#define DeleteConditionalForwarderAsync(...)  SubmitAsync(&DirectoryServiceClient::DeleteConditionalForwarder, __VA_ARGS__)
#define DeleteConditionalForwarderCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DeleteConditionalForwarder, REQUEST)

#define DeleteDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::DeleteDirectory, __VA_ARGS__)
#define DeleteDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DeleteDirectory, REQUEST)

#define DeleteLogSubscriptionAsync(...)  SubmitAsync(&DirectoryServiceClient::DeleteLogSubscription, __VA_ARGS__)
#define DeleteLogSubscriptionCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DeleteLogSubscription, REQUEST)

#define DeleteSnapshotAsync(...)  SubmitAsync(&DirectoryServiceClient::DeleteSnapshot, __VA_ARGS__)
#define DeleteSnapshotCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DeleteSnapshot, REQUEST)

#define DeleteTrustAsync(...)  SubmitAsync(&DirectoryServiceClient::DeleteTrust, __VA_ARGS__)
#define DeleteTrustCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DeleteTrust, REQUEST)

#define DeregisterCertificateAsync(...)  SubmitAsync(&DirectoryServiceClient::DeregisterCertificate, __VA_ARGS__)
#define DeregisterCertificateCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DeregisterCertificate, REQUEST)

#define DeregisterEventTopicAsync(...)  SubmitAsync(&DirectoryServiceClient::DeregisterEventTopic, __VA_ARGS__)
#define DeregisterEventTopicCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DeregisterEventTopic, REQUEST)

#define DescribeCertificateAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeCertificate, __VA_ARGS__)
#define DescribeCertificateCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeCertificate, REQUEST)

#define DescribeClientAuthenticationSettingsAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeClientAuthenticationSettings, __VA_ARGS__)
#define DescribeClientAuthenticationSettingsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeClientAuthenticationSettings, REQUEST)

#define DescribeConditionalForwardersAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeConditionalForwarders, __VA_ARGS__)
#define DescribeConditionalForwardersCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeConditionalForwarders, REQUEST)

#define DescribeDirectoriesAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeDirectories, __VA_ARGS__)
#define DescribeDirectoriesCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeDirectories, REQUEST)

#define DescribeDomainControllersAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeDomainControllers, __VA_ARGS__)
#define DescribeDomainControllersCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeDomainControllers, REQUEST)

#define DescribeEventTopicsAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeEventTopics, __VA_ARGS__)
#define DescribeEventTopicsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeEventTopics, REQUEST)

#define DescribeLDAPSSettingsAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeLDAPSSettings, __VA_ARGS__)
#define DescribeLDAPSSettingsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeLDAPSSettings, REQUEST)

#define DescribeRegionsAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeRegions, __VA_ARGS__)
#define DescribeRegionsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeRegions, REQUEST)

#define DescribeSettingsAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeSettings, __VA_ARGS__)
#define DescribeSettingsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeSettings, REQUEST)

#define DescribeSharedDirectoriesAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeSharedDirectories, __VA_ARGS__)
#define DescribeSharedDirectoriesCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeSharedDirectories, REQUEST)

#define DescribeSnapshotsAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeSnapshots, __VA_ARGS__)
#define DescribeSnapshotsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeSnapshots, REQUEST)

#define DescribeTrustsAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeTrusts, __VA_ARGS__)
#define DescribeTrustsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeTrusts, REQUEST)

#define DescribeUpdateDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::DescribeUpdateDirectory, __VA_ARGS__)
#define DescribeUpdateDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DescribeUpdateDirectory, REQUEST)

#define DisableClientAuthenticationAsync(...)  SubmitAsync(&DirectoryServiceClient::DisableClientAuthentication, __VA_ARGS__)
#define DisableClientAuthenticationCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DisableClientAuthentication, REQUEST)

#define DisableLDAPSAsync(...)  SubmitAsync(&DirectoryServiceClient::DisableLDAPS, __VA_ARGS__)
#define DisableLDAPSCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DisableLDAPS, REQUEST)

#define DisableRadiusAsync(...)  SubmitAsync(&DirectoryServiceClient::DisableRadius, __VA_ARGS__)
#define DisableRadiusCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DisableRadius, REQUEST)

#define DisableSsoAsync(...)  SubmitAsync(&DirectoryServiceClient::DisableSso, __VA_ARGS__)
#define DisableSsoCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::DisableSso, REQUEST)

#define EnableClientAuthenticationAsync(...)  SubmitAsync(&DirectoryServiceClient::EnableClientAuthentication, __VA_ARGS__)
#define EnableClientAuthenticationCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::EnableClientAuthentication, REQUEST)

#define EnableLDAPSAsync(...)  SubmitAsync(&DirectoryServiceClient::EnableLDAPS, __VA_ARGS__)
#define EnableLDAPSCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::EnableLDAPS, REQUEST)

#define EnableRadiusAsync(...)  SubmitAsync(&DirectoryServiceClient::EnableRadius, __VA_ARGS__)
#define EnableRadiusCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::EnableRadius, REQUEST)

#define EnableSsoAsync(...)  SubmitAsync(&DirectoryServiceClient::EnableSso, __VA_ARGS__)
#define EnableSsoCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::EnableSso, REQUEST)

#define GetDirectoryLimitsAsync(...)  SubmitAsync(&DirectoryServiceClient::GetDirectoryLimits, __VA_ARGS__)
#define GetDirectoryLimitsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::GetDirectoryLimits, REQUEST)

#define GetSnapshotLimitsAsync(...)  SubmitAsync(&DirectoryServiceClient::GetSnapshotLimits, __VA_ARGS__)
#define GetSnapshotLimitsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::GetSnapshotLimits, REQUEST)

#define ListCertificatesAsync(...)  SubmitAsync(&DirectoryServiceClient::ListCertificates, __VA_ARGS__)
#define ListCertificatesCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ListCertificates, REQUEST)

#define ListIpRoutesAsync(...)  SubmitAsync(&DirectoryServiceClient::ListIpRoutes, __VA_ARGS__)
#define ListIpRoutesCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ListIpRoutes, REQUEST)

#define ListLogSubscriptionsAsync(...)  SubmitAsync(&DirectoryServiceClient::ListLogSubscriptions, __VA_ARGS__)
#define ListLogSubscriptionsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ListLogSubscriptions, REQUEST)

#define ListSchemaExtensionsAsync(...)  SubmitAsync(&DirectoryServiceClient::ListSchemaExtensions, __VA_ARGS__)
#define ListSchemaExtensionsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ListSchemaExtensions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DirectoryServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ListTagsForResource, REQUEST)

#define RegisterCertificateAsync(...)  SubmitAsync(&DirectoryServiceClient::RegisterCertificate, __VA_ARGS__)
#define RegisterCertificateCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::RegisterCertificate, REQUEST)

#define RegisterEventTopicAsync(...)  SubmitAsync(&DirectoryServiceClient::RegisterEventTopic, __VA_ARGS__)
#define RegisterEventTopicCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::RegisterEventTopic, REQUEST)

#define RejectSharedDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::RejectSharedDirectory, __VA_ARGS__)
#define RejectSharedDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::RejectSharedDirectory, REQUEST)

#define RemoveIpRoutesAsync(...)  SubmitAsync(&DirectoryServiceClient::RemoveIpRoutes, __VA_ARGS__)
#define RemoveIpRoutesCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::RemoveIpRoutes, REQUEST)

#define RemoveRegionAsync(...)  SubmitAsync(&DirectoryServiceClient::RemoveRegion, __VA_ARGS__)
#define RemoveRegionCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::RemoveRegion, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&DirectoryServiceClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::RemoveTagsFromResource, REQUEST)

#define ResetUserPasswordAsync(...)  SubmitAsync(&DirectoryServiceClient::ResetUserPassword, __VA_ARGS__)
#define ResetUserPasswordCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ResetUserPassword, REQUEST)

#define RestoreFromSnapshotAsync(...)  SubmitAsync(&DirectoryServiceClient::RestoreFromSnapshot, __VA_ARGS__)
#define RestoreFromSnapshotCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::RestoreFromSnapshot, REQUEST)

#define ShareDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::ShareDirectory, __VA_ARGS__)
#define ShareDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::ShareDirectory, REQUEST)

#define StartSchemaExtensionAsync(...)  SubmitAsync(&DirectoryServiceClient::StartSchemaExtension, __VA_ARGS__)
#define StartSchemaExtensionCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::StartSchemaExtension, REQUEST)

#define UnshareDirectoryAsync(...)  SubmitAsync(&DirectoryServiceClient::UnshareDirectory, __VA_ARGS__)
#define UnshareDirectoryCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::UnshareDirectory, REQUEST)

#define UpdateConditionalForwarderAsync(...)  SubmitAsync(&DirectoryServiceClient::UpdateConditionalForwarder, __VA_ARGS__)
#define UpdateConditionalForwarderCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::UpdateConditionalForwarder, REQUEST)

#define UpdateDirectorySetupAsync(...)  SubmitAsync(&DirectoryServiceClient::UpdateDirectorySetup, __VA_ARGS__)
#define UpdateDirectorySetupCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::UpdateDirectorySetup, REQUEST)

#define UpdateNumberOfDomainControllersAsync(...)  SubmitAsync(&DirectoryServiceClient::UpdateNumberOfDomainControllers, __VA_ARGS__)
#define UpdateNumberOfDomainControllersCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::UpdateNumberOfDomainControllers, REQUEST)

#define UpdateRadiusAsync(...)  SubmitAsync(&DirectoryServiceClient::UpdateRadius, __VA_ARGS__)
#define UpdateRadiusCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::UpdateRadius, REQUEST)

#define UpdateSettingsAsync(...)  SubmitAsync(&DirectoryServiceClient::UpdateSettings, __VA_ARGS__)
#define UpdateSettingsCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::UpdateSettings, REQUEST)

#define UpdateTrustAsync(...)  SubmitAsync(&DirectoryServiceClient::UpdateTrust, __VA_ARGS__)
#define UpdateTrustCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::UpdateTrust, REQUEST)

#define VerifyTrustAsync(...)  SubmitAsync(&DirectoryServiceClient::VerifyTrust, __VA_ARGS__)
#define VerifyTrustCallable(REQUEST)  SubmitCallable(&DirectoryServiceClient::VerifyTrust, REQUEST)

