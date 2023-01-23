/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/identitystore/IdentityStoreErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/identitystore/IdentityStoreEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IdentityStoreClient header */
#include <aws/identitystore/model/CreateGroupResult.h>
#include <aws/identitystore/model/CreateGroupMembershipResult.h>
#include <aws/identitystore/model/CreateUserResult.h>
#include <aws/identitystore/model/DeleteGroupResult.h>
#include <aws/identitystore/model/DeleteGroupMembershipResult.h>
#include <aws/identitystore/model/DeleteUserResult.h>
#include <aws/identitystore/model/DescribeGroupResult.h>
#include <aws/identitystore/model/DescribeGroupMembershipResult.h>
#include <aws/identitystore/model/DescribeUserResult.h>
#include <aws/identitystore/model/GetGroupIdResult.h>
#include <aws/identitystore/model/GetGroupMembershipIdResult.h>
#include <aws/identitystore/model/GetUserIdResult.h>
#include <aws/identitystore/model/IsMemberInGroupsResult.h>
#include <aws/identitystore/model/ListGroupMembershipsResult.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberResult.h>
#include <aws/identitystore/model/ListGroupsResult.h>
#include <aws/identitystore/model/ListUsersResult.h>
#include <aws/identitystore/model/UpdateGroupResult.h>
#include <aws/identitystore/model/UpdateUserResult.h>
/* End of service model headers required in IdentityStoreClient header */

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

  namespace IdentityStore
  {
    using IdentityStoreClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IdentityStoreEndpointProviderBase = Aws::IdentityStore::Endpoint::IdentityStoreEndpointProviderBase;
    using IdentityStoreEndpointProvider = Aws::IdentityStore::Endpoint::IdentityStoreEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IdentityStoreClient header */
      class CreateGroupRequest;
      class CreateGroupMembershipRequest;
      class CreateUserRequest;
      class DeleteGroupRequest;
      class DeleteGroupMembershipRequest;
      class DeleteUserRequest;
      class DescribeGroupRequest;
      class DescribeGroupMembershipRequest;
      class DescribeUserRequest;
      class GetGroupIdRequest;
      class GetGroupMembershipIdRequest;
      class GetUserIdRequest;
      class IsMemberInGroupsRequest;
      class ListGroupMembershipsRequest;
      class ListGroupMembershipsForMemberRequest;
      class ListGroupsRequest;
      class ListUsersRequest;
      class UpdateGroupRequest;
      class UpdateUserRequest;
      /* End of service model forward declarations required in IdentityStoreClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateGroupResult, IdentityStoreError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateGroupMembershipResult, IdentityStoreError> CreateGroupMembershipOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, IdentityStoreError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, IdentityStoreError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupMembershipResult, IdentityStoreError> DeleteGroupMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, IdentityStoreError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DescribeGroupResult, IdentityStoreError> DescribeGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeGroupMembershipResult, IdentityStoreError> DescribeGroupMembershipOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, IdentityStoreError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<GetGroupIdResult, IdentityStoreError> GetGroupIdOutcome;
      typedef Aws::Utils::Outcome<GetGroupMembershipIdResult, IdentityStoreError> GetGroupMembershipIdOutcome;
      typedef Aws::Utils::Outcome<GetUserIdResult, IdentityStoreError> GetUserIdOutcome;
      typedef Aws::Utils::Outcome<IsMemberInGroupsResult, IdentityStoreError> IsMemberInGroupsOutcome;
      typedef Aws::Utils::Outcome<ListGroupMembershipsResult, IdentityStoreError> ListGroupMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListGroupMembershipsForMemberResult, IdentityStoreError> ListGroupMembershipsForMemberOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, IdentityStoreError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, IdentityStoreError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupResult, IdentityStoreError> UpdateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, IdentityStoreError> UpdateUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<CreateGroupMembershipOutcome> CreateGroupMembershipOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DeleteGroupMembershipOutcome> DeleteGroupMembershipOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
      typedef std::future<DescribeGroupMembershipOutcome> DescribeGroupMembershipOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<GetGroupIdOutcome> GetGroupIdOutcomeCallable;
      typedef std::future<GetGroupMembershipIdOutcome> GetGroupMembershipIdOutcomeCallable;
      typedef std::future<GetUserIdOutcome> GetUserIdOutcomeCallable;
      typedef std::future<IsMemberInGroupsOutcome> IsMemberInGroupsOutcomeCallable;
      typedef std::future<ListGroupMembershipsOutcome> ListGroupMembershipsOutcomeCallable;
      typedef std::future<ListGroupMembershipsForMemberOutcome> ListGroupMembershipsForMemberOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IdentityStoreClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IdentityStoreClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::CreateGroupMembershipRequest&, const Model::CreateGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::DeleteGroupMembershipRequest&, const Model::DeleteGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::DescribeGroupMembershipRequest&, const Model::DescribeGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::GetGroupIdRequest&, const Model::GetGroupIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupIdResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::GetGroupMembershipIdRequest&, const Model::GetGroupMembershipIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupMembershipIdResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::GetUserIdRequest&, const Model::GetUserIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserIdResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::IsMemberInGroupsRequest&, const Model::IsMemberInGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IsMemberInGroupsResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::ListGroupMembershipsRequest&, const Model::ListGroupMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembershipsResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::ListGroupMembershipsForMemberRequest&, const Model::ListGroupMembershipsForMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembershipsForMemberResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const IdentityStoreClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IdentityStore
} // namespace Aws
