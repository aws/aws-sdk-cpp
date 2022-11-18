/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptAdministratorInvitationAsync(...)  SubmitAsync(&SecurityHubClient::AcceptAdministratorInvitation, __VA_ARGS__)
#define AcceptAdministratorInvitationCallable(REQUEST)  SubmitCallable(&SecurityHubClient::AcceptAdministratorInvitation, REQUEST)

#define BatchDisableStandardsAsync(...)  SubmitAsync(&SecurityHubClient::BatchDisableStandards, __VA_ARGS__)
#define BatchDisableStandardsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::BatchDisableStandards, REQUEST)

#define BatchEnableStandardsAsync(...)  SubmitAsync(&SecurityHubClient::BatchEnableStandards, __VA_ARGS__)
#define BatchEnableStandardsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::BatchEnableStandards, REQUEST)

#define BatchImportFindingsAsync(...)  SubmitAsync(&SecurityHubClient::BatchImportFindings, __VA_ARGS__)
#define BatchImportFindingsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::BatchImportFindings, REQUEST)

#define BatchUpdateFindingsAsync(...)  SubmitAsync(&SecurityHubClient::BatchUpdateFindings, __VA_ARGS__)
#define BatchUpdateFindingsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::BatchUpdateFindings, REQUEST)

#define CreateActionTargetAsync(...)  SubmitAsync(&SecurityHubClient::CreateActionTarget, __VA_ARGS__)
#define CreateActionTargetCallable(REQUEST)  SubmitCallable(&SecurityHubClient::CreateActionTarget, REQUEST)

#define CreateFindingAggregatorAsync(...)  SubmitAsync(&SecurityHubClient::CreateFindingAggregator, __VA_ARGS__)
#define CreateFindingAggregatorCallable(REQUEST)  SubmitCallable(&SecurityHubClient::CreateFindingAggregator, REQUEST)

#define CreateInsightAsync(...)  SubmitAsync(&SecurityHubClient::CreateInsight, __VA_ARGS__)
#define CreateInsightCallable(REQUEST)  SubmitCallable(&SecurityHubClient::CreateInsight, REQUEST)

#define CreateMembersAsync(...)  SubmitAsync(&SecurityHubClient::CreateMembers, __VA_ARGS__)
#define CreateMembersCallable(REQUEST)  SubmitCallable(&SecurityHubClient::CreateMembers, REQUEST)

#define DeclineInvitationsAsync(...)  SubmitAsync(&SecurityHubClient::DeclineInvitations, __VA_ARGS__)
#define DeclineInvitationsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DeclineInvitations, REQUEST)

#define DeleteActionTargetAsync(...)  SubmitAsync(&SecurityHubClient::DeleteActionTarget, __VA_ARGS__)
#define DeleteActionTargetCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DeleteActionTarget, REQUEST)

#define DeleteFindingAggregatorAsync(...)  SubmitAsync(&SecurityHubClient::DeleteFindingAggregator, __VA_ARGS__)
#define DeleteFindingAggregatorCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DeleteFindingAggregator, REQUEST)

#define DeleteInsightAsync(...)  SubmitAsync(&SecurityHubClient::DeleteInsight, __VA_ARGS__)
#define DeleteInsightCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DeleteInsight, REQUEST)

#define DeleteInvitationsAsync(...)  SubmitAsync(&SecurityHubClient::DeleteInvitations, __VA_ARGS__)
#define DeleteInvitationsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DeleteInvitations, REQUEST)

#define DeleteMembersAsync(...)  SubmitAsync(&SecurityHubClient::DeleteMembers, __VA_ARGS__)
#define DeleteMembersCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DeleteMembers, REQUEST)

#define DescribeActionTargetsAsync(...)  SubmitAsync(&SecurityHubClient::DescribeActionTargets, __VA_ARGS__)
#define DescribeActionTargetsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DescribeActionTargets, REQUEST)

#define DescribeHubAsync(...)  SubmitAsync(&SecurityHubClient::DescribeHub, __VA_ARGS__)
#define DescribeHubCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DescribeHub, REQUEST)

