/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptInvitationAsync(...)  SubmitAsync(&Macie2Client::AcceptInvitation, __VA_ARGS__)
#define AcceptInvitationCallable(REQUEST)  SubmitCallable(&Macie2Client::AcceptInvitation, REQUEST)

#define BatchGetCustomDataIdentifiersAsync(...)  SubmitAsync(&Macie2Client::BatchGetCustomDataIdentifiers, __VA_ARGS__)
#define BatchGetCustomDataIdentifiersCallable(REQUEST)  SubmitCallable(&Macie2Client::BatchGetCustomDataIdentifiers, REQUEST)

#define CreateAllowListAsync(...)  SubmitAsync(&Macie2Client::CreateAllowList, __VA_ARGS__)
#define CreateAllowListCallable(REQUEST)  SubmitCallable(&Macie2Client::CreateAllowList, REQUEST)

#define CreateClassificationJobAsync(...)  SubmitAsync(&Macie2Client::CreateClassificationJob, __VA_ARGS__)
#define CreateClassificationJobCallable(REQUEST)  SubmitCallable(&Macie2Client::CreateClassificationJob, REQUEST)

#define CreateCustomDataIdentifierAsync(...)  SubmitAsync(&Macie2Client::CreateCustomDataIdentifier, __VA_ARGS__)
#define CreateCustomDataIdentifierCallable(REQUEST)  SubmitCallable(&Macie2Client::CreateCustomDataIdentifier, REQUEST)

#define CreateFindingsFilterAsync(...)  SubmitAsync(&Macie2Client::CreateFindingsFilter, __VA_ARGS__)
#define CreateFindingsFilterCallable(REQUEST)  SubmitCallable(&Macie2Client::CreateFindingsFilter, REQUEST)

#define CreateInvitationsAsync(...)  SubmitAsync(&Macie2Client::CreateInvitations, __VA_ARGS__)
#define CreateInvitationsCallable(REQUEST)  SubmitCallable(&Macie2Client::CreateInvitations, REQUEST)

#define CreateMemberAsync(...)  SubmitAsync(&Macie2Client::CreateMember, __VA_ARGS__)
#define CreateMemberCallable(REQUEST)  SubmitCallable(&Macie2Client::CreateMember, REQUEST)

#define CreateSampleFindingsAsync(...)  SubmitAsync(&Macie2Client::CreateSampleFindings, __VA_ARGS__)
#define CreateSampleFindingsCallable(REQUEST)  SubmitCallable(&Macie2Client::CreateSampleFindings, REQUEST)

#define DeclineInvitationsAsync(...)  SubmitAsync(&Macie2Client::DeclineInvitations, __VA_ARGS__)
#define DeclineInvitationsCallable(REQUEST)  SubmitCallable(&Macie2Client::DeclineInvitations, REQUEST)

#define DeleteAllowListAsync(...)  SubmitAsync(&Macie2Client::DeleteAllowList, __VA_ARGS__)
#define DeleteAllowListCallable(REQUEST)  SubmitCallable(&Macie2Client::DeleteAllowList, REQUEST)

#define DeleteCustomDataIdentifierAsync(...)  SubmitAsync(&Macie2Client::DeleteCustomDataIdentifier, __VA_ARGS__)
#define DeleteCustomDataIdentifierCallable(REQUEST)  SubmitCallable(&Macie2Client::DeleteCustomDataIdentifier, REQUEST)

#define DeleteFindingsFilterAsync(...)  SubmitAsync(&Macie2Client::DeleteFindingsFilter, __VA_ARGS__)
#define DeleteFindingsFilterCallable(REQUEST)  SubmitCallable(&Macie2Client::DeleteFindingsFilter, REQUEST)

#define DeleteInvitationsAsync(...)  SubmitAsync(&Macie2Client::DeleteInvitations, __VA_ARGS__)
#define DeleteInvitationsCallable(REQUEST)  SubmitCallable(&Macie2Client::DeleteInvitations, REQUEST)

#define DeleteMemberAsync(...)  SubmitAsync(&Macie2Client::DeleteMember, __VA_ARGS__)
#define DeleteMemberCallable(REQUEST)  SubmitCallable(&Macie2Client::DeleteMember, REQUEST)

#define DescribeBucketsAsync(...)  SubmitAsync(&Macie2Client::DescribeBuckets, __VA_ARGS__)
#define DescribeBucketsCallable(REQUEST)  SubmitCallable(&Macie2Client::DescribeBuckets, REQUEST)

