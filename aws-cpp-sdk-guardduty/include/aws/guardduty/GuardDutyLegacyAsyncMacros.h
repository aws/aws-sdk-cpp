/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptAdministratorInvitationAsync(...)  SubmitAsync(&GuardDutyClient::AcceptAdministratorInvitation, __VA_ARGS__)
#define AcceptAdministratorInvitationCallable(REQUEST)  SubmitCallable(&GuardDutyClient::AcceptAdministratorInvitation, REQUEST)

#define ArchiveFindingsAsync(...)  SubmitAsync(&GuardDutyClient::ArchiveFindings, __VA_ARGS__)
#define ArchiveFindingsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ArchiveFindings, REQUEST)

#define CreateDetectorAsync(...)  SubmitAsync(&GuardDutyClient::CreateDetector, __VA_ARGS__)
#define CreateDetectorCallable(REQUEST)  SubmitCallable(&GuardDutyClient::CreateDetector, REQUEST)

#define CreateFilterAsync(...)  SubmitAsync(&GuardDutyClient::CreateFilter, __VA_ARGS__)
#define CreateFilterCallable(REQUEST)  SubmitCallable(&GuardDutyClient::CreateFilter, REQUEST)

#define CreateIPSetAsync(...)  SubmitAsync(&GuardDutyClient::CreateIPSet, __VA_ARGS__)
#define CreateIPSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::CreateIPSet, REQUEST)

#define CreateMembersAsync(...)  SubmitAsync(&GuardDutyClient::CreateMembers, __VA_ARGS__)
#define CreateMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::CreateMembers, REQUEST)

#define CreatePublishingDestinationAsync(...)  SubmitAsync(&GuardDutyClient::CreatePublishingDestination, __VA_ARGS__)
#define CreatePublishingDestinationCallable(REQUEST)  SubmitCallable(&GuardDutyClient::CreatePublishingDestination, REQUEST)

#define CreateSampleFindingsAsync(...)  SubmitAsync(&GuardDutyClient::CreateSampleFindings, __VA_ARGS__)
#define CreateSampleFindingsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::CreateSampleFindings, REQUEST)

#define CreateThreatIntelSetAsync(...)  SubmitAsync(&GuardDutyClient::CreateThreatIntelSet, __VA_ARGS__)
#define CreateThreatIntelSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::CreateThreatIntelSet, REQUEST)

#define DeclineInvitationsAsync(...)  SubmitAsync(&GuardDutyClient::DeclineInvitations, __VA_ARGS__)
#define DeclineInvitationsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeclineInvitations, REQUEST)

#define DeleteDetectorAsync(...)  SubmitAsync(&GuardDutyClient::DeleteDetector, __VA_ARGS__)
#define DeleteDetectorCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeleteDetector, REQUEST)

#define DeleteFilterAsync(...)  SubmitAsync(&GuardDutyClient::DeleteFilter, __VA_ARGS__)
#define DeleteFilterCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeleteFilter, REQUEST)

#define DeleteIPSetAsync(...)  SubmitAsync(&GuardDutyClient::DeleteIPSet, __VA_ARGS__)
#define DeleteIPSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeleteIPSet, REQUEST)

#define DeleteInvitationsAsync(...)  SubmitAsync(&GuardDutyClient::DeleteInvitations, __VA_ARGS__)
#define DeleteInvitationsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeleteInvitations, REQUEST)

#define DeleteMembersAsync(...)  SubmitAsync(&GuardDutyClient::DeleteMembers, __VA_ARGS__)
#define DeleteMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeleteMembers, REQUEST)

#define DeletePublishingDestinationAsync(...)  SubmitAsync(&GuardDutyClient::DeletePublishingDestination, __VA_ARGS__)
#define DeletePublishingDestinationCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeletePublishingDestination, REQUEST)

#define DeleteThreatIntelSetAsync(...)  SubmitAsync(&GuardDutyClient::DeleteThreatIntelSet, __VA_ARGS__)
#define DeleteThreatIntelSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DeleteThreatIntelSet, REQUEST)

#define DescribeMalwareScansAsync(...)  SubmitAsync(&GuardDutyClient::DescribeMalwareScans, __VA_ARGS__)
#define DescribeMalwareScansCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DescribeMalwareScans, REQUEST)

#define DescribeOrganizationConfigurationAsync(...)  SubmitAsync(&GuardDutyClient::DescribeOrganizationConfiguration, __VA_ARGS__)
#define DescribeOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DescribeOrganizationConfiguration, REQUEST)

