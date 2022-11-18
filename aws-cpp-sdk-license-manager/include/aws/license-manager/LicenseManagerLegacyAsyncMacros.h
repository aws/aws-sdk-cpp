/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptGrantAsync(...)  SubmitAsync(&LicenseManagerClient::AcceptGrant, __VA_ARGS__)
#define AcceptGrantCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::AcceptGrant, REQUEST)

#define CheckInLicenseAsync(...)  SubmitAsync(&LicenseManagerClient::CheckInLicense, __VA_ARGS__)
#define CheckInLicenseCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CheckInLicense, REQUEST)

#define CheckoutBorrowLicenseAsync(...)  SubmitAsync(&LicenseManagerClient::CheckoutBorrowLicense, __VA_ARGS__)
#define CheckoutBorrowLicenseCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CheckoutBorrowLicense, REQUEST)

#define CheckoutLicenseAsync(...)  SubmitAsync(&LicenseManagerClient::CheckoutLicense, __VA_ARGS__)
#define CheckoutLicenseCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CheckoutLicense, REQUEST)

#define CreateGrantAsync(...)  SubmitAsync(&LicenseManagerClient::CreateGrant, __VA_ARGS__)
#define CreateGrantCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateGrant, REQUEST)

#define CreateGrantVersionAsync(...)  SubmitAsync(&LicenseManagerClient::CreateGrantVersion, __VA_ARGS__)
#define CreateGrantVersionCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateGrantVersion, REQUEST)

#define CreateLicenseAsync(...)  SubmitAsync(&LicenseManagerClient::CreateLicense, __VA_ARGS__)
#define CreateLicenseCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateLicense, REQUEST)

#define CreateLicenseConfigurationAsync(...)  SubmitAsync(&LicenseManagerClient::CreateLicenseConfiguration, __VA_ARGS__)
#define CreateLicenseConfigurationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateLicenseConfiguration, REQUEST)

#define CreateLicenseConversionTaskForResourceAsync(...)  SubmitAsync(&LicenseManagerClient::CreateLicenseConversionTaskForResource, __VA_ARGS__)
#define CreateLicenseConversionTaskForResourceCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateLicenseConversionTaskForResource, REQUEST)

#define CreateLicenseManagerReportGeneratorAsync(...)  SubmitAsync(&LicenseManagerClient::CreateLicenseManagerReportGenerator, __VA_ARGS__)
#define CreateLicenseManagerReportGeneratorCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateLicenseManagerReportGenerator, REQUEST)

#define CreateLicenseVersionAsync(...)  SubmitAsync(&LicenseManagerClient::CreateLicenseVersion, __VA_ARGS__)
#define CreateLicenseVersionCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateLicenseVersion, REQUEST)

#define CreateTokenAsync(...)  SubmitAsync(&LicenseManagerClient::CreateToken, __VA_ARGS__)
#define CreateTokenCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::CreateToken, REQUEST)

#define DeleteGrantAsync(...)  SubmitAsync(&LicenseManagerClient::DeleteGrant, __VA_ARGS__)
#define DeleteGrantCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::DeleteGrant, REQUEST)

#define DeleteLicenseAsync(...)  SubmitAsync(&LicenseManagerClient::DeleteLicense, __VA_ARGS__)
#define DeleteLicenseCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::DeleteLicense, REQUEST)

#define DeleteLicenseConfigurationAsync(...)  SubmitAsync(&LicenseManagerClient::DeleteLicenseConfiguration, __VA_ARGS__)
#define DeleteLicenseConfigurationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::DeleteLicenseConfiguration, REQUEST)

#define DeleteLicenseManagerReportGeneratorAsync(...)  SubmitAsync(&LicenseManagerClient::DeleteLicenseManagerReportGenerator, __VA_ARGS__)
#define DeleteLicenseManagerReportGeneratorCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::DeleteLicenseManagerReportGenerator, REQUEST)