#define DescribeClassificationJobAsync(...)  SubmitAsync(&Macie2Client::DescribeClassificationJob, __VA_ARGS__)
#define DescribeClassificationJobCallable(REQUEST)  SubmitCallable(&Macie2Client::DescribeClassificationJob, REQUEST)

#define DescribeOrganizationConfigurationAsync(...)  SubmitAsync(&Macie2Client::DescribeOrganizationConfiguration, __VA_ARGS__)
#define DescribeOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::DescribeOrganizationConfiguration, REQUEST)

#define DisableMacieAsync(...)  SubmitAsync(&Macie2Client::DisableMacie, __VA_ARGS__)
#define DisableMacieCallable(REQUEST)  SubmitCallable(&Macie2Client::DisableMacie, REQUEST)

#define DisableOrganizationAdminAccountAsync(...)  SubmitAsync(&Macie2Client::DisableOrganizationAdminAccount, __VA_ARGS__)
#define DisableOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&Macie2Client::DisableOrganizationAdminAccount, REQUEST)

#define DisassociateFromAdministratorAccountAsync(...)  SubmitAsync(&Macie2Client::DisassociateFromAdministratorAccount, __VA_ARGS__)
#define DisassociateFromAdministratorAccountCallable(REQUEST)  SubmitCallable(&Macie2Client::DisassociateFromAdministratorAccount, REQUEST)

#define DisassociateFromMasterAccountAsync(...)  SubmitAsync(&Macie2Client::DisassociateFromMasterAccount, __VA_ARGS__)
#define DisassociateFromMasterAccountCallable(REQUEST)  SubmitCallable(&Macie2Client::DisassociateFromMasterAccount, REQUEST)

#define DisassociateMemberAsync(...)  SubmitAsync(&Macie2Client::DisassociateMember, __VA_ARGS__)
#define DisassociateMemberCallable(REQUEST)  SubmitCallable(&Macie2Client::DisassociateMember, REQUEST)

#define EnableMacieAsync(...)  SubmitAsync(&Macie2Client::EnableMacie, __VA_ARGS__)
#define EnableMacieCallable(REQUEST)  SubmitCallable(&Macie2Client::EnableMacie, REQUEST)

#define EnableOrganizationAdminAccountAsync(...)  SubmitAsync(&Macie2Client::EnableOrganizationAdminAccount, __VA_ARGS__)
#define EnableOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&Macie2Client::EnableOrganizationAdminAccount, REQUEST)

#define GetAdministratorAccountAsync(...)  SubmitAsync(&Macie2Client::GetAdministratorAccount, __VA_ARGS__)
#define GetAdministratorAccountCallable(REQUEST)  SubmitCallable(&Macie2Client::GetAdministratorAccount, REQUEST)

#define GetAllowListAsync(...)  SubmitAsync(&Macie2Client::GetAllowList, __VA_ARGS__)
#define GetAllowListCallable(REQUEST)  SubmitCallable(&Macie2Client::GetAllowList, REQUEST)

#define GetBucketStatisticsAsync(...)  SubmitAsync(&Macie2Client::GetBucketStatistics, __VA_ARGS__)
#define GetBucketStatisticsCallable(REQUEST)  SubmitCallable(&Macie2Client::GetBucketStatistics, REQUEST)

#define GetClassificationExportConfigurationAsync(...)  SubmitAsync(&Macie2Client::GetClassificationExportConfiguration, __VA_ARGS__)
#define GetClassificationExportConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::GetClassificationExportConfiguration, REQUEST)

#define GetCustomDataIdentifierAsync(...)  SubmitAsync(&Macie2Client::GetCustomDataIdentifier, __VA_ARGS__)
#define GetCustomDataIdentifierCallable(REQUEST)  SubmitCallable(&Macie2Client::GetCustomDataIdentifier, REQUEST)

#define GetFindingStatisticsAsync(...)  SubmitAsync(&Macie2Client::GetFindingStatistics, __VA_ARGS__)
#define GetFindingStatisticsCallable(REQUEST)  SubmitCallable(&Macie2Client::GetFindingStatistics, REQUEST)

#define GetFindingsAsync(...)  SubmitAsync(&Macie2Client::GetFindings, __VA_ARGS__)
#define GetFindingsCallable(REQUEST)  SubmitCallable(&Macie2Client::GetFindings, REQUEST)