#define DescribeOrganizationConfigurationAsync(...)  SubmitAsync(&SecurityHubClient::DescribeOrganizationConfiguration, __VA_ARGS__)
#define DescribeOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DescribeOrganizationConfiguration, REQUEST)

#define DescribeProductsAsync(...)  SubmitAsync(&SecurityHubClient::DescribeProducts, __VA_ARGS__)
#define DescribeProductsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DescribeProducts, REQUEST)

#define DescribeStandardsAsync(...)  SubmitAsync(&SecurityHubClient::DescribeStandards, __VA_ARGS__)
#define DescribeStandardsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DescribeStandards, REQUEST)

#define DescribeStandardsControlsAsync(...)  SubmitAsync(&SecurityHubClient::DescribeStandardsControls, __VA_ARGS__)
#define DescribeStandardsControlsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DescribeStandardsControls, REQUEST)

#define DisableImportFindingsForProductAsync(...)  SubmitAsync(&SecurityHubClient::DisableImportFindingsForProduct, __VA_ARGS__)
#define DisableImportFindingsForProductCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DisableImportFindingsForProduct, REQUEST)

#define DisableOrganizationAdminAccountAsync(...)  SubmitAsync(&SecurityHubClient::DisableOrganizationAdminAccount, __VA_ARGS__)
#define DisableOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DisableOrganizationAdminAccount, REQUEST)

#define DisableSecurityHubAsync(...)  SubmitAsync(&SecurityHubClient::DisableSecurityHub, __VA_ARGS__)
#define DisableSecurityHubCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DisableSecurityHub, REQUEST)

#define DisassociateFromAdministratorAccountAsync(...)  SubmitAsync(&SecurityHubClient::DisassociateFromAdministratorAccount, __VA_ARGS__)
#define DisassociateFromAdministratorAccountCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DisassociateFromAdministratorAccount, REQUEST)

#define DisassociateMembersAsync(...)  SubmitAsync(&SecurityHubClient::DisassociateMembers, __VA_ARGS__)
#define DisassociateMembersCallable(REQUEST)  SubmitCallable(&SecurityHubClient::DisassociateMembers, REQUEST)

#define EnableImportFindingsForProductAsync(...)  SubmitAsync(&SecurityHubClient::EnableImportFindingsForProduct, __VA_ARGS__)
#define EnableImportFindingsForProductCallable(REQUEST)  SubmitCallable(&SecurityHubClient::EnableImportFindingsForProduct, REQUEST)

#define EnableOrganizationAdminAccountAsync(...)  SubmitAsync(&SecurityHubClient::EnableOrganizationAdminAccount, __VA_ARGS__)
#define EnableOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&SecurityHubClient::EnableOrganizationAdminAccount, REQUEST)

#define EnableSecurityHubAsync(...)  SubmitAsync(&SecurityHubClient::EnableSecurityHub, __VA_ARGS__)
#define EnableSecurityHubCallable(REQUEST)  SubmitCallable(&SecurityHubClient::EnableSecurityHub, REQUEST)

#define GetAdministratorAccountAsync(...)  SubmitAsync(&SecurityHubClient::GetAdministratorAccount, __VA_ARGS__)
#define GetAdministratorAccountCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetAdministratorAccount, REQUEST)

#define GetEnabledStandardsAsync(...)  SubmitAsync(&SecurityHubClient::GetEnabledStandards, __VA_ARGS__)
#define GetEnabledStandardsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetEnabledStandards, REQUEST)

#define GetFindingAggregatorAsync(...)  SubmitAsync(&SecurityHubClient::GetFindingAggregator, __VA_ARGS__)
#define GetFindingAggregatorCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetFindingAggregator, REQUEST)

#define GetFindingsAsync(...)  SubmitAsync(&SecurityHubClient::GetFindings, __VA_ARGS__)
#define GetFindingsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetFindings, REQUEST)

#define GetInsightResultsAsync(...)  SubmitAsync(&SecurityHubClient::GetInsightResults, __VA_ARGS__)
#define GetInsightResultsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetInsightResults, REQUEST)

