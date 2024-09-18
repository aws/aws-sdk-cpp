/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directory-service-data/DirectoryServiceDataServiceClientModel.h>

namespace Aws
{
namespace DirectoryServiceData
{
  /**
   * <p> Amazon Web Services Directory Service Data is an extension of Directory
   * Service. This API reference provides detailed information about Directory
   * Service Data operations and object types. </p> <p> With Directory Service Data,
   * you can create, read, update, and delete users, groups, and memberships from
   * your Managed Microsoft AD without additional costs and without deploying
   * dedicated management instances. You can also perform built-in object management
   * tasks across directories without direct network connectivity, which simplifies
   * provisioning and access management to achieve fully automated deployments.
   * Directory Service Data supports user and group write operations, such as
   * <code>CreateUser</code> and <code>CreateGroup</code>, within the organizational
   * unit (OU) of your Managed Microsoft AD. Directory Service Data supports read
   * operations, such as <code>ListUsers</code> and <code>ListGroups</code>, on all
   * users, groups, and group memberships within your Managed Microsoft AD and across
   * trusted realms. Directory Service Data supports adding and removing group
   * members in your OU and the Amazon Web Services Delegated Groups OU, so you can
   * grant and deny access to specific roles and permissions. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ms_ad_manage_users_groups.html">Manage
   * users and groups</a> in the <i>Directory Service Administration Guide</i>. </p>
   *  <p> Directory management operations and configuration changes made
   * against the Directory Service API will also reflect in Directory Service Data
   * API with eventual consistency. You can expect a short delay between management
   * changes, such as adding a new directory trust and calling the Directory Service
   * Data API for the newly created trusted realm. </p>  <p> Directory Service
   * Data connects to your Managed Microsoft AD domain controllers and performs
   * operations on underlying directory objects. When you create your Managed
   * Microsoft AD, you choose subnets for domain controllers that Directory Service
   * creates on your behalf. If a domain controller is unavailable, Directory Service
   * Data uses an available domain controller. As a result, you might notice eventual
   * consistency while objects replicate from one domain controller to another domain
   * controller. For more information, see <a
   * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ms_ad_getting_started_what_gets_created.html">What
   * gets created</a> in the <i>Directory Service Administration Guide</i>. Directory
   * limits vary by Managed Microsoft AD edition: </p> <ul> <li> <p> <b>Standard
   * edition</b> – Supports 8 transactions per second (TPS) for read operations and 4
   * TPS for write operations per directory. There's a concurrency limit of 10
   * concurrent requests. </p> </li> <li> <p> <b>Enterprise edition</b> – Supports 16
   * transactions per second (TPS) for read operations and 8 TPS for write operations
   * per directory. There's a concurrency limit of 10 concurrent requests.</p> </li>
   * <li> <p> <b>Amazon Web Services Account</b> - Supports a total of 100 TPS for
   * Directory Service Data operations across all directories.</p> </li> </ul> <p>
   * Directory Service Data only supports the Managed Microsoft AD directory type and
   * is only available in the primary Amazon Web Services Region. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Managed
   * Microsoft AD</a> and <a
   * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/multi-region-global-primary-additional.html">Primary
   * vs additional Regions</a> in the <i>Directory Service Administration Guide</i>.
   * </p>
   */
  class AWS_DIRECTORYSERVICEDATA_API DirectoryServiceDataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DirectoryServiceDataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DirectoryServiceDataClientConfiguration ClientConfigurationType;
      typedef DirectoryServiceDataEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceDataClient(const Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration& clientConfiguration = Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration(),
                                   std::shared_ptr<DirectoryServiceDataEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceDataClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<DirectoryServiceDataEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration& clientConfiguration = Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectoryServiceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<DirectoryServiceDataEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration& clientConfiguration = Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceDataClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectoryServiceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DirectoryServiceDataClient();

        /**
         * <p>Adds an existing user, group, or computer as a group member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/AddGroupMember">AWS
         * API Reference</a></p>
         */
        virtual Model::AddGroupMemberOutcome AddGroupMember(const Model::AddGroupMemberRequest& request) const;

        /**
         * A Callable wrapper for AddGroupMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddGroupMemberRequestT = Model::AddGroupMemberRequest>
        Model::AddGroupMemberOutcomeCallable AddGroupMemberCallable(const AddGroupMemberRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::AddGroupMember, request);
        }

        /**
         * An Async wrapper for AddGroupMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddGroupMemberRequestT = Model::AddGroupMemberRequest>
        void AddGroupMemberAsync(const AddGroupMemberRequestT& request, const AddGroupMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::AddGroupMember, request, handler, context);
        }

        /**
         * <p>Creates a new group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::CreateGroup, request, handler, context);
        }

        /**
         * <p>Creates a new user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deletes a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::DeleteGroup, request, handler, context);
        }

        /**
         * <p>Deletes a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Returns information about a specific group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const DescribeGroupRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::DescribeGroup, request);
        }

        /**
         * An Async wrapper for DescribeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        void DescribeGroupAsync(const DescribeGroupRequestT& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::DescribeGroup, request, handler, context);
        }

        /**
         * <p>Returns information about a specific user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        Model::DescribeUserOutcomeCallable DescribeUserCallable(const DescribeUserRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::DescribeUser, request);
        }

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        void DescribeUserAsync(const DescribeUserRequestT& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::DescribeUser, request, handler, context);
        }

        /**
         * <p> Deactivates an active user account. For information about how to enable an
         * inactive user account, see <a
         * href="https://docs.aws.amazon.com/directoryservice/latest/devguide/API_ResetUserPassword.html">ResetUserPassword</a>
         * in the <i>Directory Service API Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/DisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableUserOutcome DisableUser(const Model::DisableUserRequest& request) const;

        /**
         * A Callable wrapper for DisableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableUserRequestT = Model::DisableUserRequest>
        Model::DisableUserOutcomeCallable DisableUserCallable(const DisableUserRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::DisableUser, request);
        }

        /**
         * An Async wrapper for DisableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableUserRequestT = Model::DisableUserRequest>
        void DisableUserAsync(const DisableUserRequestT& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::DisableUser, request, handler, context);
        }

        /**
         * <p> Returns member information for the specified group. </p> <p> This operation
         * supports pagination with the use of the <code>NextToken</code> request and
         * response parameters. If more results are available, the
         * <code>ListGroupMembers.NextToken</code> member contains a token that you pass in
         * the next call to <code>ListGroupMembers</code>. This retrieves the next set of
         * items. </p> <p> You can also specify a maximum number of return results with the
         * <code>MaxResults</code> parameter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/ListGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembersOutcome ListGroupMembers(const Model::ListGroupMembersRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupMembersRequestT = Model::ListGroupMembersRequest>
        Model::ListGroupMembersOutcomeCallable ListGroupMembersCallable(const ListGroupMembersRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::ListGroupMembers, request);
        }

        /**
         * An Async wrapper for ListGroupMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupMembersRequestT = Model::ListGroupMembersRequest>
        void ListGroupMembersAsync(const ListGroupMembersRequestT& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::ListGroupMembers, request, handler, context);
        }

        /**
         * <p> Returns group information for the specified directory. </p> <p> This
         * operation supports pagination with the use of the <code>NextToken</code> request
         * and response parameters. If more results are available, the
         * <code>ListGroups.NextToken</code> member contains a token that you pass in the
         * next call to <code>ListGroups</code>. This retrieves the next set of items. </p>
         * <p> You can also specify a maximum number of return results with the
         * <code>MaxResults</code> parameter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::ListGroups, request, handler, context);
        }

        /**
         * <p> Returns group information for the specified member. </p> <p> This operation
         * supports pagination with the use of the <code>NextToken</code> request and
         * response parameters. If more results are available, the
         * <code>ListGroupsForMember.NextToken</code> member contains a token that you pass
         * in the next call to <code>ListGroupsForMember</code>. This retrieves the next
         * set of items. </p> <p> You can also specify a maximum number of return results
         * with the <code>MaxResults</code> parameter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/ListGroupsForMember">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsForMemberOutcome ListGroupsForMember(const Model::ListGroupsForMemberRequest& request) const;

        /**
         * A Callable wrapper for ListGroupsForMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsForMemberRequestT = Model::ListGroupsForMemberRequest>
        Model::ListGroupsForMemberOutcomeCallable ListGroupsForMemberCallable(const ListGroupsForMemberRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::ListGroupsForMember, request);
        }

        /**
         * An Async wrapper for ListGroupsForMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsForMemberRequestT = Model::ListGroupsForMemberRequest>
        void ListGroupsForMemberAsync(const ListGroupsForMemberRequestT& request, const ListGroupsForMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::ListGroupsForMember, request, handler, context);
        }

        /**
         * <p> Returns user information for the specified directory. </p> <p> This
         * operation supports pagination with the use of the <code>NextToken</code> request
         * and response parameters. If more results are available, the
         * <code>ListUsers.NextToken</code> member contains a token that you pass in the
         * next call to <code>ListUsers</code>. This retrieves the next set of items. </p>
         * <p> You can also specify a maximum number of return results with the
         * <code>MaxResults</code> parameter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::ListUsers, request, handler, context);
        }

        /**
         * <p> Removes a member from a group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/RemoveGroupMember">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveGroupMemberOutcome RemoveGroupMember(const Model::RemoveGroupMemberRequest& request) const;

        /**
         * A Callable wrapper for RemoveGroupMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveGroupMemberRequestT = Model::RemoveGroupMemberRequest>
        Model::RemoveGroupMemberOutcomeCallable RemoveGroupMemberCallable(const RemoveGroupMemberRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::RemoveGroupMember, request);
        }

        /**
         * An Async wrapper for RemoveGroupMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveGroupMemberRequestT = Model::RemoveGroupMemberRequest>
        void RemoveGroupMemberAsync(const RemoveGroupMemberRequestT& request, const RemoveGroupMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::RemoveGroupMember, request, handler, context);
        }

        /**
         * <p> Searches the specified directory for a group. You can find groups that match
         * the <code>SearchString</code> parameter with the value of their attributes
         * included in the <code>SearchString</code> parameter. </p> <p> This operation
         * supports pagination with the use of the <code>NextToken</code> request and
         * response parameters. If more results are available, the
         * <code>SearchGroups.NextToken</code> member contains a token that you pass in the
         * next call to <code>SearchGroups</code>. This retrieves the next set of items.
         * </p> <p> You can also specify a maximum number of return results with the
         * <code>MaxResults</code> parameter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/SearchGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGroupsOutcome SearchGroups(const Model::SearchGroupsRequest& request) const;

        /**
         * A Callable wrapper for SearchGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchGroupsRequestT = Model::SearchGroupsRequest>
        Model::SearchGroupsOutcomeCallable SearchGroupsCallable(const SearchGroupsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::SearchGroups, request);
        }

        /**
         * An Async wrapper for SearchGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchGroupsRequestT = Model::SearchGroupsRequest>
        void SearchGroupsAsync(const SearchGroupsRequestT& request, const SearchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::SearchGroups, request, handler, context);
        }

        /**
         * <p> Searches the specified directory for a user. You can find users that match
         * the <code>SearchString</code> parameter with the value of their attributes
         * included in the <code>SearchString</code> parameter.</p> <p> This operation
         * supports pagination with the use of the <code>NextToken</code> request and
         * response parameters. If more results are available, the
         * <code>SearchUsers.NextToken</code> member contains a token that you pass in the
         * next call to <code>SearchUsers</code>. This retrieves the next set of items.
         * </p> <p> You can also specify a maximum number of return results with the
         * <code>MaxResults</code> parameter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;

        /**
         * A Callable wrapper for SearchUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        Model::SearchUsersOutcomeCallable SearchUsersCallable(const SearchUsersRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::SearchUsers, request);
        }

        /**
         * An Async wrapper for SearchUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        void SearchUsersAsync(const SearchUsersRequestT& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::SearchUsers, request, handler, context);
        }

        /**
         * <p> Updates group information. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::UpdateGroup, request, handler, context);
        }

        /**
         * <p> Updates user information. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceDataClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceDataClient::UpdateUser, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DirectoryServiceDataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DirectoryServiceDataClient>;
      void init(const DirectoryServiceDataClientConfiguration& clientConfiguration);

      DirectoryServiceDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<DirectoryServiceDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace DirectoryServiceData
} // namespace Aws
