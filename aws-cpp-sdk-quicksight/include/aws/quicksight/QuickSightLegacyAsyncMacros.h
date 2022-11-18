/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelIngestionAsync(...)  SubmitAsync(&QuickSightClient::CancelIngestion, __VA_ARGS__)
#define CancelIngestionCallable(REQUEST)  SubmitCallable(&QuickSightClient::CancelIngestion, REQUEST)

#define CreateAccountCustomizationAsync(...)  SubmitAsync(&QuickSightClient::CreateAccountCustomization, __VA_ARGS__)
#define CreateAccountCustomizationCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateAccountCustomization, REQUEST)

#define CreateAccountSubscriptionAsync(...)  SubmitAsync(&QuickSightClient::CreateAccountSubscription, __VA_ARGS__)
#define CreateAccountSubscriptionCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateAccountSubscription, REQUEST)

#define CreateAnalysisAsync(...)  SubmitAsync(&QuickSightClient::CreateAnalysis, __VA_ARGS__)
#define CreateAnalysisCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateAnalysis, REQUEST)

#define CreateDashboardAsync(...)  SubmitAsync(&QuickSightClient::CreateDashboard, __VA_ARGS__)
#define CreateDashboardCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateDashboard, REQUEST)

#define CreateDataSetAsync(...)  SubmitAsync(&QuickSightClient::CreateDataSet, __VA_ARGS__)
#define CreateDataSetCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateDataSet, REQUEST)

#define CreateDataSourceAsync(...)  SubmitAsync(&QuickSightClient::CreateDataSource, __VA_ARGS__)
#define CreateDataSourceCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateDataSource, REQUEST)

#define CreateFolderAsync(...)  SubmitAsync(&QuickSightClient::CreateFolder, __VA_ARGS__)
#define CreateFolderCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateFolder, REQUEST)

#define CreateFolderMembershipAsync(...)  SubmitAsync(&QuickSightClient::CreateFolderMembership, __VA_ARGS__)
#define CreateFolderMembershipCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateFolderMembership, REQUEST)

#define CreateGroupAsync(...)  SubmitAsync(&QuickSightClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateGroup, REQUEST)

#define CreateGroupMembershipAsync(...)  SubmitAsync(&QuickSightClient::CreateGroupMembership, __VA_ARGS__)
#define CreateGroupMembershipCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateGroupMembership, REQUEST)

#define CreateIAMPolicyAssignmentAsync(...)  SubmitAsync(&QuickSightClient::CreateIAMPolicyAssignment, __VA_ARGS__)
#define CreateIAMPolicyAssignmentCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateIAMPolicyAssignment, REQUEST)

#define CreateIngestionAsync(...)  SubmitAsync(&QuickSightClient::CreateIngestion, __VA_ARGS__)
#define CreateIngestionCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateIngestion, REQUEST)

#define CreateNamespaceAsync(...)  SubmitAsync(&QuickSightClient::CreateNamespace, __VA_ARGS__)
#define CreateNamespaceCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateNamespace, REQUEST)

#define CreateTemplateAsync(...)  SubmitAsync(&QuickSightClient::CreateTemplate, __VA_ARGS__)
#define CreateTemplateCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateTemplate, REQUEST)

#define CreateTemplateAliasAsync(...)  SubmitAsync(&QuickSightClient::CreateTemplateAlias, __VA_ARGS__)
#define CreateTemplateAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateTemplateAlias, REQUEST)

#define CreateThemeAsync(...)  SubmitAsync(&QuickSightClient::CreateTheme, __VA_ARGS__)
#define CreateThemeCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateTheme, REQUEST)

#define CreateThemeAliasAsync(...)  SubmitAsync(&QuickSightClient::CreateThemeAlias, __VA_ARGS__)
#define CreateThemeAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::CreateThemeAlias, REQUEST)

#define DeleteAccountCustomizationAsync(...)  SubmitAsync(&QuickSightClient::DeleteAccountCustomization, __VA_ARGS__)
#define DeleteAccountCustomizationCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteAccountCustomization, REQUEST)