#define GetInsightsAsync(...)  SubmitAsync(&SecurityHubClient::GetInsights, __VA_ARGS__)
#define GetInsightsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetInsights, REQUEST)

#define GetInvitationsCountAsync(...)  SubmitAsync(&SecurityHubClient::GetInvitationsCount, __VA_ARGS__)
#define GetInvitationsCountCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetInvitationsCount, REQUEST)

#define GetMembersAsync(...)  SubmitAsync(&SecurityHubClient::GetMembers, __VA_ARGS__)
#define GetMembersCallable(REQUEST)  SubmitCallable(&SecurityHubClient::GetMembers, REQUEST)

#define InviteMembersAsync(...)  SubmitAsync(&SecurityHubClient::InviteMembers, __VA_ARGS__)
#define InviteMembersCallable(REQUEST)  SubmitCallable(&SecurityHubClient::InviteMembers, REQUEST)

#define ListEnabledProductsForImportAsync(...)  SubmitAsync(&SecurityHubClient::ListEnabledProductsForImport, __VA_ARGS__)
#define ListEnabledProductsForImportCallable(REQUEST)  SubmitCallable(&SecurityHubClient::ListEnabledProductsForImport, REQUEST)

#define ListFindingAggregatorsAsync(...)  SubmitAsync(&SecurityHubClient::ListFindingAggregators, __VA_ARGS__)
#define ListFindingAggregatorsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::ListFindingAggregators, REQUEST)

#define ListInvitationsAsync(...)  SubmitAsync(&SecurityHubClient::ListInvitations, __VA_ARGS__)
#define ListInvitationsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::ListInvitations, REQUEST)

#define ListMembersAsync(...)  SubmitAsync(&SecurityHubClient::ListMembers, __VA_ARGS__)
#define ListMembersCallable(REQUEST)  SubmitCallable(&SecurityHubClient::ListMembers, REQUEST)

#define ListOrganizationAdminAccountsAsync(...)  SubmitAsync(&SecurityHubClient::ListOrganizationAdminAccounts, __VA_ARGS__)
#define ListOrganizationAdminAccountsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::ListOrganizationAdminAccounts, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SecurityHubClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SecurityHubClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SecurityHubClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SecurityHubClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SecurityHubClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UntagResource, REQUEST)

#define UpdateActionTargetAsync(...)  SubmitAsync(&SecurityHubClient::UpdateActionTarget, __VA_ARGS__)
#define UpdateActionTargetCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UpdateActionTarget, REQUEST)

#define UpdateFindingAggregatorAsync(...)  SubmitAsync(&SecurityHubClient::UpdateFindingAggregator, __VA_ARGS__)
#define UpdateFindingAggregatorCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UpdateFindingAggregator, REQUEST)

#define UpdateFindingsAsync(...)  SubmitAsync(&SecurityHubClient::UpdateFindings, __VA_ARGS__)
#define UpdateFindingsCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UpdateFindings, REQUEST)

#define UpdateInsightAsync(...)  SubmitAsync(&SecurityHubClient::UpdateInsight, __VA_ARGS__)
#define UpdateInsightCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UpdateInsight, REQUEST)

#define UpdateOrganizationConfigurationAsync(...)  SubmitAsync(&SecurityHubClient::UpdateOrganizationConfiguration, __VA_ARGS__)
#define UpdateOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UpdateOrganizationConfiguration, REQUEST)

#define UpdateSecurityHubConfigurationAsync(...)  SubmitAsync(&SecurityHubClient::UpdateSecurityHubConfiguration, __VA_ARGS__)
#define UpdateSecurityHubConfigurationCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UpdateSecurityHubConfiguration, REQUEST)

#define UpdateStandardsControlAsync(...)  SubmitAsync(&SecurityHubClient::UpdateStandardsControl, __VA_ARGS__)
#define UpdateStandardsControlCallable(REQUEST)  SubmitCallable(&SecurityHubClient::UpdateStandardsControl, REQUEST)