#define GetFindingsFilterAsync(...)  SubmitAsync(&Macie2Client::GetFindingsFilter, __VA_ARGS__)
#define GetFindingsFilterCallable(REQUEST)  SubmitCallable(&Macie2Client::GetFindingsFilter, REQUEST)

#define GetFindingsPublicationConfigurationAsync(...)  SubmitAsync(&Macie2Client::GetFindingsPublicationConfiguration, __VA_ARGS__)
#define GetFindingsPublicationConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::GetFindingsPublicationConfiguration, REQUEST)

#define GetInvitationsCountAsync(...)  SubmitAsync(&Macie2Client::GetInvitationsCount, __VA_ARGS__)
#define GetInvitationsCountCallable(REQUEST)  SubmitCallable(&Macie2Client::GetInvitationsCount, REQUEST)

#define GetMacieSessionAsync(...)  SubmitAsync(&Macie2Client::GetMacieSession, __VA_ARGS__)
#define GetMacieSessionCallable(REQUEST)  SubmitCallable(&Macie2Client::GetMacieSession, REQUEST)

#define GetMasterAccountAsync(...)  SubmitAsync(&Macie2Client::GetMasterAccount, __VA_ARGS__)
#define GetMasterAccountCallable(REQUEST)  SubmitCallable(&Macie2Client::GetMasterAccount, REQUEST)

#define GetMemberAsync(...)  SubmitAsync(&Macie2Client::GetMember, __VA_ARGS__)
#define GetMemberCallable(REQUEST)  SubmitCallable(&Macie2Client::GetMember, REQUEST)

#define GetRevealConfigurationAsync(...)  SubmitAsync(&Macie2Client::GetRevealConfiguration, __VA_ARGS__)
#define GetRevealConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::GetRevealConfiguration, REQUEST)

#define GetSensitiveDataOccurrencesAsync(...)  SubmitAsync(&Macie2Client::GetSensitiveDataOccurrences, __VA_ARGS__)
#define GetSensitiveDataOccurrencesCallable(REQUEST)  SubmitCallable(&Macie2Client::GetSensitiveDataOccurrences, REQUEST)

#define GetSensitiveDataOccurrencesAvailabilityAsync(...)  SubmitAsync(&Macie2Client::GetSensitiveDataOccurrencesAvailability, __VA_ARGS__)
#define GetSensitiveDataOccurrencesAvailabilityCallable(REQUEST)  SubmitCallable(&Macie2Client::GetSensitiveDataOccurrencesAvailability, REQUEST)

#define GetUsageStatisticsAsync(...)  SubmitAsync(&Macie2Client::GetUsageStatistics, __VA_ARGS__)
#define GetUsageStatisticsCallable(REQUEST)  SubmitCallable(&Macie2Client::GetUsageStatistics, REQUEST)

#define GetUsageTotalsAsync(...)  SubmitAsync(&Macie2Client::GetUsageTotals, __VA_ARGS__)
#define GetUsageTotalsCallable(REQUEST)  SubmitCallable(&Macie2Client::GetUsageTotals, REQUEST)

#define ListAllowListsAsync(...)  SubmitAsync(&Macie2Client::ListAllowLists, __VA_ARGS__)
#define ListAllowListsCallable(REQUEST)  SubmitCallable(&Macie2Client::ListAllowLists, REQUEST)

#define ListClassificationJobsAsync(...)  SubmitAsync(&Macie2Client::ListClassificationJobs, __VA_ARGS__)
#define ListClassificationJobsCallable(REQUEST)  SubmitCallable(&Macie2Client::ListClassificationJobs, REQUEST)

#define ListCustomDataIdentifiersAsync(...)  SubmitAsync(&Macie2Client::ListCustomDataIdentifiers, __VA_ARGS__)
#define ListCustomDataIdentifiersCallable(REQUEST)  SubmitCallable(&Macie2Client::ListCustomDataIdentifiers, REQUEST)

#define ListFindingsAsync(...)  SubmitAsync(&Macie2Client::ListFindings, __VA_ARGS__)
#define ListFindingsCallable(REQUEST)  SubmitCallable(&Macie2Client::ListFindings, REQUEST)

#define ListFindingsFiltersAsync(...)  SubmitAsync(&Macie2Client::ListFindingsFilters, __VA_ARGS__)
#define ListFindingsFiltersCallable(REQUEST)  SubmitCallable(&Macie2Client::ListFindingsFilters, REQUEST)