#define DeleteAnalysisAsync(...)  SubmitAsync(&QuickSightClient::DeleteAnalysis, __VA_ARGS__)
#define DeleteAnalysisCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteAnalysis, REQUEST)

#define DeleteDashboardAsync(...)  SubmitAsync(&QuickSightClient::DeleteDashboard, __VA_ARGS__)
#define DeleteDashboardCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteDashboard, REQUEST)

#define DeleteDataSetAsync(...)  SubmitAsync(&QuickSightClient::DeleteDataSet, __VA_ARGS__)
#define DeleteDataSetCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteDataSet, REQUEST)

#define DeleteDataSourceAsync(...)  SubmitAsync(&QuickSightClient::DeleteDataSource, __VA_ARGS__)
#define DeleteDataSourceCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteDataSource, REQUEST)

#define DeleteFolderAsync(...)  SubmitAsync(&QuickSightClient::DeleteFolder, __VA_ARGS__)
#define DeleteFolderCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteFolder, REQUEST)

#define DeleteFolderMembershipAsync(...)  SubmitAsync(&QuickSightClient::DeleteFolderMembership, __VA_ARGS__)
#define DeleteFolderMembershipCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteFolderMembership, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&QuickSightClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteGroup, REQUEST)

#define DeleteGroupMembershipAsync(...)  SubmitAsync(&QuickSightClient::DeleteGroupMembership, __VA_ARGS__)
#define DeleteGroupMembershipCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteGroupMembership, REQUEST)

#define DeleteIAMPolicyAssignmentAsync(...)  SubmitAsync(&QuickSightClient::DeleteIAMPolicyAssignment, __VA_ARGS__)
#define DeleteIAMPolicyAssignmentCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteIAMPolicyAssignment, REQUEST)

#define DeleteNamespaceAsync(...)  SubmitAsync(&QuickSightClient::DeleteNamespace, __VA_ARGS__)
#define DeleteNamespaceCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteNamespace, REQUEST)

#define DeleteTemplateAsync(...)  SubmitAsync(&QuickSightClient::DeleteTemplate, __VA_ARGS__)
#define DeleteTemplateCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteTemplate, REQUEST)

#define DeleteTemplateAliasAsync(...)  SubmitAsync(&QuickSightClient::DeleteTemplateAlias, __VA_ARGS__)
#define DeleteTemplateAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteTemplateAlias, REQUEST)

#define DeleteThemeAsync(...)  SubmitAsync(&QuickSightClient::DeleteTheme, __VA_ARGS__)
#define DeleteThemeCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteTheme, REQUEST)

#define DeleteThemeAliasAsync(...)  SubmitAsync(&QuickSightClient::DeleteThemeAlias, __VA_ARGS__)
#define DeleteThemeAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteThemeAlias, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&QuickSightClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteUser, REQUEST)

#define DeleteUserByPrincipalIdAsync(...)  SubmitAsync(&QuickSightClient::DeleteUserByPrincipalId, __VA_ARGS__)
#define DeleteUserByPrincipalIdCallable(REQUEST)  SubmitCallable(&QuickSightClient::DeleteUserByPrincipalId, REQUEST)

#define DescribeAccountCustomizationAsync(...)  SubmitAsync(&QuickSightClient::DescribeAccountCustomization, __VA_ARGS__)
#define DescribeAccountCustomizationCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeAccountCustomization, REQUEST)

#define DescribeAccountSettingsAsync(...)  SubmitAsync(&QuickSightClient::DescribeAccountSettings, __VA_ARGS__)
#define DescribeAccountSettingsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeAccountSettings, REQUEST)

#define DescribeAccountSubscriptionAsync(...)  SubmitAsync(&QuickSightClient::DescribeAccountSubscription, __VA_ARGS__)
#define DescribeAccountSubscriptionCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeAccountSubscription, REQUEST)

#define DescribeAnalysisAsync(...)  SubmitAsync(&QuickSightClient::DescribeAnalysis, __VA_ARGS__)
#define DescribeAnalysisCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeAnalysis, REQUEST)

#define DescribeAnalysisPermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeAnalysisPermissions, __VA_ARGS__)
#define DescribeAnalysisPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeAnalysisPermissions, REQUEST)

