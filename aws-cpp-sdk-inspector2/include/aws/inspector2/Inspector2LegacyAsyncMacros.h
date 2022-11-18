/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateMemberAsync(...)  SubmitAsync(&Inspector2Client::AssociateMember, __VA_ARGS__)
#define AssociateMemberCallable(REQUEST)  SubmitCallable(&Inspector2Client::AssociateMember, REQUEST)

#define BatchGetAccountStatusAsync(...)  SubmitAsync(&Inspector2Client::BatchGetAccountStatus, __VA_ARGS__)
#define BatchGetAccountStatusCallable(REQUEST)  SubmitCallable(&Inspector2Client::BatchGetAccountStatus, REQUEST)

#define BatchGetFreeTrialInfoAsync(...)  SubmitAsync(&Inspector2Client::BatchGetFreeTrialInfo, __VA_ARGS__)
#define BatchGetFreeTrialInfoCallable(REQUEST)  SubmitCallable(&Inspector2Client::BatchGetFreeTrialInfo, REQUEST)

#define CancelFindingsReportAsync(...)  SubmitAsync(&Inspector2Client::CancelFindingsReport, __VA_ARGS__)
#define CancelFindingsReportCallable(REQUEST)  SubmitCallable(&Inspector2Client::CancelFindingsReport, REQUEST)

#define CreateFilterAsync(...)  SubmitAsync(&Inspector2Client::CreateFilter, __VA_ARGS__)
#define CreateFilterCallable(REQUEST)  SubmitCallable(&Inspector2Client::CreateFilter, REQUEST)

#define CreateFindingsReportAsync(...)  SubmitAsync(&Inspector2Client::CreateFindingsReport, __VA_ARGS__)
#define CreateFindingsReportCallable(REQUEST)  SubmitCallable(&Inspector2Client::CreateFindingsReport, REQUEST)

#define DeleteFilterAsync(...)  SubmitAsync(&Inspector2Client::DeleteFilter, __VA_ARGS__)
#define DeleteFilterCallable(REQUEST)  SubmitCallable(&Inspector2Client::DeleteFilter, REQUEST)

#define DescribeOrganizationConfigurationAsync(...)  SubmitAsync(&Inspector2Client::DescribeOrganizationConfiguration, __VA_ARGS__)
#define DescribeOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&Inspector2Client::DescribeOrganizationConfiguration, REQUEST)

#define DisableAsync(...)  SubmitAsync(&Inspector2Client::Disable, __VA_ARGS__)
#define DisableCallable(REQUEST)  SubmitCallable(&Inspector2Client::Disable, REQUEST)

#define DisableDelegatedAdminAccountAsync(...)  SubmitAsync(&Inspector2Client::DisableDelegatedAdminAccount, __VA_ARGS__)
#define DisableDelegatedAdminAccountCallable(REQUEST)  SubmitCallable(&Inspector2Client::DisableDelegatedAdminAccount, REQUEST)

#define DisassociateMemberAsync(...)  SubmitAsync(&Inspector2Client::DisassociateMember, __VA_ARGS__)
#define DisassociateMemberCallable(REQUEST)  SubmitCallable(&Inspector2Client::DisassociateMember, REQUEST)

#define EnableAsync(...)  SubmitAsync(&Inspector2Client::Enable, __VA_ARGS__)
#define EnableCallable(REQUEST)  SubmitCallable(&Inspector2Client::Enable, REQUEST)

#define EnableDelegatedAdminAccountAsync(...)  SubmitAsync(&Inspector2Client::EnableDelegatedAdminAccount, __VA_ARGS__)
#define EnableDelegatedAdminAccountCallable(REQUEST)  SubmitCallable(&Inspector2Client::EnableDelegatedAdminAccount, REQUEST)

#define GetConfigurationAsync(...)  SubmitAsync(&Inspector2Client::GetConfiguration, __VA_ARGS__)
#define GetConfigurationCallable(REQUEST)  SubmitCallable(&Inspector2Client::GetConfiguration, REQUEST)