#define ListInvitationsAsync(...)  SubmitAsync(&Macie2Client::ListInvitations, __VA_ARGS__)
#define ListInvitationsCallable(REQUEST)  SubmitCallable(&Macie2Client::ListInvitations, REQUEST)

#define ListManagedDataIdentifiersAsync(...)  SubmitAsync(&Macie2Client::ListManagedDataIdentifiers, __VA_ARGS__)
#define ListManagedDataIdentifiersCallable(REQUEST)  SubmitCallable(&Macie2Client::ListManagedDataIdentifiers, REQUEST)

#define ListMembersAsync(...)  SubmitAsync(&Macie2Client::ListMembers, __VA_ARGS__)
#define ListMembersCallable(REQUEST)  SubmitCallable(&Macie2Client::ListMembers, REQUEST)

#define ListOrganizationAdminAccountsAsync(...)  SubmitAsync(&Macie2Client::ListOrganizationAdminAccounts, __VA_ARGS__)
#define ListOrganizationAdminAccountsCallable(REQUEST)  SubmitCallable(&Macie2Client::ListOrganizationAdminAccounts, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&Macie2Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&Macie2Client::ListTagsForResource, REQUEST)

#define PutClassificationExportConfigurationAsync(...)  SubmitAsync(&Macie2Client::PutClassificationExportConfiguration, __VA_ARGS__)
#define PutClassificationExportConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::PutClassificationExportConfiguration, REQUEST)

#define PutFindingsPublicationConfigurationAsync(...)  SubmitAsync(&Macie2Client::PutFindingsPublicationConfiguration, __VA_ARGS__)
#define PutFindingsPublicationConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::PutFindingsPublicationConfiguration, REQUEST)

#define SearchResourcesAsync(...)  SubmitAsync(&Macie2Client::SearchResources, __VA_ARGS__)
#define SearchResourcesCallable(REQUEST)  SubmitCallable(&Macie2Client::SearchResources, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&Macie2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&Macie2Client::TagResource, REQUEST)

#define TestCustomDataIdentifierAsync(...)  SubmitAsync(&Macie2Client::TestCustomDataIdentifier, __VA_ARGS__)
#define TestCustomDataIdentifierCallable(REQUEST)  SubmitCallable(&Macie2Client::TestCustomDataIdentifier, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&Macie2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&Macie2Client::UntagResource, REQUEST)

#define UpdateAllowListAsync(...)  SubmitAsync(&Macie2Client::UpdateAllowList, __VA_ARGS__)
#define UpdateAllowListCallable(REQUEST)  SubmitCallable(&Macie2Client::UpdateAllowList, REQUEST)

#define UpdateClassificationJobAsync(...)  SubmitAsync(&Macie2Client::UpdateClassificationJob, __VA_ARGS__)
#define UpdateClassificationJobCallable(REQUEST)  SubmitCallable(&Macie2Client::UpdateClassificationJob, REQUEST)

#define UpdateFindingsFilterAsync(...)  SubmitAsync(&Macie2Client::UpdateFindingsFilter, __VA_ARGS__)
#define UpdateFindingsFilterCallable(REQUEST)  SubmitCallable(&Macie2Client::UpdateFindingsFilter, REQUEST)

#define UpdateMacieSessionAsync(...)  SubmitAsync(&Macie2Client::UpdateMacieSession, __VA_ARGS__)
#define UpdateMacieSessionCallable(REQUEST)  SubmitCallable(&Macie2Client::UpdateMacieSession, REQUEST)

#define UpdateMemberSessionAsync(...)  SubmitAsync(&Macie2Client::UpdateMemberSession, __VA_ARGS__)
#define UpdateMemberSessionCallable(REQUEST)  SubmitCallable(&Macie2Client::UpdateMemberSession, REQUEST)

#define UpdateOrganizationConfigurationAsync(...)  SubmitAsync(&Macie2Client::UpdateOrganizationConfiguration, __VA_ARGS__)
#define UpdateOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::UpdateOrganizationConfiguration, REQUEST)

#define UpdateRevealConfigurationAsync(...)  SubmitAsync(&Macie2Client::UpdateRevealConfiguration, __VA_ARGS__)
#define UpdateRevealConfigurationCallable(REQUEST)  SubmitCallable(&Macie2Client::UpdateRevealConfiguration, REQUEST)