#define DescribeDashboardAsync(...)  SubmitAsync(&QuickSightClient::DescribeDashboard, __VA_ARGS__)
#define DescribeDashboardCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeDashboard, REQUEST)

#define DescribeDashboardPermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeDashboardPermissions, __VA_ARGS__)
#define DescribeDashboardPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeDashboardPermissions, REQUEST)

#define DescribeDataSetAsync(...)  SubmitAsync(&QuickSightClient::DescribeDataSet, __VA_ARGS__)
#define DescribeDataSetCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeDataSet, REQUEST)

#define DescribeDataSetPermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeDataSetPermissions, __VA_ARGS__)
#define DescribeDataSetPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeDataSetPermissions, REQUEST)

#define DescribeDataSourceAsync(...)  SubmitAsync(&QuickSightClient::DescribeDataSource, __VA_ARGS__)
#define DescribeDataSourceCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeDataSource, REQUEST)

#define DescribeDataSourcePermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeDataSourcePermissions, __VA_ARGS__)
#define DescribeDataSourcePermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeDataSourcePermissions, REQUEST)

#define DescribeFolderAsync(...)  SubmitAsync(&QuickSightClient::DescribeFolder, __VA_ARGS__)
#define DescribeFolderCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeFolder, REQUEST)

#define DescribeFolderPermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeFolderPermissions, __VA_ARGS__)
#define DescribeFolderPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeFolderPermissions, REQUEST)

#define DescribeFolderResolvedPermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeFolderResolvedPermissions, __VA_ARGS__)
#define DescribeFolderResolvedPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeFolderResolvedPermissions, REQUEST)

#define DescribeGroupAsync(...)  SubmitAsync(&QuickSightClient::DescribeGroup, __VA_ARGS__)
#define DescribeGroupCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeGroup, REQUEST)

#define DescribeGroupMembershipAsync(...)  SubmitAsync(&QuickSightClient::DescribeGroupMembership, __VA_ARGS__)
#define DescribeGroupMembershipCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeGroupMembership, REQUEST)

#define DescribeIAMPolicyAssignmentAsync(...)  SubmitAsync(&QuickSightClient::DescribeIAMPolicyAssignment, __VA_ARGS__)
#define DescribeIAMPolicyAssignmentCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeIAMPolicyAssignment, REQUEST)

#define DescribeIngestionAsync(...)  SubmitAsync(&QuickSightClient::DescribeIngestion, __VA_ARGS__)
#define DescribeIngestionCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeIngestion, REQUEST)

#define DescribeIpRestrictionAsync(...)  SubmitAsync(&QuickSightClient::DescribeIpRestriction, __VA_ARGS__)
#define DescribeIpRestrictionCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeIpRestriction, REQUEST)

#define DescribeNamespaceAsync(...)  SubmitAsync(&QuickSightClient::DescribeNamespace, __VA_ARGS__)
#define DescribeNamespaceCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeNamespace, REQUEST)

#define DescribeTemplateAsync(...)  SubmitAsync(&QuickSightClient::DescribeTemplate, __VA_ARGS__)
#define DescribeTemplateCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeTemplate, REQUEST)

#define DescribeTemplateAliasAsync(...)  SubmitAsync(&QuickSightClient::DescribeTemplateAlias, __VA_ARGS__)
#define DescribeTemplateAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeTemplateAlias, REQUEST)

#define DescribeTemplatePermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeTemplatePermissions, __VA_ARGS__)
#define DescribeTemplatePermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeTemplatePermissions, REQUEST)

#define DescribeThemeAsync(...)  SubmitAsync(&QuickSightClient::DescribeTheme, __VA_ARGS__)
#define DescribeThemeCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeTheme, REQUEST)

#define DescribeThemeAliasAsync(...)  SubmitAsync(&QuickSightClient::DescribeThemeAlias, __VA_ARGS__)
#define DescribeThemeAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeThemeAlias, REQUEST)

#define DescribeThemePermissionsAsync(...)  SubmitAsync(&QuickSightClient::DescribeThemePermissions, __VA_ARGS__)
#define DescribeThemePermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeThemePermissions, REQUEST)