#define GetDelegatedAdminAccountAsync(...)  SubmitAsync(&Inspector2Client::GetDelegatedAdminAccount, __VA_ARGS__)
#define GetDelegatedAdminAccountCallable(REQUEST)  SubmitCallable(&Inspector2Client::GetDelegatedAdminAccount, REQUEST)

#define GetFindingsReportStatusAsync(...)  SubmitAsync(&Inspector2Client::GetFindingsReportStatus, __VA_ARGS__)
#define GetFindingsReportStatusCallable(REQUEST)  SubmitCallable(&Inspector2Client::GetFindingsReportStatus, REQUEST)

#define GetMemberAsync(...)  SubmitAsync(&Inspector2Client::GetMember, __VA_ARGS__)
#define GetMemberCallable(REQUEST)  SubmitCallable(&Inspector2Client::GetMember, REQUEST)

#define ListAccountPermissionsAsync(...)  SubmitAsync(&Inspector2Client::ListAccountPermissions, __VA_ARGS__)
#define ListAccountPermissionsCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListAccountPermissions, REQUEST)

#define ListCoverageAsync(...)  SubmitAsync(&Inspector2Client::ListCoverage, __VA_ARGS__)
#define ListCoverageCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListCoverage, REQUEST)

#define ListCoverageStatisticsAsync(...)  SubmitAsync(&Inspector2Client::ListCoverageStatistics, __VA_ARGS__)
#define ListCoverageStatisticsCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListCoverageStatistics, REQUEST)

#define ListDelegatedAdminAccountsAsync(...)  SubmitAsync(&Inspector2Client::ListDelegatedAdminAccounts, __VA_ARGS__)
#define ListDelegatedAdminAccountsCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListDelegatedAdminAccounts, REQUEST)

#define ListFiltersAsync(...)  SubmitAsync(&Inspector2Client::ListFilters, __VA_ARGS__)
#define ListFiltersCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListFilters, REQUEST)

#define ListFindingAggregationsAsync(...)  SubmitAsync(&Inspector2Client::ListFindingAggregations, __VA_ARGS__)
#define ListFindingAggregationsCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListFindingAggregations, REQUEST)

#define ListFindingsAsync(...)  SubmitAsync(&Inspector2Client::ListFindings, __VA_ARGS__)
#define ListFindingsCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListFindings, REQUEST)

#define ListMembersAsync(...)  SubmitAsync(&Inspector2Client::ListMembers, __VA_ARGS__)
#define ListMembersCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListMembers, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&Inspector2Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListTagsForResource, REQUEST)

#define ListUsageTotalsAsync(...)  SubmitAsync(&Inspector2Client::ListUsageTotals, __VA_ARGS__)
#define ListUsageTotalsCallable(REQUEST)  SubmitCallable(&Inspector2Client::ListUsageTotals, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&Inspector2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&Inspector2Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&Inspector2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&Inspector2Client::UntagResource, REQUEST)

#define UpdateConfigurationAsync(...)  SubmitAsync(&Inspector2Client::UpdateConfiguration, __VA_ARGS__)
#define UpdateConfigurationCallable(REQUEST)  SubmitCallable(&Inspector2Client::UpdateConfiguration, REQUEST)

#define UpdateFilterAsync(...)  SubmitAsync(&Inspector2Client::UpdateFilter, __VA_ARGS__)
#define UpdateFilterCallable(REQUEST)  SubmitCallable(&Inspector2Client::UpdateFilter, REQUEST)

#define UpdateOrganizationConfigurationAsync(...)  SubmitAsync(&Inspector2Client::UpdateOrganizationConfiguration, __VA_ARGS__)
#define UpdateOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&Inspector2Client::UpdateOrganizationConfiguration, REQUEST)

