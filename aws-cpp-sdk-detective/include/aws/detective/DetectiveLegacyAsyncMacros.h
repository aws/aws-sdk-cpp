/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptInvitationAsync(...)  SubmitAsync(&DetectiveClient::AcceptInvitation, __VA_ARGS__)
#define AcceptInvitationCallable(REQUEST)  SubmitCallable(&DetectiveClient::AcceptInvitation, REQUEST)

#define BatchGetGraphMemberDatasourcesAsync(...)  SubmitAsync(&DetectiveClient::BatchGetGraphMemberDatasources, __VA_ARGS__)
#define BatchGetGraphMemberDatasourcesCallable(REQUEST)  SubmitCallable(&DetectiveClient::BatchGetGraphMemberDatasources, REQUEST)

#define BatchGetMembershipDatasourcesAsync(...)  SubmitAsync(&DetectiveClient::BatchGetMembershipDatasources, __VA_ARGS__)
#define BatchGetMembershipDatasourcesCallable(REQUEST)  SubmitCallable(&DetectiveClient::BatchGetMembershipDatasources, REQUEST)

#define CreateGraphAsync(...)  SubmitAsync(&DetectiveClient::CreateGraph, __VA_ARGS__)
#define CreateGraphCallable(REQUEST)  SubmitCallable(&DetectiveClient::CreateGraph, REQUEST)

#define CreateMembersAsync(...)  SubmitAsync(&DetectiveClient::CreateMembers, __VA_ARGS__)
#define CreateMembersCallable(REQUEST)  SubmitCallable(&DetectiveClient::CreateMembers, REQUEST)

#define DeleteGraphAsync(...)  SubmitAsync(&DetectiveClient::DeleteGraph, __VA_ARGS__)
#define DeleteGraphCallable(REQUEST)  SubmitCallable(&DetectiveClient::DeleteGraph, REQUEST)

#define DeleteMembersAsync(...)  SubmitAsync(&DetectiveClient::DeleteMembers, __VA_ARGS__)
#define DeleteMembersCallable(REQUEST)  SubmitCallable(&DetectiveClient::DeleteMembers, REQUEST)

#define DescribeOrganizationConfigurationAsync(...)  SubmitAsync(&DetectiveClient::DescribeOrganizationConfiguration, __VA_ARGS__)
#define DescribeOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&DetectiveClient::DescribeOrganizationConfiguration, REQUEST)


#define DisassociateMembershipAsync(...)  SubmitAsync(&DetectiveClient::DisassociateMembership, __VA_ARGS__)
#define DisassociateMembershipCallable(REQUEST)  SubmitCallable(&DetectiveClient::DisassociateMembership, REQUEST)

#define EnableOrganizationAdminAccountAsync(...)  SubmitAsync(&DetectiveClient::EnableOrganizationAdminAccount, __VA_ARGS__)
#define EnableOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&DetectiveClient::EnableOrganizationAdminAccount, REQUEST)

#define GetMembersAsync(...)  SubmitAsync(&DetectiveClient::GetMembers, __VA_ARGS__)
#define GetMembersCallable(REQUEST)  SubmitCallable(&DetectiveClient::GetMembers, REQUEST)

#define ListDatasourcePackagesAsync(...)  SubmitAsync(&DetectiveClient::ListDatasourcePackages, __VA_ARGS__)
#define ListDatasourcePackagesCallable(REQUEST)  SubmitCallable(&DetectiveClient::ListDatasourcePackages, REQUEST)

#define ListGraphsAsync(...)  SubmitAsync(&DetectiveClient::ListGraphs, __VA_ARGS__)
#define ListGraphsCallable(REQUEST)  SubmitCallable(&DetectiveClient::ListGraphs, REQUEST)

#define ListInvitationsAsync(...)  SubmitAsync(&DetectiveClient::ListInvitations, __VA_ARGS__)
#define ListInvitationsCallable(REQUEST)  SubmitCallable(&DetectiveClient::ListInvitations, REQUEST)

#define ListMembersAsync(...)  SubmitAsync(&DetectiveClient::ListMembers, __VA_ARGS__)
#define ListMembersCallable(REQUEST)  SubmitCallable(&DetectiveClient::ListMembers, REQUEST)

#define ListOrganizationAdminAccountsAsync(...)  SubmitAsync(&DetectiveClient::ListOrganizationAdminAccounts, __VA_ARGS__)
#define ListOrganizationAdminAccountsCallable(REQUEST)  SubmitCallable(&DetectiveClient::ListOrganizationAdminAccounts, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DetectiveClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DetectiveClient::ListTagsForResource, REQUEST)

#define RejectInvitationAsync(...)  SubmitAsync(&DetectiveClient::RejectInvitation, __VA_ARGS__)
#define RejectInvitationCallable(REQUEST)  SubmitCallable(&DetectiveClient::RejectInvitation, REQUEST)

#define StartMonitoringMemberAsync(...)  SubmitAsync(&DetectiveClient::StartMonitoringMember, __VA_ARGS__)
#define StartMonitoringMemberCallable(REQUEST)  SubmitCallable(&DetectiveClient::StartMonitoringMember, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DetectiveClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DetectiveClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DetectiveClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DetectiveClient::UntagResource, REQUEST)

#define UpdateDatasourcePackagesAsync(...)  SubmitAsync(&DetectiveClient::UpdateDatasourcePackages, __VA_ARGS__)
#define UpdateDatasourcePackagesCallable(REQUEST)  SubmitCallable(&DetectiveClient::UpdateDatasourcePackages, REQUEST)

#define UpdateOrganizationConfigurationAsync(...)  SubmitAsync(&DetectiveClient::UpdateOrganizationConfiguration, __VA_ARGS__)
#define UpdateOrganizationConfigurationCallable(REQUEST)  SubmitCallable(&DetectiveClient::UpdateOrganizationConfiguration, REQUEST)

