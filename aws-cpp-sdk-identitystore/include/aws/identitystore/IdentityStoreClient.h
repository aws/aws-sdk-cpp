/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/IdentityStoreServiceClientModel.h>
#include <aws/identitystore/IdentityStoreLegacyAsyncMacros.h>

namespace Aws
{
namespace IdentityStore
{
  /**
   * <p>The Identity Store service used by AWS IAM Identity Center (successor to AWS
   * Single Sign-On) provides a single place to retrieve all of your identities
   * (users and groups). For more information, see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM
   * Identity Center User Guide</a>.</p> <pre><code> &lt;note&gt; &lt;p&gt;Although
   * AWS Single Sign-On was renamed, the &lt;code&gt;sso&lt;/code&gt; and
   * &lt;code&gt;identitystore&lt;/code&gt; API namespaces will continue to retain
   * their original name for backward compatibility purposes. For more information,
   * see &lt;a
   * href=&quot;https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed&quot;&gt;IAM
   * Identity Center rename&lt;/a&gt;.&lt;/p&gt; &lt;/note&gt; &lt;p&gt;This
   * reference guide describes the identity store operations that you can call
   * programatically and includes detailed information on data types and
   * errors.&lt;/p&gt; </code></pre>
   */
  class AWS_IDENTITYSTORE_API IdentityStoreClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::IdentityStore::IdentityStoreClientConfiguration& clientConfiguration = Aws::IdentityStore::IdentityStoreClientConfiguration(),
                            std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider = Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IdentityStoreClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider = Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG),
                            const Aws::IdentityStore::IdentityStoreClientConfiguration& clientConfiguration = Aws::IdentityStore::IdentityStoreClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IdentityStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider = Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG),
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates a group within the specified identity store.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;


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
         * <p>Creates a new user within the specified identity store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


        /**
         * <p>Delete a group within an identity store given
         * <code>GroupId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;


        /**
         * <p>Delete a membership within a group given
         * <code>MembershipId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DeleteGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupMembershipOutcome DeleteGroupMembership(const Model::DeleteGroupMembershipRequest& request) const;


        /**
         * <p>Deletes a user within an identity store given
         * <code>UserId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Retrieves the group metadata and attributes from <code>GroupId</code> in an
         * identity store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;


        /**
         * <p>Retrieves membership metadata and attributes from <code>MembershipId</code>
         * in an identity store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupMembershipOutcome DescribeGroupMembership(const Model::DescribeGroupMembershipRequest& request) const;


        /**
         * <p>Retrieves the user metadata and attributes from the <code>UserId</code> in an
         * identity store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;


        /**
         * <p>Retrieves <code>GroupId</code> in an identity store.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetGroupId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupIdOutcome GetGroupId(const Model::GetGroupIdRequest& request) const;


        /**
         * <p>Retrieves the <code>MembershipId</code> in an identity store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetGroupMembershipId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupMembershipIdOutcome GetGroupMembershipId(const Model::GetGroupMembershipIdRequest& request) const;


        /**
         * <p>Retrieves the <code>UserId</code> in an identity store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GetUserId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserIdOutcome GetUserId(const Model::GetUserIdRequest& request) const;


        /**
         * <p>Checks the user's membership in all requested groups and returns if the
         * member exists in all queried groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/IsMemberInGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::IsMemberInGroupsOutcome IsMemberInGroups(const Model::IsMemberInGroupsRequest& request) const;


        /**
         * <p>For the specified group in the specified identity store, returns the list of
         * all <code>GroupMembership</code> objects and returns results in paginated
         * form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroupMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsOutcome ListGroupMemberships(const Model::ListGroupMembershipsRequest& request) const;


        /**
         * <p>For the specified member in the specified identity store, returns the list of
         * all <code>GroupMembership</code> objects and returns results in paginated
         * form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroupMembershipsForMember">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsForMemberOutcome ListGroupMembershipsForMember(const Model::ListGroupMembershipsForMemberRequest& request) const;


        /**
         * <p>Lists all groups in the identity store. Returns a paginated list of complete
         * <code>Group</code> objects. Filtering for a <code>Group</code> by the
         * <code>DisplayName</code> attribute is deprecated. Instead, use the
         * <code>GetGroupId</code> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;


        /**
         * <p>Lists all users in the identity store. Returns a paginated list of complete
         * <code>User</code> objects. Filtering for a <code>User</code> by the
         * <code>UserName</code> attribute is deprecated. Instead, use the
         * <code>GetUserId</code> API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;


        /**
         * <p>For the specified group in the specified identity store, updates the group
         * metadata and attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;


        /**
         * <p>For the specified user in the specified identity store, updates the user
         * metadata and attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IdentityStoreEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IdentityStoreClientConfiguration& clientConfiguration);

      IdentityStoreClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IdentityStoreEndpointProviderBase> m_endpointProvider;
  };

} // namespace IdentityStore
} // namespace Aws