#define DescribeUserAsync(...)  SubmitAsync(&QuickSightClient::DescribeUser, __VA_ARGS__)
#define DescribeUserCallable(REQUEST)  SubmitCallable(&QuickSightClient::DescribeUser, REQUEST)

#define GenerateEmbedUrlForAnonymousUserAsync(...)  SubmitAsync(&QuickSightClient::GenerateEmbedUrlForAnonymousUser, __VA_ARGS__)
#define GenerateEmbedUrlForAnonymousUserCallable(REQUEST)  SubmitCallable(&QuickSightClient::GenerateEmbedUrlForAnonymousUser, REQUEST)

#define GenerateEmbedUrlForRegisteredUserAsync(...)  SubmitAsync(&QuickSightClient::GenerateEmbedUrlForRegisteredUser, __VA_ARGS__)
#define GenerateEmbedUrlForRegisteredUserCallable(REQUEST)  SubmitCallable(&QuickSightClient::GenerateEmbedUrlForRegisteredUser, REQUEST)

#define GetDashboardEmbedUrlAsync(...)  SubmitAsync(&QuickSightClient::GetDashboardEmbedUrl, __VA_ARGS__)
#define GetDashboardEmbedUrlCallable(REQUEST)  SubmitCallable(&QuickSightClient::GetDashboardEmbedUrl, REQUEST)

#define GetSessionEmbedUrlAsync(...)  SubmitAsync(&QuickSightClient::GetSessionEmbedUrl, __VA_ARGS__)
#define GetSessionEmbedUrlCallable(REQUEST)  SubmitCallable(&QuickSightClient::GetSessionEmbedUrl, REQUEST)

#define ListAnalysesAsync(...)  SubmitAsync(&QuickSightClient::ListAnalyses, __VA_ARGS__)
#define ListAnalysesCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListAnalyses, REQUEST)

#define ListDashboardVersionsAsync(...)  SubmitAsync(&QuickSightClient::ListDashboardVersions, __VA_ARGS__)
#define ListDashboardVersionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListDashboardVersions, REQUEST)

#define ListDashboardsAsync(...)  SubmitAsync(&QuickSightClient::ListDashboards, __VA_ARGS__)
#define ListDashboardsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListDashboards, REQUEST)

#define ListDataSetsAsync(...)  SubmitAsync(&QuickSightClient::ListDataSets, __VA_ARGS__)
#define ListDataSetsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListDataSets, REQUEST)

#define ListDataSourcesAsync(...)  SubmitAsync(&QuickSightClient::ListDataSources, __VA_ARGS__)
#define ListDataSourcesCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListDataSources, REQUEST)

#define ListFolderMembersAsync(...)  SubmitAsync(&QuickSightClient::ListFolderMembers, __VA_ARGS__)
#define ListFolderMembersCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListFolderMembers, REQUEST)

#define ListFoldersAsync(...)  SubmitAsync(&QuickSightClient::ListFolders, __VA_ARGS__)
#define ListFoldersCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListFolders, REQUEST)

#define ListGroupMembershipsAsync(...)  SubmitAsync(&QuickSightClient::ListGroupMemberships, __VA_ARGS__)
#define ListGroupMembershipsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListGroupMemberships, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&QuickSightClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListGroups, REQUEST)

#define ListIAMPolicyAssignmentsAsync(...)  SubmitAsync(&QuickSightClient::ListIAMPolicyAssignments, __VA_ARGS__)
#define ListIAMPolicyAssignmentsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListIAMPolicyAssignments, REQUEST)

#define ListIAMPolicyAssignmentsForUserAsync(...)  SubmitAsync(&QuickSightClient::ListIAMPolicyAssignmentsForUser, __VA_ARGS__)
#define ListIAMPolicyAssignmentsForUserCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListIAMPolicyAssignmentsForUser, REQUEST)

#define ListIngestionsAsync(...)  SubmitAsync(&QuickSightClient::ListIngestions, __VA_ARGS__)
#define ListIngestionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListIngestions, REQUEST)

#define ListNamespacesAsync(...)  SubmitAsync(&QuickSightClient::ListNamespaces, __VA_ARGS__)
#define ListNamespacesCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListNamespaces, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&QuickSightClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListTagsForResource, REQUEST)

