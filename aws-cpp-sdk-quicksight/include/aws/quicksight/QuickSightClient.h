/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/quicksight/model/CreateDashboardResult.h>
#include <aws/quicksight/model/CreateDataSetResult.h>
#include <aws/quicksight/model/CreateDataSourceResult.h>
#include <aws/quicksight/model/CreateGroupResult.h>
#include <aws/quicksight/model/CreateGroupMembershipResult.h>
#include <aws/quicksight/model/CreateIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/CreateIngestionResult.h>
#include <aws/quicksight/model/CreateTemplateResult.h>
#include <aws/quicksight/model/CreateTemplateAliasResult.h>
#include <aws/quicksight/model/DeleteDashboardResult.h>
#include <aws/quicksight/model/DeleteDataSetResult.h>
#include <aws/quicksight/model/DeleteDataSourceResult.h>
#include <aws/quicksight/model/DeleteGroupResult.h>
#include <aws/quicksight/model/DeleteGroupMembershipResult.h>
#include <aws/quicksight/model/DeleteIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/DeleteTemplateResult.h>
#include <aws/quicksight/model/DeleteTemplateAliasResult.h>
#include <aws/quicksight/model/DeleteUserResult.h>
#include <aws/quicksight/model/DeleteUserByPrincipalIdResult.h>
#include <aws/quicksight/model/DescribeDashboardResult.h>
#include <aws/quicksight/model/DescribeDashboardPermissionsResult.h>
#include <aws/quicksight/model/DescribeDataSetResult.h>
#include <aws/quicksight/model/DescribeDataSetPermissionsResult.h>
#include <aws/quicksight/model/DescribeDataSourceResult.h>
#include <aws/quicksight/model/DescribeDataSourcePermissionsResult.h>
#include <aws/quicksight/model/DescribeGroupResult.h>
#include <aws/quicksight/model/DescribeIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/DescribeIngestionResult.h>
#include <aws/quicksight/model/DescribeTemplateResult.h>
#include <aws/quicksight/model/DescribeTemplateAliasResult.h>
#include <aws/quicksight/model/DescribeTemplatePermissionsResult.h>
#include <aws/quicksight/model/DescribeUserResult.h>
#include <aws/quicksight/model/GetDashboardEmbedUrlResult.h>
#include <aws/quicksight/model/ListDashboardVersionsResult.h>
#include <aws/quicksight/model/ListDashboardsResult.h>
#include <aws/quicksight/model/ListDataSetsResult.h>
#include <aws/quicksight/model/ListDataSourcesResult.h>
#include <aws/quicksight/model/ListGroupMembershipsResult.h>
#include <aws/quicksight/model/ListGroupsResult.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsResult.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserResult.h>
#include <aws/quicksight/model/ListIngestionsResult.h>
#include <aws/quicksight/model/ListTagsForResourceResult.h>
#include <aws/quicksight/model/ListTemplateAliasesResult.h>
#include <aws/quicksight/model/ListTemplateVersionsResult.h>
#include <aws/quicksight/model/ListTemplatesResult.h>
#include <aws/quicksight/model/ListUserGroupsResult.h>
#include <aws/quicksight/model/ListUsersResult.h>
#include <aws/quicksight/model/RegisterUserResult.h>
#include <aws/quicksight/model/TagResourceResult.h>
#include <aws/quicksight/model/UntagResourceResult.h>
#include <aws/quicksight/model/UpdateDashboardResult.h>
#include <aws/quicksight/model/UpdateDashboardPermissionsResult.h>
#include <aws/quicksight/model/UpdateDashboardPublishedVersionResult.h>
#include <aws/quicksight/model/UpdateDataSetResult.h>
#include <aws/quicksight/model/UpdateDataSetPermissionsResult.h>
#include <aws/quicksight/model/UpdateDataSourceResult.h>
#include <aws/quicksight/model/UpdateDataSourcePermissionsResult.h>
#include <aws/quicksight/model/UpdateGroupResult.h>
#include <aws/quicksight/model/UpdateIAMPolicyAssignmentResult.h>
#include <aws/quicksight/model/UpdateTemplateResult.h>
#include <aws/quicksight/model/UpdateTemplateAliasResult.h>
#include <aws/quicksight/model/UpdateTemplatePermissionsResult.h>
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
        class CreateDashboardRequest;
        class CreateDataSetRequest;
        class CreateDataSourceRequest;
        class CreateGroupRequest;
        class CreateGroupMembershipRequest;
        class CreateIAMPolicyAssignmentRequest;
        class CreateIngestionRequest;
        class CreateTemplateRequest;
        class CreateTemplateAliasRequest;
        class DeleteDashboardRequest;
        class DeleteDataSetRequest;
        class DeleteDataSourceRequest;
        class DeleteGroupRequest;
        class DeleteGroupMembershipRequest;
        class DeleteIAMPolicyAssignmentRequest;
        class DeleteTemplateRequest;
        class DeleteTemplateAliasRequest;
        class DeleteUserRequest;
        class DeleteUserByPrincipalIdRequest;
        class DescribeDashboardRequest;
        class DescribeDashboardPermissionsRequest;
        class DescribeDataSetRequest;
        class DescribeDataSetPermissionsRequest;
        class DescribeDataSourceRequest;
        class DescribeDataSourcePermissionsRequest;
        class DescribeGroupRequest;
        class DescribeIAMPolicyAssignmentRequest;
        class DescribeIngestionRequest;
        class DescribeTemplateRequest;
        class DescribeTemplateAliasRequest;
        class DescribeTemplatePermissionsRequest;
        class DescribeUserRequest;
        class GetDashboardEmbedUrlRequest;
        class ListDashboardVersionsRequest;
        class ListDashboardsRequest;
        class ListDataSetsRequest;
        class ListDataSourcesRequest;
        class ListGroupMembershipsRequest;
        class ListGroupsRequest;
        class ListIAMPolicyAssignmentsRequest;
        class ListIAMPolicyAssignmentsForUserRequest;
        class ListIngestionsRequest;
        class ListTagsForResourceRequest;
        class ListTemplateAliasesRequest;
        class ListTemplateVersionsRequest;
        class ListTemplatesRequest;
        class ListUserGroupsRequest;
        class ListUsersRequest;
        class RegisterUserRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDashboardRequest;
        class UpdateDashboardPermissionsRequest;
        class UpdateDashboardPublishedVersionRequest;
        class UpdateDataSetRequest;
        class UpdateDataSetPermissionsRequest;
        class UpdateDataSourceRequest;
        class UpdateDataSourcePermissionsRequest;
        class UpdateGroupRequest;
        class UpdateIAMPolicyAssignmentRequest;
        class UpdateTemplateRequest;
        class UpdateTemplateAliasRequest;
        class UpdateTemplatePermissionsRequest;
        class UpdateUserRequest;

        typedef Aws::Utils::Outcome<CancelIngestionResult, Aws::Client::AWSError<QuickSightErrors>> CancelIngestionOutcome;
        typedef Aws::Utils::Outcome<CreateDashboardResult, Aws::Client::AWSError<QuickSightErrors>> CreateDashboardOutcome;
        typedef Aws::Utils::Outcome<CreateDataSetResult, Aws::Client::AWSError<QuickSightErrors>> CreateDataSetOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceResult, Aws::Client::AWSError<QuickSightErrors>> CreateDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<QuickSightErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateGroupMembershipResult, Aws::Client::AWSError<QuickSightErrors>> CreateGroupMembershipOutcome;
        typedef Aws::Utils::Outcome<CreateIAMPolicyAssignmentResult, Aws::Client::AWSError<QuickSightErrors>> CreateIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<CreateIngestionResult, Aws::Client::AWSError<QuickSightErrors>> CreateIngestionOutcome;
        typedef Aws::Utils::Outcome<CreateTemplateResult, Aws::Client::AWSError<QuickSightErrors>> CreateTemplateOutcome;
        typedef Aws::Utils::Outcome<CreateTemplateAliasResult, Aws::Client::AWSError<QuickSightErrors>> CreateTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteDashboardResult, Aws::Client::AWSError<QuickSightErrors>> DeleteDashboardOutcome;
        typedef Aws::Utils::Outcome<DeleteDataSetResult, Aws::Client::AWSError<QuickSightErrors>> DeleteDataSetOutcome;
        typedef Aws::Utils::Outcome<DeleteDataSourceResult, Aws::Client::AWSError<QuickSightErrors>> DeleteDataSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, Aws::Client::AWSError<QuickSightErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupMembershipResult, Aws::Client::AWSError<QuickSightErrors>> DeleteGroupMembershipOutcome;
        typedef Aws::Utils::Outcome<DeleteIAMPolicyAssignmentResult, Aws::Client::AWSError<QuickSightErrors>> DeleteIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<DeleteTemplateResult, Aws::Client::AWSError<QuickSightErrors>> DeleteTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteTemplateAliasResult, Aws::Client::AWSError<QuickSightErrors>> DeleteTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, Aws::Client::AWSError<QuickSightErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DeleteUserByPrincipalIdResult, Aws::Client::AWSError<QuickSightErrors>> DeleteUserByPrincipalIdOutcome;
        typedef Aws::Utils::Outcome<DescribeDashboardResult, Aws::Client::AWSError<QuickSightErrors>> DescribeDashboardOutcome;
        typedef Aws::Utils::Outcome<DescribeDashboardPermissionsResult, Aws::Client::AWSError<QuickSightErrors>> DescribeDashboardPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSetResult, Aws::Client::AWSError<QuickSightErrors>> DescribeDataSetOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSetPermissionsResult, Aws::Client::AWSError<QuickSightErrors>> DescribeDataSetPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSourceResult, Aws::Client::AWSError<QuickSightErrors>> DescribeDataSourceOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSourcePermissionsResult, Aws::Client::AWSError<QuickSightErrors>> DescribeDataSourcePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeGroupResult, Aws::Client::AWSError<QuickSightErrors>> DescribeGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeIAMPolicyAssignmentResult, Aws::Client::AWSError<QuickSightErrors>> DescribeIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<DescribeIngestionResult, Aws::Client::AWSError<QuickSightErrors>> DescribeIngestionOutcome;
        typedef Aws::Utils::Outcome<DescribeTemplateResult, Aws::Client::AWSError<QuickSightErrors>> DescribeTemplateOutcome;
        typedef Aws::Utils::Outcome<DescribeTemplateAliasResult, Aws::Client::AWSError<QuickSightErrors>> DescribeTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<DescribeTemplatePermissionsResult, Aws::Client::AWSError<QuickSightErrors>> DescribeTemplatePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeUserResult, Aws::Client::AWSError<QuickSightErrors>> DescribeUserOutcome;
        typedef Aws::Utils::Outcome<GetDashboardEmbedUrlResult, Aws::Client::AWSError<QuickSightErrors>> GetDashboardEmbedUrlOutcome;
        typedef Aws::Utils::Outcome<ListDashboardVersionsResult, Aws::Client::AWSError<QuickSightErrors>> ListDashboardVersionsOutcome;
        typedef Aws::Utils::Outcome<ListDashboardsResult, Aws::Client::AWSError<QuickSightErrors>> ListDashboardsOutcome;
        typedef Aws::Utils::Outcome<ListDataSetsResult, Aws::Client::AWSError<QuickSightErrors>> ListDataSetsOutcome;
        typedef Aws::Utils::Outcome<ListDataSourcesResult, Aws::Client::AWSError<QuickSightErrors>> ListDataSourcesOutcome;
        typedef Aws::Utils::Outcome<ListGroupMembershipsResult, Aws::Client::AWSError<QuickSightErrors>> ListGroupMembershipsOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, Aws::Client::AWSError<QuickSightErrors>> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<ListIAMPolicyAssignmentsResult, Aws::Client::AWSError<QuickSightErrors>> ListIAMPolicyAssignmentsOutcome;
        typedef Aws::Utils::Outcome<ListIAMPolicyAssignmentsForUserResult, Aws::Client::AWSError<QuickSightErrors>> ListIAMPolicyAssignmentsForUserOutcome;
        typedef Aws::Utils::Outcome<ListIngestionsResult, Aws::Client::AWSError<QuickSightErrors>> ListIngestionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<QuickSightErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTemplateAliasesResult, Aws::Client::AWSError<QuickSightErrors>> ListTemplateAliasesOutcome;
        typedef Aws::Utils::Outcome<ListTemplateVersionsResult, Aws::Client::AWSError<QuickSightErrors>> ListTemplateVersionsOutcome;
        typedef Aws::Utils::Outcome<ListTemplatesResult, Aws::Client::AWSError<QuickSightErrors>> ListTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListUserGroupsResult, Aws::Client::AWSError<QuickSightErrors>> ListUserGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<QuickSightErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<RegisterUserResult, Aws::Client::AWSError<QuickSightErrors>> RegisterUserOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<QuickSightErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<QuickSightErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDashboardResult, Aws::Client::AWSError<QuickSightErrors>> UpdateDashboardOutcome;
        typedef Aws::Utils::Outcome<UpdateDashboardPermissionsResult, Aws::Client::AWSError<QuickSightErrors>> UpdateDashboardPermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateDashboardPublishedVersionResult, Aws::Client::AWSError<QuickSightErrors>> UpdateDashboardPublishedVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSetResult, Aws::Client::AWSError<QuickSightErrors>> UpdateDataSetOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSetPermissionsResult, Aws::Client::AWSError<QuickSightErrors>> UpdateDataSetPermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSourceResult, Aws::Client::AWSError<QuickSightErrors>> UpdateDataSourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSourcePermissionsResult, Aws::Client::AWSError<QuickSightErrors>> UpdateDataSourcePermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, Aws::Client::AWSError<QuickSightErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateIAMPolicyAssignmentResult, Aws::Client::AWSError<QuickSightErrors>> UpdateIAMPolicyAssignmentOutcome;
        typedef Aws::Utils::Outcome<UpdateTemplateResult, Aws::Client::AWSError<QuickSightErrors>> UpdateTemplateOutcome;
        typedef Aws::Utils::Outcome<UpdateTemplateAliasResult, Aws::Client::AWSError<QuickSightErrors>> UpdateTemplateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateTemplatePermissionsResult, Aws::Client::AWSError<QuickSightErrors>> UpdateTemplatePermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, Aws::Client::AWSError<QuickSightErrors>> UpdateUserOutcome;

        typedef std::future<CancelIngestionOutcome> CancelIngestionOutcomeCallable;
        typedef std::future<CreateDashboardOutcome> CreateDashboardOutcomeCallable;
        typedef std::future<CreateDataSetOutcome> CreateDataSetOutcomeCallable;
        typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateGroupMembershipOutcome> CreateGroupMembershipOutcomeCallable;
        typedef std::future<CreateIAMPolicyAssignmentOutcome> CreateIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<CreateIngestionOutcome> CreateIngestionOutcomeCallable;
        typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
        typedef std::future<CreateTemplateAliasOutcome> CreateTemplateAliasOutcomeCallable;
        typedef std::future<DeleteDashboardOutcome> DeleteDashboardOutcomeCallable;
        typedef std::future<DeleteDataSetOutcome> DeleteDataSetOutcomeCallable;
        typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteGroupMembershipOutcome> DeleteGroupMembershipOutcomeCallable;
        typedef std::future<DeleteIAMPolicyAssignmentOutcome> DeleteIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
        typedef std::future<DeleteTemplateAliasOutcome> DeleteTemplateAliasOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserByPrincipalIdOutcome> DeleteUserByPrincipalIdOutcomeCallable;
        typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
        typedef std::future<DescribeDashboardPermissionsOutcome> DescribeDashboardPermissionsOutcomeCallable;
        typedef std::future<DescribeDataSetOutcome> DescribeDataSetOutcomeCallable;
        typedef std::future<DescribeDataSetPermissionsOutcome> DescribeDataSetPermissionsOutcomeCallable;
        typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
        typedef std::future<DescribeDataSourcePermissionsOutcome> DescribeDataSourcePermissionsOutcomeCallable;
        typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
        typedef std::future<DescribeIAMPolicyAssignmentOutcome> DescribeIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<DescribeIngestionOutcome> DescribeIngestionOutcomeCallable;
        typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
        typedef std::future<DescribeTemplateAliasOutcome> DescribeTemplateAliasOutcomeCallable;
        typedef std::future<DescribeTemplatePermissionsOutcome> DescribeTemplatePermissionsOutcomeCallable;
        typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
        typedef std::future<GetDashboardEmbedUrlOutcome> GetDashboardEmbedUrlOutcomeCallable;
        typedef std::future<ListDashboardVersionsOutcome> ListDashboardVersionsOutcomeCallable;
        typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
        typedef std::future<ListDataSetsOutcome> ListDataSetsOutcomeCallable;
        typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
        typedef std::future<ListGroupMembershipsOutcome> ListGroupMembershipsOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<ListIAMPolicyAssignmentsOutcome> ListIAMPolicyAssignmentsOutcomeCallable;
        typedef std::future<ListIAMPolicyAssignmentsForUserOutcome> ListIAMPolicyAssignmentsForUserOutcomeCallable;
        typedef std::future<ListIngestionsOutcome> ListIngestionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTemplateAliasesOutcome> ListTemplateAliasesOutcomeCallable;
        typedef std::future<ListTemplateVersionsOutcome> ListTemplateVersionsOutcomeCallable;
        typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
        typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDashboardOutcome> UpdateDashboardOutcomeCallable;
        typedef std::future<UpdateDashboardPermissionsOutcome> UpdateDashboardPermissionsOutcomeCallable;
        typedef std::future<UpdateDashboardPublishedVersionOutcome> UpdateDashboardPublishedVersionOutcomeCallable;
        typedef std::future<UpdateDataSetOutcome> UpdateDataSetOutcomeCallable;
        typedef std::future<UpdateDataSetPermissionsOutcome> UpdateDataSetPermissionsOutcomeCallable;
        typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
        typedef std::future<UpdateDataSourcePermissionsOutcome> UpdateDataSourcePermissionsOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateIAMPolicyAssignmentOutcome> UpdateIAMPolicyAssignmentOutcomeCallable;
        typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
        typedef std::future<UpdateTemplateAliasOutcome> UpdateTemplateAliasOutcomeCallable;
        typedef std::future<UpdateTemplatePermissionsOutcome> UpdateTemplatePermissionsOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
} // namespace Model

  class QuickSightClient;

    typedef std::function<void(const QuickSightClient*, const Model::CancelIngestionRequest&, const Model::CancelIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDashboardRequest&, const Model::CreateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDataSetRequest&, const Model::CreateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupMembershipRequest&, const Model::CreateGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateIAMPolicyAssignmentRequest&, const Model::CreateIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateIngestionRequest&, const Model::CreateIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTemplateRequest&, const Model::CreateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateTemplateAliasRequest&, const Model::CreateTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDashboardRequest&, const Model::DeleteDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDataSetRequest&, const Model::DeleteDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupMembershipRequest&, const Model::DeleteGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteIAMPolicyAssignmentRequest&, const Model::DeleteIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTemplateRequest&, const Model::DeleteTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteTemplateAliasRequest&, const Model::DeleteTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserByPrincipalIdRequest&, const Model::DeleteUserByPrincipalIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserByPrincipalIdResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardRequest&, const Model::DescribeDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDashboardPermissionsRequest&, const Model::DescribeDashboardPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDashboardPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSetRequest&, const Model::DescribeDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSetPermissionsRequest&, const Model::DescribeDataSetPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSetPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSourceRequest&, const Model::DescribeDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeDataSourcePermissionsRequest&, const Model::DescribeDataSourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIAMPolicyAssignmentRequest&, const Model::DescribeIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeIngestionRequest&, const Model::DescribeIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIngestionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateRequest&, const Model::DescribeTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplateAliasRequest&, const Model::DescribeTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeTemplatePermissionsRequest&, const Model::DescribeTemplatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTemplatePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GetDashboardEmbedUrlRequest&, const Model::GetDashboardEmbedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardEmbedUrlResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDashboardVersionsRequest&, const Model::ListDashboardVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDataSetsRequest&, const Model::ListDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupMembershipsRequest&, const Model::ListGroupMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembershipsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIAMPolicyAssignmentsRequest&, const Model::ListIAMPolicyAssignmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIAMPolicyAssignmentsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIAMPolicyAssignmentsForUserRequest&, const Model::ListIAMPolicyAssignmentsForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIAMPolicyAssignmentsForUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListIngestionsRequest&, const Model::ListIngestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngestionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplateAliasesRequest&, const Model::ListTemplateAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateAliasesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplateVersionsRequest&, const Model::ListTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUserGroupsRequest&, const Model::ListUserGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::RegisterUserRequest&, const Model::RegisterUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardRequest&, const Model::UpdateDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardPermissionsRequest&, const Model::UpdateDashboardPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDashboardPublishedVersionRequest&, const Model::UpdateDashboardPublishedVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDashboardPublishedVersionResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSetRequest&, const Model::UpdateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSetResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSetPermissionsRequest&, const Model::UpdateDataSetPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSetPermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateDataSourcePermissionsRequest&, const Model::UpdateDataSourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateIAMPolicyAssignmentRequest&, const Model::UpdateIAMPolicyAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIAMPolicyAssignmentResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplateRequest&, const Model::UpdateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplateAliasRequest&, const Model::UpdateTemplateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateAliasResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateTemplatePermissionsRequest&, const Model::UpdateTemplatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplatePermissionsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;

  /**
   * <fullname>Amazon QuickSight API Reference</fullname> <p>Amazon QuickSight is a
   * fully managed, serverless, cloud business intelligence service that makes it
   * easy to extend data and insights to every user in your organization. This API
   * interface reference contains documentation for a programming interface that you
   * can use to manage Amazon QuickSight. </p>
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
        QuickSightClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QuickSightClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~QuickSightClient();

        inline virtual const char* GetServiceClientName() const override { return "QuickSight"; }


        /**
         * <p>Cancels an on-going ingestion of data into SPICE.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CancelIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelIngestionOutcome CancelIngestion(const Model::CancelIngestionRequest& request) const;

        /**
         * <p>Cancels an on-going ingestion of data into SPICE.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CancelIngestion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelIngestionOutcomeCallable CancelIngestionCallable(const Model::CancelIngestionRequest& request) const;

        /**
         * <p>Cancels an on-going ingestion of data into SPICE.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CancelIngestion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelIngestionAsync(const Model::CancelIngestionRequest& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dashboard from a template. To first create a template, see the
         * CreateTemplate API.</p> <p>A dashboard is an entity in QuickSight which
         * identifies Quicksight reports, created from analyses. QuickSight dashboards are
         * sharable. With the right permissions, you can create scheduled email reports
         * from them. The <code>CreateDashboard</code>, <code>DescribeDashboard</code> and
         * <code>ListDashboardsByUser</code> APIs act on the dashboard entity. If you have
         * the correct permissions, you can create a dashboard from a template that exists
         * in a different AWS account.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-dashboard --cli-input-json file://create-dashboard.json</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;

        /**
         * <p>Creates a dashboard from a template. To first create a template, see the
         * CreateTemplate API.</p> <p>A dashboard is an entity in QuickSight which
         * identifies Quicksight reports, created from analyses. QuickSight dashboards are
         * sharable. With the right permissions, you can create scheduled email reports
         * from them. The <code>CreateDashboard</code>, <code>DescribeDashboard</code> and
         * <code>ListDashboardsByUser</code> APIs act on the dashboard entity. If you have
         * the correct permissions, you can create a dashboard from a template that exists
         * in a different AWS account.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-dashboard --cli-input-json file://create-dashboard.json</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDashboardOutcomeCallable CreateDashboardCallable(const Model::CreateDashboardRequest& request) const;

        /**
         * <p>Creates a dashboard from a template. To first create a template, see the
         * CreateTemplate API.</p> <p>A dashboard is an entity in QuickSight which
         * identifies Quicksight reports, created from analyses. QuickSight dashboards are
         * sharable. With the right permissions, you can create scheduled email reports
         * from them. The <code>CreateDashboard</code>, <code>DescribeDashboard</code> and
         * <code>ListDashboardsByUser</code> APIs act on the dashboard entity. If you have
         * the correct permissions, you can create a dashboard from a template that exists
         * in a different AWS account.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-dashboard --cli-input-json file://create-dashboard.json</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDashboardAsync(const Model::CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-data-set \</code> </p> <p> <code>--aws-account-id=111122223333 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--name='My dataset' \</code> </p> <p> <code>--import-mode=SPICE \</code>
         * </p> <p> <code>--physical-table-map='{</code> </p> <p> <code>
         * "physical-table-id": {</code> </p> <p> <code> "RelationalTable": {</code> </p>
         * <p> <code> "DataSourceArn":
         * "arn:aws:quicksight:us-west-2:111111111111:datasource/data-source-id",</code>
         * </p> <p> <code> "Name": "table1",</code> </p> <p> <code> "InputColumns":
         * [</code> </p> <p> <code> {</code> </p> <p> <code> "Name": "column1",</code> </p>
         * <p> <code> "Type": "STRING"</code> </p> <p> <code> }</code> </p> <p> <code>
         * ]</code> </p> <p> <code> }</code> </p> <p> <code> }'</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetOutcome CreateDataSet(const Model::CreateDataSetRequest& request) const;

        /**
         * <p>Creates a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-data-set \</code> </p> <p> <code>--aws-account-id=111122223333 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--name='My dataset' \</code> </p> <p> <code>--import-mode=SPICE \</code>
         * </p> <p> <code>--physical-table-map='{</code> </p> <p> <code>
         * "physical-table-id": {</code> </p> <p> <code> "RelationalTable": {</code> </p>
         * <p> <code> "DataSourceArn":
         * "arn:aws:quicksight:us-west-2:111111111111:datasource/data-source-id",</code>
         * </p> <p> <code> "Name": "table1",</code> </p> <p> <code> "InputColumns":
         * [</code> </p> <p> <code> {</code> </p> <p> <code> "Name": "column1",</code> </p>
         * <p> <code> "Type": "STRING"</code> </p> <p> <code> }</code> </p> <p> <code>
         * ]</code> </p> <p> <code> }</code> </p> <p> <code> }'</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSetOutcomeCallable CreateDataSetCallable(const Model::CreateDataSetRequest& request) const;

        /**
         * <p>Creates a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-data-set \</code> </p> <p> <code>--aws-account-id=111122223333 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--name='My dataset' \</code> </p> <p> <code>--import-mode=SPICE \</code>
         * </p> <p> <code>--physical-table-map='{</code> </p> <p> <code>
         * "physical-table-id": {</code> </p> <p> <code> "RelationalTable": {</code> </p>
         * <p> <code> "DataSourceArn":
         * "arn:aws:quicksight:us-west-2:111111111111:datasource/data-source-id",</code>
         * </p> <p> <code> "Name": "table1",</code> </p> <p> <code> "InputColumns":
         * [</code> </p> <p> <code> {</code> </p> <p> <code> "Name": "column1",</code> </p>
         * <p> <code> "Type": "STRING"</code> </p> <p> <code> }</code> </p> <p> <code>
         * ]</code> </p> <p> <code> }</code> </p> <p> <code> }'</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSetAsync(const Model::CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight create-data-source \</code>
         * </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p> <code>--type=POSTGRESQL \</code> </p> <p>
         * <code>--data-source-parameters='{ "PostgreSqlParameters": {</code> </p> <p>
         * <code> "Host": "my-db-host.example.com",</code> </p> <p> <code> "Port":
         * 1234,</code> </p> <p> <code> "Database": "my-db" } }' \</code> </p> <p>
         * <code>--credentials='{ "CredentialPair": {</code> </p> <p> <code> "Username":
         * "username",</code> </p> <p> <code> "Password": "password" } }'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * <p>Creates a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight create-data-source \</code>
         * </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p> <code>--type=POSTGRESQL \</code> </p> <p>
         * <code>--data-source-parameters='{ "PostgreSqlParameters": {</code> </p> <p>
         * <code> "Host": "my-db-host.example.com",</code> </p> <p> <code> "Port":
         * 1234,</code> </p> <p> <code> "Database": "my-db" } }' \</code> </p> <p>
         * <code>--credentials='{ "CredentialPair": {</code> </p> <p> <code> "Username":
         * "username",</code> </p> <p> <code> "Password": "password" } }'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request) const;

        /**
         * <p>Creates a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight create-data-source \</code>
         * </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p> <code>--type=POSTGRESQL \</code> </p> <p>
         * <code>--data-source-parameters='{ "PostgreSqlParameters": {</code> </p> <p>
         * <code> "Host": "my-db-host.example.com",</code> </p> <p> <code> "Port":
         * 1234,</code> </p> <p> <code> "Database": "my-db" } }' \</code> </p> <p>
         * <code>--credentials='{ "CredentialPair": {</code> </p> <p> <code> "Username":
         * "username",</code> </p> <p> <code> "Password": "password" } }'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon QuickSight group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p> <p> <b>CLI Sample:</b> </p>
         * <p> <code>aws quicksight create-group --aws-account-id=111122223333
         * --namespace=default --group-name="Sales-Management" --description="Sales
         * Management - Forecasting" </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates an Amazon QuickSight group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p> <p> <b>CLI Sample:</b> </p>
         * <p> <code>aws quicksight create-group --aws-account-id=111122223333
         * --namespace=default --group-name="Sales-Management" --description="Sales
         * Management - Forecasting" </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates an Amazon QuickSight group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p> <p> <b>CLI Sample:</b> </p>
         * <p> <code>aws quicksight create-group --aws-account-id=111122223333
         * --namespace=default --group-name="Sales-Management" --description="Sales
         * Management - Forecasting" </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an Amazon QuickSight user to an Amazon QuickSight group. </p> <p>The
         * permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The condition resource is the user name.</p> <p>The condition
         * key is <code>quicksight:UserName</code>.</p> <p>The response is the group member
         * object.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * create-group-membership --aws-account-id=111122223333 --namespace=default
         * --group-name=Sales --member-name=Pat </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupMembershipOutcome CreateGroupMembership(const Model::CreateGroupMembershipRequest& request) const;

        /**
         * <p>Adds an Amazon QuickSight user to an Amazon QuickSight group. </p> <p>The
         * permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The condition resource is the user name.</p> <p>The condition
         * key is <code>quicksight:UserName</code>.</p> <p>The response is the group member
         * object.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * create-group-membership --aws-account-id=111122223333 --namespace=default
         * --group-name=Sales --member-name=Pat </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroupMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupMembershipOutcomeCallable CreateGroupMembershipCallable(const Model::CreateGroupMembershipRequest& request) const;

        /**
         * <p>Adds an Amazon QuickSight user to an Amazon QuickSight group. </p> <p>The
         * permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The condition resource is the user name.</p> <p>The condition
         * key is <code>quicksight:UserName</code>.</p> <p>The response is the group member
         * object.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * create-group-membership --aws-account-id=111122223333 --namespace=default
         * --group-name=Sales --member-name=Pat </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroupMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupMembershipAsync(const Model::CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an assignment with one specified IAM policy ARN and will assigned to
         * specified groups or users of QuickSight. Users and groups need to be in the same
         * namespace. </p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-iam-policy-assignment --aws-account-id=111122223333
         * --assignment-name=helpAssignment
         * --policy-arn=arn:aws:iam::aws:policy/AdministratorAccess
         * --identities="user=user5,engineer123,group=QS-Admin" --namespace=default
         * --region=us-west-2</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIAMPolicyAssignmentOutcome CreateIAMPolicyAssignment(const Model::CreateIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Creates an assignment with one specified IAM policy ARN and will assigned to
         * specified groups or users of QuickSight. Users and groups need to be in the same
         * namespace. </p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-iam-policy-assignment --aws-account-id=111122223333
         * --assignment-name=helpAssignment
         * --policy-arn=arn:aws:iam::aws:policy/AdministratorAccess
         * --identities="user=user5,engineer123,group=QS-Admin" --namespace=default
         * --region=us-west-2</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIAMPolicyAssignmentOutcomeCallable CreateIAMPolicyAssignmentCallable(const Model::CreateIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Creates an assignment with one specified IAM policy ARN and will assigned to
         * specified groups or users of QuickSight. Users and groups need to be in the same
         * namespace. </p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * create-iam-policy-assignment --aws-account-id=111122223333
         * --assignment-name=helpAssignment
         * --policy-arn=arn:aws:iam::aws:policy/AdministratorAccess
         * --identities="user=user5,engineer123,group=QS-Admin" --namespace=default
         * --region=us-west-2</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIAMPolicyAssignmentAsync(const Model::CreateIAMPolicyAssignmentRequest& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and starts a new SPICE ingestion on a dataset</p> <p>Any ingestions
         * operating on tagged datasets inherit the same tags automatically for use in
         * access-control. For an example, see <a
         * href="https://aws.example.com/premiumsupport/knowledge-center/iam-ec2-resource-tags/">How
         * do I create an IAM policy to control access to Amazon EC2 resources using
         * tags?</a>. Tags will be visible on the tagged dataset, but not on the ingestion
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngestionOutcome CreateIngestion(const Model::CreateIngestionRequest& request) const;

        /**
         * <p>Creates and starts a new SPICE ingestion on a dataset</p> <p>Any ingestions
         * operating on tagged datasets inherit the same tags automatically for use in
         * access-control. For an example, see <a
         * href="https://aws.example.com/premiumsupport/knowledge-center/iam-ec2-resource-tags/">How
         * do I create an IAM policy to control access to Amazon EC2 resources using
         * tags?</a>. Tags will be visible on the tagged dataset, but not on the ingestion
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIngestion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIngestionOutcomeCallable CreateIngestionCallable(const Model::CreateIngestionRequest& request) const;

        /**
         * <p>Creates and starts a new SPICE ingestion on a dataset</p> <p>Any ingestions
         * operating on tagged datasets inherit the same tags automatically for use in
         * access-control. For an example, see <a
         * href="https://aws.example.com/premiumsupport/knowledge-center/iam-ec2-resource-tags/">How
         * do I create an IAM policy to control access to Amazon EC2 resources using
         * tags?</a>. Tags will be visible on the tagged dataset, but not on the ingestion
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIngestion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIngestionAsync(const Model::CreateIngestionRequest& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a template from an existing QuickSight analysis or template. The
         * resulting template can be used to create a dashboard.</p> <p>A template is an
         * entity in QuickSight which encapsulates the metadata required to create an
         * analysis that can be used to create dashboard. It adds a layer of abstraction by
         * use placeholders to replace the dataset associated with the analysis. You can
         * use templates to create dashboards by replacing dataset placeholders with
         * datasets which follow the same schema that was used to create the source
         * analysis and template.</p> <p>To create a template from an existing analysis,
         * use the analysis's ARN, <code>aws-account-id</code>, <code>template-id</code>,
         * <code>source-entity</code>, and <code>data-set-references</code>.</p> <p>CLI
         * syntax to create a template: </p> <p> <code>aws quicksight create-template
         * —cli-input-json file://create-template.json</code> </p> <p>CLI syntax to create
         * a template from another template in the same AWS account:</p> <p> <code>aws
         * quicksight create-template --aws-account-id 111122223333 --template-id
         * reports_test_template --data-set-references
         * DataSetPlaceholder=reports,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/0dfc789c-81f6-4f4f-b9ac-7db2453eefc8
         * DataSetPlaceholder=Elblogs,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/f60da323-af68-45db-9016-08e0d1d7ded5
         * --source-entity
         * SourceAnalysis='{Arn=arn:aws:quicksight:us-west-2:111122223333:analysis/7fb74527-c36d-4be8-8139-ac1be4c97365}'</code>
         * </p> <p>To create template from another account’s template, you need to grant
         * cross account resource permission for DescribeTemplate the account that contains
         * the template.</p> <p>You can use a file to pass JSON to the function if you
         * prefer. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * <p>Creates a template from an existing QuickSight analysis or template. The
         * resulting template can be used to create a dashboard.</p> <p>A template is an
         * entity in QuickSight which encapsulates the metadata required to create an
         * analysis that can be used to create dashboard. It adds a layer of abstraction by
         * use placeholders to replace the dataset associated with the analysis. You can
         * use templates to create dashboards by replacing dataset placeholders with
         * datasets which follow the same schema that was used to create the source
         * analysis and template.</p> <p>To create a template from an existing analysis,
         * use the analysis's ARN, <code>aws-account-id</code>, <code>template-id</code>,
         * <code>source-entity</code>, and <code>data-set-references</code>.</p> <p>CLI
         * syntax to create a template: </p> <p> <code>aws quicksight create-template
         * —cli-input-json file://create-template.json</code> </p> <p>CLI syntax to create
         * a template from another template in the same AWS account:</p> <p> <code>aws
         * quicksight create-template --aws-account-id 111122223333 --template-id
         * reports_test_template --data-set-references
         * DataSetPlaceholder=reports,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/0dfc789c-81f6-4f4f-b9ac-7db2453eefc8
         * DataSetPlaceholder=Elblogs,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/f60da323-af68-45db-9016-08e0d1d7ded5
         * --source-entity
         * SourceAnalysis='{Arn=arn:aws:quicksight:us-west-2:111122223333:analysis/7fb74527-c36d-4be8-8139-ac1be4c97365}'</code>
         * </p> <p>To create template from another account’s template, you need to grant
         * cross account resource permission for DescribeTemplate the account that contains
         * the template.</p> <p>You can use a file to pass JSON to the function if you
         * prefer. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const Model::CreateTemplateRequest& request) const;

        /**
         * <p>Creates a template from an existing QuickSight analysis or template. The
         * resulting template can be used to create a dashboard.</p> <p>A template is an
         * entity in QuickSight which encapsulates the metadata required to create an
         * analysis that can be used to create dashboard. It adds a layer of abstraction by
         * use placeholders to replace the dataset associated with the analysis. You can
         * use templates to create dashboards by replacing dataset placeholders with
         * datasets which follow the same schema that was used to create the source
         * analysis and template.</p> <p>To create a template from an existing analysis,
         * use the analysis's ARN, <code>aws-account-id</code>, <code>template-id</code>,
         * <code>source-entity</code>, and <code>data-set-references</code>.</p> <p>CLI
         * syntax to create a template: </p> <p> <code>aws quicksight create-template
         * —cli-input-json file://create-template.json</code> </p> <p>CLI syntax to create
         * a template from another template in the same AWS account:</p> <p> <code>aws
         * quicksight create-template --aws-account-id 111122223333 --template-id
         * reports_test_template --data-set-references
         * DataSetPlaceholder=reports,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/0dfc789c-81f6-4f4f-b9ac-7db2453eefc8
         * DataSetPlaceholder=Elblogs,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/f60da323-af68-45db-9016-08e0d1d7ded5
         * --source-entity
         * SourceAnalysis='{Arn=arn:aws:quicksight:us-west-2:111122223333:analysis/7fb74527-c36d-4be8-8139-ac1be4c97365}'</code>
         * </p> <p>To create template from another account’s template, you need to grant
         * cross account resource permission for DescribeTemplate the account that contains
         * the template.</p> <p>You can use a file to pass JSON to the function if you
         * prefer. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a template alias for a template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight create-template-alias --aws-account-id 111122223333 --template-id
         * 'reports_test_template' --alias-name PROD —version-number 1</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateAliasOutcome CreateTemplateAlias(const Model::CreateTemplateAliasRequest& request) const;

        /**
         * <p>Creates a template alias for a template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight create-template-alias --aws-account-id 111122223333 --template-id
         * 'reports_test_template' --alias-name PROD —version-number 1</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTemplateAliasOutcomeCallable CreateTemplateAliasCallable(const Model::CreateTemplateAliasRequest& request) const;

        /**
         * <p>Creates a template alias for a template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight create-template-alias --aws-account-id 111122223333 --template-id
         * 'reports_test_template' --alias-name PROD —version-number 1</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTemplateAliasAsync(const Model::CreateTemplateAliasRequest& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dashboard.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * delete-dashboard --aws-account-id 111122223333 —dashboard-id 123123123</code>
         * </p> <p> <code>aws quicksight delete-dashboard --aws-account-id 111122223333
         * —dashboard-id 123123123 —version-number 3</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;

        /**
         * <p>Deletes a dashboard.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * delete-dashboard --aws-account-id 111122223333 —dashboard-id 123123123</code>
         * </p> <p> <code>aws quicksight delete-dashboard --aws-account-id 111122223333
         * —dashboard-id 123123123 —version-number 3</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDashboardOutcomeCallable DeleteDashboardCallable(const Model::DeleteDashboardRequest& request) const;

        /**
         * <p>Deletes a dashboard.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * delete-dashboard --aws-account-id 111122223333 —dashboard-id 123123123</code>
         * </p> <p> <code>aws quicksight delete-dashboard --aws-account-id 111122223333
         * —dashboard-id 123123123 —version-number 3</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDashboardAsync(const Model::DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * delete-data-set \</code> </p> <p> <code>--aws-account-id=111111111111 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetOutcome DeleteDataSet(const Model::DeleteDataSetRequest& request) const;

        /**
         * <p>Deletes a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * delete-data-set \</code> </p> <p> <code>--aws-account-id=111111111111 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSetOutcomeCallable DeleteDataSetCallable(const Model::DeleteDataSetRequest& request) const;

        /**
         * <p>Deletes a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * delete-data-set \</code> </p> <p> <code>--aws-account-id=111111111111 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSetAsync(const Model::DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the data source permanently. This action breaks all the datasets that
         * reference the deleted data source.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-data-source \</code> </p> <p>
         * <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id </code> </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Deletes the data source permanently. This action breaks all the datasets that
         * reference the deleted data source.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-data-source \</code> </p> <p>
         * <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id </code> </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Deletes the data source permanently. This action breaks all the datasets that
         * reference the deleted data source.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-data-source \</code> </p> <p>
         * <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id </code> </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a user group from Amazon QuickSight. </p> <p>The permissions resource
         * is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight delete-group
         * -\-aws-account-id=111122223333 -\-namespace=default
         * -\-group-name=Sales-Management </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Removes a user group from Amazon QuickSight. </p> <p>The permissions resource
         * is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight delete-group
         * -\-aws-account-id=111122223333 -\-namespace=default
         * -\-group-name=Sales-Management </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Removes a user group from Amazon QuickSight. </p> <p>The permissions resource
         * is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight delete-group
         * -\-aws-account-id=111122223333 -\-namespace=default
         * -\-group-name=Sales-Management </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a user from a group so that the user is no longer a member of the
         * group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The condition resource is the user name.</p> <p>The condition
         * key is <code>quicksight:UserName</code>.</p> <p> <b>CLI Sample:</b> </p> <p>
         * <code>aws quicksight delete-group-membership --aws-account-id=111122223333
         * --namespace=default --group-name=Sales-Management --member-name=Charlie </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupMembershipOutcome DeleteGroupMembership(const Model::DeleteGroupMembershipRequest& request) const;

        /**
         * <p>Removes a user from a group so that the user is no longer a member of the
         * group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The condition resource is the user name.</p> <p>The condition
         * key is <code>quicksight:UserName</code>.</p> <p> <b>CLI Sample:</b> </p> <p>
         * <code>aws quicksight delete-group-membership --aws-account-id=111122223333
         * --namespace=default --group-name=Sales-Management --member-name=Charlie </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroupMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupMembershipOutcomeCallable DeleteGroupMembershipCallable(const Model::DeleteGroupMembershipRequest& request) const;

        /**
         * <p>Removes a user from a group so that the user is no longer a member of the
         * group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The condition resource is the user name.</p> <p>The condition
         * key is <code>quicksight:UserName</code>.</p> <p> <b>CLI Sample:</b> </p> <p>
         * <code>aws quicksight delete-group-membership --aws-account-id=111122223333
         * --namespace=default --group-name=Sales-Management --member-name=Charlie </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroupMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupMembershipAsync(const Model::DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing assignment.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-iam-policy-assignment --aws-account-id=111122223333
         * --assignment-name=testtest --region=us-east-1 --namespace=default</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIAMPolicyAssignmentOutcome DeleteIAMPolicyAssignment(const Model::DeleteIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Deletes an existing assignment.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-iam-policy-assignment --aws-account-id=111122223333
         * --assignment-name=testtest --region=us-east-1 --namespace=default</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIAMPolicyAssignmentOutcomeCallable DeleteIAMPolicyAssignmentCallable(const Model::DeleteIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Deletes an existing assignment.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-iam-policy-assignment --aws-account-id=111122223333
         * --assignment-name=testtest --region=us-east-1 --namespace=default</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIAMPolicyAssignmentAsync(const Model::DeleteIAMPolicyAssignmentRequest& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a template.</p> <p>CLI syntax:</p> <ul> <li> <p> <code>aws quicksight
         * delete-template --aws-account-id 111122223333 —-template-id
         * reports_test_template --version-number 2 </code> </p> </li> <li> <p> <code>aws
         * quicksight delete-template —aws-account-id 111122223333 —template-id
         * reports_test_template —alias-name STAGING </code> </p> </li> <li> <p> <code>aws
         * quicksight delete-template —aws-account-id 111122223333 —template-id
         * reports_test_template —alias-name ‘\$LATEST’ </code> </p> </li> <li> <p>
         * <code>aws quicksight delete-template --aws-account-id 111122223333 —-template-id
         * reports_test_template</code> </p> </li> </ul> <p>If version number which is an
         * optional field is not passed the template (including all the versions) is
         * deleted by the API, if version number is provided, the specific template version
         * is deleted by the API.</p> <p>Users can explicitly describe the latest version
         * of the template by passing <code>$LATEST</code> to the <code>alias-name</code>
         * parameter. <code>$LATEST</code> is an internally supported alias, which points
         * to the latest version of the template. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * <p>Deletes a template.</p> <p>CLI syntax:</p> <ul> <li> <p> <code>aws quicksight
         * delete-template --aws-account-id 111122223333 —-template-id
         * reports_test_template --version-number 2 </code> </p> </li> <li> <p> <code>aws
         * quicksight delete-template —aws-account-id 111122223333 —template-id
         * reports_test_template —alias-name STAGING </code> </p> </li> <li> <p> <code>aws
         * quicksight delete-template —aws-account-id 111122223333 —template-id
         * reports_test_template —alias-name ‘\$LATEST’ </code> </p> </li> <li> <p>
         * <code>aws quicksight delete-template --aws-account-id 111122223333 —-template-id
         * reports_test_template</code> </p> </li> </ul> <p>If version number which is an
         * optional field is not passed the template (including all the versions) is
         * deleted by the API, if version number is provided, the specific template version
         * is deleted by the API.</p> <p>Users can explicitly describe the latest version
         * of the template by passing <code>$LATEST</code> to the <code>alias-name</code>
         * parameter. <code>$LATEST</code> is an internally supported alias, which points
         * to the latest version of the template. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;

        /**
         * <p>Deletes a template.</p> <p>CLI syntax:</p> <ul> <li> <p> <code>aws quicksight
         * delete-template --aws-account-id 111122223333 —-template-id
         * reports_test_template --version-number 2 </code> </p> </li> <li> <p> <code>aws
         * quicksight delete-template —aws-account-id 111122223333 —template-id
         * reports_test_template —alias-name STAGING </code> </p> </li> <li> <p> <code>aws
         * quicksight delete-template —aws-account-id 111122223333 —template-id
         * reports_test_template —alias-name ‘\$LATEST’ </code> </p> </li> <li> <p>
         * <code>aws quicksight delete-template --aws-account-id 111122223333 —-template-id
         * reports_test_template</code> </p> </li> </ul> <p>If version number which is an
         * optional field is not passed the template (including all the versions) is
         * deleted by the API, if version number is provided, the specific template version
         * is deleted by the API.</p> <p>Users can explicitly describe the latest version
         * of the template by passing <code>$LATEST</code> to the <code>alias-name</code>
         * parameter. <code>$LATEST</code> is an internally supported alias, which points
         * to the latest version of the template. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update template alias of given template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-template-alias --aws-account-id 111122223333 --template-id
         * 'reports_test_template' --alias-name 'STAGING'</code> </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateAliasOutcome DeleteTemplateAlias(const Model::DeleteTemplateAliasRequest& request) const;

        /**
         * <p>Update template alias of given template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-template-alias --aws-account-id 111122223333 --template-id
         * 'reports_test_template' --alias-name 'STAGING'</code> </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTemplateAliasOutcomeCallable DeleteTemplateAliasCallable(const Model::DeleteTemplateAliasRequest& request) const;

        /**
         * <p>Update template alias of given template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight delete-template-alias --aws-account-id 111122223333 --template-id
         * 'reports_test_template' --alias-name 'STAGING'</code> </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTemplateAliasAsync(const Model::DeleteTemplateAliasRequest& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the AWS Identity and Access Management (IAM) user or role that's making the
         * call. The IAM user isn't deleted as a result of this call. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight delete-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the AWS Identity and Access Management (IAM) user or role that's making the
         * call. The IAM user isn't deleted as a result of this call. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight delete-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the AWS Identity and Access Management (IAM) user or role that's making the
         * call. The IAM user isn't deleted as a result of this call. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight delete-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user identified by its principal ID. </p> <p> <b>CLI Sample:</b>
         * </p> <p> <code>aws quicksight delete-user-by-principal-id
         * --aws-account-id=111122223333 --namespace=default
         * --principal-id=ABCDEFJA26JLI7EUUOEHS </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserByPrincipalIdOutcome DeleteUserByPrincipalId(const Model::DeleteUserByPrincipalIdRequest& request) const;

        /**
         * <p>Deletes a user identified by its principal ID. </p> <p> <b>CLI Sample:</b>
         * </p> <p> <code>aws quicksight delete-user-by-principal-id
         * --aws-account-id=111122223333 --namespace=default
         * --principal-id=ABCDEFJA26JLI7EUUOEHS </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserByPrincipalIdOutcomeCallable DeleteUserByPrincipalIdCallable(const Model::DeleteUserByPrincipalIdRequest& request) const;

        /**
         * <p>Deletes a user identified by its principal ID. </p> <p> <b>CLI Sample:</b>
         * </p> <p> <code>aws quicksight delete-user-by-principal-id
         * --aws-account-id=111122223333 --namespace=default
         * --principal-id=ABCDEFJA26JLI7EUUOEHS </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserByPrincipalIdAsync(const Model::DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a summary for a dashboard.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight describe-dashboard --aws-account-id 111122223333
         * —dashboard-id reports_test_report -version-number 2</code> </p> </li> <li> <p>
         * <code> aws quicksight describe-dashboard --aws-account-id 111122223333
         * —dashboard-id reports_test_report -alias-name ‘$PUBLISHED’ </code> </p> </li>
         * </ul> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;

        /**
         * <p>Provides a summary for a dashboard.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight describe-dashboard --aws-account-id 111122223333
         * —dashboard-id reports_test_report -version-number 2</code> </p> </li> <li> <p>
         * <code> aws quicksight describe-dashboard --aws-account-id 111122223333
         * —dashboard-id reports_test_report -alias-name ‘$PUBLISHED’ </code> </p> </li>
         * </ul> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDashboardOutcomeCallable DescribeDashboardCallable(const Model::DescribeDashboardRequest& request) const;

        /**
         * <p>Provides a summary for a dashboard.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight describe-dashboard --aws-account-id 111122223333
         * —dashboard-id reports_test_report -version-number 2</code> </p> </li> <li> <p>
         * <code> aws quicksight describe-dashboard --aws-account-id 111122223333
         * —dashboard-id reports_test_report -alias-name ‘$PUBLISHED’ </code> </p> </li>
         * </ul> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDashboardAsync(const Model::DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes read and write permissions on a dashboard.</p> <p>CLI syntax:</p>
         * <p> <code>aws quicksight describe-dashboard-permissions --aws-account-id
         * 735340738645 —dashboard-id reports_test_bob_report</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardPermissionsOutcome DescribeDashboardPermissions(const Model::DescribeDashboardPermissionsRequest& request) const;

        /**
         * <p>Describes read and write permissions on a dashboard.</p> <p>CLI syntax:</p>
         * <p> <code>aws quicksight describe-dashboard-permissions --aws-account-id
         * 735340738645 —dashboard-id reports_test_bob_report</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDashboardPermissionsOutcomeCallable DescribeDashboardPermissionsCallable(const Model::DescribeDashboardPermissionsRequest& request) const;

        /**
         * <p>Describes read and write permissions on a dashboard.</p> <p>CLI syntax:</p>
         * <p> <code>aws quicksight describe-dashboard-permissions --aws-account-id
         * 735340738645 —dashboard-id reports_test_bob_report</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDashboardPermissionsAsync(const Model::DescribeDashboardPermissionsRequest& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset. </p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * describe-data-set \</code> </p> <p> <code>--aws-account-id=111111111111 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetOutcome DescribeDataSet(const Model::DescribeDataSetRequest& request) const;

        /**
         * <p>Describes a dataset. </p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * describe-data-set \</code> </p> <p> <code>--aws-account-id=111111111111 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSetOutcomeCallable DescribeDataSetCallable(const Model::DescribeDataSetRequest& request) const;

        /**
         * <p>Describes a dataset. </p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * describe-data-set \</code> </p> <p> <code>--aws-account-id=111111111111 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSetAsync(const Model::DescribeDataSetRequest& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code> </p>
         * <p>CLI syntax: </p> <p> <code>aws quicksight describe-data-set-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-set-id=unique-data-set-id \</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetPermissionsOutcome DescribeDataSetPermissions(const Model::DescribeDataSetPermissionsRequest& request) const;

        /**
         * <p>Describes the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code> </p>
         * <p>CLI syntax: </p> <p> <code>aws quicksight describe-data-set-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-set-id=unique-data-set-id \</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSetPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSetPermissionsOutcomeCallable DescribeDataSetPermissionsCallable(const Model::DescribeDataSetPermissionsRequest& request) const;

        /**
         * <p>Describes the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code> </p>
         * <p>CLI syntax: </p> <p> <code>aws quicksight describe-data-set-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-set-id=unique-data-set-id \</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSetPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSetPermissionsAsync(const Model::DescribeDataSetPermissionsRequest& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourceOutcome DescribeDataSource(const Model::DescribeDataSourceRequest& request) const;

        /**
         * <p>Describes a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSourceOutcomeCallable DescribeDataSourceCallable(const Model::DescribeDataSourceRequest& request) const;

        /**
         * <p>Describes a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the resource permissions for a data source.</p> <p>The permissions
         * resource is
         * <code>aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourcePermissionsOutcome DescribeDataSourcePermissions(const Model::DescribeDataSourcePermissionsRequest& request) const;

        /**
         * <p>Describes the resource permissions for a data source.</p> <p>The permissions
         * resource is
         * <code>aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSourcePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSourcePermissionsOutcomeCallable DescribeDataSourcePermissionsCallable(const Model::DescribeDataSourcePermissionsRequest& request) const;

        /**
         * <p>Describes the resource permissions for a data source.</p> <p>The permissions
         * resource is
         * <code>aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSourcePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourcePermissionsAsync(const Model::DescribeDataSourcePermissionsRequest& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an Amazon QuickSight group's description and Amazon Resource Name
         * (ARN). </p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is the group object. </p> <p> <b>CLI Sample:</b>
         * </p> <p> <code>aws quicksight describe-group -\-aws-account-id=11112222333
         * -\-namespace=default -\-group-name=Sales </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * <p>Returns an Amazon QuickSight group's description and Amazon Resource Name
         * (ARN). </p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is the group object. </p> <p> <b>CLI Sample:</b>
         * </p> <p> <code>aws quicksight describe-group -\-aws-account-id=11112222333
         * -\-namespace=default -\-group-name=Sales </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request) const;

        /**
         * <p>Returns an Amazon QuickSight group's description and Amazon Resource Name
         * (ARN). </p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is the group object. </p> <p> <b>CLI Sample:</b>
         * </p> <p> <code>aws quicksight describe-group -\-aws-account-id=11112222333
         * -\-namespace=default -\-group-name=Sales </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing IAMPolicy Assignment by specified assignment name.</p>
         * <p>CLI syntax:</p> <p> <code>aws quicksight describe-iam-policy-assignment
         * --aws-account-id=111122223333 --assignment-name=testtest --namespace=default
         * --region=us-east-1 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIAMPolicyAssignmentOutcome DescribeIAMPolicyAssignment(const Model::DescribeIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Describes an existing IAMPolicy Assignment by specified assignment name.</p>
         * <p>CLI syntax:</p> <p> <code>aws quicksight describe-iam-policy-assignment
         * --aws-account-id=111122223333 --assignment-name=testtest --namespace=default
         * --region=us-east-1 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIAMPolicyAssignmentOutcomeCallable DescribeIAMPolicyAssignmentCallable(const Model::DescribeIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Describes an existing IAMPolicy Assignment by specified assignment name.</p>
         * <p>CLI syntax:</p> <p> <code>aws quicksight describe-iam-policy-assignment
         * --aws-account-id=111122223333 --assignment-name=testtest --namespace=default
         * --region=us-east-1 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIAMPolicyAssignmentAsync(const Model::DescribeIAMPolicyAssignmentRequest& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a SPICE ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIngestionOutcome DescribeIngestion(const Model::DescribeIngestionRequest& request) const;

        /**
         * <p>Describes a SPICE ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIngestion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIngestionOutcomeCallable DescribeIngestionCallable(const Model::DescribeIngestionRequest& request) const;

        /**
         * <p>Describes a SPICE ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIngestion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIngestionAsync(const Model::DescribeIngestionRequest& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a template's metadata.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight describe-template --aws-account-id 111122223333 --template-id
         * reports_test_template </code> </p> <p> <code>aws quicksight describe-template
         * --aws-account-id 111122223333 --template-id reports_test_template
         * --version-number-2</code> </p> <p> <code>aws quicksight describe-template
         * --aws-account-id 111122223333 --template-id reports_test_template --alias-name
         * '\$LATEST' </code> </p> <p>Users can explicitly describe the latest version of
         * the dashboard by passing <code>$LATEST</code> to the <code>alias-name</code>
         * parameter. <code>$LATEST</code> is an internally supported alias, which points
         * to the latest version of the dashboard. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateOutcome DescribeTemplate(const Model::DescribeTemplateRequest& request) const;

        /**
         * <p>Describes a template's metadata.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight describe-template --aws-account-id 111122223333 --template-id
         * reports_test_template </code> </p> <p> <code>aws quicksight describe-template
         * --aws-account-id 111122223333 --template-id reports_test_template
         * --version-number-2</code> </p> <p> <code>aws quicksight describe-template
         * --aws-account-id 111122223333 --template-id reports_test_template --alias-name
         * '\$LATEST' </code> </p> <p>Users can explicitly describe the latest version of
         * the dashboard by passing <code>$LATEST</code> to the <code>alias-name</code>
         * parameter. <code>$LATEST</code> is an internally supported alias, which points
         * to the latest version of the dashboard. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTemplateOutcomeCallable DescribeTemplateCallable(const Model::DescribeTemplateRequest& request) const;

        /**
         * <p>Describes a template's metadata.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight describe-template --aws-account-id 111122223333 --template-id
         * reports_test_template </code> </p> <p> <code>aws quicksight describe-template
         * --aws-account-id 111122223333 --template-id reports_test_template
         * --version-number-2</code> </p> <p> <code>aws quicksight describe-template
         * --aws-account-id 111122223333 --template-id reports_test_template --alias-name
         * '\$LATEST' </code> </p> <p>Users can explicitly describe the latest version of
         * the dashboard by passing <code>$LATEST</code> to the <code>alias-name</code>
         * parameter. <code>$LATEST</code> is an internally supported alias, which points
         * to the latest version of the dashboard. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTemplateAsync(const Model::DescribeTemplateRequest& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the template aliases of a template.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight describe-template-alias --aws-account-id 111122223333
         * --template-id 'reports_test_template' --alias-name 'STAGING'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateAliasOutcome DescribeTemplateAlias(const Model::DescribeTemplateAliasRequest& request) const;

        /**
         * <p>Describes the template aliases of a template.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight describe-template-alias --aws-account-id 111122223333
         * --template-id 'reports_test_template' --alias-name 'STAGING'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTemplateAliasOutcomeCallable DescribeTemplateAliasCallable(const Model::DescribeTemplateAliasRequest& request) const;

        /**
         * <p>Describes the template aliases of a template.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight describe-template-alias --aws-account-id 111122223333
         * --template-id 'reports_test_template' --alias-name 'STAGING'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTemplateAliasAsync(const Model::DescribeTemplateAliasRequest& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes read and write permissions on a template.</p> <p>CLI syntax:</p>
         * <p> <code>aws quicksight describe-template-permissions —aws-account-id
         * 735340738645 —template-id reports_test_template</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplatePermissionsOutcome DescribeTemplatePermissions(const Model::DescribeTemplatePermissionsRequest& request) const;

        /**
         * <p>Describes read and write permissions on a template.</p> <p>CLI syntax:</p>
         * <p> <code>aws quicksight describe-template-permissions —aws-account-id
         * 735340738645 —template-id reports_test_template</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplatePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTemplatePermissionsOutcomeCallable DescribeTemplatePermissionsCallable(const Model::DescribeTemplatePermissionsRequest& request) const;

        /**
         * <p>Describes read and write permissions on a template.</p> <p>CLI syntax:</p>
         * <p> <code>aws quicksight describe-template-permissions —aws-account-id
         * 735340738645 —template-id reports_test_template</code> </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplatePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTemplatePermissionsAsync(const Model::DescribeTemplatePermissionsRequest& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a user, given the user name. </p> <p>The response
         * is a user object that contains the user's Amazon Resource Name (ARN), AWS
         * Identity and Access Management (IAM) role, and email address. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight describe-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Returns information about a user, given the user name. </p> <p>The response
         * is a user object that contains the user's Amazon Resource Name (ARN), AWS
         * Identity and Access Management (IAM) role, and email address. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight describe-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Returns information about a user, given the user name. </p> <p>The response
         * is a user object that contains the user's Amazon Resource Name (ARN), AWS
         * Identity and Access Management (IAM) role, and email address. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight describe-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a server-side embeddable URL and authorization code. Before this
         * can work properly, first you need to configure the dashboards and user
         * permissions. For more information, see <a
         * href="https://docs.aws.example.com/en_us/quicksight/latest/user/embedding.html">
         * Embedding Amazon QuickSight Dashboards</a>.</p> <p>Currently, you can use
         * <code>GetDashboardEmbedURL</code> only from the server, not from the user’s
         * browser.</p> <p> <b>CLI Sample:</b> </p> <p>Assume the role with permissions
         * enabled for actions: <code>quickSight:RegisterUser</code> and
         * <code>quicksight:GetDashboardEmbedURL</code>. You can use assume-role,
         * assume-role-with-web-identity, or assume-role-with-saml. </p> <p> <code>aws sts
         * assume-role --role-arn
         * "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role"
         * --role-session-name embeddingsession</code> </p> <p>If the user does not exist
         * in QuickSight, register the user:</p> <p> <code>aws quicksight register-user
         * --aws-account-id 111122223333 --namespace default --identity-type IAM --iam-arn
         * "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role" --user-role
         * READER --session-name "embeddingsession" --email user123@example.com --region
         * us-east-1</code> </p> <p>Get the URL for the embedded dashboard
         * (<code>IAM</code> identity authentication):</p> <p> <code>aws quicksight
         * get-dashboard-embed-url --aws-account-id 111122223333 --dashboard-id
         * 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type IAM</code> </p> <p>Get the
         * URL for the embedded dashboard (<code>QUICKSIGHT</code> identity
         * authentication):</p> <p> <code>aws quicksight get-dashboard-embed-url
         * --aws-account-id 111122223333 --dashboard-id
         * 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type QUICKSIGHT --user-arn
         * arn:aws:quicksight:us-east-1:111122223333:user/default/embedding_quicksight_dashboard_role/embeddingsession</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardEmbedUrlOutcome GetDashboardEmbedUrl(const Model::GetDashboardEmbedUrlRequest& request) const;

        /**
         * <p>Generates a server-side embeddable URL and authorization code. Before this
         * can work properly, first you need to configure the dashboards and user
         * permissions. For more information, see <a
         * href="https://docs.aws.example.com/en_us/quicksight/latest/user/embedding.html">
         * Embedding Amazon QuickSight Dashboards</a>.</p> <p>Currently, you can use
         * <code>GetDashboardEmbedURL</code> only from the server, not from the user’s
         * browser.</p> <p> <b>CLI Sample:</b> </p> <p>Assume the role with permissions
         * enabled for actions: <code>quickSight:RegisterUser</code> and
         * <code>quicksight:GetDashboardEmbedURL</code>. You can use assume-role,
         * assume-role-with-web-identity, or assume-role-with-saml. </p> <p> <code>aws sts
         * assume-role --role-arn
         * "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role"
         * --role-session-name embeddingsession</code> </p> <p>If the user does not exist
         * in QuickSight, register the user:</p> <p> <code>aws quicksight register-user
         * --aws-account-id 111122223333 --namespace default --identity-type IAM --iam-arn
         * "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role" --user-role
         * READER --session-name "embeddingsession" --email user123@example.com --region
         * us-east-1</code> </p> <p>Get the URL for the embedded dashboard
         * (<code>IAM</code> identity authentication):</p> <p> <code>aws quicksight
         * get-dashboard-embed-url --aws-account-id 111122223333 --dashboard-id
         * 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type IAM</code> </p> <p>Get the
         * URL for the embedded dashboard (<code>QUICKSIGHT</code> identity
         * authentication):</p> <p> <code>aws quicksight get-dashboard-embed-url
         * --aws-account-id 111122223333 --dashboard-id
         * 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type QUICKSIGHT --user-arn
         * arn:aws:quicksight:us-east-1:111122223333:user/default/embedding_quicksight_dashboard_role/embeddingsession</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDashboardEmbedUrlOutcomeCallable GetDashboardEmbedUrlCallable(const Model::GetDashboardEmbedUrlRequest& request) const;

        /**
         * <p>Generates a server-side embeddable URL and authorization code. Before this
         * can work properly, first you need to configure the dashboards and user
         * permissions. For more information, see <a
         * href="https://docs.aws.example.com/en_us/quicksight/latest/user/embedding.html">
         * Embedding Amazon QuickSight Dashboards</a>.</p> <p>Currently, you can use
         * <code>GetDashboardEmbedURL</code> only from the server, not from the user’s
         * browser.</p> <p> <b>CLI Sample:</b> </p> <p>Assume the role with permissions
         * enabled for actions: <code>quickSight:RegisterUser</code> and
         * <code>quicksight:GetDashboardEmbedURL</code>. You can use assume-role,
         * assume-role-with-web-identity, or assume-role-with-saml. </p> <p> <code>aws sts
         * assume-role --role-arn
         * "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role"
         * --role-session-name embeddingsession</code> </p> <p>If the user does not exist
         * in QuickSight, register the user:</p> <p> <code>aws quicksight register-user
         * --aws-account-id 111122223333 --namespace default --identity-type IAM --iam-arn
         * "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role" --user-role
         * READER --session-name "embeddingsession" --email user123@example.com --region
         * us-east-1</code> </p> <p>Get the URL for the embedded dashboard
         * (<code>IAM</code> identity authentication):</p> <p> <code>aws quicksight
         * get-dashboard-embed-url --aws-account-id 111122223333 --dashboard-id
         * 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type IAM</code> </p> <p>Get the
         * URL for the embedded dashboard (<code>QUICKSIGHT</code> identity
         * authentication):</p> <p> <code>aws quicksight get-dashboard-embed-url
         * --aws-account-id 111122223333 --dashboard-id
         * 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type QUICKSIGHT --user-arn
         * arn:aws:quicksight:us-east-1:111122223333:user/default/embedding_quicksight_dashboard_role/embeddingsession</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDashboardEmbedUrlAsync(const Model::GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the versions of the dashboards in the Quicksight subscription.</p>
         * <p>CLI syntax:</p> <p>aws quicksight list-template-versions —aws-account-id
         * 111122223333 —template-id reports-test-template</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboardVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardVersionsOutcome ListDashboardVersions(const Model::ListDashboardVersionsRequest& request) const;

        /**
         * <p>Lists all the versions of the dashboards in the Quicksight subscription.</p>
         * <p>CLI syntax:</p> <p>aws quicksight list-template-versions —aws-account-id
         * 111122223333 —template-id reports-test-template</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboardVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDashboardVersionsOutcomeCallable ListDashboardVersionsCallable(const Model::ListDashboardVersionsRequest& request) const;

        /**
         * <p>Lists all the versions of the dashboards in the Quicksight subscription.</p>
         * <p>CLI syntax:</p> <p>aws quicksight list-template-versions —aws-account-id
         * 111122223333 —template-id reports-test-template</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboardVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDashboardVersionsAsync(const Model::ListDashboardVersionsRequest& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists dashboards in the AWS account.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight list-dashboards --aws-account-id 111122223333 --max-results 5
         * —next-token 'next-10'</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;

        /**
         * <p>Lists dashboards in the AWS account.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight list-dashboards --aws-account-id 111122223333 --max-results 5
         * —next-token 'next-10'</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const Model::ListDashboardsRequest& request) const;

        /**
         * <p>Lists dashboards in the AWS account.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight list-dashboards --aws-account-id 111122223333 --max-results 5
         * —next-token 'next-10'</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDashboardsAsync(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the datasets belonging to this account in an AWS region.</p>
         * <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/ *</code> </p> <p>CLI
         * syntax: <code>aws quicksight list-data-sets --aws-account-id=111111111111</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetsOutcome ListDataSets(const Model::ListDataSetsRequest& request) const;

        /**
         * <p>Lists all of the datasets belonging to this account in an AWS region.</p>
         * <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/ *</code> </p> <p>CLI
         * syntax: <code>aws quicksight list-data-sets --aws-account-id=111111111111</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSetsOutcomeCallable ListDataSetsCallable(const Model::ListDataSetsRequest& request) const;

        /**
         * <p>Lists all of the datasets belonging to this account in an AWS region.</p>
         * <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/ *</code> </p> <p>CLI
         * syntax: <code>aws quicksight list-data-sets --aws-account-id=111111111111</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSetsAsync(const Model::ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists data sources in current AWS region that belong to this AWS account.</p>
         * <p>The permissions resource is:
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/ *</code> </p> <p>CLI
         * syntax: <code>aws quicksight list-data-sources
         * --aws-account-id=111122223333</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * <p>Lists data sources in current AWS region that belong to this AWS account.</p>
         * <p>The permissions resource is:
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/ *</code> </p> <p>CLI
         * syntax: <code>aws quicksight list-data-sources
         * --aws-account-id=111122223333</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const Model::ListDataSourcesRequest& request) const;

        /**
         * <p>Lists data sources in current AWS region that belong to this AWS account.</p>
         * <p>The permissions resource is:
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/ *</code> </p> <p>CLI
         * syntax: <code>aws quicksight list-data-sources
         * --aws-account-id=111122223333</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists member users in a group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a list of group member objects.</p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight list-group-memberships
         * -\-aws-account-id=111122223333 -\-namespace=default </code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroupMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsOutcome ListGroupMemberships(const Model::ListGroupMembershipsRequest& request) const;

        /**
         * <p>Lists member users in a group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a list of group member objects.</p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight list-group-memberships
         * -\-aws-account-id=111122223333 -\-namespace=default </code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroupMemberships">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupMembershipsOutcomeCallable ListGroupMembershipsCallable(const Model::ListGroupMembershipsRequest& request) const;

        /**
         * <p>Lists member users in a group.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a list of group member objects.</p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight list-group-memberships
         * -\-aws-account-id=111122223333 -\-namespace=default </code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroupMemberships">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupMembershipsAsync(const Model::ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all user groups in Amazon QuickSight. </p> <p>The permissions resource
         * is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/ *</code>.</p>
         * <p>The response is a list of group objects. </p> <p> <b>CLI Sample:</b> </p> <p>
         * <code>aws quicksight list-groups -\-aws-account-id=111122223333
         * -\-namespace=default </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists all user groups in Amazon QuickSight. </p> <p>The permissions resource
         * is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/ *</code>.</p>
         * <p>The response is a list of group objects. </p> <p> <b>CLI Sample:</b> </p> <p>
         * <code>aws quicksight list-groups -\-aws-account-id=111122223333
         * -\-namespace=default </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists all user groups in Amazon QuickSight. </p> <p>The permissions resource
         * is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/ *</code>.</p>
         * <p>The response is a list of group objects. </p> <p> <b>CLI Sample:</b> </p> <p>
         * <code>aws quicksight list-groups -\-aws-account-id=111122223333
         * -\-namespace=default </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists assignments in current QuickSight account.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight list-iam-policy-assignments --aws-account-id=111122223333
         * --max-result=5 --assignment-status=ENABLED --namespace=default
         * --region=us-east-1 --next-token=3 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsOutcome ListIAMPolicyAssignments(const Model::ListIAMPolicyAssignmentsRequest& request) const;

        /**
         * <p>Lists assignments in current QuickSight account.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight list-iam-policy-assignments --aws-account-id=111122223333
         * --max-result=5 --assignment-status=ENABLED --namespace=default
         * --region=us-east-1 --next-token=3 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIAMPolicyAssignmentsOutcomeCallable ListIAMPolicyAssignmentsCallable(const Model::ListIAMPolicyAssignmentsRequest& request) const;

        /**
         * <p>Lists assignments in current QuickSight account.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight list-iam-policy-assignments --aws-account-id=111122223333
         * --max-result=5 --assignment-status=ENABLED --namespace=default
         * --region=us-east-1 --next-token=3 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIAMPolicyAssignmentsAsync(const Model::ListIAMPolicyAssignmentsRequest& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the assignments and the ARNs for the associated IAM policies
         * assigned to the specified user and the group or groups that the user belongs
         * to.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * list-iam-policy-assignments-for-user --aws-account-id=111122223333
         * --user-name=user5 --namespace=default --max-result=6 --region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignmentsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsForUserOutcome ListIAMPolicyAssignmentsForUser(const Model::ListIAMPolicyAssignmentsForUserRequest& request) const;

        /**
         * <p>Lists all the assignments and the ARNs for the associated IAM policies
         * assigned to the specified user and the group or groups that the user belongs
         * to.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * list-iam-policy-assignments-for-user --aws-account-id=111122223333
         * --user-name=user5 --namespace=default --max-result=6 --region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignmentsForUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIAMPolicyAssignmentsForUserOutcomeCallable ListIAMPolicyAssignmentsForUserCallable(const Model::ListIAMPolicyAssignmentsForUserRequest& request) const;

        /**
         * <p>Lists all the assignments and the ARNs for the associated IAM policies
         * assigned to the specified user and the group or groups that the user belongs
         * to.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * list-iam-policy-assignments-for-user --aws-account-id=111122223333
         * --user-name=user5 --namespace=default --max-result=6 --region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignmentsForUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the history of SPICE ingestions for a dataset.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIngestions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIngestionsOutcomeCallable ListIngestionsCallable(const Model::ListIngestionsRequest& request) const;

        /**
         * <p>Lists the history of SPICE ingestions for a dataset.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIngestions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIngestionsAsync(const Model::ListIngestionsRequest& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags assigned to a resource.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight list-tags-for-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --region
         * us-east-1</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags assigned to a resource.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight list-tags-for-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --region
         * us-east-1</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags assigned to a resource.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight list-tags-for-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --region
         * us-east-1</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the aliases of a template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight list-template-aliases --aws-account-id 111122223333 —template-id
         * 'reports_test_template'</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateAliasesOutcome ListTemplateAliases(const Model::ListTemplateAliasesRequest& request) const;

        /**
         * <p>Lists all the aliases of a template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight list-template-aliases --aws-account-id 111122223333 —template-id
         * 'reports_test_template'</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplateAliasesOutcomeCallable ListTemplateAliasesCallable(const Model::ListTemplateAliasesRequest& request) const;

        /**
         * <p>Lists all the aliases of a template.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight list-template-aliases --aws-account-id 111122223333 —template-id
         * 'reports_test_template'</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplateAliasesAsync(const Model::ListTemplateAliasesRequest& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the versions of the templates in the Quicksight account.</p> <p>CLI
         * syntax:</p> <p>aws quicksight list-template-versions --aws-account-id
         * 111122223333 --aws-account-id 196359894473 --template-id
         * reports-test-template</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateVersionsOutcome ListTemplateVersions(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * <p>Lists all the versions of the templates in the Quicksight account.</p> <p>CLI
         * syntax:</p> <p>aws quicksight list-template-versions --aws-account-id
         * 111122223333 --aws-account-id 196359894473 --template-id
         * reports-test-template</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplateVersionsOutcomeCallable ListTemplateVersionsCallable(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * <p>Lists all the versions of the templates in the Quicksight account.</p> <p>CLI
         * syntax:</p> <p>aws quicksight list-template-versions --aws-account-id
         * 111122223333 --aws-account-id 196359894473 --template-id
         * reports-test-template</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplateVersionsAsync(const Model::ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the templates in the QuickSight account.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight list-templates --aws-account-id 111122223333 --max-results
         * 1 —next-token AYADeJuxwOypAndSoOn</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * <p>Lists all the templates in the QuickSight account.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight list-templates --aws-account-id 111122223333 --max-results
         * 1 —next-token AYADeJuxwOypAndSoOn</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const Model::ListTemplatesRequest& request) const;

        /**
         * <p>Lists all the templates in the QuickSight account.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight list-templates --aws-account-id 111122223333 --max-results
         * 1 —next-token AYADeJuxwOypAndSoOn</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p> <p>The response is a one or more group objects. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight list-user-groups -\-user-name=Pat
         * -\-aws-account-id=111122223333 -\-namespace=default -\-region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUserGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserGroupsOutcome ListUserGroups(const Model::ListUserGroupsRequest& request) const;

        /**
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p> <p>The response is a one or more group objects. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight list-user-groups -\-user-name=Pat
         * -\-aws-account-id=111122223333 -\-namespace=default -\-region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUserGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserGroupsOutcomeCallable ListUserGroupsCallable(const Model::ListUserGroupsRequest& request) const;

        /**
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p> <p>The response is a one or more group objects. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight list-user-groups -\-user-name=Pat
         * -\-aws-account-id=111122223333 -\-namespace=default -\-region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUserGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserGroupsAsync(const Model::ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all of the Amazon QuickSight users belonging to this
         * account. </p> <p>The response is a list of user objects, containing each user's
         * Amazon Resource Name (ARN), AWS Identity and Access Management (IAM) role, and
         * email address. </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * list-users --aws-account-id=111122223333 --namespace=default </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Returns a list of all of the Amazon QuickSight users belonging to this
         * account. </p> <p>The response is a list of user objects, containing each user's
         * Amazon Resource Name (ARN), AWS Identity and Access Management (IAM) role, and
         * email address. </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * list-users --aws-account-id=111122223333 --namespace=default </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Returns a list of all of the Amazon QuickSight users belonging to this
         * account. </p> <p>The response is a list of user objects, containing each user's
         * Amazon Resource Name (ARN), AWS Identity and Access Management (IAM) role, and
         * email address. </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * list-users --aws-account-id=111122223333 --namespace=default </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon QuickSight user, whose identity is associated with the AWS
         * Identity and Access Management (IAM) identity or role specified in the request.
         * </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight register-user
         * -\-aws-account-id=111122223333 -\-namespace=default -\-email=pat@example.com
         * -\-identity-type=IAM -\-user-role=AUTHOR
         * -\-iam-arn=arn:aws:iam::111122223333:user/Pat </code> </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisterUser">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterUserOutcome RegisterUser(const Model::RegisterUserRequest& request) const;

        /**
         * <p>Creates an Amazon QuickSight user, whose identity is associated with the AWS
         * Identity and Access Management (IAM) identity or role specified in the request.
         * </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight register-user
         * -\-aws-account-id=111122223333 -\-namespace=default -\-email=pat@example.com
         * -\-identity-type=IAM -\-user-role=AUTHOR
         * -\-iam-arn=arn:aws:iam::111122223333:user/Pat </code> </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisterUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterUserOutcomeCallable RegisterUserCallable(const Model::RegisterUserRequest& request) const;

        /**
         * <p>Creates an Amazon QuickSight user, whose identity is associated with the AWS
         * Identity and Access Management (IAM) identity or role specified in the request.
         * </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight register-user
         * -\-aws-account-id=111122223333 -\-namespace=default -\-email=pat@example.com
         * -\-identity-type=IAM -\-user-role=AUTHOR
         * -\-iam-arn=arn:aws:iam::111122223333:user/Pat </code> </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisterUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterUserAsync(const Model::RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns a tag or tags to a resource.</p> <p>Assigns one or more tags
         * (key-value pairs) to the specified QuickSight resource. Tags can help you
         * organize and categorize your resources. You can also use them to scope user
         * permissions, by granting a user permission to access or change only resources
         * with certain tag values. You can use the TagResource action with a resource that
         * already has tags. If you specify a new tag key for the resource, this tag is
         * appended to the list of tags associated with the resource. If you specify a tag
         * key that is already associated with the resource, the new tag value that you
         * specify replaces the previous value for that tag.</p> <p>You can associate as
         * many as 50 tags with a resource. QuickSight supports tagging on data-set,
         * data-source, dashboard, template. </p> <p>Tagging for QuickSight works in a
         * similar was to tagging for other AWS services, except for the following:</p>
         * <ul> <li> <p>You can't use tags to track AWS costs for QuickSight, because
         * QuickSight costs are based on users and SPICE capacity, which aren't taggable
         * resources.</p> </li> <li> <p>QuickSight doesn't currently support the Tag Editor
         * for AWS Resource Groups.</p> </li> </ul> <p>CLI syntax to tag a resource:</p>
         * <ul> <li> <p> <code>aws quicksight tag-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --tags
         * Key=K1,Value=V1 Key=K2,Value=V2 --region us-east-1</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns a tag or tags to a resource.</p> <p>Assigns one or more tags
         * (key-value pairs) to the specified QuickSight resource. Tags can help you
         * organize and categorize your resources. You can also use them to scope user
         * permissions, by granting a user permission to access or change only resources
         * with certain tag values. You can use the TagResource action with a resource that
         * already has tags. If you specify a new tag key for the resource, this tag is
         * appended to the list of tags associated with the resource. If you specify a tag
         * key that is already associated with the resource, the new tag value that you
         * specify replaces the previous value for that tag.</p> <p>You can associate as
         * many as 50 tags with a resource. QuickSight supports tagging on data-set,
         * data-source, dashboard, template. </p> <p>Tagging for QuickSight works in a
         * similar was to tagging for other AWS services, except for the following:</p>
         * <ul> <li> <p>You can't use tags to track AWS costs for QuickSight, because
         * QuickSight costs are based on users and SPICE capacity, which aren't taggable
         * resources.</p> </li> <li> <p>QuickSight doesn't currently support the Tag Editor
         * for AWS Resource Groups.</p> </li> </ul> <p>CLI syntax to tag a resource:</p>
         * <ul> <li> <p> <code>aws quicksight tag-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --tags
         * Key=K1,Value=V1 Key=K2,Value=V2 --region us-east-1</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns a tag or tags to a resource.</p> <p>Assigns one or more tags
         * (key-value pairs) to the specified QuickSight resource. Tags can help you
         * organize and categorize your resources. You can also use them to scope user
         * permissions, by granting a user permission to access or change only resources
         * with certain tag values. You can use the TagResource action with a resource that
         * already has tags. If you specify a new tag key for the resource, this tag is
         * appended to the list of tags associated with the resource. If you specify a tag
         * key that is already associated with the resource, the new tag value that you
         * specify replaces the previous value for that tag.</p> <p>You can associate as
         * many as 50 tags with a resource. QuickSight supports tagging on data-set,
         * data-source, dashboard, template. </p> <p>Tagging for QuickSight works in a
         * similar was to tagging for other AWS services, except for the following:</p>
         * <ul> <li> <p>You can't use tags to track AWS costs for QuickSight, because
         * QuickSight costs are based on users and SPICE capacity, which aren't taggable
         * resources.</p> </li> <li> <p>QuickSight doesn't currently support the Tag Editor
         * for AWS Resource Groups.</p> </li> </ul> <p>CLI syntax to tag a resource:</p>
         * <ul> <li> <p> <code>aws quicksight tag-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --tags
         * Key=K1,Value=V1 Key=K2,Value=V2 --region us-east-1</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag or tags from a resource.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight untag-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --tag-keys K1 K2
         * --region us-east-1</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag or tags from a resource.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight untag-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --tag-keys K1 K2
         * --region us-east-1</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag or tags from a resource.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight untag-resource --resource-arn
         * arn:aws:quicksight:us-east-1:111111111111:dataset/dataset1 --tag-keys K1 K2
         * --region us-east-1</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dashboard in the AWS account.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight update-dashboard --aws-account-id 111122223333 --dashboard-id
         * 123123123 --dashboard-name "test-update102" --source-entity
         * SourceTemplate={Arn=arn:aws:quicksight:us-west-2:111122223333:template/sales-report-template2}
         * --data-set-references
         * DataSetPlaceholder=SalesDataSet,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/0e251aef-9ebf-46e1-b852-eb4fa33c1d3a</code>
         * </p> <p> <code>aws quicksight update-dashboard --cli-input-json
         * file://update-dashboard.json </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;

        /**
         * <p>Updates a dashboard in the AWS account.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight update-dashboard --aws-account-id 111122223333 --dashboard-id
         * 123123123 --dashboard-name "test-update102" --source-entity
         * SourceTemplate={Arn=arn:aws:quicksight:us-west-2:111122223333:template/sales-report-template2}
         * --data-set-references
         * DataSetPlaceholder=SalesDataSet,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/0e251aef-9ebf-46e1-b852-eb4fa33c1d3a</code>
         * </p> <p> <code>aws quicksight update-dashboard --cli-input-json
         * file://update-dashboard.json </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardOutcomeCallable UpdateDashboardCallable(const Model::UpdateDashboardRequest& request) const;

        /**
         * <p>Updates a dashboard in the AWS account.</p> <p>CLI syntax:</p> <p> <code>aws
         * quicksight update-dashboard --aws-account-id 111122223333 --dashboard-id
         * 123123123 --dashboard-name "test-update102" --source-entity
         * SourceTemplate={Arn=arn:aws:quicksight:us-west-2:111122223333:template/sales-report-template2}
         * --data-set-references
         * DataSetPlaceholder=SalesDataSet,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/0e251aef-9ebf-46e1-b852-eb4fa33c1d3a</code>
         * </p> <p> <code>aws quicksight update-dashboard --cli-input-json
         * file://update-dashboard.json </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardAsync(const Model::UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates read and write permissions on a dashboard.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-dashboard-permissions —cli-input-json
         * file://update-permission.json</code> </p> <p>A sample update-permissions.json
         * for granting read only permissions:</p> <p> <code>{ "AwsAccountId":
         * "111122223333", "DashboardId": "reports_test_report", "GrantPermissions": [ {
         * "Principal": "arn:aws:quicksight:us-east-1:111122223333:user/default/user2",
         * "Actions": [ "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard" ] } ]
         * }</code> </p> <p>A sample update-permissions.json for granting read and write
         * permissions:</p> <p> <code>{ "AwsAccountId": "111122223333", "DashboardId":
         * "reports_test_report", "GrantPermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard",
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>A sample
         * update-permissions.json for revoking write permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333", "DashboardId": "reports_test_report",
         * "RevokePermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>A sample
         * update-permissions.json for revoking read and write permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333", "DashboardId": "reports_test_report",
         * "RevokePermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard",
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>To obtain
         * the principal name of a QuickSight user or group, you can use describe-group or
         * describe-user. For example:</p> <p> <code>aws quicksight describe-user
         * --aws-account-id 111122223333 --namespace default --user-name user2 --region
         * us-east-1 { "User": { "Arn":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Active": true,
         * "Email": "user2@example.com", "Role": "ADMIN", "UserName": "user2",
         * "PrincipalId": "federated/iam/abcd2abcdabcdeabc5ab5" }, "RequestId":
         * "8f74bb31-6291-448a-a71c-a765a44bae31", "Status": 200 }</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPermissionsOutcome UpdateDashboardPermissions(const Model::UpdateDashboardPermissionsRequest& request) const;

        /**
         * <p>Updates read and write permissions on a dashboard.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-dashboard-permissions —cli-input-json
         * file://update-permission.json</code> </p> <p>A sample update-permissions.json
         * for granting read only permissions:</p> <p> <code>{ "AwsAccountId":
         * "111122223333", "DashboardId": "reports_test_report", "GrantPermissions": [ {
         * "Principal": "arn:aws:quicksight:us-east-1:111122223333:user/default/user2",
         * "Actions": [ "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard" ] } ]
         * }</code> </p> <p>A sample update-permissions.json for granting read and write
         * permissions:</p> <p> <code>{ "AwsAccountId": "111122223333", "DashboardId":
         * "reports_test_report", "GrantPermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard",
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>A sample
         * update-permissions.json for revoking write permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333", "DashboardId": "reports_test_report",
         * "RevokePermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>A sample
         * update-permissions.json for revoking read and write permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333", "DashboardId": "reports_test_report",
         * "RevokePermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard",
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>To obtain
         * the principal name of a QuickSight user or group, you can use describe-group or
         * describe-user. For example:</p> <p> <code>aws quicksight describe-user
         * --aws-account-id 111122223333 --namespace default --user-name user2 --region
         * us-east-1 { "User": { "Arn":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Active": true,
         * "Email": "user2@example.com", "Role": "ADMIN", "UserName": "user2",
         * "PrincipalId": "federated/iam/abcd2abcdabcdeabc5ab5" }, "RequestId":
         * "8f74bb31-6291-448a-a71c-a765a44bae31", "Status": 200 }</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardPermissionsOutcomeCallable UpdateDashboardPermissionsCallable(const Model::UpdateDashboardPermissionsRequest& request) const;

        /**
         * <p>Updates read and write permissions on a dashboard.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-dashboard-permissions —cli-input-json
         * file://update-permission.json</code> </p> <p>A sample update-permissions.json
         * for granting read only permissions:</p> <p> <code>{ "AwsAccountId":
         * "111122223333", "DashboardId": "reports_test_report", "GrantPermissions": [ {
         * "Principal": "arn:aws:quicksight:us-east-1:111122223333:user/default/user2",
         * "Actions": [ "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard" ] } ]
         * }</code> </p> <p>A sample update-permissions.json for granting read and write
         * permissions:</p> <p> <code>{ "AwsAccountId": "111122223333", "DashboardId":
         * "reports_test_report", "GrantPermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard",
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>A sample
         * update-permissions.json for revoking write permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333", "DashboardId": "reports_test_report",
         * "RevokePermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>A sample
         * update-permissions.json for revoking read and write permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333", "DashboardId": "reports_test_report",
         * "RevokePermissions": [ { "Principal":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Actions": [
         * "quicksight:DescribeDashboard", "quicksight:ListDashboardVersions",
         * "quicksight:DescribeDashboardVersion", "quicksight:QueryDashboard",
         * "quicksight:DescribeDashboardPermissions",
         * "quicksight:UpdateDashboardPermissions", "quicksight:DeleteDashboardVersion",
         * "quicksight:DeleteDashboard", "quicksight:UpdateDashboard",
         * "quicksight:UpdateDashboardPublishedVersion", ] } ] }</code> </p> <p>To obtain
         * the principal name of a QuickSight user or group, you can use describe-group or
         * describe-user. For example:</p> <p> <code>aws quicksight describe-user
         * --aws-account-id 111122223333 --namespace default --user-name user2 --region
         * us-east-1 { "User": { "Arn":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2", "Active": true,
         * "Email": "user2@example.com", "Role": "ADMIN", "UserName": "user2",
         * "PrincipalId": "federated/iam/abcd2abcdabcdeabc5ab5" }, "RequestId":
         * "8f74bb31-6291-448a-a71c-a765a44bae31", "Status": 200 }</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardPermissionsAsync(const Model::UpdateDashboardPermissionsRequest& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the published version of a dashboard.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-dashboard-published-version --aws-account-id
         * 111122223333 --dashboard-id dashboard-w1 ---version-number 2</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPublishedVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPublishedVersionOutcome UpdateDashboardPublishedVersion(const Model::UpdateDashboardPublishedVersionRequest& request) const;

        /**
         * <p>Updates the published version of a dashboard.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-dashboard-published-version --aws-account-id
         * 111122223333 --dashboard-id dashboard-w1 ---version-number 2</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPublishedVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDashboardPublishedVersionOutcomeCallable UpdateDashboardPublishedVersionCallable(const Model::UpdateDashboardPublishedVersionRequest& request) const;

        /**
         * <p>Updates the published version of a dashboard.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-dashboard-published-version --aws-account-id
         * 111122223333 --dashboard-id dashboard-w1 ---version-number 2</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPublishedVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDashboardPublishedVersionAsync(const Model::UpdateDashboardPublishedVersionRequest& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * update-data-set \</code> </p> <p> <code>--aws-account-id=111122223333 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--name='My dataset' \</code> </p> <p> <code>--import-mode=SPICE \</code>
         * </p> <p> <code>--physical-table-map='{</code> </p> <p> <code>
         * "physical-table-id": {</code> </p> <p> <code> "RelationalTable": {</code> </p>
         * <p> <code> "DataSourceArn":
         * "arn:aws:quicksight:us-west-2:111111111111:datasource/data-source-id",</code>
         * </p> <p> <code> "Name": "table1",</code> </p> <p> <code> "InputColumns":
         * [</code> </p> <p> <code> {</code> </p> <p> <code> "Name": "column1",</code> </p>
         * <p> <code> "Type": "STRING"</code> </p> <p> <code> }</code> </p> <p> <code>
         * ]</code> </p> <p> <code> }</code> </p> <p> <code> }'</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetOutcome UpdateDataSet(const Model::UpdateDataSetRequest& request) const;

        /**
         * <p>Updates a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * update-data-set \</code> </p> <p> <code>--aws-account-id=111122223333 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--name='My dataset' \</code> </p> <p> <code>--import-mode=SPICE \</code>
         * </p> <p> <code>--physical-table-map='{</code> </p> <p> <code>
         * "physical-table-id": {</code> </p> <p> <code> "RelationalTable": {</code> </p>
         * <p> <code> "DataSourceArn":
         * "arn:aws:quicksight:us-west-2:111111111111:datasource/data-source-id",</code>
         * </p> <p> <code> "Name": "table1",</code> </p> <p> <code> "InputColumns":
         * [</code> </p> <p> <code> {</code> </p> <p> <code> "Name": "column1",</code> </p>
         * <p> <code> "Type": "STRING"</code> </p> <p> <code> }</code> </p> <p> <code>
         * ]</code> </p> <p> <code> }</code> </p> <p> <code> }'</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSetOutcomeCallable UpdateDataSetCallable(const Model::UpdateDataSetRequest& request) const;

        /**
         * <p>Updates a dataset.</p> <p>CLI syntax:</p> <p> <code>aws quicksight
         * update-data-set \</code> </p> <p> <code>--aws-account-id=111122223333 \</code>
         * </p> <p> <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--name='My dataset' \</code> </p> <p> <code>--import-mode=SPICE \</code>
         * </p> <p> <code>--physical-table-map='{</code> </p> <p> <code>
         * "physical-table-id": {</code> </p> <p> <code> "RelationalTable": {</code> </p>
         * <p> <code> "DataSourceArn":
         * "arn:aws:quicksight:us-west-2:111111111111:datasource/data-source-id",</code>
         * </p> <p> <code> "Name": "table1",</code> </p> <p> <code> "InputColumns":
         * [</code> </p> <p> <code> {</code> </p> <p> <code> "Name": "column1",</code> </p>
         * <p> <code> "Type": "STRING"</code> </p> <p> <code> }</code> </p> <p> <code>
         * ]</code> </p> <p> <code> }</code> </p> <p> <code> }'</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSetAsync(const Model::UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code> </p>
         * <p>CLI syntax: </p> <p> <code>aws quicksight update-data-set-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--grant-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user1","Actions":["quicksight:DescribeDataSet","quicksight:DescribeDataSetPermissions","quicksight:PassDataSet","quicksight:ListIngestions","quicksight:DescribeIngestion"]}]'
         * \</code> </p> <p>
         * <code>--revoke-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user2","Actions":["quicksight:UpdateDataSet","quicksight:DeleteDataSet","quicksight:UpdateDataSetPermissions","quicksight:CreateIngestion","quicksight:CancelIngestion"]}]'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetPermissionsOutcome UpdateDataSetPermissions(const Model::UpdateDataSetPermissionsRequest& request) const;

        /**
         * <p>Updates the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code> </p>
         * <p>CLI syntax: </p> <p> <code>aws quicksight update-data-set-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--grant-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user1","Actions":["quicksight:DescribeDataSet","quicksight:DescribeDataSetPermissions","quicksight:PassDataSet","quicksight:ListIngestions","quicksight:DescribeIngestion"]}]'
         * \</code> </p> <p>
         * <code>--revoke-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user2","Actions":["quicksight:UpdateDataSet","quicksight:DeleteDataSet","quicksight:UpdateDataSetPermissions","quicksight:CreateIngestion","quicksight:CancelIngestion"]}]'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSetPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSetPermissionsOutcomeCallable UpdateDataSetPermissionsCallable(const Model::UpdateDataSetPermissionsRequest& request) const;

        /**
         * <p>Updates the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code> </p>
         * <p>CLI syntax: </p> <p> <code>aws quicksight update-data-set-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-set-id=unique-data-set-id \</code> </p> <p>
         * <code>--grant-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user1","Actions":["quicksight:DescribeDataSet","quicksight:DescribeDataSetPermissions","quicksight:PassDataSet","quicksight:ListIngestions","quicksight:DescribeIngestion"]}]'
         * \</code> </p> <p>
         * <code>--revoke-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user2","Actions":["quicksight:UpdateDataSet","quicksight:DeleteDataSet","quicksight:UpdateDataSetPermissions","quicksight:CreateIngestion","quicksight:CancelIngestion"]}]'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSetPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSetPermissionsAsync(const Model::UpdateDataSetPermissionsRequest& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight update-data-source \</code>
         * </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p>
         * <code>--data-source-parameters='{"PostgreSqlParameters":{"Host":"my-db-host.example.com","Port":1234,"Database":"my-db"}}'
         * \</code> </p> <p>
         * <code>--credentials='{"CredentialPair":{"Username":"username","Password":"password"}}</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight update-data-source \</code>
         * </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p>
         * <code>--data-source-parameters='{"PostgreSqlParameters":{"Host":"my-db-host.example.com","Port":1234,"Database":"my-db"}}'
         * \</code> </p> <p>
         * <code>--credentials='{"CredentialPair":{"Username":"username","Password":"password"}}</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight update-data-source \</code>
         * </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p>
         * <code>--data-source-parameters='{"PostgreSqlParameters":{"Host":"my-db-host.example.com","Port":1234,"Database":"my-db"}}'
         * \</code> </p> <p>
         * <code>--credentials='{"CredentialPair":{"Username":"username","Password":"password"}}</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the permissions to a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight update-data-source-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p>
         * <code>--grant-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user1","Actions":["quicksight:DescribeDataSource","quicksight:DescribeDataSourcePermissions","quicksight:PassDataSource"]}]'
         * \</code> </p> <p>
         * <code>--revoke-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user2","Actions":["quicksight:UpdateDataSource","quicksight:DeleteDataSource","quicksight:UpdateDataSourcePermissions"]}]'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourcePermissionsOutcome UpdateDataSourcePermissions(const Model::UpdateDataSourcePermissionsRequest& request) const;

        /**
         * <p>Updates the permissions to a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight update-data-source-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p>
         * <code>--grant-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user1","Actions":["quicksight:DescribeDataSource","quicksight:DescribeDataSourcePermissions","quicksight:PassDataSource"]}]'
         * \</code> </p> <p>
         * <code>--revoke-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user2","Actions":["quicksight:UpdateDataSource","quicksight:DeleteDataSource","quicksight:UpdateDataSourcePermissions"]}]'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSourcePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourcePermissionsOutcomeCallable UpdateDataSourcePermissionsCallable(const Model::UpdateDataSourcePermissionsRequest& request) const;

        /**
         * <p>Updates the permissions to a data source.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:datasource/data-source-id</code>
         * </p> <p>CLI syntax:</p> <p> <code>aws quicksight update-data-source-permissions
         * \</code> </p> <p> <code>--aws-account-id=111122223333 \</code> </p> <p>
         * <code>--data-source-id=unique-data-source-id \</code> </p> <p> <code>--name='My
         * Data Source' \</code> </p> <p>
         * <code>--grant-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user1","Actions":["quicksight:DescribeDataSource","quicksight:DescribeDataSourcePermissions","quicksight:PassDataSource"]}]'
         * \</code> </p> <p>
         * <code>--revoke-permissions='[{"Principal":"arn:aws:quicksight:us-east-1:111122223333:user/default/user2","Actions":["quicksight:UpdateDataSource","quicksight:DeleteDataSource","quicksight:UpdateDataSourcePermissions"]}]'</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSourcePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourcePermissionsAsync(const Model::UpdateDataSourcePermissionsRequest& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes a group description. </p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p> <p> <b>CLI Sample:</b> </p>
         * <p> <code>aws quicksight update-group --aws-account-id=111122223333
         * --namespace=default --group-name=Sales --description="Sales BI Dashboards"
         * </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Changes a group description. </p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p> <p> <b>CLI Sample:</b> </p>
         * <p> <code>aws quicksight update-group --aws-account-id=111122223333
         * --namespace=default --group-name=Sales --description="Sales BI Dashboards"
         * </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Changes a group description. </p> <p>The permissions resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p> <p> <b>CLI Sample:</b> </p>
         * <p> <code>aws quicksight update-group --aws-account-id=111122223333
         * --namespace=default --group-name=Sales --description="Sales BI Dashboards"
         * </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing assignment. This operation updates only the optional
         * parameter or parameters that are specified in the request.</p> <p>CLI
         * syntax:</p> <p> <code/>aws quicksight update-iam-policy-assignment
         * --aws-account-id=111122223333 --assignment-name=FullAccessAssignment
         * --assignment-status=DRAFT
         * --policy-arns=arn:aws:iam::aws:policy/AdministratorAccess
         * --identities="user=user-1,user-2,group=admin" --namespace=default
         * --region=us-east-1</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIAMPolicyAssignmentOutcome UpdateIAMPolicyAssignment(const Model::UpdateIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Updates an existing assignment. This operation updates only the optional
         * parameter or parameters that are specified in the request.</p> <p>CLI
         * syntax:</p> <p> <code/>aws quicksight update-iam-policy-assignment
         * --aws-account-id=111122223333 --assignment-name=FullAccessAssignment
         * --assignment-status=DRAFT
         * --policy-arns=arn:aws:iam::aws:policy/AdministratorAccess
         * --identities="user=user-1,user-2,group=admin" --namespace=default
         * --region=us-east-1</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIAMPolicyAssignmentOutcomeCallable UpdateIAMPolicyAssignmentCallable(const Model::UpdateIAMPolicyAssignmentRequest& request) const;

        /**
         * <p>Updates an existing assignment. This operation updates only the optional
         * parameter or parameters that are specified in the request.</p> <p>CLI
         * syntax:</p> <p> <code/>aws quicksight update-iam-policy-assignment
         * --aws-account-id=111122223333 --assignment-name=FullAccessAssignment
         * --assignment-status=DRAFT
         * --policy-arns=arn:aws:iam::aws:policy/AdministratorAccess
         * --identities="user=user-1,user-2,group=admin" --namespace=default
         * --region=us-east-1</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIAMPolicyAssignmentAsync(const Model::UpdateIAMPolicyAssignmentRequest& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a template from an existing QuickSight analysis.</p> <p>CLI
         * syntax:</p> <p> <code>aws quicksight update-template --aws-account-id
         * 111122223333 --template-id reports_test_template --data-set-references
         * DataSetPlaceholder=reports,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/c684a204-d134-4c53-a63c-451f72c60c28
         * DataSetPlaceholder=Elblogs,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/15840b7d-b542-4491-937b-602416b367b3
         * —source-entity
         * SourceAnalysis=’{Arn=arn:aws:quicksight:us-west-2:111122223333:analysis/c5731fe9-4708-4598-8f6d-cf2a70875b6d}</code>
         * </p> <p>You can also pass in a json file: <code>aws quicksight update-template
         * —cli-input-json file://create-template.json</code> </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * <p>Updates a template from an existing QuickSight analysis.</p> <p>CLI
         * syntax:</p> <p> <code>aws quicksight update-template --aws-account-id
         * 111122223333 --template-id reports_test_template --data-set-references
         * DataSetPlaceholder=reports,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/c684a204-d134-4c53-a63c-451f72c60c28
         * DataSetPlaceholder=Elblogs,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/15840b7d-b542-4491-937b-602416b367b3
         * —source-entity
         * SourceAnalysis=’{Arn=arn:aws:quicksight:us-west-2:111122223333:analysis/c5731fe9-4708-4598-8f6d-cf2a70875b6d}</code>
         * </p> <p>You can also pass in a json file: <code>aws quicksight update-template
         * —cli-input-json file://create-template.json</code> </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const Model::UpdateTemplateRequest& request) const;

        /**
         * <p>Updates a template from an existing QuickSight analysis.</p> <p>CLI
         * syntax:</p> <p> <code>aws quicksight update-template --aws-account-id
         * 111122223333 --template-id reports_test_template --data-set-references
         * DataSetPlaceholder=reports,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/c684a204-d134-4c53-a63c-451f72c60c28
         * DataSetPlaceholder=Elblogs,DataSetArn=arn:aws:quicksight:us-west-2:111122223333:dataset/15840b7d-b542-4491-937b-602416b367b3
         * —source-entity
         * SourceAnalysis=’{Arn=arn:aws:quicksight:us-west-2:111122223333:analysis/c5731fe9-4708-4598-8f6d-cf2a70875b6d}</code>
         * </p> <p>You can also pass in a json file: <code>aws quicksight update-template
         * —cli-input-json file://create-template.json</code> </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the template alias of a template.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-template-alias --aws-account-id 111122223333
         * --template-id 'reports_test_template' --alias-name STAGING
         * —template-version-number 2 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateAliasOutcome UpdateTemplateAlias(const Model::UpdateTemplateAliasRequest& request) const;

        /**
         * <p>Updates the template alias of a template.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-template-alias --aws-account-id 111122223333
         * --template-id 'reports_test_template' --alias-name STAGING
         * —template-version-number 2 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateAliasOutcomeCallable UpdateTemplateAliasCallable(const Model::UpdateTemplateAliasRequest& request) const;

        /**
         * <p>Updates the template alias of a template.</p> <p>CLI syntax:</p> <p>
         * <code>aws quicksight update-template-alias --aws-account-id 111122223333
         * --template-id 'reports_test_template' --alias-name STAGING
         * —template-version-number 2 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateAliasAsync(const Model::UpdateTemplateAliasRequest& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the permissions on a template.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight describe-template-permissions —aws-account-id 111122223333
         * —template-id reports_test_template</code> </p> </li> <li> <p> <code>aws
         * quicksight update-template-permissions —cli-input-json
         * file://update-permission.json </code> </p> </li> <li> <p>The structure of
         * <code>update-permissions.json</code> to add permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333",</code> </p> <p> <code> "DashboardId":
         * "reports_test_template",</code> </p> <p> <code> "GrantPermissions": [</code>
         * </p> <p> <code> { "Principal":
         * "arn:aws:quicksight:us-east-1:196359894473:user/default/user3",</code> </p> <p>
         * <code> "Actions": [</code> </p> <p> <code> "quicksight:DescribeTemplate",</code>
         * </p> <p> <code> "quicksight:ListTemplateVersions"</code> </p> <p> <code> ] } ]
         * }</code> </p> <p>The structure of <code>update-permissions.json</code> to add
         * permissions:</p> <p> <code>{ "AwsAccountId": "111122223333",</code> </p> <p>
         * <code> "DashboardId": "reports_test_template",</code> </p> <p> <code>
         * "RevokePermissions": [</code> </p> <p> <code> { "Principal":
         * "arn:aws:quicksight:us-east-1:196359894473:user/default/user3",</code> </p> <p>
         * <code> "Actions": [</code> </p> <p> <code> "quicksight:DescribeTemplate",</code>
         * </p> <p> <code> "quicksight:ListTemplateVersions"</code> </p> <p> <code> ] } ]
         * }</code> </p> <p>To obtain the principal name of a QuickSight group or user, use
         * user describe-group or describe-user. For example:</p> <p> <code>aws quicksight
         * describe-user </code> </p> <p> <code>--aws-account-id 111122223333</code> </p>
         * <p> <code>--namespace default</code> </p> <p> <code>--user-name user2 </code>
         * </p> <p> <code>--region us-east-1</code> </p> <p> <code>{</code> </p> <p> <code>
         * "User": {</code> </p> <p> <code> "Arn":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2",</code> </p> <p>
         * <code> "Active": true,</code> </p> <p> <code> "Email":
         * "user2@example.com",</code> </p> <p> <code> "Role": "ADMIN",</code> </p> <p>
         * <code> "UserName": "user2",</code> </p> <p> <code> "PrincipalId":
         * "federated/iam/abcd2abcdabcdeabc5ab5"</code> </p> <p> <code> },</code> </p> <p>
         * <code> "RequestId": "8f74bb31-6291-448a-a71c-a765a44bae31",</code> </p> <p>
         * <code> "Status": 200</code> </p> <p> <code>}</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplatePermissionsOutcome UpdateTemplatePermissions(const Model::UpdateTemplatePermissionsRequest& request) const;

        /**
         * <p>Updates the permissions on a template.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight describe-template-permissions —aws-account-id 111122223333
         * —template-id reports_test_template</code> </p> </li> <li> <p> <code>aws
         * quicksight update-template-permissions —cli-input-json
         * file://update-permission.json </code> </p> </li> <li> <p>The structure of
         * <code>update-permissions.json</code> to add permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333",</code> </p> <p> <code> "DashboardId":
         * "reports_test_template",</code> </p> <p> <code> "GrantPermissions": [</code>
         * </p> <p> <code> { "Principal":
         * "arn:aws:quicksight:us-east-1:196359894473:user/default/user3",</code> </p> <p>
         * <code> "Actions": [</code> </p> <p> <code> "quicksight:DescribeTemplate",</code>
         * </p> <p> <code> "quicksight:ListTemplateVersions"</code> </p> <p> <code> ] } ]
         * }</code> </p> <p>The structure of <code>update-permissions.json</code> to add
         * permissions:</p> <p> <code>{ "AwsAccountId": "111122223333",</code> </p> <p>
         * <code> "DashboardId": "reports_test_template",</code> </p> <p> <code>
         * "RevokePermissions": [</code> </p> <p> <code> { "Principal":
         * "arn:aws:quicksight:us-east-1:196359894473:user/default/user3",</code> </p> <p>
         * <code> "Actions": [</code> </p> <p> <code> "quicksight:DescribeTemplate",</code>
         * </p> <p> <code> "quicksight:ListTemplateVersions"</code> </p> <p> <code> ] } ]
         * }</code> </p> <p>To obtain the principal name of a QuickSight group or user, use
         * user describe-group or describe-user. For example:</p> <p> <code>aws quicksight
         * describe-user </code> </p> <p> <code>--aws-account-id 111122223333</code> </p>
         * <p> <code>--namespace default</code> </p> <p> <code>--user-name user2 </code>
         * </p> <p> <code>--region us-east-1</code> </p> <p> <code>{</code> </p> <p> <code>
         * "User": {</code> </p> <p> <code> "Arn":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2",</code> </p> <p>
         * <code> "Active": true,</code> </p> <p> <code> "Email":
         * "user2@example.com",</code> </p> <p> <code> "Role": "ADMIN",</code> </p> <p>
         * <code> "UserName": "user2",</code> </p> <p> <code> "PrincipalId":
         * "federated/iam/abcd2abcdabcdeabc5ab5"</code> </p> <p> <code> },</code> </p> <p>
         * <code> "RequestId": "8f74bb31-6291-448a-a71c-a765a44bae31",</code> </p> <p>
         * <code> "Status": 200</code> </p> <p> <code>}</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplatePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplatePermissionsOutcomeCallable UpdateTemplatePermissionsCallable(const Model::UpdateTemplatePermissionsRequest& request) const;

        /**
         * <p>Updates the permissions on a template.</p> <p>CLI syntax:</p> <ul> <li> <p>
         * <code>aws quicksight describe-template-permissions —aws-account-id 111122223333
         * —template-id reports_test_template</code> </p> </li> <li> <p> <code>aws
         * quicksight update-template-permissions —cli-input-json
         * file://update-permission.json </code> </p> </li> <li> <p>The structure of
         * <code>update-permissions.json</code> to add permissions:</p> <p> <code>{
         * "AwsAccountId": "111122223333",</code> </p> <p> <code> "DashboardId":
         * "reports_test_template",</code> </p> <p> <code> "GrantPermissions": [</code>
         * </p> <p> <code> { "Principal":
         * "arn:aws:quicksight:us-east-1:196359894473:user/default/user3",</code> </p> <p>
         * <code> "Actions": [</code> </p> <p> <code> "quicksight:DescribeTemplate",</code>
         * </p> <p> <code> "quicksight:ListTemplateVersions"</code> </p> <p> <code> ] } ]
         * }</code> </p> <p>The structure of <code>update-permissions.json</code> to add
         * permissions:</p> <p> <code>{ "AwsAccountId": "111122223333",</code> </p> <p>
         * <code> "DashboardId": "reports_test_template",</code> </p> <p> <code>
         * "RevokePermissions": [</code> </p> <p> <code> { "Principal":
         * "arn:aws:quicksight:us-east-1:196359894473:user/default/user3",</code> </p> <p>
         * <code> "Actions": [</code> </p> <p> <code> "quicksight:DescribeTemplate",</code>
         * </p> <p> <code> "quicksight:ListTemplateVersions"</code> </p> <p> <code> ] } ]
         * }</code> </p> <p>To obtain the principal name of a QuickSight group or user, use
         * user describe-group or describe-user. For example:</p> <p> <code>aws quicksight
         * describe-user </code> </p> <p> <code>--aws-account-id 111122223333</code> </p>
         * <p> <code>--namespace default</code> </p> <p> <code>--user-name user2 </code>
         * </p> <p> <code>--region us-east-1</code> </p> <p> <code>{</code> </p> <p> <code>
         * "User": {</code> </p> <p> <code> "Arn":
         * "arn:aws:quicksight:us-east-1:111122223333:user/default/user2",</code> </p> <p>
         * <code> "Active": true,</code> </p> <p> <code> "Email":
         * "user2@example.com",</code> </p> <p> <code> "Role": "ADMIN",</code> </p> <p>
         * <code> "UserName": "user2",</code> </p> <p> <code> "PrincipalId":
         * "federated/iam/abcd2abcdabcdeabc5ab5"</code> </p> <p> <code> },</code> </p> <p>
         * <code> "RequestId": "8f74bb31-6291-448a-a71c-a765a44bae31",</code> </p> <p>
         * <code> "Status": 200</code> </p> <p> <code>}</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplatePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplatePermissionsAsync(const Model::UpdateTemplatePermissionsRequest& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon QuickSight user.</p> <p>The response is a user object that
         * contains the user's Amazon QuickSight user name, email address, active or
         * inactive status in Amazon QuickSight, Amazon QuickSight role, and Amazon
         * Resource Name (ARN). </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * update-user --user-name=Pat --role=ADMIN --email=new_address@example.com
         * --aws-account-id=111122223333 --namespace=default --region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates an Amazon QuickSight user.</p> <p>The response is a user object that
         * contains the user's Amazon QuickSight user name, email address, active or
         * inactive status in Amazon QuickSight, Amazon QuickSight role, and Amazon
         * Resource Name (ARN). </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * update-user --user-name=Pat --role=ADMIN --email=new_address@example.com
         * --aws-account-id=111122223333 --namespace=default --region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates an Amazon QuickSight user.</p> <p>The response is a user object that
         * contains the user's Amazon QuickSight user name, email address, active or
         * inactive status in Amazon QuickSight, Amazon QuickSight role, and Amazon
         * Resource Name (ARN). </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * update-user --user-name=Pat --role=ADMIN --email=new_address@example.com
         * --aws-account-id=111122223333 --namespace=default --region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelIngestionAsyncHelper(const Model::CancelIngestionRequest& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDashboardAsyncHelper(const Model::CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSetAsyncHelper(const Model::CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSourceAsyncHelper(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupMembershipAsyncHelper(const Model::CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIAMPolicyAssignmentAsyncHelper(const Model::CreateIAMPolicyAssignmentRequest& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIngestionAsyncHelper(const Model::CreateIngestionRequest& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTemplateAsyncHelper(const Model::CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTemplateAliasAsyncHelper(const Model::CreateTemplateAliasRequest& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDashboardAsyncHelper(const Model::DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataSetAsyncHelper(const Model::DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataSourceAsyncHelper(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupMembershipAsyncHelper(const Model::DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIAMPolicyAssignmentAsyncHelper(const Model::DeleteIAMPolicyAssignmentRequest& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTemplateAsyncHelper(const Model::DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTemplateAliasAsyncHelper(const Model::DeleteTemplateAliasRequest& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserByPrincipalIdAsyncHelper(const Model::DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDashboardAsyncHelper(const Model::DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDashboardPermissionsAsyncHelper(const Model::DescribeDashboardPermissionsRequest& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSetAsyncHelper(const Model::DescribeDataSetRequest& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSetPermissionsAsyncHelper(const Model::DescribeDataSetPermissionsRequest& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSourceAsyncHelper(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSourcePermissionsAsyncHelper(const Model::DescribeDataSourcePermissionsRequest& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupAsyncHelper(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIAMPolicyAssignmentAsyncHelper(const Model::DescribeIAMPolicyAssignmentRequest& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIngestionAsyncHelper(const Model::DescribeIngestionRequest& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTemplateAsyncHelper(const Model::DescribeTemplateRequest& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTemplateAliasAsyncHelper(const Model::DescribeTemplateAliasRequest& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTemplatePermissionsAsyncHelper(const Model::DescribeTemplatePermissionsRequest& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDashboardEmbedUrlAsyncHelper(const Model::GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDashboardVersionsAsyncHelper(const Model::ListDashboardVersionsRequest& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDashboardsAsyncHelper(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataSetsAsyncHelper(const Model::ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataSourcesAsyncHelper(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupMembershipsAsyncHelper(const Model::ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIAMPolicyAssignmentsAsyncHelper(const Model::ListIAMPolicyAssignmentsRequest& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIAMPolicyAssignmentsForUserAsyncHelper(const Model::ListIAMPolicyAssignmentsForUserRequest& request, const ListIAMPolicyAssignmentsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIngestionsAsyncHelper(const Model::ListIngestionsRequest& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTemplateAliasesAsyncHelper(const Model::ListTemplateAliasesRequest& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTemplateVersionsAsyncHelper(const Model::ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTemplatesAsyncHelper(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserGroupsAsyncHelper(const Model::ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterUserAsyncHelper(const Model::RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDashboardAsyncHelper(const Model::UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDashboardPermissionsAsyncHelper(const Model::UpdateDashboardPermissionsRequest& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDashboardPublishedVersionAsyncHelper(const Model::UpdateDashboardPublishedVersionRequest& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSetAsyncHelper(const Model::UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSetPermissionsAsyncHelper(const Model::UpdateDataSetPermissionsRequest& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSourceAsyncHelper(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSourcePermissionsAsyncHelper(const Model::UpdateDataSourcePermissionsRequest& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIAMPolicyAssignmentAsyncHelper(const Model::UpdateIAMPolicyAssignmentRequest& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTemplateAsyncHelper(const Model::UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTemplateAliasAsyncHelper(const Model::UpdateTemplateAliasRequest& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTemplatePermissionsAsyncHelper(const Model::UpdateTemplatePermissionsRequest& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace QuickSight
} // namespace Aws