#define DeleteTokenAsync(...)  SubmitAsync(&LicenseManagerClient::DeleteToken, __VA_ARGS__)
#define DeleteTokenCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::DeleteToken, REQUEST)

#define ExtendLicenseConsumptionAsync(...)  SubmitAsync(&LicenseManagerClient::ExtendLicenseConsumption, __VA_ARGS__)
#define ExtendLicenseConsumptionCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ExtendLicenseConsumption, REQUEST)

#define GetAccessTokenAsync(...)  SubmitAsync(&LicenseManagerClient::GetAccessToken, __VA_ARGS__)
#define GetAccessTokenCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetAccessToken, REQUEST)

#define GetGrantAsync(...)  SubmitAsync(&LicenseManagerClient::GetGrant, __VA_ARGS__)
#define GetGrantCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetGrant, REQUEST)

#define GetLicenseAsync(...)  SubmitAsync(&LicenseManagerClient::GetLicense, __VA_ARGS__)
#define GetLicenseCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetLicense, REQUEST)

#define GetLicenseConfigurationAsync(...)  SubmitAsync(&LicenseManagerClient::GetLicenseConfiguration, __VA_ARGS__)
#define GetLicenseConfigurationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetLicenseConfiguration, REQUEST)

#define GetLicenseConversionTaskAsync(...)  SubmitAsync(&LicenseManagerClient::GetLicenseConversionTask, __VA_ARGS__)
#define GetLicenseConversionTaskCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetLicenseConversionTask, REQUEST)

#define GetLicenseManagerReportGeneratorAsync(...)  SubmitAsync(&LicenseManagerClient::GetLicenseManagerReportGenerator, __VA_ARGS__)
#define GetLicenseManagerReportGeneratorCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetLicenseManagerReportGenerator, REQUEST)

#define GetLicenseUsageAsync(...)  SubmitAsync(&LicenseManagerClient::GetLicenseUsage, __VA_ARGS__)
#define GetLicenseUsageCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetLicenseUsage, REQUEST)

#define GetServiceSettingsAsync(...)  SubmitAsync(&LicenseManagerClient::GetServiceSettings, __VA_ARGS__)
#define GetServiceSettingsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::GetServiceSettings, REQUEST)

#define ListAssociationsForLicenseConfigurationAsync(...)  SubmitAsync(&LicenseManagerClient::ListAssociationsForLicenseConfiguration, __VA_ARGS__)
#define ListAssociationsForLicenseConfigurationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListAssociationsForLicenseConfiguration, REQUEST)

#define ListDistributedGrantsAsync(...)  SubmitAsync(&LicenseManagerClient::ListDistributedGrants, __VA_ARGS__)
#define ListDistributedGrantsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListDistributedGrants, REQUEST)

#define ListFailuresForLicenseConfigurationOperationsAsync(...)  SubmitAsync(&LicenseManagerClient::ListFailuresForLicenseConfigurationOperations, __VA_ARGS__)
#define ListFailuresForLicenseConfigurationOperationsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListFailuresForLicenseConfigurationOperations, REQUEST)

#define ListLicenseConfigurationsAsync(...)  SubmitAsync(&LicenseManagerClient::ListLicenseConfigurations, __VA_ARGS__)
#define ListLicenseConfigurationsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListLicenseConfigurations, REQUEST)

#define ListLicenseConversionTasksAsync(...)  SubmitAsync(&LicenseManagerClient::ListLicenseConversionTasks, __VA_ARGS__)
#define ListLicenseConversionTasksCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListLicenseConversionTasks, REQUEST)

#define ListLicenseManagerReportGeneratorsAsync(...)  SubmitAsync(&LicenseManagerClient::ListLicenseManagerReportGenerators, __VA_ARGS__)
#define ListLicenseManagerReportGeneratorsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListLicenseManagerReportGenerators, REQUEST)

