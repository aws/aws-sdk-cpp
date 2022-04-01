/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

namespace IdentityStore
{

namespace Model
{
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
} // namespace Model

  class IdentityStoreClient;

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

  /**
   * <p>The AWS Single Sign-On (SSO) Identity Store service provides a single place
   * to retrieve all of your identities (users and groups). For more information
   * about AWS, see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">AWS
   * Single Sign-On User Guide</a>.</p>
   */
  class AWS_IDENTITYSTORE_API IdentityStoreClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IdentityStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IdentityStoreClient();


        /**
         * <p>Creates a group within the specified identity store.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/CreateGroup">AWS
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
         * <p>Creates a relationship between a member and a group. The following
         * identifiers must be specified: <code>GroupId</code>,
         * <code>IdentityStoreId</code>, and <code>MemberId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/CreateGroupMembership">AWS
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
         * <p>Creates a new user within the specified identity store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a group within an identity store given
         * <code>GroupId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DeleteGroup">AWS
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
         * <p>Delete a membership within a group given
         * <code>MembershipId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DeleteGroupMembership">AWS
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
         * <p>Deletes a user within an identity store given
         * <code>UserId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DeleteUser">AWS
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
         * <p>Retrieves the group metadata and attributes from <code>GroupId</code> in an
         * identity store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeGroup">AWS
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
         * <p>Retrieves membership metadata and attributes from <code>MembershipId</code>
         * in a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeGroupMembership">AWS
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
         * <p>Retrieves the user metadata and attributes from the <code>UserId</code> in an
         * identity store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeUser">AWS
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
         * <p>Retrieves <code>GroupId</code> in an identity store.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetGroupId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupIdOutcome GetGroupId(const Model::GetGroupIdRequest& request) const;

        /**
         * A Callable wrapper for GetGroupId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupIdOutcomeCallable GetGroupIdCallable(const Model::GetGroupIdRequest& request) const;

        /**
         * An Async wrapper for GetGroupId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupIdAsync(const Model::GetGroupIdRequest& request, const GetGroupIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>MembershipId</code> in a group.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetGroupMembershipId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupMembershipIdOutcome GetGroupMembershipId(const Model::GetGroupMembershipIdRequest& request) const;

        /**
         * A Callable wrapper for GetGroupMembershipId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupMembershipIdOutcomeCallable GetGroupMembershipIdCallable(const Model::GetGroupMembershipIdRequest& request) const;

        /**
         * An Async wrapper for GetGroupMembershipId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupMembershipIdAsync(const Model::GetGroupMembershipIdRequest& request, const GetGroupMembershipIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>UserId</code> in an identity store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetUserId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserIdOutcome GetUserId(const Model::GetUserIdRequest& request) const;

        /**
         * A Callable wrapper for GetUserId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserIdOutcomeCallable GetUserIdCallable(const Model::GetUserIdRequest& request) const;

        /**
         * An Async wrapper for GetUserId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserIdAsync(const Model::GetUserIdRequest& request, const GetUserIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns if a member exists in specified groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/IsMemberInGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::IsMemberInGroupsOutcome IsMemberInGroups(const Model::IsMemberInGroupsRequest& request) const;

        /**
         * A Callable wrapper for IsMemberInGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IsMemberInGroupsOutcomeCallable IsMemberInGroupsCallable(const Model::IsMemberInGroupsRequest& request) const;

        /**
         * An Async wrapper for IsMemberInGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IsMemberInGroupsAsync(const Model::IsMemberInGroupsRequest& request, const IsMemberInGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For the specified group in the specified identity store, returns the list of
         * all <code>GroupMembership</code> objects and returns results in paginated
         * form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroupMemberships">AWS
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
         * <p>For the specified member in the specified identity store, returns the list of
         * all <code>GroupMembership</code> objects and returns results in paginated
         * form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroupMembershipsForMember">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsForMemberOutcome ListGroupMembershipsForMember(const Model::ListGroupMembershipsForMemberRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMembershipsForMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupMembershipsForMemberOutcomeCallable ListGroupMembershipsForMemberCallable(const Model::ListGroupMembershipsForMemberRequest& request) const;

        /**
         * An Async wrapper for ListGroupMembershipsForMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupMembershipsForMemberAsync(const Model::ListGroupMembershipsForMemberRequest& request, const ListGroupMembershipsForMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <i>Filtering for a group by the group <code>DisplayName</code> attribute is
         * deprecated. Instead, use the <code>GetGroupId</code> API action.</i> </p>
         * <p>Lists all groups in the identity store. Returns a paginated list of complete
         * <code>Group</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroups">AWS
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
         * <p> <i>Filtering for a user by the <code>UserName</code> attribute is
         * deprecated. Instead, use the <code>GetUserId</code> API action.</i> </p>
         * <p>Lists all users in the identity store. Returns a paginated list of complete
         * <code>User</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListUsers">AWS
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
         * <p>For the specified group in the specified identity store, updates the group
         * metadata and attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/UpdateGroup">AWS
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
         * <p>For the specified user in the specified identity store, updates the user
         * metadata and attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/UpdateUser">AWS
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
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupMembershipAsyncHelper(const Model::CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupMembershipAsyncHelper(const Model::DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupAsyncHelper(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupMembershipAsyncHelper(const Model::DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupIdAsyncHelper(const Model::GetGroupIdRequest& request, const GetGroupIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupMembershipIdAsyncHelper(const Model::GetGroupMembershipIdRequest& request, const GetGroupMembershipIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserIdAsyncHelper(const Model::GetUserIdRequest& request, const GetUserIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IsMemberInGroupsAsyncHelper(const Model::IsMemberInGroupsRequest& request, const IsMemberInGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupMembershipsAsyncHelper(const Model::ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupMembershipsForMemberAsyncHelper(const Model::ListGroupMembershipsForMemberRequest& request, const ListGroupMembershipsForMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IdentityStore
} // namespace Aws
