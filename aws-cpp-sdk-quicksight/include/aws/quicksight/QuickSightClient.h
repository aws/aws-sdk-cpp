/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CancelIngestionResult.h>
#include <aws/quicksight/model/CreateAccountCustomizationResult.h>
#include <aws/quicksight/model/CreateAccountSubscriptionResult.h>
#include <aws/quicksight/model/CreateAnalysisResult.h>
#include <aws/quicksight/model/CreateDashboardResult.h>
#include <aws/quicksight/model/CreateDataSetResult.h>
#include <aws/quicksight/model/CreateDataSourceResult.h>
#include <aws/quicksight/model/CreateFolderResult.h>
#include <aws/quicksight/model/CreateFolderMembershipResult.h>
#include <aws/quicksight/model/CreateGroupResult.h>
#include <aws/quicksight/model/CreateGroupMembershipResult.h>
#include <aws/quicksight/model/CreateIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/CreateIngestionResult.h>
#include <aws/quicksight/model/CreateNamespaceResult.h>
#include <aws/quicksight/model/CreateTemplateResult.h>
#include <aws/quicksight/model/CreateTemplateAliasResult.h>
#include <aws/quicksight/model/CreateThemeResult.h>
#include <aws/quicksight/model/CreateThemeAliasResult.h>
#include <aws/quicksight/model/DeleteAccountCustomizationResult.h>
#include <aws/quicksight/model/DeleteAnalysisResult.h>
#include <aws/quicksight/model/DeleteDashboardResult.h>
#include <aws/quicksight/model/DeleteDataSetResult.h>
#include <aws/quicksight/model/DeleteDataSourceResult.h>
#include <aws/quicksight/model/DeleteFolderResult.h>
#include <aws/quicksight/model/DeleteFolderMembershipResult.h>
#include <aws/quicksight/model/DeleteGroupResult.h>
#include <aws/quicksight/model/DeleteGroupMembershipResult.h>
#include <aws/quicksight/model/DeleteIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/DeleteNamespaceResult.h>
#include <aws/quicksight/model/DeleteTemplateResult.h>
#include <aws/quicksight/model/DeleteTemplateAliasResult.h>
#include <aws/quicksight/model/DeleteThemeResult.h>
#include <aws/quicksight/model/DeleteThemeAliasResult.h>
#include <aws/quicksight/model/DeleteUserResult.h>
#include <aws/quicksight/model/DeleteUserByPrincipalIdResult.h>
#include <aws/quicksight/model/DescribeAccountCustomizationResult.h>
#include <aws/quicksight/model/DescribeAccountSettingsResult.h>
#include <aws/quicksight/model/DescribeAccountSubscriptionResult.h>
#include <aws/quicksight/model/DescribeAnalysisResult.h>
#include <aws/quicksight/model/DescribeAnalysisPermissionsResult.h>
#include <aws/quicksight/model/DescribeDashboardResult.h>
#include <aws/quicksight/model/DescribeDashboardPermissionsResult.h>
#include <aws/quicksight/model/DescribeDataSetResult.h>
#include <aws/quicksight/model/DescribeDataSetPermissionsResult.h>
#include <aws/quicksight/model/DescribeDataSourceResult.h>
#include <aws/quicksight/model/DescribeDataSourcePermissionsResult.h>
#include <aws/quicksight/model/DescribeFolderResult.h>
#include <aws/quicksight/model/DescribeFolderPermissionsResult.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsResult.h>
#include <aws/quicksight/model/DescribeGroupResult.h>
#include <aws/quicksight/model/DescribeGroupMembershipResult.h>
#include <aws/quicksight/model/DescribeIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/DescribeIngestionResult.h>
#include <aws/quicksight/model/DescribeIpRestrictionResult.h>
#include <aws/quicksight/model/DescribeNamespaceResult.h>
#include <aws/quicksight/model/DescribeTemplateResult.h>
#include <aws/quicksight/model/DescribeTemplateAliasResult.h>
#include <aws/quicksight/model/DescribeTemplatePermissionsResult.h>
#include <aws/quicksight/model/DescribeThemeResult.h>
#include <aws/quicksight/model/DescribeThemeAliasResult.h>
#include <aws/quicksight/model/DescribeThemePermissionsResult.h>
#include <aws/quicksight/model/DescribeUserResult.h>
#include <aws/quicksight/model/GenerateEmbedUrlForAnonymousUserResult.h>
#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserResult.h>
#include <aws/quicksight/model/GetDashboardEmbedUrlResult.h>
#include <aws/quicksight/model/GetSessionEmbedUrlResult.h>
#include <aws/quicksight/model/ListAnalysesResult.h>
#include <aws/quicksight/model/ListDashboardVersionsResult.h>
#include <aws/quicksight/model/ListDashboardsResult.h>
#include <aws/quicksight/model/ListDataSetsResult.h>
#include <aws/quicksight/model/ListDataSourcesResult.h>
#include <aws/quicksight/model/ListFolderMembersResult.h>
#include <aws/quicksight/model/ListFoldersResult.h>
#include <aws/quicksight/model/ListGroupMembershipsResult.h>
#include <aws/quicksight/model/ListGroupsResult.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsResult.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserResult.h>
#include <aws/quicksight/model/ListIngestionsResult.h>
#include <aws/quicksight/model/ListNamespacesResult.h>
#include <aws/quicksight/model/ListTagsForResourceResult.h>
#include <aws/quicksight/model/ListTemplateAliasesResult.h>
#include <aws/quicksight/model/ListTemplateVersionsResult.h>
#include <aws/quicksight/model/ListTemplatesResult.h>
#include <aws/quicksight/model/ListThemeAliasesResult.h>
#include <aws/quicksight/model/ListThemeVersionsResult.h>
#include <aws/quicksight/model/ListThemesResult.h>
#include <aws/quicksight/model/ListUserGroupsResult.h>
#include <aws/quicksight/model/ListUsersResult.h>
#include <aws/quicksight/model/RegisterUserResult.h>
#include <aws/quicksight/model/RestoreAnalysisResult.h>
#include <aws/quicksight/model/SearchAnalysesResult.h>
#include <aws/quicksight/model/SearchDashboardsResult.h>
#include <aws/quicksight/model/SearchFoldersResult.h>
#include <aws/quicksight/model/SearchGroupsResult.h>
#include <aws/quicksight/model/TagResourceResult.h>
#include <aws/quicksight/model/UntagResourceResult.h>
#include <aws/quicksight/model/UpdateAccountCustomizationResult.h>
#include <aws/quicksight/model/UpdateAccountSettingsResult.h>
#include <aws/quicksight/model/UpdateAnalysisResult.h>
#include <aws/quicksight/model/UpdateAnalysisPermissionsResult.h>
#include <aws/quicksight/model/UpdateDashboardResult.h>
#include <aws/quicksight/model/UpdateDashboardPermissionsResult.h>
#include <aws/quicksight/model/UpdateDashboardPublishedVersionResult.h>
#include <aws/quicksight/model/UpdateDataSetResult.h>
#include <aws/quicksight/model/UpdateDataSetPermissionsResult.h>
#include <aws/quicksight/model/UpdateDataSourceResult.h>
#include <aws/quicksight/model/UpdateDataSourcePermissionsResult.h>
#include <aws/quicksight/model/UpdateFolderResult.h>
#include <aws/quicksight/model/UpdateFolderPermissionsResult.h>
#include <aws/quicksight/model/UpdateGroupResult.h>
#include <aws/quicksight/model/UpdateIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/UpdateIpRestrictionResult.h>
#include <aws/quicksight/model/UpdatePublicSharingSettingsResult.h>
#include <aws/quicksight/model/UpdateTemplateResult.h>
#include <aws/quicksight/model/UpdateTemplateAliasResult.h>
#include <aws/quicksight/model/UpdateTemplatePermissionsResult.h>
#include <aws/quicksight/model/UpdateThemeResult.h>
#include <aws/quicksight/model/UpdateThemeAliasResult.h>
#include <aws/quicksight/model/UpdateThemePermissionsResult.h>
#include <aws/quicksight/model/UpdateUserResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace QuickSight
{

namespace Model
{
        class CancelIngestionRequest;
        class CreateAccountCustomizationRequest;
        class CreateAccountSubscriptionRequest;
        class CreateAnalysisRequest;
        class CreateDashboardRequest;
        class CreateDataSetRequest;
        class CreateDataSourceRequest;
        class CreateFolderRequest;
        class CreateFolderMembershipRequest;
        class CreateGroupRequest;
        class CreateGroupMembershipRequest;
        class CreateIAMPolicyAssignmentRequest;
        class CreateIngestionRequest;
        class CreateNamespaceRequest;
        class CreateTemplateRequest;
        class CreateTemplateAliasRequest;
        class CreateThemeRequest;
        class CreateThemeAliasRequest;
        class DeleteAccountCustomizationRequest;
        class DeleteAnalysisRequest;
        class DeleteDashboardRequest;
        class DeleteDataSetRequest;
        class DeleteDataSourceRequest;
        class DeleteFolderRequest;
        class DeleteFolderMembershipRequest;
        class DeleteGroupRequest;
        class DeleteGroupMembershipRequest;
        class DeleteIAMPolicyAssignmentRequest;
        class DeleteNamespaceRequest;
        class DeleteTemplateRequest;
        class DeleteTemplateAliasRequest;
        class DeleteThemeRequest;
        class DeleteThemeAliasRequest;
        class DeleteUserRequest;
        class DeleteUserByPrincipalIdRequest;
        class DescribeAccountCustomizationRequest;
        class DescribeAccountSettingsRequest;
        class DescribeAccountSubscriptionRequest;
        class DescribeAnalysisRequest;
        class DescribeAnalysisPermissionsRequest;
        class DescribeDashboardRequest;
        class DescribeDashboardPermissionsRequest;
        class DescribeDataSetRequest;
        class DescribeDataSetPermissionsRequest;
        class DescribeDataSourceRequest;
        class DescribeDataSourcePermissionsRequest;
        class DescribeFolderRequest;
        class DescribeFolderPermissionsRequest;
        class DescribeFolderResolvedPermissionsRequest;
        class DescribeGroupRequest;
        class DescribeGroupMembershipRequest;
        class DescribeIAMPolicyAssignmentRequest;
        class DescribeIngestionRequest;
        class DescribeIpRestrictionRequest;
        class DescribeNamespaceRequest;
        class DescribeTemplateRequest;
        class DescribeTemplateAliasRequest;
        class DescribeTemplatePermissionsRequest;
        class DescribeThemeRequest;
        class DescribeThemeAliasRequest;
        class DescribeThemePermissionsRequest;
        class DescribeUserRequest;
        class GenerateEmbedUrlForAnonymousUserRequest;
        class GenerateEmbedUrlForRegisteredUserRequest;
        class GetDashboardEmbedUrlRequest;
        class GetSessionEmbedUrlRequest;
        class ListAnalysesRequest;
        class ListDashboardVersionsRequest;
        class ListDashboardsRequest;
        class ListDataSetsRequest;
        class ListDataSourcesRequest;
        class ListFolderMembersRequest;
        class ListFoldersRequest;
        class ListGroupMembershipsRequest;
        class ListGroupsRequest;
        class ListIAMPolicyAssignmentsRequest;
        class ListIAMPolicyAssignmentsForUserRequest;
        class ListIngestionsRequest;
        class ListNamespacesRequest;
        class ListTagsForResourceRequest;
        class ListTemplateAliasesRequest;
        class ListTemplateVersionsRequest;
        class ListTemplatesRequest;
        class ListThemeAliasesRequest;
        class ListThemeVersionsRequest;
        class ListThemesRequest;
        class ListUserGroupsRequest;
        class ListUsersRequest;
        class RegisterUserRequest;
        class RestoreAnalysisRequest;
        class SearchAnalysesRequest;
        class SearchDashboardsRequest;
        class SearchFoldersRequest;
        class SearchGroupsRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAccountCustomizationRequest;
        class UpdateAccountSettingsRequest;
        class UpdateAnalysisRequest;
        class UpdateAnalysisPermissionsRequest;
        class UpdateDashboardRequest;
        class UpdateDashboardPermissionsRequest;
        class UpdateDashboardPublishedVersionRequest;
        class UpdateDataSetRequest;
        class UpdateDataSetPermissionsRequest;
        class UpdateDataSourceRequest;
        class UpdateDataSourcePermissionsRequest;
        class UpdateFolderRequest;
        class UpdateFolderPermissionsRequest;
        class UpdateGroupRequest;
        class UpdateIAMPolicyAssignmentRequest;
        class UpdateIpRestrictionRequest;
        class UpdatePublicSharingSettingsRequest;
        class UpdateTemplateRequest;
        class UpdateTemplateAliasRequest;
        class UpdateTemplatePermissionsRequest;
        class UpdateThemeRequest;
        class UpdateThemeAliasRequest;
        class UpdateThemePermissionsRequest;
        class UpdateUserRequest;

        typedef Aws::Utils::Outcome<CancelIngestionResult, QuickSightError> CancelIngestionOutcome;
        typedef Aws::Utils::Outcome<CreateAccountCustomizationResult, QuickSightError> CreateAccountCustomizationOutcome;
        typedef Aws::Utils::Outcome<CreateAccountSubscriptionResult, QuickSightError> CreateAccountSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateAnalysisResult, QuickSightError> CreateAnalysisOutcome;
        typedef Aws::Utils::Outcome<CreateDashboardResult, QuickSightError> CreateDashboardOutcome;
        typedef Aws::Utils::Outcome<CreateDataSetResult, QuickSightError> CreateDataSetOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceResult, QuickSightError> CreateDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateFolderResult, QuickSightError> CreateFolderOutcome;
        typedef Aws::Utils::Outcome<CreateFolderMembershipResult, QuickSightError> CreateFolderMembershipOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, QuickSightError> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateGroupMembershipResult, QuickSightError> CreateGroupMembershipOutcome;
        typedef Aws::Utils::Outcome<CreateIAMPolicyAssignmentResult, QuickSightError> CreateIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<CreateIngestionResult, QuickSightError> CreateIngestionOutcome;
        typedef Aws::Utils::Outcome<CreateNamespaceResult, QuickSightError> CreateNamespaceOutcome;
        typedef Aws::Utils::Outcome<CreateTemplateResult, QuickSightError> CreateTemplateOutcome;
        typedef Aws::Utils::Outcome<CreateTemplateAliasResult, QuickSightError> CreateTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateThemeResult, QuickSightError> CreateThemeOutcome;
        typedef Aws::Utils::Outcome<CreateThemeAliasResult, QuickSightError> CreateThemeAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteAccountCustomizationResult, QuickSightError> DeleteAccountCustomizationOutcome;
        typedef Aws::Utils::Outcome<DeleteAnalysisResult, QuickSightError> DeleteAnalysisOutcome;
        typedef Aws::Utils::Outcome<DeleteDashboardResult, QuickSightError> DeleteDashboardOutcome;
        typedef Aws::Utils::Outcome<DeleteDataSetResult, QuickSightError> DeleteDataSetOutcome;
        typedef Aws::Utils::Outcome<DeleteDataSourceResult, QuickSightError> DeleteDataSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteFolderResult, QuickSightError> DeleteFolderOutcome;
        typedef Aws::Utils::Outcome<DeleteFolderMembershipResult, QuickSightError> DeleteFolderMembershipOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, QuickSightError> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupMembershipResult, QuickSightError> DeleteGroupMembershipOutcome;
        typedef Aws::Utils::Outcome<DeleteIAMPolicyAssignmentResult, QuickSightError> DeleteIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<DeleteNamespaceResult, QuickSightError> DeleteNamespaceOutcome;
        typedef Aws::Utils::Outcome<DeleteTemplateResult, QuickSightError> DeleteTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteTemplateAliasResult, QuickSightError> DeleteTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteThemeResult, QuickSightError> DeleteThemeOutcome;
        typedef Aws::Utils::Outcome<DeleteThemeAliasResult, QuickSightError> DeleteThemeAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, QuickSightError> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DeleteUserByPrincipalIdResult, QuickSightError> DeleteUserByPrincipalIdOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountCustomizationResult, QuickSightError> DescribeAccountCustomizationOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountSettingsResult, QuickSightError> DescribeAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountSubscriptionResult, QuickSightError> DescribeAccountSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DescribeAnalysisResult, QuickSightError> DescribeAnalysisOutcome;
        typedef Aws::Utils::Outcome<DescribeAnalysisPermissionsResult, QuickSightError> DescribeAnalysisPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDashboardResult, QuickSightError> DescribeDashboardOutcome;
        typedef Aws::Utils::Outcome<DescribeDashboardPermissionsResult, QuickSightError> DescribeDashboardPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSetResult, QuickSightError> DescribeDataSetOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSetPermissionsResult, QuickSightError> DescribeDataSetPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSourceResult, QuickSightError> DescribeDataSourceOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSourcePermissionsResult, QuickSightError> DescribeDataSourcePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeFolderResult, QuickSightError> DescribeFolderOutcome;
        typedef Aws::Utils::Outcome<DescribeFolderPermissionsResult, QuickSightError> DescribeFolderPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeFolderResolvedPermissionsResult, QuickSightError> DescribeFolderResolvedPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeGroupResult, QuickSightError> DescribeGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeGroupMembershipResult, QuickSightError> DescribeGroupMembershipOutcome;
        typedef Aws::Utils::Outcome<DescribeIAMPolicyAssignmentResult, QuickSightError> DescribeIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<DescribeIngestionResult, QuickSightError> DescribeIngestionOutcome;
        typedef Aws::Utils::Outcome<DescribeIpRestrictionResult, QuickSightError> DescribeIpRestrictionOutcome;
        typedef Aws::Utils::Outcome<DescribeNamespaceResult, QuickSightError> DescribeNamespaceOutcome;
        typedef Aws::Utils::Outcome<DescribeTemplateResult, QuickSightError> DescribeTemplateOutcome;
        typedef Aws::Utils::Outcome<DescribeTemplateAliasResult, QuickSightError> DescribeTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<DescribeTemplatePermissionsResult, QuickSightError> DescribeTemplatePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeThemeResult, QuickSightError> DescribeThemeOutcome;
        typedef Aws::Utils::Outcome<DescribeThemeAliasResult, QuickSightError> DescribeThemeAliasOutcome;
        typedef Aws::Utils::Outcome<DescribeThemePermissionsResult, QuickSightError> DescribeThemePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeUserResult, QuickSightError> DescribeUserOutcome;
        typedef Aws::Utils::Outcome<GenerateEmbedUrlForAnonymousUserResult, QuickSightError> GenerateEmbedUrlForAnonymousUserOutcome;
        typedef Aws::Utils::Outcome<GenerateEmbedUrlForRegisteredUserResult, QuickSightError> GenerateEmbedUrlForRegisteredUserOutcome;
        typedef Aws::Utils::Outcome<GetDashboardEmbedUrlResult, QuickSightError> GetDashboardEmbedUrlOutcome;
        typedef Aws::Utils::Outcome<GetSessionEmbedUrlResult, QuickSightError> GetSessionEmbedUrlOutcome;
        typedef Aws::Utils::Outcome<ListAnalysesResult, QuickSightError> ListAnalysesOutcome;
        typedef Aws::Utils::Outcome<ListDashboardVersionsResult, QuickSightError> ListDashboardVersionsOutcome;
        typedef Aws::Utils::Outcome<ListDashboardsResult, QuickSightError> ListDashboardsOutcome;
        typedef Aws::Utils::Outcome<ListDataSetsResult, QuickSightError> ListDataSetsOutcome;
        typedef Aws::Utils::Outcome<ListDataSourcesResult, QuickSightError> ListDataSourcesOutcome;
        typedef Aws::Utils::Outcome<ListFolderMembersResult, QuickSightError> ListFolderMembersOutcome;
        typedef Aws::Utils::Outcome<ListFoldersResult, QuickSightError> ListFoldersOutcome;
        typedef Aws::Utils::Outcome<ListGroupMembershipsResult, QuickSightError> ListGroupMembershipsOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, QuickSightError> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<ListIAMPolicyAssignmentsResult, QuickSightError> ListIAMPolicyAssignmentsOutcome;
        typedef Aws::Utils::Outcome<ListIAMPolicyAssignmentsForUserResult, QuickSightError> ListIAMPolicyAssignmentsForUserOutcome;
        typedef Aws::Utils::Outcome<ListIngestionsResult, QuickSightError> ListIngestionsOutcome;
        typedef Aws::Utils::Outcome<ListNamespacesResult, QuickSightError> ListNamespacesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, QuickSightError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTemplateAliasesResult, QuickSightError> ListTemplateAliasesOutcome;
        typedef Aws::Utils::Outcome<ListTemplateVersionsResult, QuickSightError> ListTemplateVersionsOutcome;
        typedef Aws::Utils::Outcome<ListTemplatesResult, QuickSightError> ListTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListThemeAliasesResult, QuickSightError> ListThemeAliasesOutcome;
        typedef Aws::Utils::Outcome<ListThemeVersionsResult, QuickSightError> ListThemeVersionsOutcome;
        typedef Aws::Utils::Outcome<ListThemesResult, QuickSightError> ListThemesOutcome;
        typedef Aws::Utils::Outcome<ListUserGroupsResult, QuickSightError> ListUserGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, QuickSightError> ListUsersOutcome;
        typedef Aws::Utils::Outcome<RegisterUserResult, QuickSightError> RegisterUserOutcome;
        typedef Aws::Utils::Outcome<RestoreAnalysisResult, QuickSightError> RestoreAnalysisOutcome;
        typedef Aws::Utils::Outcome<SearchAnalysesResult, QuickSightError> SearchAnalysesOutcome;
        typedef Aws::Utils::Outcome<SearchDashboardsResult, QuickSightError> SearchDashboardsOutcome;
        typedef Aws::Utils::Outcome<SearchFoldersResult, QuickSightError> SearchFoldersOutcome;
        typedef Aws::Utils::Outcome<SearchGroupsResult, QuickSightError> SearchGroupsOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, QuickSightError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, QuickSightError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAccountCustomizationResult, QuickSightError> UpdateAccountCustomizationOutcome;
        typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, QuickSightError> UpdateAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateAnalysisResult, QuickSightError> UpdateAnalysisOutcome;
        typedef Aws::Utils::Outcome<UpdateAnalysisPermissionsResult, QuickSightError> UpdateAnalysisPermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateDashboardResult, QuickSightError> UpdateDashboardOutcome;
        typedef Aws::Utils::Outcome<UpdateDashboardPermissionsResult, QuickSightError> UpdateDashboardPermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateDashboardPublishedVersionResult, QuickSightError> UpdateDashboardPublishedVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSetResult, QuickSightError> UpdateDataSetOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSetPermissionsResult, QuickSightError> UpdateDataSetPermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSourceResult, QuickSightError> UpdateDataSourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSourcePermissionsResult, QuickSightError> UpdateDataSourcePermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateFolderResult, QuickSightError> UpdateFolderOutcome;
        typedef Aws::Utils::Outcome<UpdateFolderPermissionsResult, QuickSightError> UpdateFolderPermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, QuickSightError> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateIAMPolicyAssignmentResult, QuickSightError> UpdateIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<UpdateIpRestrictionResult, QuickSightError> UpdateIpRestrictionOutcome;
        typedef Aws::Utils::Outcome<UpdatePublicSharingSettingsResult, QuickSightError> UpdatePublicSharingSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateTemplateResult, QuickSightError> UpdateTemplateOutcome;
        typedef Aws::Utils::Outcome<UpdateTemplateAliasResult, QuickSightError> UpdateTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateTemplatePermissionsResult, QuickSightError> UpdateTemplatePermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateThemeResult, QuickSightError> UpdateThemeOutcome;
        typedef Aws::Utils::Outcome<UpdateThemeAliasResult, QuickSightError> UpdateThemeAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateThemePermissionsResult, QuickSightError> UpdateThemePermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, QuickSightError> UpdateUserOutcome;

        typedef std::future<CancelIngestionOutcome> CancelIngestionOutcomeCallable;
        typedef std::future<CreateAccountCustomizationOutcome> CreateAccountCustomizationOutcomeCallable;
        typedef std::future<CreateAccountSubscriptionOutcome> CreateAccountSubscriptionOutcomeCallable;
        typedef std::future<CreateAnalysisOutcome> CreateAnalysisOutcomeCallable;
        typedef std::future<CreateDashboardOutcome> CreateDashboardOutcomeCallable;
        typedef std::future<CreateDataSetOutcome> CreateDataSetOutcomeCallable;
        typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
        typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
        typedef std::future<CreateFolderMembershipOutcome> CreateFolderMembershipOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateGroupMembershipOutcome> CreateGroupMembershipOutcomeCallable;
        typedef std::future<CreateIAMPolicyAssignmentOutcome> CreateIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<CreateIngestionOutcome> CreateIngestionOutcomeCallable;
        typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
        typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
        typedef std::future<CreateTemplateAliasOutcome> CreateTemplateAliasOutcomeCallable;
        typedef std::future<CreateThemeOutcome> CreateThemeOutcomeCallable;
        typedef std::future<CreateThemeAliasOutcome> CreateThemeAliasOutcomeCallable;
        typedef std::future<DeleteAccountCustomizationOutcome> DeleteAccountCustomizationOutcomeCallable;
        typedef std::future<DeleteAnalysisOutcome> DeleteAnalysisOutcomeCallable;
        typedef std::future<DeleteDashboardOutcome> DeleteDashboardOutcomeCallable;
        typedef std::future<DeleteDataSetOutcome> DeleteDataSetOutcomeCallable;
        typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
        typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
        typedef std::future<DeleteFolderMembershipOutcome> DeleteFolderMembershipOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteGroupMembershipOutcome> DeleteGroupMembershipOutcomeCallable;
        typedef std::future<DeleteIAMPolicyAssignmentOutcome> DeleteIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
        typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
        typedef std::future<DeleteTemplateAliasOutcome> DeleteTemplateAliasOutcomeCallable;
        typedef std::future<DeleteThemeOutcome> DeleteThemeOutcomeCallable;
        typedef std::future<DeleteThemeAliasOutcome> DeleteThemeAliasOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserByPrincipalIdOutcome> DeleteUserByPrincipalIdOutcomeCallable;
        typedef std::future<DescribeAccountCustomizationOutcome> DescribeAccountCustomizationOutcomeCallable;
        typedef std::future<DescribeAccountSettingsOutcome> DescribeAccountSettingsOutcomeCallable;
        typedef std::future<DescribeAccountSubscriptionOutcome> DescribeAccountSubscriptionOutcomeCallable;
        typedef std::future<DescribeAnalysisOutcome> DescribeAnalysisOutcomeCallable;
        typedef std::future<DescribeAnalysisPermissionsOutcome> DescribeAnalysisPermissionsOutcomeCallable;
        typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
        typedef std::future<DescribeDashboardPermissionsOutcome> DescribeDashboardPermissionsOutcomeCallable;
        typedef std::future<DescribeDataSetOutcome> DescribeDataSetOutcomeCallable;
        typedef std::future<DescribeDataSetPermissionsOutcome> DescribeDataSetPermissionsOutcomeCallable;
        typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
        typedef std::future<DescribeDataSourcePermissionsOutcome> DescribeDataSourcePermissionsOutcomeCallable;
        typedef std::future<DescribeFolderOutcome> DescribeFolderOutcomeCallable;
        typedef std::future<DescribeFolderPermissionsOutcome> DescribeFolderPermissionsOutcomeCallable;
        typedef std::future<DescribeFolderResolvedPermissionsOutcome> DescribeFolderResolvedPermissionsOutcomeCallable;
        typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
        typedef std::future<DescribeGroupMembershipOutcome> DescribeGroupMembershipOutcomeCallable;
        typedef std::future<DescribeIAMPolicyAssignmentOutcome> DescribeIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<DescribeIngestionOutcome> DescribeIngestionOutcomeCallable;
        typedef std::future<DescribeIpRestrictionOutcome> DescribeIpRestrictionOutcomeCallable;
        typedef std::future<DescribeNamespaceOutcome> DescribeNamespaceOutcomeCallable;
        typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
        typedef std::future<DescribeTemplateAliasOutcome> DescribeTemplateAliasOutcomeCallable;
        typedef std::future<DescribeTemplatePermissionsOutcome> DescribeTemplatePermissionsOutcomeCallable;
        typedef std::future<DescribeThemeOutcome> DescribeThemeOutcomeCallable;
        typedef std::future<DescribeThemeAliasOutcome> DescribeThemeAliasOutcomeCallable;
        typedef std::future<DescribeThemePermissionsOutcome> DescribeThemePermissionsOutcomeCallable;
        typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
        typedef std::future<GenerateEmbedUrlForAnonymousUserOutcome> GenerateEmbedUrlForAnonymousUserOutcomeCallable;
        typedef std::future<GenerateEmbedUrlForRegisteredUserOutcome> GenerateEmbedUrlForRegisteredUserOutcomeCallable;
        typedef std::future<GetDashboardEmbedUrlOutcome> GetDashboardEmbedUrlOutcomeCallable;
        typedef std::future<GetSessionEmbedUrlOutcome> GetSessionEmbedUrlOutcomeCallable;
        typedef std::future<ListAnalysesOutcome> ListAnalysesOutcomeCallable;
        typedef std::future<ListDashboardVersionsOutcome> ListDashboardVersionsOutcomeCallable;
        typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
        typedef std::future<ListDataSetsOutcome> ListDataSetsOutcomeCallable;
        typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
        typedef std::future<ListFolderMembersOutcome> ListFolderMembersOutcomeCallable;
        typedef std::future<ListFoldersOutcome> ListFoldersOutcomeCallable;
        typedef std::future<ListGroupMembershipsOutcome> ListGroupMembershipsOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<ListIAMPolicyAssignmentsOutcome> ListIAMPolicyAssignmentsOutcomeCallable;
        typedef std::future<ListIAMPolicyAssignmentsForUserOutcome> ListIAMPolicyAssignmentsForUserOutcomeCallable;
        typedef std::future<ListIngestionsOutcome> ListIngestionsOutcomeCallable;
        typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTemplateAliasesOutcome> ListTemplateAliasesOutcomeCallable;
        typedef std::future<ListTemplateVersionsOutcome> ListTemplateVersionsOutcomeCallable;
        typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
        typedef std::future<ListThemeAliasesOutcome> ListThemeAliasesOutcomeCallable;
        typedef std::future<ListThemeVersionsOutcome> ListThemeVersionsOutcomeCallable;
        typedef std::future<ListThemesOutcome> ListThemesOutcomeCallable;
        typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
        typedef std::future<RestoreAnalysisOutcome> RestoreAnalysisOutcomeCallable;
        typedef std::future<SearchAnalysesOutcome> SearchAnalysesOutcomeCallable;
        typedef std::future<SearchDashboardsOutcome> SearchDashboardsOutcomeCallable;
        typedef std::future<SearchFoldersOutcome> SearchFoldersOutcomeCallable;
        typedef std::future<SearchGroupsOutcome> SearchGroupsOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAccountCustomizationOutcome> UpdateAccountCustomizationOutcomeCallable;
        typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
        typedef std::future<UpdateAnalysisOutcome> UpdateAnalysisOutcomeCallable;
        typedef std::future<UpdateAnalysisPermissionsOutcome> UpdateAnalysisPermissionsOutcomeCallable;
        typedef std::future<UpdateDashboardOutcome> UpdateDashboardOutcomeCallable;
        typedef std::future<UpdateDashboardPermissionsOutcome> UpdateDashboardPermissionsOutcomeCallable;
        typedef std::future<UpdateDashboardPublishedVersionOutcome> UpdateDashboardPublishedVersionOutcomeCallable;
        typedef std::future<UpdateDataSetOutcome> UpdateDataSetOutcomeCallable;
        typedef std::future<UpdateDataSetPermissionsOutcome> UpdateDataSetPermissionsOutcomeCallable;
        typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
        typedef std::future<UpdateDataSourcePermissionsOutcome> UpdateDataSourcePermissionsOutcomeCallable;
        typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
        typedef std::future<UpdateFolderPermissionsOutcome> UpdateFolderPermissionsOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateIAMPolicyAssignmentOutcome> UpdateIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<UpdateIpRestrictionOutcome> UpdateIpRestrictionOutcomeCallable;
        typedef std::future<UpdatePublicSharingSettingsOutcome> UpdatePublicSharingSettingsOutcomeCallable;
        typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
        typedef std::future<UpdateTemplateAliasOutcome> UpdateTemplateAliasOutcomeCallable;
        typedef std::future<UpdateTemplatePermissionsOutcome> UpdateTemplatePermissionsOutcomeCallable;
        typedef std::future<UpdateThemeOutcome> UpdateThemeOutcomeCallable;
        typedef std::future<UpdateThemeAliasOutcome> UpdateThemeAliasOutcomeCallable;
        typedef std::future<UpdateThemePermissionsOutcome> UpdateThemePermissionsOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
} // namespace Model

  class QuickSightClient;

    typedef std::function<void(const QuickSightClient*, const Model::CancelIngestionRequest&, const Model::CancelIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateAccountCustomizationRequest&, const Model::CreateAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateAccountSubscriptionRequest&, const Model::CreateAccountSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountSubscriptionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateAnalysisRequest&, const Model::CreateAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDashboardRequest&, const Model::CreateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDataSetRequest&, const Model::CreateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateFolderRequest&, const Model::CreateFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateFolderMembershipRequest&, const Model::CreateFolderMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFolderMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupMembershipRequest&, const Model::CreateGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateIAMPolicyAssignmentRequest&, const Model::CreateIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateIngestionRequest&, const Model::CreateIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateNamespaceRequest&, const Model::CreateNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNamespaceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTemplateRequest&, const Model::CreateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTemplateAliasRequest&, const Model::CreateTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateThemeRequest&, const Model::CreateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateThemeAliasRequest&, const Model::CreateThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteAccountCustomizationRequest&, const Model::DeleteAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteAnalysisRequest&, const Model::DeleteAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDashboardRequest&, const Model::DeleteDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDataSetRequest&, const Model::DeleteDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteFolderRequest&, const Model::DeleteFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteFolderMembershipRequest&, const Model::DeleteFolderMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFolderMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupMembershipRequest&, const Model::DeleteGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteIAMPolicyAssignmentRequest&, const Model::DeleteIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteNamespaceRequest&, const Model::DeleteNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamespaceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTemplateRequest&, const Model::DeleteTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTemplateAliasRequest&, const Model::DeleteTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteThemeRequest&, const Model::DeleteThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteThemeAliasRequest&, const Model::DeleteThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserByPrincipalIdRequest&, const Model::DeleteUserByPrincipalIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserByPrincipalIdResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAccountCustomizationRequest&, const Model::DescribeAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAccountSettingsRequest&, const Model::DescribeAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAccountSubscriptionRequest&, const Model::DescribeAccountSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountSubscriptionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAnalysisRequest&, const Model::DescribeAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAnalysisPermissionsRequest&, const Model::DescribeAnalysisPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardRequest&, const Model::DescribeDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardPermissionsRequest&, const Model::DescribeDashboardPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSetRequest&, const Model::DescribeDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSetPermissionsRequest&, const Model::DescribeDataSetPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSetPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSourceRequest&, const Model::DescribeDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSourcePermissionsRequest&, const Model::DescribeDataSourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeFolderRequest&, const Model::DescribeFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeFolderPermissionsRequest&, const Model::DescribeFolderPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFolderPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeFolderResolvedPermissionsRequest&, const Model::DescribeFolderResolvedPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFolderResolvedPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeGroupMembershipRequest&, const Model::DescribeGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIAMPolicyAssignmentRequest&, const Model::DescribeIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIngestionRequest&, const Model::DescribeIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIpRestrictionRequest&, const Model::DescribeIpRestrictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpRestrictionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeNamespaceRequest&, const Model::DescribeNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNamespaceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateRequest&, const Model::DescribeTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateAliasRequest&, const Model::DescribeTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplatePermissionsRequest&, const Model::DescribeTemplatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplatePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeThemeRequest&, const Model::DescribeThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeThemeAliasRequest&, const Model::DescribeThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeThemePermissionsRequest&, const Model::DescribeThemePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThemePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GenerateEmbedUrlForAnonymousUserRequest&, const Model::GenerateEmbedUrlForAnonymousUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateEmbedUrlForAnonymousUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GenerateEmbedUrlForRegisteredUserRequest&, const Model::GenerateEmbedUrlForRegisteredUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateEmbedUrlForRegisteredUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GetDashboardEmbedUrlRequest&, const Model::GetDashboardEmbedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardEmbedUrlResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GetSessionEmbedUrlRequest&, const Model::GetSessionEmbedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionEmbedUrlResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListAnalysesRequest&, const Model::ListAnalysesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalysesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDashboardVersionsRequest&, const Model::ListDashboardVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDataSetsRequest&, const Model::ListDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListFolderMembersRequest&, const Model::ListFolderMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFolderMembersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListFoldersRequest&, const Model::ListFoldersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFoldersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupMembershipsRequest&, const Model::ListGroupMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembershipsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIAMPolicyAssignmentsRequest&, const Model::ListIAMPolicyAssignmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIAMPolicyAssignmentsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIAMPolicyAssignmentsForUserRequest&, const Model::ListIAMPolicyAssignmentsForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIAMPolicyAssignmentsForUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIngestionsRequest&, const Model::ListIngestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngestionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListNamespacesRequest&, const Model::ListNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamespacesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplateAliasesRequest&, const Model::ListTemplateAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateAliasesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplateVersionsRequest&, const Model::ListTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListThemeAliasesRequest&, const Model::ListThemeAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemeAliasesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListThemeVersionsRequest&, const Model::ListThemeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemeVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListThemesRequest&, const Model::ListThemesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUserGroupsRequest&, const Model::ListUserGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::RegisterUserRequest&, const Model::RegisterUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::RestoreAnalysisRequest&, const Model::RestoreAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchAnalysesRequest&, const Model::SearchAnalysesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAnalysesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchDashboardsRequest&, const Model::SearchDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDashboardsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchFoldersRequest&, const Model::SearchFoldersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFoldersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchGroupsRequest&, const Model::SearchGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAccountCustomizationRequest&, const Model::UpdateAccountCustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountCustomizationResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAnalysisRequest&, const Model::UpdateAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnalysisResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateAnalysisPermissionsRequest&, const Model::UpdateAnalysisPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnalysisPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardRequest&, const Model::UpdateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardPermissionsRequest&, const Model::UpdateDashboardPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardPublishedVersionRequest&, const Model::UpdateDashboardPublishedVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardPublishedVersionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSetRequest&, const Model::UpdateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSetPermissionsRequest&, const Model::UpdateDataSetPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSetPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSourcePermissionsRequest&, const Model::UpdateDataSourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateFolderRequest&, const Model::UpdateFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFolderResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateFolderPermissionsRequest&, const Model::UpdateFolderPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFolderPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateIAMPolicyAssignmentRequest&, const Model::UpdateIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateIpRestrictionRequest&, const Model::UpdateIpRestrictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIpRestrictionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdatePublicSharingSettingsRequest&, const Model::UpdatePublicSharingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublicSharingSettingsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplateRequest&, const Model::UpdateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplateAliasRequest&, const Model::UpdateTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplatePermissionsRequest&, const Model::UpdateTemplatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplatePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateThemeRequest&, const Model::UpdateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemeResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateThemeAliasRequest&, const Model::UpdateThemeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemeAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateThemePermissionsRequest&, const Model::UpdateThemePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;

  /**
   * <fullname>Amazon QuickSight API Reference</fullname> <p>Amazon QuickSight is a
   * fully managed, serverless business intelligence service for the Amazon Web
   * Services Cloud that makes it easy to extend data and insights to every user in
   * your organization. This API reference contains documentation for a programming
   * interface that you can use to manage Amazon QuickSight. </p>
   */
  class AWS_QUICKSIGHT_API QuickSightClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QuickSightClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~QuickSightClient();


        /**
         * <p>Cancels an ongoing ingestion of data into SPICE.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CancelIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelIngestionOutcome CancelIngestion(const Model::CancelIngestionRequest& request) const;

        /**
         * A Callable wrapper for CancelIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelIngestionOutcomeCallable CancelIngestionCallable(const Model::CancelIngestionRequest& request) const;

        /**
         * An Async wrapper for CancelIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelIngestionAsync(const Model::CancelIngestionRequest& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates Amazon QuickSight customizations for the current Amazon Web Services
         * Region. Currently, you can add a custom default theme by using the
         * <code>CreateAccountCustomization</code> or
         * <code>UpdateAccountCustomization</code> API operation. To further customize
         * Amazon QuickSight by removing Amazon QuickSight sample assets and videos for all
         * new users, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-quicksight.html">Customizing
         * Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide.</i> </p> <p>You
         * can create customizations for your Amazon Web Services account or, if you
         * specify a namespace, for a QuickSight namespace instead. Customizations that
         * apply to a namespace always override customizations that apply to an Amazon Web
         * Services account. To find out which customizations apply, use the
         * <code>DescribeAccountCustomization</code> API operation.</p> <p>Before you use
         * the <code>CreateAccountCustomization</code> API operation to add a theme as the
         * namespace default, make sure that you first share the theme with the namespace.
         * If you don't share it with the namespace, the theme isn't visible to your users
         * even if you make it the default theme. To check if the theme is shared, view the
         * current permissions by using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeThemePermissions.html">DescribeThemePermissions</a>
         * </code> API operation. To share the theme, grant permissions by using the <code>
         * <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateThemePermissions.html">UpdateThemePermissions</a>
         * </code> API operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountCustomizationOutcome CreateAccountCustomization(const Model::CreateAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountCustomizationOutcomeCallable CreateAccountCustomizationCallable(const Model::CreateAccountCustomizationRequest& request) const;

        /**
         * An Async wrapper for CreateAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountCustomizationAsync(const Model::CreateAccountCustomizationRequest& request, const CreateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon QuickSight account, or subscribes to Amazon QuickSight
         * Q.</p> <p>The Amazon Web Services Region for the account is derived from what is
         * configured in the CLI or SDK. This operation isn't supported in the US East
         * (Ohio) Region, South America (Sao Paulo) Region, or Asia Pacific (Singapore)
         * Region. </p> <p>Before you use this operation, make sure that you can connect to
         * an existing Amazon Web Services account. If you don't have an Amazon Web
         * Services account, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/setting-up-aws-sign-up.html">Sign
         * up for Amazon Web Services</a> in the <i>Amazon QuickSight User Guide</i>. The
         * person who signs up for Amazon QuickSight needs to have the correct Identity and
         * Access Management (IAM) permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/iam-policy-examples.html">IAM
         * Policy Examples for Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>If your IAM policy includes both the <code>Subscribe</code>
         * and <code>CreateAccountSubscription</code> actions, make sure that both actions
         * are set to <code>Allow</code>. If either action is set to <code>Deny</code>, the
         * <code>Deny</code> action prevails and your API call fails.</p> <p>You can't pass
         * an existing IAM role to access other Amazon Web Services services using this API
         * operation. To pass your existing IAM role to Amazon QuickSight, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/security_iam_service-with-iam.html#security-create-iam-role">Passing
         * IAM roles to Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>You can't set default resource access on the new account from
         * the Amazon QuickSight API. Instead, add default resource access from the Amazon
         * QuickSight console. For more information about setting default resource access
         * to Amazon Web Services services, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/scoping-policies-defaults.html">Setting
         * default resource access to Amazon Web Services services</a> in the <i>Amazon
         * QuickSight User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAccountSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountSubscriptionOutcome CreateAccountSubscription(const Model::CreateAccountSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountSubscriptionOutcomeCallable CreateAccountSubscriptionCallable(const Model::CreateAccountSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateAccountSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountSubscriptionAsync(const Model::CreateAccountSubscriptionRequest& request, const CreateAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an analysis in Amazon QuickSight.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnalysisOutcome CreateAnalysis(const Model::CreateAnalysisRequest& request) const;

        /**
         * A Callable wrapper for CreateAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnalysisOutcomeCallable CreateAnalysisCallable(const Model::CreateAnalysisRequest& request) const;

        /**
         * An Async wrapper for CreateAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnalysisAsync(const Model::CreateAnalysisRequest& request, const CreateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dashboard from a template. To first create a template, see the
         * <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
         * </code> API operation.</p> <p>A dashboard is an entity in Amazon QuickSight that
         * identifies Amazon QuickSight reports, created from analyses. You can share
         * Amazon QuickSight dashboards. With the right permissions, you can create
         * scheduled email reports from them. If you have the correct permissions, you can
         * create a dashboard from a template that exists in a different Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;

        /**
         * A Callable wrapper for CreateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDashboardOutcomeCallable CreateDashboardCallable(const Model::CreateDashboardRequest& request) const;

        /**
         * An Async wrapper for CreateDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDashboardAsync(const Model::CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dataset. This operation doesn't support datasets that include
         * uploaded files as a source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetOutcome CreateDataSet(const Model::CreateDataSetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSetOutcomeCallable CreateDataSetCallable(const Model::CreateDataSetRequest& request) const;

        /**
         * An Async wrapper for CreateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSetAsync(const Model::CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request) const;

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty shared folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest& request) const;

        /**
         * A Callable wrapper for CreateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request) const;

        /**
         * An Async wrapper for CreateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an asset, such as a dashboard, analysis, or dataset into a
         * folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateFolderMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderMembershipOutcome CreateFolderMembership(const Model::CreateFolderMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateFolderMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFolderMembershipOutcomeCallable CreateFolderMembershipCallable(const Model::CreateFolderMembershipRequest& request) const;

        /**
         * An Async wrapper for CreateFolderMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFolderMembershipAsync(const Model::CreateFolderMembershipRequest& request, const CreateFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use the <code>CreateGroup</code> operation to create a group in Amazon
         * QuickSight. You can create up to 10,000 groups in a namespace. If you want to
         * create more than 10,000 groups in a namespace, contact AWS Support.</p> <p>The
         * permissions resource is
         * <code>arn:aws:quicksight:&lt;your-region&gt;:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an Amazon QuickSight user to an Amazon QuickSight group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupMembershipOutcome CreateGroupMembership(const Model::CreateGroupMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateGroupMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupMembershipOutcomeCallable CreateGroupMembershipCallable(const Model::CreateGroupMembershipRequest& request) const;

        /**
         * An Async wrapper for CreateGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupMembershipAsync(const Model::CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an assignment with one specified IAM policy, identified by its Amazon
         * Resource Name (ARN). This policy assignment is attached to the specified groups
         * or users of Amazon QuickSight. Assignment names are unique per Amazon Web
         * Services account. To avoid overwriting rules in other namespaces, use assignment
         * names that are unique.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIAMPolicyAssignmentOutcome CreateIAMPolicyAssignment(const Model::CreateIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for CreateIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIAMPolicyAssignmentOutcomeCallable CreateIAMPolicyAssignmentCallable(const Model::CreateIAMPolicyAssignmentRequest& request) const;

        /**
         * An Async wrapper for CreateIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIAMPolicyAssignmentAsync(const Model::CreateIAMPolicyAssignmentRequest& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and starts a new SPICE ingestion for a dataset. You can manually
         * refresh datasets in an Enterprise edition account 32 times in a 24-hour period.
         * You can manually refresh datasets in a Standard edition account 8 times in a
         * 24-hour period. Each 24-hour period is measured starting 24 hours before the
         * current date and time.</p> <p>Any ingestions operating on tagged datasets
         * inherit the same tags automatically for use in access control. For an example,
         * see <a
         * href="http://aws.amazon.com/premiumsupport/knowledge-center/iam-ec2-resource-tags/">How
         * do I create an IAM policy to control access to Amazon EC2 resources using
         * tags?</a> in the Amazon Web Services Knowledge Center. Tags are visible on the
         * tagged dataset, but not on the ingestion resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngestionOutcome CreateIngestion(const Model::CreateIngestionRequest& request) const;

        /**
         * A Callable wrapper for CreateIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIngestionOutcomeCallable CreateIngestionCallable(const Model::CreateIngestionRequest& request) const;

        /**
         * An Async wrapper for CreateIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIngestionAsync(const Model::CreateIngestionRequest& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>(Enterprise edition only) Creates a new namespace for you to use with Amazon
         * QuickSight.</p> <p>A namespace allows you to isolate the Amazon QuickSight users
         * and groups that are registered for that namespace. Users that access the
         * namespace can share assets only with other users or groups in the same
         * namespace. They can't see users and groups in other namespaces. You can create a
         * namespace after your Amazon Web Services account is subscribed to Amazon
         * QuickSight. The namespace must be unique within the Amazon Web Services account.
         * By default, there is a limit of 100 namespaces per Amazon Web Services account.
         * To increase your limit, create a ticket with Amazon Web Services Support.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request) const;

        /**
         * An Async wrapper for CreateNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a template from an existing Amazon QuickSight analysis or template.
         * You can use the resulting template to create a dashboard.</p> <p>A
         * <i>template</i> is an entity in Amazon QuickSight that encapsulates the metadata
         * required to create an analysis and that you can use to create s dashboard. A
         * template adds a layer of abstraction by using placeholders to replace the
         * dataset associated with the analysis. You can use templates to create dashboards
         * by replacing dataset placeholders with datasets that follow the same schema that
         * was used to create the source analysis and template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const Model::CreateTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a template alias for a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateAliasOutcome CreateTemplateAlias(const Model::CreateTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTemplateAliasOutcomeCallable CreateTemplateAliasCallable(const Model::CreateTemplateAliasRequest& request) const;

        /**
         * An Async wrapper for CreateTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTemplateAliasAsync(const Model::CreateTemplateAliasRequest& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a theme.</p> <p>A <i>theme</i> is set of configuration options for
         * color and layout. Themes apply to analyses and dashboards. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/themes-in-quicksight.html">Using
         * Themes in Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeOutcome CreateTheme(const Model::CreateThemeRequest& request) const;

        /**
         * A Callable wrapper for CreateTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThemeOutcomeCallable CreateThemeCallable(const Model::CreateThemeRequest& request) const;

        /**
         * An Async wrapper for CreateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThemeAsync(const Model::CreateThemeRequest& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a theme alias for a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeAliasOutcome CreateThemeAlias(const Model::CreateThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThemeAliasOutcomeCallable CreateThemeAliasCallable(const Model::CreateThemeAliasRequest& request) const;

        /**
         * An Async wrapper for CreateThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThemeAliasAsync(const Model::CreateThemeAliasRequest& request, const CreateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all Amazon QuickSight customizations in this Amazon Web Services
         * Region for the specified Amazon Web Services account and Amazon QuickSight
         * namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountCustomizationOutcome DeleteAccountCustomization(const Model::DeleteAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountCustomizationOutcomeCallable DeleteAccountCustomizationCallable(const Model::DeleteAccountCustomizationRequest& request) const;

        /**
         * An Async wrapper for DeleteAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountCustomizationAsync(const Model::DeleteAccountCustomizationRequest& request, const DeleteAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an analysis from Amazon QuickSight. You can optionally include a
         * recovery window during which you can restore the analysis. If you don't specify
         * a recovery window value, the operation defaults to 30 days. Amazon QuickSight
         * attaches a <code>DeletionTime</code> stamp to the response that specifies the
         * end of the recovery window. At the end of the recovery window, Amazon QuickSight
         * deletes the analysis permanently.</p> <p>At any time before recovery window
         * ends, you can use the <code>RestoreAnalysis</code> API operation to remove the
         * <code>DeletionTime</code> stamp and cancel the deletion of the analysis. The
         * analysis remains visible in the API until it's deleted, so you can describe it
         * but you can't make a template from it.</p> <p>An analysis that's scheduled for
         * deletion isn't accessible in the Amazon QuickSight console. To access it in the
         * console, restore it. Deleting an analysis doesn't delete the dashboards that you
         * publish from it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalysisOutcome DeleteAnalysis(const Model::DeleteAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnalysisOutcomeCallable DeleteAnalysisCallable(const Model::DeleteAnalysisRequest& request) const;

        /**
         * An Async wrapper for DeleteAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnalysisAsync(const Model::DeleteAnalysisRequest& request, const DeleteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;

        /**
         * A Callable wrapper for DeleteDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDashboardOutcomeCallable DeleteDashboardCallable(const Model::DeleteDashboardRequest& request) const;

        /**
         * An Async wrapper for DeleteDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDashboardAsync(const Model::DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetOutcome DeleteDataSet(const Model::DeleteDataSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSetOutcomeCallable DeleteDataSetCallable(const Model::DeleteDataSetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSetAsync(const Model::DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the data source permanently. This operation breaks all the datasets
         * that reference the deleted data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an empty folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFolderOutcomeCallable DeleteFolderCallable(const Model::DeleteFolderRequest& request) const;

        /**
         * An Async wrapper for DeleteFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an asset, such as a dashboard, analysis, or dataset, from a
         * folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteFolderMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderMembershipOutcome DeleteFolderMembership(const Model::DeleteFolderMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolderMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFolderMembershipOutcomeCallable DeleteFolderMembershipCallable(const Model::DeleteFolderMembershipRequest& request) const;

        /**
         * An Async wrapper for DeleteFolderMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFolderMembershipAsync(const Model::DeleteFolderMembershipRequest& request, const DeleteFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a user group from Amazon QuickSight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a user from a group so that the user is no longer a member of the
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupMembershipOutcome DeleteGroupMembership(const Model::DeleteGroupMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroupMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupMembershipOutcomeCallable DeleteGroupMembershipCallable(const Model::DeleteGroupMembershipRequest& request) const;

        /**
         * An Async wrapper for DeleteGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupMembershipAsync(const Model::DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing IAM policy assignment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIAMPolicyAssignmentOutcome DeleteIAMPolicyAssignment(const Model::DeleteIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIAMPolicyAssignmentOutcomeCallable DeleteIAMPolicyAssignmentCallable(const Model::DeleteIAMPolicyAssignmentRequest& request) const;

        /**
         * An Async wrapper for DeleteIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIAMPolicyAssignmentAsync(const Model::DeleteIAMPolicyAssignmentRequest& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a namespace and the users and groups that are associated with the
         * namespace. This is an asynchronous process. Assets including dashboards,
         * analyses, datasets and data sources are not deleted. To delete these assets, you
         * use the API operations for the relevant asset. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;

        /**
         * An Async wrapper for DeleteNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the item that the specified template alias points to. If you provide
         * a specific alias, you delete the version of the template that the alias points
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateAliasOutcome DeleteTemplateAlias(const Model::DeleteTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTemplateAliasOutcomeCallable DeleteTemplateAliasCallable(const Model::DeleteTemplateAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTemplateAliasAsync(const Model::DeleteTemplateAliasRequest& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeOutcome DeleteTheme(const Model::DeleteThemeRequest& request) const;

        /**
         * A Callable wrapper for DeleteTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThemeOutcomeCallable DeleteThemeCallable(const Model::DeleteThemeRequest& request) const;

        /**
         * An Async wrapper for DeleteTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThemeAsync(const Model::DeleteThemeRequest& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the version of the theme that the specified theme alias points to. If
         * you provide a specific alias, you delete the version of the theme that the alias
         * points to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeAliasOutcome DeleteThemeAlias(const Model::DeleteThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThemeAliasOutcomeCallable DeleteThemeAliasCallable(const Model::DeleteThemeAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThemeAliasAsync(const Model::DeleteThemeAliasRequest& request, const DeleteThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the Identity and Access Management (IAM) user or role that's making the call.
         * The IAM user isn't deleted as a result of this call. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user identified by its principal ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserByPrincipalIdOutcome DeleteUserByPrincipalId(const Model::DeleteUserByPrincipalIdRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserByPrincipalId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserByPrincipalIdOutcomeCallable DeleteUserByPrincipalIdCallable(const Model::DeleteUserByPrincipalIdRequest& request) const;

        /**
         * An Async wrapper for DeleteUserByPrincipalId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserByPrincipalIdAsync(const Model::DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the customizations associated with the provided Amazon Web Services
         * account and Amazon Amazon QuickSight namespace in an Amazon Web Services Region.
         * The Amazon QuickSight console evaluates which customizations to apply by running
         * this API operation with the <code>Resolved</code> flag included. </p> <p>To
         * determine what customizations display when you run this command, it can help to
         * visualize the relationship of the entities involved. </p> <ul> <li> <p>
         * <code>Amazon Web Services account</code> - The Amazon Web Services account
         * exists at the top of the hierarchy. It has the potential to use all of the
         * Amazon Web Services Regions and Amazon Web Services Services. When you subscribe
         * to Amazon QuickSight, you choose one Amazon Web Services Region to use as your
         * home Region. That's where your free SPICE capacity is located. You can use
         * Amazon QuickSight in any supported Amazon Web Services Region. </p> </li> <li>
         * <p> <code>Amazon Web Services Region</code> - In each Amazon Web Services Region
         * where you sign in to Amazon QuickSight at least once, Amazon QuickSight acts as
         * a separate instance of the same service. If you have a user directory, it
         * resides in us-east-1, which is the US East (N. Virginia). Generally speaking,
         * these users have access to Amazon QuickSight in any Amazon Web Services Region,
         * unless they are constrained to a namespace. </p> <p>To run the command in a
         * different Amazon Web Services Region, you change your Region settings. If you're
         * using the CLI, you can use one of the following options:</p> <ul> <li> <p>Use <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-options.html">command
         * line options</a>. </p> </li> <li> <p>Use <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-profiles.html">named
         * profiles</a>. </p> </li> <li> <p>Run <code>aws configure</code> to change your
         * default Amazon Web Services Region. Use Enter to key the same settings for your
         * keys. For more information, see <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-configure.html">Configuring
         * the CLI</a>.</p> </li> </ul> </li> <li> <p> <code>Namespace</code> - A
         * QuickSight namespace is a partition that contains users and assets (data
         * sources, datasets, dashboards, and so on). To access assets that are in a
         * specific namespace, users and groups must also be part of the same namespace.
         * People who share a namespace are completely isolated from users and assets in
         * other namespaces, even if they are in the same Amazon Web Services account and
         * Amazon Web Services Region.</p> </li> <li> <p> <code>Applied
         * customizations</code> - Within an Amazon Web Services Region, a set of Amazon
         * QuickSight customizations can apply to an Amazon Web Services account or to a
         * namespace. Settings that you apply to a namespace override settings that you
         * apply to an Amazon Web Services account. All settings are isolated to a single
         * Amazon Web Services Region. To apply them in other Amazon Web Services Regions,
         * run the <code>CreateAccountCustomization</code> command in each Amazon Web
         * Services Region where you want to apply the same customizations. </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountCustomizationOutcome DescribeAccountCustomization(const Model::DescribeAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountCustomizationOutcomeCallable DescribeAccountCustomizationCallable(const Model::DescribeAccountCustomizationRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountCustomizationAsync(const Model::DescribeAccountCustomizationRequest& request, const DescribeAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the settings that were used when your Amazon QuickSight
         * subscription was first created in this Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountSettingsOutcome DescribeAccountSettings(const Model::DescribeAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountSettingsOutcomeCallable DescribeAccountSettingsCallable(const Model::DescribeAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountSettingsAsync(const Model::DescribeAccountSettingsRequest& request, const DescribeAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use the DescribeAccountSubscription operation to receive a description of a
         * Amazon QuickSight account's subscription. A successful API call returns an
         * <code>AccountInfo</code> object that includes an account's name, subscription
         * status, authentication type, edition, and notification email
         * address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountSubscriptionOutcome DescribeAccountSubscription(const Model::DescribeAccountSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountSubscriptionOutcomeCallable DescribeAccountSubscriptionCallable(const Model::DescribeAccountSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountSubscriptionAsync(const Model::DescribeAccountSubscriptionRequest& request, const DescribeAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a summary of the metadata for an analysis.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisOutcome DescribeAnalysis(const Model::DescribeAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnalysisOutcomeCallable DescribeAnalysisCallable(const Model::DescribeAnalysisRequest& request) const;

        /**
         * An Async wrapper for DescribeAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnalysisAsync(const Model::DescribeAnalysisRequest& request, const DescribeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the read and write permissions for an analysis.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAnalysisPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisPermissionsOutcome DescribeAnalysisPermissions(const Model::DescribeAnalysisPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnalysisPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnalysisPermissionsOutcomeCallable DescribeAnalysisPermissionsCallable(const Model::DescribeAnalysisPermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeAnalysisPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnalysisPermissionsAsync(const Model::DescribeAnalysisPermissionsRequest& request, const DescribeAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a summary for a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDashboardOutcomeCallable DescribeDashboardCallable(const Model::DescribeDashboardRequest& request) const;

        /**
         * An Async wrapper for DescribeDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDashboardAsync(const Model::DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes read and write permissions for a dashboard.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardPermissionsOutcome DescribeDashboardPermissions(const Model::DescribeDashboardPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboardPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDashboardPermissionsOutcomeCallable DescribeDashboardPermissionsCallable(const Model::DescribeDashboardPermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeDashboardPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDashboardPermissionsAsync(const Model::DescribeDashboardPermissionsRequest& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset. This operation doesn't support datasets that include
         * uploaded files as a source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetOutcome DescribeDataSet(const Model::DescribeDataSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSetOutcomeCallable DescribeDataSetCallable(const Model::DescribeDataSetRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSetAsync(const Model::DescribeDataSetRequest& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetPermissionsOutcome DescribeDataSetPermissions(const Model::DescribeDataSetPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSetPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSetPermissionsOutcomeCallable DescribeDataSetPermissionsCallable(const Model::DescribeDataSetPermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSetPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSetPermissionsAsync(const Model::DescribeDataSetPermissionsRequest& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourceOutcome DescribeDataSource(const Model::DescribeDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSourceOutcomeCallable DescribeDataSourceCallable(const Model::DescribeDataSourceRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the resource permissions for a data source.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourcePermissionsOutcome DescribeDataSourcePermissions(const Model::DescribeDataSourcePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSourcePermissionsOutcomeCallable DescribeDataSourcePermissionsCallable(const Model::DescribeDataSourcePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourcePermissionsAsync(const Model::DescribeDataSourcePermissionsRequest& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderOutcome DescribeFolder(const Model::DescribeFolderRequest& request) const;

        /**
         * A Callable wrapper for DescribeFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFolderOutcomeCallable DescribeFolderCallable(const Model::DescribeFolderRequest& request) const;

        /**
         * An Async wrapper for DescribeFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFolderAsync(const Model::DescribeFolderRequest& request, const DescribeFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes permissions for a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolderPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderPermissionsOutcome DescribeFolderPermissions(const Model::DescribeFolderPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFolderPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFolderPermissionsOutcomeCallable DescribeFolderPermissionsCallable(const Model::DescribeFolderPermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeFolderPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFolderPermissionsAsync(const Model::DescribeFolderPermissionsRequest& request, const DescribeFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the folder resolved permissions. Permissions consists of both
         * folder direct permissions and the inherited permissions from the ancestor
         * folders.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolderResolvedPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderResolvedPermissionsOutcome DescribeFolderResolvedPermissions(const Model::DescribeFolderResolvedPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFolderResolvedPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFolderResolvedPermissionsOutcomeCallable DescribeFolderResolvedPermissionsCallable(const Model::DescribeFolderResolvedPermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeFolderResolvedPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFolderResolvedPermissionsAsync(const Model::DescribeFolderResolvedPermissionsRequest& request, const DescribeFolderResolvedPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an Amazon QuickSight group's description and Amazon Resource Name
         * (ARN). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use the <code>DescribeGroupMembership</code> operation to determine if a user
         * is a member of the specified group. If the user exists and is a member of the
         * specified group, an associated <code>GroupMember</code> object is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupMembershipOutcome DescribeGroupMembership(const Model::DescribeGroupMembershipRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroupMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGroupMembershipOutcomeCallable DescribeGroupMembershipCallable(const Model::DescribeGroupMembershipRequest& request) const;

        /**
         * An Async wrapper for DescribeGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGroupMembershipAsync(const Model::DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing IAM policy assignment, as specified by the assignment
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIAMPolicyAssignmentOutcome DescribeIAMPolicyAssignment(const Model::DescribeIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DescribeIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIAMPolicyAssignmentOutcomeCallable DescribeIAMPolicyAssignmentCallable(const Model::DescribeIAMPolicyAssignmentRequest& request) const;

        /**
         * An Async wrapper for DescribeIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIAMPolicyAssignmentAsync(const Model::DescribeIAMPolicyAssignmentRequest& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a SPICE ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIngestionOutcome DescribeIngestion(const Model::DescribeIngestionRequest& request) const;

        /**
         * A Callable wrapper for DescribeIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIngestionOutcomeCallable DescribeIngestionCallable(const Model::DescribeIngestionRequest& request) const;

        /**
         * An Async wrapper for DescribeIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIngestionAsync(const Model::DescribeIngestionRequest& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a summary and status of IP rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIpRestriction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpRestrictionOutcome DescribeIpRestriction(const Model::DescribeIpRestrictionRequest& request) const;

        /**
         * A Callable wrapper for DescribeIpRestriction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIpRestrictionOutcomeCallable DescribeIpRestrictionCallable(const Model::DescribeIpRestrictionRequest& request) const;

        /**
         * An Async wrapper for DescribeIpRestriction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIpRestrictionAsync(const Model::DescribeIpRestrictionRequest& request, const DescribeIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNamespaceOutcome DescribeNamespace(const Model::DescribeNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNamespaceOutcomeCallable DescribeNamespaceCallable(const Model::DescribeNamespaceRequest& request) const;

        /**
         * An Async wrapper for DescribeNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNamespaceAsync(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a template's metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateOutcome DescribeTemplate(const Model::DescribeTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTemplateOutcomeCallable DescribeTemplateCallable(const Model::DescribeTemplateRequest& request) const;

        /**
         * An Async wrapper for DescribeTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTemplateAsync(const Model::DescribeTemplateRequest& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the template alias for a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateAliasOutcome DescribeTemplateAlias(const Model::DescribeTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTemplateAliasOutcomeCallable DescribeTemplateAliasCallable(const Model::DescribeTemplateAliasRequest& request) const;

        /**
         * An Async wrapper for DescribeTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTemplateAliasAsync(const Model::DescribeTemplateAliasRequest& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes read and write permissions on a template.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplatePermissionsOutcome DescribeTemplatePermissions(const Model::DescribeTemplatePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTemplatePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTemplatePermissionsOutcomeCallable DescribeTemplatePermissionsCallable(const Model::DescribeTemplatePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeTemplatePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTemplatePermissionsAsync(const Model::DescribeTemplatePermissionsRequest& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemeOutcome DescribeTheme(const Model::DescribeThemeRequest& request) const;

        /**
         * A Callable wrapper for DescribeTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThemeOutcomeCallable DescribeThemeCallable(const Model::DescribeThemeRequest& request) const;

        /**
         * An Async wrapper for DescribeTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThemeAsync(const Model::DescribeThemeRequest& request, const DescribeThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the alias for a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemeAliasOutcome DescribeThemeAlias(const Model::DescribeThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThemeAliasOutcomeCallable DescribeThemeAliasCallable(const Model::DescribeThemeAliasRequest& request) const;

        /**
         * An Async wrapper for DescribeThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThemeAliasAsync(const Model::DescribeThemeAliasRequest& request, const DescribeThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the read and write permissions for a theme.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeThemePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemePermissionsOutcome DescribeThemePermissions(const Model::DescribeThemePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeThemePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThemePermissionsOutcomeCallable DescribeThemePermissionsCallable(const Model::DescribeThemePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeThemePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThemePermissionsAsync(const Model::DescribeThemePermissionsRequest& request, const DescribeThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a user, given the user name. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates an embed URL that you can use to embed an Amazon QuickSight
         * dashboard or visual in your website, without having to register any reader
         * users. Before you use this action, make sure that you have configured the
         * dashboards and permissions.</p> <p>The following rules apply to the generated
         * URL:</p> <ul> <li> <p>It contains a temporary bearer token. It is valid for 5
         * minutes after it is generated. Once redeemed within this period, it cannot be
         * re-used again.</p> </li> <li> <p>The URL validity period should not be confused
         * with the actual session lifetime that can be customized using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForAnonymousUser.html#QS-GenerateEmbedUrlForAnonymousUser-request-SessionLifetimeInMinutes">SessionLifetimeInMinutes</a>
         * </code> parameter. The resulting user session is valid for 15 minutes (minimum)
         * to 10 hours (maximum). The default session duration is 10 hours.</p> </li> <li>
         * <p>You are charged only when the URL is used or there is interaction with Amazon
         * QuickSight.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedded
         * Analytics</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>For more
         * information about the high-level steps for embedding and for an interactive demo
         * of the ways you can customize embedding, visit the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GenerateEmbedUrlForAnonymousUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateEmbedUrlForAnonymousUserOutcome GenerateEmbedUrlForAnonymousUser(const Model::GenerateEmbedUrlForAnonymousUserRequest& request) const;

        /**
         * A Callable wrapper for GenerateEmbedUrlForAnonymousUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateEmbedUrlForAnonymousUserOutcomeCallable GenerateEmbedUrlForAnonymousUserCallable(const Model::GenerateEmbedUrlForAnonymousUserRequest& request) const;

        /**
         * An Async wrapper for GenerateEmbedUrlForAnonymousUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateEmbedUrlForAnonymousUserAsync(const Model::GenerateEmbedUrlForAnonymousUserRequest& request, const GenerateEmbedUrlForAnonymousUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates an embed URL that you can use to embed an Amazon QuickSight
         * experience in your website. This action can be used for any type of user
         * registered in an Amazon QuickSight account. Before you use this action, make
         * sure that you have configured the relevant Amazon QuickSight resource and
         * permissions.</p> <p>The following rules apply to the generated URL:</p> <ul>
         * <li> <p>It contains a temporary bearer token. It is valid for 5 minutes after it
         * is generated. Once redeemed within this period, it cannot be re-used again.</p>
         * </li> <li> <p>The URL validity period should not be confused with the actual
         * session lifetime that can be customized using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html#QS-GenerateEmbedUrlForRegisteredUser-request-SessionLifetimeInMinutes">SessionLifetimeInMinutes</a>
         * </code> parameter.</p> <p>The resulting user session is valid for 15 minutes
         * (minimum) to 10 hours (maximum). The default session duration is 10 hours.</p>
         * </li> <li> <p>You are charged only when the URL is used or there is interaction
         * with Amazon QuickSight.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedded
         * Analytics</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>For more
         * information about the high-level steps for embedding and for an interactive demo
         * of the ways you can customize embedding, visit the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GenerateEmbedUrlForRegisteredUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateEmbedUrlForRegisteredUserOutcome GenerateEmbedUrlForRegisteredUser(const Model::GenerateEmbedUrlForRegisteredUserRequest& request) const;

        /**
         * A Callable wrapper for GenerateEmbedUrlForRegisteredUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateEmbedUrlForRegisteredUserOutcomeCallable GenerateEmbedUrlForRegisteredUserCallable(const Model::GenerateEmbedUrlForRegisteredUserRequest& request) const;

        /**
         * An Async wrapper for GenerateEmbedUrlForRegisteredUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateEmbedUrlForRegisteredUserAsync(const Model::GenerateEmbedUrlForRegisteredUserRequest& request, const GenerateEmbedUrlForRegisteredUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a temporary session URL and authorization code(bearer token) that
         * you can use to embed an Amazon QuickSight read-only dashboard in your website or
         * application. Before you use this command, make sure that you have configured the
         * dashboards and permissions. </p> <p>Currently, you can use
         * <code>GetDashboardEmbedURL</code> only from the server, not from the user's
         * browser. The following rules apply to the generated URL:</p> <ul> <li> <p>They
         * must be used together.</p> </li> <li> <p>They can be used one time only.</p>
         * </li> <li> <p>They are valid for 5 minutes after you run this command.</p> </li>
         * <li> <p>You are charged only when the URL is used or there is interaction with
         * Amazon QuickSight.</p> </li> <li> <p>The resulting user session is valid for 15
         * minutes (default) up to 10 hours (maximum). You can use the optional
         * <code>SessionLifetimeInMinutes</code> parameter to customize session
         * duration.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-deprecated.html">Embedding
         * Analytics Using GetDashboardEmbedUrl</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>For more information about the high-level steps for embedding
         * and for an interactive demo of the ways you can customize embedding, visit the
         * <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardEmbedUrlOutcome GetDashboardEmbedUrl(const Model::GetDashboardEmbedUrlRequest& request) const;

        /**
         * A Callable wrapper for GetDashboardEmbedUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDashboardEmbedUrlOutcomeCallable GetDashboardEmbedUrlCallable(const Model::GetDashboardEmbedUrlRequest& request) const;

        /**
         * An Async wrapper for GetDashboardEmbedUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDashboardEmbedUrlAsync(const Model::GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a session URL and authorization code that you can use to embed the
         * Amazon Amazon QuickSight console in your web server code. Use
         * <code>GetSessionEmbedUrl</code> where you want to provide an authoring portal
         * that allows users to create data sources, datasets, analyses, and dashboards.
         * The users who access an embedded Amazon QuickSight console need belong to the
         * author or admin security cohort. If you want to restrict permissions to some of
         * these features, add a custom permissions profile to the user with the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
         * </code> API operation. Use <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
         * </code> API operation to add a new user with a custom permission profile
         * attached. For more information, see the following sections in the <i>Amazon
         * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedding
         * Analytics</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
         * Access to the Amazon QuickSight Console</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetSessionEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionEmbedUrlOutcome GetSessionEmbedUrl(const Model::GetSessionEmbedUrlRequest& request) const;

        /**
         * A Callable wrapper for GetSessionEmbedUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSessionEmbedUrlOutcomeCallable GetSessionEmbedUrlCallable(const Model::GetSessionEmbedUrlRequest& request) const;

        /**
         * An Async wrapper for GetSessionEmbedUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSessionEmbedUrlAsync(const Model::GetSessionEmbedUrlRequest& request, const GetSessionEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Amazon QuickSight analyses that exist in the specified Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalysesOutcome ListAnalyses(const Model::ListAnalysesRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnalysesOutcomeCallable ListAnalysesCallable(const Model::ListAnalysesRequest& request) const;

        /**
         * An Async wrapper for ListAnalyses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnalysesAsync(const Model::ListAnalysesRequest& request, const ListAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the versions of the dashboards in the Amazon QuickSight
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboardVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardVersionsOutcome ListDashboardVersions(const Model::ListDashboardVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListDashboardVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDashboardVersionsOutcomeCallable ListDashboardVersionsCallable(const Model::ListDashboardVersionsRequest& request) const;

        /**
         * An Async wrapper for ListDashboardVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDashboardVersionsAsync(const Model::ListDashboardVersionsRequest& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists dashboards in an Amazon Web Services account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;

        /**
         * A Callable wrapper for ListDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const Model::ListDashboardsRequest& request) const;

        /**
         * An Async wrapper for ListDashboards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDashboardsAsync(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the datasets belonging to the current Amazon Web Services
         * account in an Amazon Web Services Region.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/ *</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetsOutcome ListDataSets(const Model::ListDataSetsRequest& request) const;

        /**
         * A Callable wrapper for ListDataSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSetsOutcomeCallable ListDataSetsCallable(const Model::ListDataSetsRequest& request) const;

        /**
         * An Async wrapper for ListDataSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSetsAsync(const Model::ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists data sources in current Amazon Web Services Region that belong to this
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const Model::ListDataSourcesRequest& request) const;

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all assets (<code>DASHBOARD</code>, <code>ANALYSIS</code>, and
         * <code>DATASET</code>) in a folder. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListFolderMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFolderMembersOutcome ListFolderMembers(const Model::ListFolderMembersRequest& request) const;

        /**
         * A Callable wrapper for ListFolderMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFolderMembersOutcomeCallable ListFolderMembersCallable(const Model::ListFolderMembersRequest& request) const;

        /**
         * An Async wrapper for ListFolderMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFolderMembersAsync(const Model::ListFolderMembersRequest& request, const ListFolderMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all folders in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFoldersOutcome ListFolders(const Model::ListFoldersRequest& request) const;

        /**
         * A Callable wrapper for ListFolders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFoldersOutcomeCallable ListFoldersCallable(const Model::ListFoldersRequest& request) const;

        /**
         * An Async wrapper for ListFolders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFoldersAsync(const Model::ListFoldersRequest& request, const ListFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists member users in a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroupMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsOutcome ListGroupMemberships(const Model::ListGroupMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupMembershipsOutcomeCallable ListGroupMembershipsCallable(const Model::ListGroupMembershipsRequest& request) const;

        /**
         * An Async wrapper for ListGroupMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupMembershipsAsync(const Model::ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all user groups in Amazon QuickSight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists IAM policy assignments in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsOutcome ListIAMPolicyAssignments(const Model::ListIAMPolicyAssignmentsRequest& request) const;

        /**
         * A Callable wrapper for ListIAMPolicyAssignments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIAMPolicyAssignmentsOutcomeCallable ListIAMPolicyAssignmentsCallable(const Model::ListIAMPolicyAssignmentsRequest& request) const;

        /**
         * An Async wrapper for ListIAMPolicyAssignments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIAMPolicyAssignmentsAsync(const Model::ListIAMPolicyAssignmentsRequest& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the IAM policy assignments, including the Amazon Resource Names
         * (ARNs) for the IAM policies assigned to the specified user and group or groups
         * that the user belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignmentsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsForUserOutcome ListIAMPolicyAssignmentsForUser(const Model::ListIAMPolicyAssignmentsForUserRequest& request) const;

        /**
         * A Callable wrapper for ListIAMPolicyAssignmentsForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIAMPolicyAssignmentsForUserOutcomeCallable ListIAMPolicyAssignmentsForUserCallable(const Model::ListIAMPolicyAssignmentsForUserRequest& request) const;

        /**
         * An Async wrapper for ListIAMPolicyAssignmentsForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIAMPolicyAssignmentsForUserAsync(const Model::ListIAMPolicyAssignmentsForUserRequest& request, const ListIAMPolicyAssignmentsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the history of SPICE ingestions for a dataset.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIngestions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestionsOutcome ListIngestions(const Model::ListIngestionsRequest& request) const;

        /**
         * A Callable wrapper for ListIngestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIngestionsOutcomeCallable ListIngestionsCallable(const Model::ListIngestionsRequest& request) const;

        /**
         * An Async wrapper for ListIngestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIngestionsAsync(const Model::ListIngestionsRequest& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the namespaces for the specified Amazon Web Services account. This
         * operation doesn't list deleted namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNamespacesOutcomeCallable ListNamespacesCallable(const Model::ListNamespacesRequest& request) const;

        /**
         * An Async wrapper for ListNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags assigned to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the aliases of a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateAliasesOutcome ListTemplateAliases(const Model::ListTemplateAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplateAliasesOutcomeCallable ListTemplateAliasesCallable(const Model::ListTemplateAliasesRequest& request) const;

        /**
         * An Async wrapper for ListTemplateAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplateAliasesAsync(const Model::ListTemplateAliasesRequest& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the versions of the templates in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateVersionsOutcome ListTemplateVersions(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplateVersionsOutcomeCallable ListTemplateVersionsCallable(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * An Async wrapper for ListTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplateVersionsAsync(const Model::ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the templates in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const Model::ListTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the aliases of a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemeAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemeAliasesOutcome ListThemeAliases(const Model::ListThemeAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListThemeAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThemeAliasesOutcomeCallable ListThemeAliasesCallable(const Model::ListThemeAliasesRequest& request) const;

        /**
         * An Async wrapper for ListThemeAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThemeAliasesAsync(const Model::ListThemeAliasesRequest& request, const ListThemeAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the versions of the themes in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemeVersionsOutcome ListThemeVersions(const Model::ListThemeVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListThemeVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThemeVersionsOutcomeCallable ListThemeVersionsCallable(const Model::ListThemeVersionsRequest& request) const;

        /**
         * An Async wrapper for ListThemeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThemeVersionsAsync(const Model::ListThemeVersionsRequest& request, const ListThemeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the themes in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemesOutcome ListThemes(const Model::ListThemesRequest& request) const;

        /**
         * A Callable wrapper for ListThemes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThemesOutcomeCallable ListThemesCallable(const Model::ListThemesRequest& request) const;

        /**
         * An Async wrapper for ListThemes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThemesAsync(const Model::ListThemesRequest& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUserGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserGroupsOutcome ListUserGroups(const Model::ListUserGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListUserGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserGroupsOutcomeCallable ListUserGroupsCallable(const Model::ListUserGroupsRequest& request) const;

        /**
         * An Async wrapper for ListUserGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserGroupsAsync(const Model::ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all of the Amazon QuickSight users belonging to this
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon QuickSight user, whose identity is associated with the
         * Identity and Access Management (IAM) identity or role specified in the request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisterUser">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterUserOutcome RegisterUser(const Model::RegisterUserRequest& request) const;

        /**
         * A Callable wrapper for RegisterUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterUserOutcomeCallable RegisterUserCallable(const Model::RegisterUserRequest& request) const;

        /**
         * An Async wrapper for RegisterUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterUserAsync(const Model::RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores an analysis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RestoreAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreAnalysisOutcome RestoreAnalysis(const Model::RestoreAnalysisRequest& request) const;

        /**
         * A Callable wrapper for RestoreAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreAnalysisOutcomeCallable RestoreAnalysisCallable(const Model::RestoreAnalysisRequest& request) const;

        /**
         * An Async wrapper for RestoreAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreAnalysisAsync(const Model::RestoreAnalysisRequest& request, const RestoreAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for analyses that belong to the user specified in the filter.</p>
         *  <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAnalysesOutcome SearchAnalyses(const Model::SearchAnalysesRequest& request) const;

        /**
         * A Callable wrapper for SearchAnalyses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchAnalysesOutcomeCallable SearchAnalysesCallable(const Model::SearchAnalysesRequest& request) const;

        /**
         * An Async wrapper for SearchAnalyses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAnalysesAsync(const Model::SearchAnalysesRequest& request, const SearchAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for dashboards that belong to a user. </p>  <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDashboardsOutcome SearchDashboards(const Model::SearchDashboardsRequest& request) const;

        /**
         * A Callable wrapper for SearchDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchDashboardsOutcomeCallable SearchDashboardsCallable(const Model::SearchDashboardsRequest& request) const;

        /**
         * An Async wrapper for SearchDashboards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchDashboardsAsync(const Model::SearchDashboardsRequest& request, const SearchDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches the subfolders in a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFoldersOutcome SearchFolders(const Model::SearchFoldersRequest& request) const;

        /**
         * A Callable wrapper for SearchFolders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchFoldersOutcomeCallable SearchFoldersCallable(const Model::SearchFoldersRequest& request) const;

        /**
         * An Async wrapper for SearchFolders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchFoldersAsync(const Model::SearchFoldersRequest& request, const SearchFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use the <code>SearchGroups</code> operation to search groups in a specified
         * Amazon QuickSight namespace using the supplied filters.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGroupsOutcome SearchGroups(const Model::SearchGroupsRequest& request) const;

        /**
         * A Callable wrapper for SearchGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchGroupsOutcomeCallable SearchGroupsCallable(const Model::SearchGroupsRequest& request) const;

        /**
         * An Async wrapper for SearchGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchGroupsAsync(const Model::SearchGroupsRequest& request, const SearchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified Amazon QuickSight
         * resource. </p> <p>Tags can help you organize and categorize your resources. You
         * can also use them to scope user permissions, by granting a user permission to
         * access or change only resources with certain tag values. You can use the
         * <code>TagResource</code> operation with a resource that already has tags. If you
         * specify a new tag key for the resource, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource. Amazon QuickSight supports tagging on data set, data source,
         * dashboard, and template. </p> <p>Tagging for Amazon QuickSight works in a
         * similar way to tagging for other Amazon Web Services services, except for the
         * following:</p> <ul> <li> <p>You can't use tags to track costs for Amazon
         * QuickSight. This isn't possible because you can't tag the resources that Amazon
         * QuickSight costs are based on, for example Amazon QuickSight storage capacity
         * (SPICE), number of users, type of users, and usage metrics.</p> </li> <li>
         * <p>Amazon QuickSight doesn't currently support the tag editor for Resource
         * Groups.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag or tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates Amazon QuickSight customizations for the current Amazon Web Services
         * Region. Currently, the only customization that you can use is a theme.</p>
         * <p>You can use customizations for your Amazon Web Services account or, if you
         * specify a namespace, for a Amazon QuickSight namespace instead. Customizations
         * that apply to a namespace override customizations that apply to an Amazon Web
         * Services account. To find out which customizations apply, use the
         * <code>DescribeAccountCustomization</code> API operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountCustomizationOutcome UpdateAccountCustomization(const Model::UpdateAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountCustomizationOutcomeCallable UpdateAccountCustomizationCallable(const Model::UpdateAccountCustomizationRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountCustomizationAsync(const Model::UpdateAccountCustomizationRequest& request, const UpdateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Amazon QuickSight settings in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountSettingsAsync(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an analysis in Amazon QuickSight</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnalysisOutcome UpdateAnalysis(const Model::UpdateAnalysisRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnalysisOutcomeCallable UpdateAnalysisCallable(const Model::UpdateAnalysisRequest& request) const;

        /**
         * An Async wrapper for UpdateAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnalysisAsync(const Model::UpdateAnalysisRequest& request, const UpdateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the read and write permissions for an analysis.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAnalysisPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnalysisPermissionsOutcome UpdateAnalysisPermissions(const Model::UpdateAnalysisPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnalysisPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnalysisPermissionsOutcomeCallable UpdateAnalysisPermissionsCallable(const Model::UpdateAnalysisPermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateAnalysisPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnalysisPermissionsAsync(const Model::UpdateAnalysisPermissionsRequest& request, const UpdateAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dashboard in an Amazon Web Services account.</p>  <p>Updating
         * a Dashboard creates a new dashboard version but does not immediately publish the
         * new version. You can update the published version of a dashboard by using the
         * <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateDashboardPublishedVersion.html">UpdateDashboardPublishedVersion</a>
         * </code> API operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardOutcomeCallable UpdateDashboardCallable(const Model::UpdateDashboardRequest& request) const;

        /**
         * An Async wrapper for UpdateDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardAsync(const Model::UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates read and write permissions on a dashboard.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPermissionsOutcome UpdateDashboardPermissions(const Model::UpdateDashboardPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboardPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardPermissionsOutcomeCallable UpdateDashboardPermissionsCallable(const Model::UpdateDashboardPermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateDashboardPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardPermissionsAsync(const Model::UpdateDashboardPermissionsRequest& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the published version of a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPublishedVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPublishedVersionOutcome UpdateDashboardPublishedVersion(const Model::UpdateDashboardPublishedVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboardPublishedVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardPublishedVersionOutcomeCallable UpdateDashboardPublishedVersionCallable(const Model::UpdateDashboardPublishedVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateDashboardPublishedVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardPublishedVersionAsync(const Model::UpdateDashboardPublishedVersionRequest& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dataset. This operation doesn't support datasets that include
         * uploaded files as a source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetOutcome UpdateDataSet(const Model::UpdateDataSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSetOutcomeCallable UpdateDataSetCallable(const Model::UpdateDataSetRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSetAsync(const Model::UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetPermissionsOutcome UpdateDataSetPermissions(const Model::UpdateDataSetPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSetPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSetPermissionsOutcomeCallable UpdateDataSetPermissionsCallable(const Model::UpdateDataSetPermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSetPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSetPermissionsAsync(const Model::UpdateDataSetPermissionsRequest& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the permissions to a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourcePermissionsOutcome UpdateDataSourcePermissions(const Model::UpdateDataSourcePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourcePermissionsOutcomeCallable UpdateDataSourcePermissionsCallable(const Model::UpdateDataSourcePermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourcePermissionsAsync(const Model::UpdateDataSourcePermissionsRequest& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest& request) const;

        /**
         * A Callable wrapper for UpdateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFolderOutcomeCallable UpdateFolderCallable(const Model::UpdateFolderRequest& request) const;

        /**
         * An Async wrapper for UpdateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFolderAsync(const Model::UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates permissions of a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateFolderPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderPermissionsOutcome UpdateFolderPermissions(const Model::UpdateFolderPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateFolderPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFolderPermissionsOutcomeCallable UpdateFolderPermissionsCallable(const Model::UpdateFolderPermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateFolderPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFolderPermissionsAsync(const Model::UpdateFolderPermissionsRequest& request, const UpdateFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes a group description. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing IAM policy assignment. This operation updates only the
         * optional parameter or parameters that are specified in the request. This
         * overwrites all of the users included in <code>Identities</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIAMPolicyAssignmentOutcome UpdateIAMPolicyAssignment(const Model::UpdateIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIAMPolicyAssignmentOutcomeCallable UpdateIAMPolicyAssignmentCallable(const Model::UpdateIAMPolicyAssignmentRequest& request) const;

        /**
         * An Async wrapper for UpdateIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIAMPolicyAssignmentAsync(const Model::UpdateIAMPolicyAssignmentRequest& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the content and status of IP rules. To use this operation, you need
         * to provide the entire map of rules. You can use the
         * <code>DescribeIpRestriction</code> operation to get the current rule
         * map.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIpRestriction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIpRestrictionOutcome UpdateIpRestriction(const Model::UpdateIpRestrictionRequest& request) const;

        /**
         * A Callable wrapper for UpdateIpRestriction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIpRestrictionOutcomeCallable UpdateIpRestrictionCallable(const Model::UpdateIpRestrictionRequest& request) const;

        /**
         * An Async wrapper for UpdateIpRestriction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIpRestrictionAsync(const Model::UpdateIpRestrictionRequest& request, const UpdateIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use the <code>UpdatePublicSharingSettings</code> operation to turn on or turn
         * off the public sharing settings of an Amazon QuickSight dashboard.</p> <p>To use
         * this operation, turn on session capacity pricing for your Amazon QuickSight
         * account.</p> <p>Before you can turn on public sharing on your account, make sure
         * to give public sharing permissions to an administrative user in the Identity and
         * Access Management (IAM) console. For more information on using IAM with Amazon
         * QuickSight, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/security_iam_service-with-iam.html">Using
         * Amazon QuickSight with IAM</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdatePublicSharingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicSharingSettingsOutcome UpdatePublicSharingSettings(const Model::UpdatePublicSharingSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdatePublicSharingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePublicSharingSettingsOutcomeCallable UpdatePublicSharingSettingsCallable(const Model::UpdatePublicSharingSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdatePublicSharingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePublicSharingSettingsAsync(const Model::UpdatePublicSharingSettingsRequest& request, const UpdatePublicSharingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a template from an existing Amazon QuickSight analysis or another
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const Model::UpdateTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the template alias of a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateAliasOutcome UpdateTemplateAlias(const Model::UpdateTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateAliasOutcomeCallable UpdateTemplateAliasCallable(const Model::UpdateTemplateAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateAliasAsync(const Model::UpdateTemplateAliasRequest& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource permissions for a template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplatePermissionsOutcome UpdateTemplatePermissions(const Model::UpdateTemplatePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplatePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplatePermissionsOutcomeCallable UpdateTemplatePermissionsCallable(const Model::UpdateTemplatePermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateTemplatePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplatePermissionsAsync(const Model::UpdateTemplatePermissionsRequest& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeOutcome UpdateTheme(const Model::UpdateThemeRequest& request) const;

        /**
         * A Callable wrapper for UpdateTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThemeOutcomeCallable UpdateThemeCallable(const Model::UpdateThemeRequest& request) const;

        /**
         * An Async wrapper for UpdateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThemeAsync(const Model::UpdateThemeRequest& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an alias of a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeAliasOutcome UpdateThemeAlias(const Model::UpdateThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThemeAliasOutcomeCallable UpdateThemeAliasCallable(const Model::UpdateThemeAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThemeAliasAsync(const Model::UpdateThemeAliasRequest& request, const UpdateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource permissions for a theme. Permissions apply to the action
         * to grant or revoke permissions on, for example
         * <code>"quicksight:DescribeTheme"</code>.</p> <p>Theme permissions apply in
         * groupings. Valid groupings include the following for the three levels of
         * permissions, which are user, owner, or no permissions: </p> <ul> <li>
         * <p>User</p> <ul> <li> <p> <code>"quicksight:DescribeTheme"</code> </p> </li>
         * <li> <p> <code>"quicksight:DescribeThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeAliases"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeVersions"</code> </p> </li> </ul> </li> <li>
         * <p>Owner</p> <ul> <li> <p> <code>"quicksight:DescribeTheme"</code> </p> </li>
         * <li> <p> <code>"quicksight:DescribeThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeAliases"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeVersions"</code> </p> </li> <li> <p>
         * <code>"quicksight:DeleteTheme"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateTheme"</code> </p> </li> <li> <p>
         * <code>"quicksight:CreateThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:DeleteThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateThemePermissions"</code> </p> </li> <li> <p>
         * <code>"quicksight:DescribeThemePermissions"</code> </p> </li> </ul> </li> <li>
         * <p>To specify no permissions, omit the permissions list.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateThemePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemePermissionsOutcome UpdateThemePermissions(const Model::UpdateThemePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateThemePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThemePermissionsOutcomeCallable UpdateThemePermissionsCallable(const Model::UpdateThemePermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateThemePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThemePermissionsAsync(const Model::UpdateThemePermissionsRequest& request, const UpdateThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon QuickSight user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelIngestionAsyncHelper(const Model::CancelIngestionRequest& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountCustomizationAsyncHelper(const Model::CreateAccountCustomizationRequest& request, const CreateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountSubscriptionAsyncHelper(const Model::CreateAccountSubscriptionRequest& request, const CreateAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAnalysisAsyncHelper(const Model::CreateAnalysisRequest& request, const CreateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDashboardAsyncHelper(const Model::CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSetAsyncHelper(const Model::CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSourceAsyncHelper(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFolderAsyncHelper(const Model::CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFolderMembershipAsyncHelper(const Model::CreateFolderMembershipRequest& request, const CreateFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupMembershipAsyncHelper(const Model::CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIAMPolicyAssignmentAsyncHelper(const Model::CreateIAMPolicyAssignmentRequest& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIngestionAsyncHelper(const Model::CreateIngestionRequest& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNamespaceAsyncHelper(const Model::CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTemplateAsyncHelper(const Model::CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTemplateAliasAsyncHelper(const Model::CreateTemplateAliasRequest& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThemeAsyncHelper(const Model::CreateThemeRequest& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThemeAliasAsyncHelper(const Model::CreateThemeAliasRequest& request, const CreateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountCustomizationAsyncHelper(const Model::DeleteAccountCustomizationRequest& request, const DeleteAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnalysisAsyncHelper(const Model::DeleteAnalysisRequest& request, const DeleteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDashboardAsyncHelper(const Model::DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataSetAsyncHelper(const Model::DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataSourceAsyncHelper(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFolderAsyncHelper(const Model::DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFolderMembershipAsyncHelper(const Model::DeleteFolderMembershipRequest& request, const DeleteFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupMembershipAsyncHelper(const Model::DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIAMPolicyAssignmentAsyncHelper(const Model::DeleteIAMPolicyAssignmentRequest& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNamespaceAsyncHelper(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTemplateAsyncHelper(const Model::DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTemplateAliasAsyncHelper(const Model::DeleteTemplateAliasRequest& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThemeAsyncHelper(const Model::DeleteThemeRequest& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThemeAliasAsyncHelper(const Model::DeleteThemeAliasRequest& request, const DeleteThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserByPrincipalIdAsyncHelper(const Model::DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountCustomizationAsyncHelper(const Model::DescribeAccountCustomizationRequest& request, const DescribeAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountSettingsAsyncHelper(const Model::DescribeAccountSettingsRequest& request, const DescribeAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountSubscriptionAsyncHelper(const Model::DescribeAccountSubscriptionRequest& request, const DescribeAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnalysisAsyncHelper(const Model::DescribeAnalysisRequest& request, const DescribeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnalysisPermissionsAsyncHelper(const Model::DescribeAnalysisPermissionsRequest& request, const DescribeAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDashboardAsyncHelper(const Model::DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDashboardPermissionsAsyncHelper(const Model::DescribeDashboardPermissionsRequest& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSetAsyncHelper(const Model::DescribeDataSetRequest& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSetPermissionsAsyncHelper(const Model::DescribeDataSetPermissionsRequest& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSourceAsyncHelper(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSourcePermissionsAsyncHelper(const Model::DescribeDataSourcePermissionsRequest& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFolderAsyncHelper(const Model::DescribeFolderRequest& request, const DescribeFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFolderPermissionsAsyncHelper(const Model::DescribeFolderPermissionsRequest& request, const DescribeFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFolderResolvedPermissionsAsyncHelper(const Model::DescribeFolderResolvedPermissionsRequest& request, const DescribeFolderResolvedPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupAsyncHelper(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupMembershipAsyncHelper(const Model::DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIAMPolicyAssignmentAsyncHelper(const Model::DescribeIAMPolicyAssignmentRequest& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIngestionAsyncHelper(const Model::DescribeIngestionRequest& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIpRestrictionAsyncHelper(const Model::DescribeIpRestrictionRequest& request, const DescribeIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNamespaceAsyncHelper(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTemplateAsyncHelper(const Model::DescribeTemplateRequest& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTemplateAliasAsyncHelper(const Model::DescribeTemplateAliasRequest& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTemplatePermissionsAsyncHelper(const Model::DescribeTemplatePermissionsRequest& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThemeAsyncHelper(const Model::DescribeThemeRequest& request, const DescribeThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThemeAliasAsyncHelper(const Model::DescribeThemeAliasRequest& request, const DescribeThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThemePermissionsAsyncHelper(const Model::DescribeThemePermissionsRequest& request, const DescribeThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateEmbedUrlForAnonymousUserAsyncHelper(const Model::GenerateEmbedUrlForAnonymousUserRequest& request, const GenerateEmbedUrlForAnonymousUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateEmbedUrlForRegisteredUserAsyncHelper(const Model::GenerateEmbedUrlForRegisteredUserRequest& request, const GenerateEmbedUrlForRegisteredUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDashboardEmbedUrlAsyncHelper(const Model::GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSessionEmbedUrlAsyncHelper(const Model::GetSessionEmbedUrlRequest& request, const GetSessionEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnalysesAsyncHelper(const Model::ListAnalysesRequest& request, const ListAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDashboardVersionsAsyncHelper(const Model::ListDashboardVersionsRequest& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDashboardsAsyncHelper(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataSetsAsyncHelper(const Model::ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataSourcesAsyncHelper(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFolderMembersAsyncHelper(const Model::ListFolderMembersRequest& request, const ListFolderMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFoldersAsyncHelper(const Model::ListFoldersRequest& request, const ListFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupMembershipsAsyncHelper(const Model::ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIAMPolicyAssignmentsAsyncHelper(const Model::ListIAMPolicyAssignmentsRequest& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIAMPolicyAssignmentsForUserAsyncHelper(const Model::ListIAMPolicyAssignmentsForUserRequest& request, const ListIAMPolicyAssignmentsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIngestionsAsyncHelper(const Model::ListIngestionsRequest& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNamespacesAsyncHelper(const Model::ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTemplateAliasesAsyncHelper(const Model::ListTemplateAliasesRequest& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTemplateVersionsAsyncHelper(const Model::ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTemplatesAsyncHelper(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThemeAliasesAsyncHelper(const Model::ListThemeAliasesRequest& request, const ListThemeAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThemeVersionsAsyncHelper(const Model::ListThemeVersionsRequest& request, const ListThemeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThemesAsyncHelper(const Model::ListThemesRequest& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserGroupsAsyncHelper(const Model::ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterUserAsyncHelper(const Model::RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreAnalysisAsyncHelper(const Model::RestoreAnalysisRequest& request, const RestoreAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchAnalysesAsyncHelper(const Model::SearchAnalysesRequest& request, const SearchAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchDashboardsAsyncHelper(const Model::SearchDashboardsRequest& request, const SearchDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchFoldersAsyncHelper(const Model::SearchFoldersRequest& request, const SearchFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchGroupsAsyncHelper(const Model::SearchGroupsRequest& request, const SearchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountCustomizationAsyncHelper(const Model::UpdateAccountCustomizationRequest& request, const UpdateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountSettingsAsyncHelper(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAnalysisAsyncHelper(const Model::UpdateAnalysisRequest& request, const UpdateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAnalysisPermissionsAsyncHelper(const Model::UpdateAnalysisPermissionsRequest& request, const UpdateAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDashboardAsyncHelper(const Model::UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDashboardPermissionsAsyncHelper(const Model::UpdateDashboardPermissionsRequest& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDashboardPublishedVersionAsyncHelper(const Model::UpdateDashboardPublishedVersionRequest& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSetAsyncHelper(const Model::UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSetPermissionsAsyncHelper(const Model::UpdateDataSetPermissionsRequest& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSourceAsyncHelper(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSourcePermissionsAsyncHelper(const Model::UpdateDataSourcePermissionsRequest& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFolderAsyncHelper(const Model::UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFolderPermissionsAsyncHelper(const Model::UpdateFolderPermissionsRequest& request, const UpdateFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIAMPolicyAssignmentAsyncHelper(const Model::UpdateIAMPolicyAssignmentRequest& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIpRestrictionAsyncHelper(const Model::UpdateIpRestrictionRequest& request, const UpdateIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePublicSharingSettingsAsyncHelper(const Model::UpdatePublicSharingSettingsRequest& request, const UpdatePublicSharingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTemplateAsyncHelper(const Model::UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTemplateAliasAsyncHelper(const Model::UpdateTemplateAliasRequest& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTemplatePermissionsAsyncHelper(const Model::UpdateTemplatePermissionsRequest& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThemeAsyncHelper(const Model::UpdateThemeRequest& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThemeAliasAsyncHelper(const Model::UpdateThemeAliasRequest& request, const UpdateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThemePermissionsAsyncHelper(const Model::UpdateThemePermissionsRequest& request, const UpdateThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace QuickSight
} // namespace Aws