#define ListTemplateAliasesAsync(...)  SubmitAsync(&QuickSightClient::ListTemplateAliases, __VA_ARGS__)
#define ListTemplateAliasesCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListTemplateAliases, REQUEST)

#define ListTemplateVersionsAsync(...)  SubmitAsync(&QuickSightClient::ListTemplateVersions, __VA_ARGS__)
#define ListTemplateVersionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListTemplateVersions, REQUEST)

#define ListTemplatesAsync(...)  SubmitAsync(&QuickSightClient::ListTemplates, __VA_ARGS__)
#define ListTemplatesCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListTemplates, REQUEST)

#define ListThemeAliasesAsync(...)  SubmitAsync(&QuickSightClient::ListThemeAliases, __VA_ARGS__)
#define ListThemeAliasesCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListThemeAliases, REQUEST)

#define ListThemeVersionsAsync(...)  SubmitAsync(&QuickSightClient::ListThemeVersions, __VA_ARGS__)
#define ListThemeVersionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListThemeVersions, REQUEST)

#define ListThemesAsync(...)  SubmitAsync(&QuickSightClient::ListThemes, __VA_ARGS__)
#define ListThemesCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListThemes, REQUEST)

#define ListUserGroupsAsync(...)  SubmitAsync(&QuickSightClient::ListUserGroups, __VA_ARGS__)
#define ListUserGroupsCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListUserGroups, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&QuickSightClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&QuickSightClient::ListUsers, REQUEST)

#define RegisterUserAsync(...)  SubmitAsync(&QuickSightClient::RegisterUser, __VA_ARGS__)
#define RegisterUserCallable(REQUEST)  SubmitCallable(&QuickSightClient::RegisterUser, REQUEST)

#define RestoreAnalysisAsync(...)  SubmitAsync(&QuickSightClient::RestoreAnalysis, __VA_ARGS__)
#define RestoreAnalysisCallable(REQUEST)  SubmitCallable(&QuickSightClient::RestoreAnalysis, REQUEST)

#define SearchAnalysesAsync(...)  SubmitAsync(&QuickSightClient::SearchAnalyses, __VA_ARGS__)
#define SearchAnalysesCallable(REQUEST)  SubmitCallable(&QuickSightClient::SearchAnalyses, REQUEST)

#define SearchDashboardsAsync(...)  SubmitAsync(&QuickSightClient::SearchDashboards, __VA_ARGS__)
#define SearchDashboardsCallable(REQUEST)  SubmitCallable(&QuickSightClient::SearchDashboards, REQUEST)

#define SearchFoldersAsync(...)  SubmitAsync(&QuickSightClient::SearchFolders, __VA_ARGS__)
#define SearchFoldersCallable(REQUEST)  SubmitCallable(&QuickSightClient::SearchFolders, REQUEST)

#define SearchGroupsAsync(...)  SubmitAsync(&QuickSightClient::SearchGroups, __VA_ARGS__)
#define SearchGroupsCallable(REQUEST)  SubmitCallable(&QuickSightClient::SearchGroups, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&QuickSightClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&QuickSightClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&QuickSightClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&QuickSightClient::UntagResource, REQUEST)

#define UpdateAccountCustomizationAsync(...)  SubmitAsync(&QuickSightClient::UpdateAccountCustomization, __VA_ARGS__)
#define UpdateAccountCustomizationCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateAccountCustomization, REQUEST)

#define UpdateAccountSettingsAsync(...)  SubmitAsync(&QuickSightClient::UpdateAccountSettings, __VA_ARGS__)
#define UpdateAccountSettingsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateAccountSettings, REQUEST)

#define UpdateAnalysisAsync(...)  SubmitAsync(&QuickSightClient::UpdateAnalysis, __VA_ARGS__)
#define UpdateAnalysisCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateAnalysis, REQUEST)

#define UpdateAnalysisPermissionsAsync(...)  SubmitAsync(&QuickSightClient::UpdateAnalysisPermissions, __VA_ARGS__)
#define UpdateAnalysisPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateAnalysisPermissions, REQUEST)

#define UpdateDashboardAsync(...)  SubmitAsync(&QuickSightClient::UpdateDashboard, __VA_ARGS__)
#define UpdateDashboardCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateDashboard, REQUEST)