#define ListLicenseSpecificationsForResourceAsync(...)  SubmitAsync(&LicenseManagerClient::ListLicenseSpecificationsForResource, __VA_ARGS__)
#define ListLicenseSpecificationsForResourceCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListLicenseSpecificationsForResource, REQUEST)

#define ListLicenseVersionsAsync(...)  SubmitAsync(&LicenseManagerClient::ListLicenseVersions, __VA_ARGS__)
#define ListLicenseVersionsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListLicenseVersions, REQUEST)

#define ListLicensesAsync(...)  SubmitAsync(&LicenseManagerClient::ListLicenses, __VA_ARGS__)
#define ListLicensesCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListLicenses, REQUEST)

#define ListReceivedGrantsAsync(...)  SubmitAsync(&LicenseManagerClient::ListReceivedGrants, __VA_ARGS__)
#define ListReceivedGrantsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListReceivedGrants, REQUEST)

#define ListReceivedGrantsForOrganizationAsync(...)  SubmitAsync(&LicenseManagerClient::ListReceivedGrantsForOrganization, __VA_ARGS__)
#define ListReceivedGrantsForOrganizationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListReceivedGrantsForOrganization, REQUEST)

#define ListReceivedLicensesAsync(...)  SubmitAsync(&LicenseManagerClient::ListReceivedLicenses, __VA_ARGS__)
#define ListReceivedLicensesCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListReceivedLicenses, REQUEST)

#define ListReceivedLicensesForOrganizationAsync(...)  SubmitAsync(&LicenseManagerClient::ListReceivedLicensesForOrganization, __VA_ARGS__)
#define ListReceivedLicensesForOrganizationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListReceivedLicensesForOrganization, REQUEST)

#define ListResourceInventoryAsync(...)  SubmitAsync(&LicenseManagerClient::ListResourceInventory, __VA_ARGS__)
#define ListResourceInventoryCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListResourceInventory, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&LicenseManagerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListTagsForResource, REQUEST)

#define ListTokensAsync(...)  SubmitAsync(&LicenseManagerClient::ListTokens, __VA_ARGS__)
#define ListTokensCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListTokens, REQUEST)

#define ListUsageForLicenseConfigurationAsync(...)  SubmitAsync(&LicenseManagerClient::ListUsageForLicenseConfiguration, __VA_ARGS__)
#define ListUsageForLicenseConfigurationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::ListUsageForLicenseConfiguration, REQUEST)

#define RejectGrantAsync(...)  SubmitAsync(&LicenseManagerClient::RejectGrant, __VA_ARGS__)
#define RejectGrantCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::RejectGrant, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LicenseManagerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LicenseManagerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::UntagResource, REQUEST)

#define UpdateLicenseConfigurationAsync(...)  SubmitAsync(&LicenseManagerClient::UpdateLicenseConfiguration, __VA_ARGS__)
#define UpdateLicenseConfigurationCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::UpdateLicenseConfiguration, REQUEST)

#define UpdateLicenseManagerReportGeneratorAsync(...)  SubmitAsync(&LicenseManagerClient::UpdateLicenseManagerReportGenerator, __VA_ARGS__)
#define UpdateLicenseManagerReportGeneratorCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::UpdateLicenseManagerReportGenerator, REQUEST)

#define UpdateLicenseSpecificationsForResourceAsync(...)  SubmitAsync(&LicenseManagerClient::UpdateLicenseSpecificationsForResource, __VA_ARGS__)
#define UpdateLicenseSpecificationsForResourceCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::UpdateLicenseSpecificationsForResource, REQUEST)

#define UpdateServiceSettingsAsync(...)  SubmitAsync(&LicenseManagerClient::UpdateServiceSettings, __VA_ARGS__)
#define UpdateServiceSettingsCallable(REQUEST)  SubmitCallable(&LicenseManagerClient::UpdateServiceSettings, REQUEST)

