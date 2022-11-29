/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/quicksight/QuickSightErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in QuickSightClient header */
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
#include <aws/quicksight/model/DeleteAccountSubscriptionResult.h>
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
#include <aws/quicksight/model/DescribeAnalysisDefinitionResult.h>
#include <aws/quicksight/model/DescribeAnalysisPermissionsResult.h>
#include <aws/quicksight/model/DescribeDashboardResult.h>
#include <aws/quicksight/model/DescribeDashboardDefinitionResult.h>
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
#include <aws/quicksight/model/DescribeTemplateDefinitionResult.h>
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
#include <aws/quicksight/model/SearchDataSetsResult.h>
#include <aws/quicksight/model/SearchDataSourcesResult.h>
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
/* End of service model headers required in QuickSightClient header */

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
    using QuickSightClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using QuickSightEndpointProviderBase = Aws::QuickSight::Endpoint::QuickSightEndpointProviderBase;
    using QuickSightEndpointProvider = Aws::QuickSight::Endpoint::QuickSightEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QuickSightClient header */
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
      class DeleteAccountSubscriptionRequest;
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
      class DescribeAnalysisDefinitionRequest;
      class DescribeAnalysisPermissionsRequest;
      class DescribeDashboardRequest;
      class DescribeDashboardDefinitionRequest;
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
      class DescribeTemplateDefinitionRequest;
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
      class SearchDataSetsRequest;
      class SearchDataSourcesRequest;
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
      /* End of service model forward declarations required in QuickSightClient header */

      /* Service model Outcome class definitions */
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
      typedef Aws::Utils::Outcome<DeleteAccountSubscriptionResult, QuickSightError> DeleteAccountSubscriptionOutcome;
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
      typedef Aws::Utils::Outcome<DescribeAnalysisDefinitionResult, QuickSightError> DescribeAnalysisDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeAnalysisPermissionsResult, QuickSightError> DescribeAnalysisPermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDashboardResult, QuickSightError> DescribeDashboardOutcome;
      typedef Aws::Utils::Outcome<DescribeDashboardDefinitionResult, QuickSightError> DescribeDashboardDefinitionOutcome;
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
      typedef Aws::Utils::Outcome<DescribeTemplateDefinitionResult, QuickSightError> DescribeTemplateDefinitionOutcome;
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
      typedef Aws::Utils::Outcome<SearchDataSetsResult, QuickSightError> SearchDataSetsOutcome;
      typedef Aws::Utils::Outcome<SearchDataSourcesResult, QuickSightError> SearchDataSourcesOutcome;
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<DeleteAccountSubscriptionOutcome> DeleteAccountSubscriptionOutcomeCallable;
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
      typedef std::future<DescribeAnalysisDefinitionOutcome> DescribeAnalysisDefinitionOutcomeCallable;
      typedef std::future<DescribeAnalysisPermissionsOutcome> DescribeAnalysisPermissionsOutcomeCallable;
      typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
      typedef std::future<DescribeDashboardDefinitionOutcome> DescribeDashboardDefinitionOutcomeCallable;
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
      typedef std::future<DescribeTemplateDefinitionOutcome> DescribeTemplateDefinitionOutcomeCallable;
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
      typedef std::future<SearchDataSetsOutcome> SearchDataSetsOutcomeCallable;
      typedef std::future<SearchDataSourcesOutcome> SearchDataSourcesOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QuickSightClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const QuickSightClient*, const Model::DeleteAccountSubscriptionRequest&, const Model::DeleteAccountSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountSubscriptionResponseReceivedHandler;
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
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAnalysisDefinitionRequest&, const Model::DescribeAnalysisDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisDefinitionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeAnalysisPermissionsRequest&, const Model::DescribeAnalysisPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnalysisPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardRequest&, const Model::DescribeDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardDefinitionRequest&, const Model::DescribeDashboardDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardDefinitionResponseReceivedHandler;
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
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateDefinitionRequest&, const Model::DescribeTemplateDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateDefinitionResponseReceivedHandler;
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
    typedef std::function<void(const QuickSightClient*, const Model::SearchDataSetsRequest&, const Model::SearchDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDataSetsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::SearchDataSourcesRequest&, const Model::SearchDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDataSourcesResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace QuickSight
} // namespace Aws