#define UpdateDashboardPermissionsAsync(...)  SubmitAsync(&QuickSightClient::UpdateDashboardPermissions, __VA_ARGS__)
#define UpdateDashboardPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateDashboardPermissions, REQUEST)

#define UpdateDashboardPublishedVersionAsync(...)  SubmitAsync(&QuickSightClient::UpdateDashboardPublishedVersion, __VA_ARGS__)
#define UpdateDashboardPublishedVersionCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateDashboardPublishedVersion, REQUEST)

#define UpdateDataSetAsync(...)  SubmitAsync(&QuickSightClient::UpdateDataSet, __VA_ARGS__)
#define UpdateDataSetCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateDataSet, REQUEST)

#define UpdateDataSetPermissionsAsync(...)  SubmitAsync(&QuickSightClient::UpdateDataSetPermissions, __VA_ARGS__)
#define UpdateDataSetPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateDataSetPermissions, REQUEST)

#define UpdateDataSourceAsync(...)  SubmitAsync(&QuickSightClient::UpdateDataSource, __VA_ARGS__)
#define UpdateDataSourceCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateDataSource, REQUEST)

#define UpdateDataSourcePermissionsAsync(...)  SubmitAsync(&QuickSightClient::UpdateDataSourcePermissions, __VA_ARGS__)
#define UpdateDataSourcePermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateDataSourcePermissions, REQUEST)

#define UpdateFolderAsync(...)  SubmitAsync(&QuickSightClient::UpdateFolder, __VA_ARGS__)
#define UpdateFolderCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateFolder, REQUEST)

#define UpdateFolderPermissionsAsync(...)  SubmitAsync(&QuickSightClient::UpdateFolderPermissions, __VA_ARGS__)
#define UpdateFolderPermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateFolderPermissions, REQUEST)

#define UpdateGroupAsync(...)  SubmitAsync(&QuickSightClient::UpdateGroup, __VA_ARGS__)
#define UpdateGroupCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateGroup, REQUEST)

#define UpdateIAMPolicyAssignmentAsync(...)  SubmitAsync(&QuickSightClient::UpdateIAMPolicyAssignment, __VA_ARGS__)
#define UpdateIAMPolicyAssignmentCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateIAMPolicyAssignment, REQUEST)

#define UpdateIpRestrictionAsync(...)  SubmitAsync(&QuickSightClient::UpdateIpRestriction, __VA_ARGS__)
#define UpdateIpRestrictionCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateIpRestriction, REQUEST)

#define UpdatePublicSharingSettingsAsync(...)  SubmitAsync(&QuickSightClient::UpdatePublicSharingSettings, __VA_ARGS__)
#define UpdatePublicSharingSettingsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdatePublicSharingSettings, REQUEST)

#define UpdateTemplateAsync(...)  SubmitAsync(&QuickSightClient::UpdateTemplate, __VA_ARGS__)
#define UpdateTemplateCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateTemplate, REQUEST)

#define UpdateTemplateAliasAsync(...)  SubmitAsync(&QuickSightClient::UpdateTemplateAlias, __VA_ARGS__)
#define UpdateTemplateAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateTemplateAlias, REQUEST)

#define UpdateTemplatePermissionsAsync(...)  SubmitAsync(&QuickSightClient::UpdateTemplatePermissions, __VA_ARGS__)
#define UpdateTemplatePermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateTemplatePermissions, REQUEST)

#define UpdateThemeAsync(...)  SubmitAsync(&QuickSightClient::UpdateTheme, __VA_ARGS__)
#define UpdateThemeCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateTheme, REQUEST)

#define UpdateThemeAliasAsync(...)  SubmitAsync(&QuickSightClient::UpdateThemeAlias, __VA_ARGS__)
#define UpdateThemeAliasCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateThemeAlias, REQUEST)

#define UpdateThemePermissionsAsync(...)  SubmitAsync(&QuickSightClient::UpdateThemePermissions, __VA_ARGS__)
#define UpdateThemePermissionsCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateThemePermissions, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&QuickSightClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&QuickSightClient::UpdateUser, REQUEST)

