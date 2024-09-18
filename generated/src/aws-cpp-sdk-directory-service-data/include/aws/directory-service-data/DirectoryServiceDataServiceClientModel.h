/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/directory-service-data/DirectoryServiceDataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/directory-service-data/DirectoryServiceDataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DirectoryServiceDataClient header */
#include <aws/directory-service-data/model/AddGroupMemberResult.h>
#include <aws/directory-service-data/model/CreateGroupResult.h>
#include <aws/directory-service-data/model/CreateUserResult.h>
#include <aws/directory-service-data/model/DeleteGroupResult.h>
#include <aws/directory-service-data/model/DeleteUserResult.h>
#include <aws/directory-service-data/model/DescribeGroupResult.h>
#include <aws/directory-service-data/model/DescribeUserResult.h>
#include <aws/directory-service-data/model/DisableUserResult.h>
#include <aws/directory-service-data/model/ListGroupMembersResult.h>
#include <aws/directory-service-data/model/ListGroupsResult.h>
#include <aws/directory-service-data/model/ListGroupsForMemberResult.h>
#include <aws/directory-service-data/model/ListUsersResult.h>
#include <aws/directory-service-data/model/RemoveGroupMemberResult.h>
#include <aws/directory-service-data/model/SearchGroupsResult.h>
#include <aws/directory-service-data/model/SearchUsersResult.h>
#include <aws/directory-service-data/model/UpdateGroupResult.h>
#include <aws/directory-service-data/model/UpdateUserResult.h>
/* End of service model headers required in DirectoryServiceDataClient header */

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

  namespace DirectoryServiceData
  {
    using DirectoryServiceDataClientConfiguration = Aws::Client::GenericClientConfiguration;
    using DirectoryServiceDataEndpointProviderBase = Aws::DirectoryServiceData::Endpoint::DirectoryServiceDataEndpointProviderBase;
    using DirectoryServiceDataEndpointProvider = Aws::DirectoryServiceData::Endpoint::DirectoryServiceDataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DirectoryServiceDataClient header */
      class AddGroupMemberRequest;
      class CreateGroupRequest;
      class CreateUserRequest;
      class DeleteGroupRequest;
      class DeleteUserRequest;
      class DescribeGroupRequest;
      class DescribeUserRequest;
      class DisableUserRequest;
      class ListGroupMembersRequest;
      class ListGroupsRequest;
      class ListGroupsForMemberRequest;
      class ListUsersRequest;
      class RemoveGroupMemberRequest;
      class SearchGroupsRequest;
      class SearchUsersRequest;
      class UpdateGroupRequest;
      class UpdateUserRequest;
      /* End of service model forward declarations required in DirectoryServiceDataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddGroupMemberResult, DirectoryServiceDataError> AddGroupMemberOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, DirectoryServiceDataError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, DirectoryServiceDataError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, DirectoryServiceDataError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, DirectoryServiceDataError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DescribeGroupResult, DirectoryServiceDataError> DescribeGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, DirectoryServiceDataError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<DisableUserResult, DirectoryServiceDataError> DisableUserOutcome;
      typedef Aws::Utils::Outcome<ListGroupMembersResult, DirectoryServiceDataError> ListGroupMembersOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, DirectoryServiceDataError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListGroupsForMemberResult, DirectoryServiceDataError> ListGroupsForMemberOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, DirectoryServiceDataError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<RemoveGroupMemberResult, DirectoryServiceDataError> RemoveGroupMemberOutcome;
      typedef Aws::Utils::Outcome<SearchGroupsResult, DirectoryServiceDataError> SearchGroupsOutcome;
      typedef Aws::Utils::Outcome<SearchUsersResult, DirectoryServiceDataError> SearchUsersOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupResult, DirectoryServiceDataError> UpdateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, DirectoryServiceDataError> UpdateUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddGroupMemberOutcome> AddGroupMemberOutcomeCallable;
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<DisableUserOutcome> DisableUserOutcomeCallable;
      typedef std::future<ListGroupMembersOutcome> ListGroupMembersOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListGroupsForMemberOutcome> ListGroupsForMemberOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<RemoveGroupMemberOutcome> RemoveGroupMemberOutcomeCallable;
      typedef std::future<SearchGroupsOutcome> SearchGroupsOutcomeCallable;
      typedef std::future<SearchUsersOutcome> SearchUsersOutcomeCallable;
      typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DirectoryServiceDataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::AddGroupMemberRequest&, const Model::AddGroupMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddGroupMemberResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::DisableUserRequest&, const Model::DisableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableUserResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::ListGroupMembersRequest&, const Model::ListGroupMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::ListGroupsForMemberRequest&, const Model::ListGroupsForMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsForMemberResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::RemoveGroupMemberRequest&, const Model::RemoveGroupMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveGroupMemberResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::SearchGroupsRequest&, const Model::SearchGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGroupsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::SearchUsersRequest&, const Model::SearchUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchUsersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceDataClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DirectoryServiceData
} // namespace Aws
