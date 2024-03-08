/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/IdentityStoreServiceClientModel.h>

namespace Aws
{
namespace IdentityStore
{
  /**
   * <p>The Identity Store service used by IAM Identity Center provides a single
   * place to retrieve all of your identities (users and groups). For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM
   * Identity Center User Guide</a>.</p> <p>This reference guide describes the
   * identity store operations that you can call programmatically and includes
   * detailed information about data types and errors.</p>  <p>IAM Identity
   * Center uses the <code>sso</code> and <code>identitystore</code> API
   * namespaces.</p> 
   */
  class AWS_IDENTITYSTORE_API IdentityStoreClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IdentityStoreClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IdentityStoreClientConfiguration ClientConfigurationType;
      typedef IdentityStoreEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::IdentityStore::IdentityStoreClientConfiguration& clientConfiguration = Aws::IdentityStore::IdentityStoreClientConfiguration(),
                            std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::IdentityStore::IdentityStoreClientConfiguration& clientConfiguration = Aws::IdentityStore::IdentityStoreClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IdentityStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::IdentityStore::IdentityStoreClientConfiguration& clientConfiguration = Aws::IdentityStore::IdentityStoreClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IdentityStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::CreateGroup, request, handler, context);
        }

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
        template<typename CreateGroupMembershipRequestT = Model::CreateGroupMembershipRequest>
        Model::CreateGroupMembershipOutcomeCallable CreateGroupMembershipCallable(const CreateGroupMembershipRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::CreateGroupMembership, request);
        }

        /**
         * An Async wrapper for CreateGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupMembershipRequestT = Model::CreateGroupMembershipRequest>
        void CreateGroupMembershipAsync(const CreateGroupMembershipRequestT& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::CreateGroupMembership, request, handler, context);
        }

        /**
         * <p>Creates a user within the specified identity store.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::CreateUser, request, handler, context);
        }

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
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::DeleteGroup, request, handler, context);
        }

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
        template<typename DeleteGroupMembershipRequestT = Model::DeleteGroupMembershipRequest>
        Model::DeleteGroupMembershipOutcomeCallable DeleteGroupMembershipCallable(const DeleteGroupMembershipRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::DeleteGroupMembership, request);
        }

        /**
         * An Async wrapper for DeleteGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupMembershipRequestT = Model::DeleteGroupMembershipRequest>
        void DeleteGroupMembershipAsync(const DeleteGroupMembershipRequestT& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::DeleteGroupMembership, request, handler, context);
        }

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
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Retrieves the group metadata and attributes from <code>GroupId</code> in an
         * identity store.</p>  <p>If you have administrator access to a member
         * account, you can use this API from the member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const DescribeGroupRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::DescribeGroup, request);
        }

        /**
         * An Async wrapper for DescribeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        void DescribeGroupAsync(const DescribeGroupRequestT& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::DescribeGroup, request, handler, context);
        }

        /**
         * <p>Retrieves membership metadata and attributes from <code>MembershipId</code>
         * in an identity store.</p>  <p>If you have administrator access to a member
         * account, you can use this API from the member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupMembershipOutcome DescribeGroupMembership(const Model::DescribeGroupMembershipRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroupMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGroupMembershipRequestT = Model::DescribeGroupMembershipRequest>
        Model::DescribeGroupMembershipOutcomeCallable DescribeGroupMembershipCallable(const DescribeGroupMembershipRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::DescribeGroupMembership, request);
        }

        /**
         * An Async wrapper for DescribeGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGroupMembershipRequestT = Model::DescribeGroupMembershipRequest>
        void DescribeGroupMembershipAsync(const DescribeGroupMembershipRequestT& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::DescribeGroupMembership, request, handler, context);
        }

        /**
         * <p>Retrieves the user metadata and attributes from the <code>UserId</code> in an
         * identity store.</p>  <p>If you have administrator access to a member
         * account, you can use this API from the member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        Model::DescribeUserOutcomeCallable DescribeUserCallable(const DescribeUserRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::DescribeUser, request);
        }

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        void DescribeUserAsync(const DescribeUserRequestT& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::DescribeUser, request, handler, context);
        }

        /**
         * <p>Retrieves <code>GroupId</code> in an identity store.</p>  <p>If you
         * have administrator access to a member account, you can use this API from the
         * member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetGroupId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupIdOutcome GetGroupId(const Model::GetGroupIdRequest& request) const;

        /**
         * A Callable wrapper for GetGroupId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupIdRequestT = Model::GetGroupIdRequest>
        Model::GetGroupIdOutcomeCallable GetGroupIdCallable(const GetGroupIdRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::GetGroupId, request);
        }

        /**
         * An Async wrapper for GetGroupId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupIdRequestT = Model::GetGroupIdRequest>
        void GetGroupIdAsync(const GetGroupIdRequestT& request, const GetGroupIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::GetGroupId, request, handler, context);
        }

        /**
         * <p>Retrieves the <code>MembershipId</code> in an identity store.</p> 
         * <p>If you have administrator access to a member account, you can use this API
         * from the member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetGroupMembershipId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupMembershipIdOutcome GetGroupMembershipId(const Model::GetGroupMembershipIdRequest& request) const;

        /**
         * A Callable wrapper for GetGroupMembershipId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupMembershipIdRequestT = Model::GetGroupMembershipIdRequest>
        Model::GetGroupMembershipIdOutcomeCallable GetGroupMembershipIdCallable(const GetGroupMembershipIdRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::GetGroupMembershipId, request);
        }

        /**
         * An Async wrapper for GetGroupMembershipId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupMembershipIdRequestT = Model::GetGroupMembershipIdRequest>
        void GetGroupMembershipIdAsync(const GetGroupMembershipIdRequestT& request, const GetGroupMembershipIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::GetGroupMembershipId, request, handler, context);
        }

        /**
         * <p>Retrieves the <code>UserId</code> in an identity store.</p>  <p>If you
         * have administrator access to a member account, you can use this API from the
         * member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetUserId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserIdOutcome GetUserId(const Model::GetUserIdRequest& request) const;

        /**
         * A Callable wrapper for GetUserId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserIdRequestT = Model::GetUserIdRequest>
        Model::GetUserIdOutcomeCallable GetUserIdCallable(const GetUserIdRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::GetUserId, request);
        }

        /**
         * An Async wrapper for GetUserId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserIdRequestT = Model::GetUserIdRequest>
        void GetUserIdAsync(const GetUserIdRequestT& request, const GetUserIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::GetUserId, request, handler, context);
        }

        /**
         * <p>Checks the user's membership in all requested groups and returns if the
         * member exists in all queried groups.</p>  <p>If you have administrator
         * access to a member account, you can use this API from the member account. Read
         * about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/IsMemberInGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::IsMemberInGroupsOutcome IsMemberInGroups(const Model::IsMemberInGroupsRequest& request) const;

        /**
         * A Callable wrapper for IsMemberInGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IsMemberInGroupsRequestT = Model::IsMemberInGroupsRequest>
        Model::IsMemberInGroupsOutcomeCallable IsMemberInGroupsCallable(const IsMemberInGroupsRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::IsMemberInGroups, request);
        }

        /**
         * An Async wrapper for IsMemberInGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IsMemberInGroupsRequestT = Model::IsMemberInGroupsRequest>
        void IsMemberInGroupsAsync(const IsMemberInGroupsRequestT& request, const IsMemberInGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::IsMemberInGroups, request, handler, context);
        }

        /**
         * <p>For the specified group in the specified identity store, returns the list of
         * all <code>GroupMembership</code> objects and returns results in paginated
         * form.</p>  <p>If you have administrator access to a member account, you
         * can use this API from the member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroupMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsOutcome ListGroupMemberships(const Model::ListGroupMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupMembershipsRequestT = Model::ListGroupMembershipsRequest>
        Model::ListGroupMembershipsOutcomeCallable ListGroupMembershipsCallable(const ListGroupMembershipsRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::ListGroupMemberships, request);
        }

        /**
         * An Async wrapper for ListGroupMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupMembershipsRequestT = Model::ListGroupMembershipsRequest>
        void ListGroupMembershipsAsync(const ListGroupMembershipsRequestT& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::ListGroupMemberships, request, handler, context);
        }

        /**
         * <p>For the specified member in the specified identity store, returns the list of
         * all <code>GroupMembership</code> objects and returns results in paginated
         * form.</p>  <p>If you have administrator access to a member account, you
         * can use this API from the member account. Read about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroupMembershipsForMember">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsForMemberOutcome ListGroupMembershipsForMember(const Model::ListGroupMembershipsForMemberRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMembershipsForMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupMembershipsForMemberRequestT = Model::ListGroupMembershipsForMemberRequest>
        Model::ListGroupMembershipsForMemberOutcomeCallable ListGroupMembershipsForMemberCallable(const ListGroupMembershipsForMemberRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::ListGroupMembershipsForMember, request);
        }

        /**
         * An Async wrapper for ListGroupMembershipsForMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupMembershipsForMemberRequestT = Model::ListGroupMembershipsForMemberRequest>
        void ListGroupMembershipsForMemberAsync(const ListGroupMembershipsForMemberRequestT& request, const ListGroupMembershipsForMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::ListGroupMembershipsForMember, request, handler, context);
        }

        /**
         * <p>Lists all groups in the identity store. Returns a paginated list of complete
         * <code>Group</code> objects. Filtering for a <code>Group</code> by the
         * <code>DisplayName</code> attribute is deprecated. Instead, use the
         * <code>GetGroupId</code> API action.</p>  <p>If you have administrator
         * access to a member account, you can use this API from the member account. Read
         * about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::ListGroups, request, handler, context);
        }

        /**
         * <p>Lists all users in the identity store. Returns a paginated list of complete
         * <code>User</code> objects. Filtering for a <code>User</code> by the
         * <code>UserName</code> attribute is deprecated. Instead, use the
         * <code>GetUserId</code> API action.</p>  <p>If you have administrator
         * access to a member account, you can use this API from the member account. Read
         * about <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html">member
         * accounts</a> in the <i>Organizations User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::ListUsers, request, handler, context);
        }

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
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::UpdateGroup, request, handler, context);
        }

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
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&IdentityStoreClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IdentityStoreClient::UpdateUser, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IdentityStoreEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IdentityStoreClient>;
      void init(const IdentityStoreClientConfiguration& clientConfiguration);

      IdentityStoreClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IdentityStoreEndpointProviderBase> m_endpointProvider;
  };

} // namespace IdentityStore
} // namespace Aws