#define DescribePublishingDestinationAsync(...)  SubmitAsync(&GuardDutyClient::DescribePublishingDestination, __VA_ARGS__)
#define DescribePublishingDestinationCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DescribePublishingDestination, REQUEST)

#define DisableOrganizationAdminAccountAsync(...)  SubmitAsync(&GuardDutyClient::DisableOrganizationAdminAccount, __VA_ARGS__)
#define DisableOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DisableOrganizationAdminAccount, REQUEST)

#define DisassociateFromAdministratorAccountAsync(...)  SubmitAsync(&GuardDutyClient::DisassociateFromAdministratorAccount, __VA_ARGS__)
#define DisassociateFromAdministratorAccountCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DisassociateFromAdministratorAccount, REQUEST)

#define DisassociateMembersAsync(...)  SubmitAsync(&GuardDutyClient::DisassociateMembers, __VA_ARGS__)
#define DisassociateMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::DisassociateMembers, REQUEST)

#define EnableOrganizationAdminAccountAsync(...)  SubmitAsync(&GuardDutyClient::EnableOrganizationAdminAccount, __VA_ARGS__)
#define EnableOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&GuardDutyClient::EnableOrganizationAdminAccount, REQUEST)

#define GetAdministratorAccountAsync(...)  SubmitAsync(&GuardDutyClient::GetAdministratorAccount, __VA_ARGS__)
#define GetAdministratorAccountCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetAdministratorAccount, REQUEST)

#define GetDetectorAsync(...)  SubmitAsync(&GuardDutyClient::GetDetector, __VA_ARGS__)
#define GetDetectorCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetDetector, REQUEST)

#define GetFilterAsync(...)  SubmitAsync(&GuardDutyClient::GetFilter, __VA_ARGS__)
#define GetFilterCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetFilter, REQUEST)

#define GetFindingsAsync(...)  SubmitAsync(&GuardDutyClient::GetFindings, __VA_ARGS__)
#define GetFindingsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetFindings, REQUEST)

#define GetFindingsStatisticsAsync(...)  SubmitAsync(&GuardDutyClient::GetFindingsStatistics, __VA_ARGS__)
#define GetFindingsStatisticsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetFindingsStatistics, REQUEST)

#define GetIPSetAsync(...)  SubmitAsync(&GuardDutyClient::GetIPSet, __VA_ARGS__)
#define GetIPSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetIPSet, REQUEST)

#define GetInvitationsCountAsync(...)  SubmitAsync(&GuardDutyClient::GetInvitationsCount, __VA_ARGS__)
#define GetInvitationsCountCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetInvitationsCount, REQUEST)

#define GetMalwareScanSettingsAsync(...)  SubmitAsync(&GuardDutyClient::GetMalwareScanSettings, __VA_ARGS__)
#define GetMalwareScanSettingsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetMalwareScanSettings, REQUEST)

#define GetMemberDetectorsAsync(...)  SubmitAsync(&GuardDutyClient::GetMemberDetectors, __VA_ARGS__)
#define GetMemberDetectorsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetMemberDetectors, REQUEST)

#define GetMembersAsync(...)  SubmitAsync(&GuardDutyClient::GetMembers, __VA_ARGS__)
#define GetMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetMembers, REQUEST)

#define GetRemainingFreeTrialDaysAsync(...)  SubmitAsync(&GuardDutyClient::GetRemainingFreeTrialDays, __VA_ARGS__)
#define GetRemainingFreeTrialDaysCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetRemainingFreeTrialDays, REQUEST)

#define GetThreatIntelSetAsync(...)  SubmitAsync(&GuardDutyClient::GetThreatIntelSet, __VA_ARGS__)
#define GetThreatIntelSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetThreatIntelSet, REQUEST)

#define GetUsageStatisticsAsync(...)  SubmitAsync(&GuardDutyClient::GetUsageStatistics, __VA_ARGS__)
#define GetUsageStatisticsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::GetUsageStatistics, REQUEST)

#define InviteMembersAsync(...)  SubmitAsync(&GuardDutyClient::InviteMembers, __VA_ARGS__)
#define InviteMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::InviteMembers, REQUEST)

#define ListDetectorsAsync(...)  SubmitAsync(&GuardDutyClient::ListDetectors, __VA_ARGS__)
#define ListDetectorsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListDetectors, REQUEST)

#define ListFiltersAsync(...)  SubmitAsync(&GuardDutyClient::ListFilters, __VA_ARGS__)
#define ListFiltersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListFilters, REQUEST)

#define ListFindingsAsync(...)  SubmitAsync(&GuardDutyClient::ListFindings, __VA_ARGS__)
#define ListFindingsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListFindings, REQUEST)

#define ListIPSetsAsync(...)  SubmitAsync(&GuardDutyClient::ListIPSets, __VA_ARGS__)
#define ListIPSetsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListIPSets, REQUEST)

#define ListInvitationsAsync(...)  SubmitAsync(&GuardDutyClient::ListInvitations, __VA_ARGS__)
#define ListInvitationsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListInvitations, REQUEST)

#define ListMembersAsync(...)  SubmitAsync(&GuardDutyClient::ListMembers, __VA_ARGS__)
#define ListMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListMembers, REQUEST)

#define ListOrganizationAdminAccountsAsync(...)  SubmitAsync(&GuardDutyClient::ListOrganizationAdminAccounts, __VA_ARGS__)
#define ListOrganizationAdminAccountsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListOrganizationAdminAccounts, REQUEST)

#define ListPublishingDestinationsAsync(...)  SubmitAsync(&GuardDutyClient::ListPublishingDestinations, __VA_ARGS__)
#define ListPublishingDestinationsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListPublishingDestinations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GuardDutyClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListTagsForResource, REQUEST)

#define ListThreatIntelSetsAsync(...)  SubmitAsync(&GuardDutyClient::ListThreatIntelSets, __VA_ARGS__)
#define ListThreatIntelSetsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::ListThreatIntelSets, REQUEST)

#define StartMonitoringMembersAsync(...)  SubmitAsync(&GuardDutyClient::StartMonitoringMembers, __VA_ARGS__)
#define StartMonitoringMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::StartMonitoringMembers, REQUEST)

#define StopMonitoringMembersAsync(...)  SubmitAsync(&GuardDutyClient::StopMonitoringMembers, __VA_ARGS__)
#define StopMonitoringMembersCallable(REQUEST)  SubmitCallable(&GuardDutyClient::StopMonitoringMembers, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GuardDutyClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GuardDutyClient::TagResource, REQUEST)

#define UnarchiveFindingsAsync(...)  SubmitAsync(&GuardDutyClient::UnarchiveFindings, __VA_ARGS__)
#define UnarchiveFindingsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UnarchiveFindings, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GuardDutyClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UntagResource, REQUEST)

#define UpdateDetectorAsync(...)  SubmitAsync(&GuardDutyClient::UpdateDetector, __VA_ARGS__)
#define UpdateDetectorCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateDetector, REQUEST)

#define UpdateFilterAsync(...)  SubmitAsync(&GuardDutyClient::UpdateFilter, __VA_ARGS__)
#define UpdateFilterCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateFilter, REQUEST)

#define UpdateFindingsFeedbackAsync(...)  SubmitAsync(&GuardDutyClient::UpdateFindingsFeedback, __VA_ARGS__)
#define UpdateFindingsFeedbackCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateFindingsFeedback, REQUEST)

#define UpdateIPSetAsync(...)  SubmitAsync(&GuardDutyClient::UpdateIPSet, __VA_ARGS__)
#define UpdateIPSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateIPSet, REQUEST)

#define UpdateMalwareScanSettingsAsync(...)  SubmitAsync(&GuardDutyClient::UpdateMalwareScanSettings, __VA_ARGS__)
#define UpdateMalwareScanSettingsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateMalwareScanSettings, REQUEST)

#define UpdateMemberDetectorsAsync(...)  SubmitAsync(&GuardDutyClient::UpdateMemberDetectors, __VA_ARGS__)
#define UpdateMemberDetectorsCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateMemberDetectors, REQUEST)

#define UpdateOrganizationConfigurationAsync(...)  SubmitAsync(&GuardDutyClient::UpdateOrganizationConfiguration, __VA_ARGS__)
#define UpdateOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateOrganizationConfiguration, REQUEST)

#define UpdatePublishingDestinationAsync(...)  SubmitAsync(&GuardDutyClient::UpdatePublishingDestination, __VA_ARGS__)
#define UpdatePublishingDestinationCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdatePublishingDestination, REQUEST)

#define UpdateThreatIntelSetAsync(...)  SubmitAsync(&GuardDutyClient::UpdateThreatIntelSet, __VA_ARGS__)
#define UpdateThreatIntelSetCallable(REQUEST)  SubmitCallable(&GuardDutyClient::UpdateThreatIntelSet, REQUEST)

