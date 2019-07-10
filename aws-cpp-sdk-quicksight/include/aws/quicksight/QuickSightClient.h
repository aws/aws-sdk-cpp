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
#include <aws/quicksight/model/CreateGroupResult.h>
#include <aws/quicksight/model/CreateGroupMembershipResult.h>
#include <aws/quicksight/model/DeleteGroupResult.h>
#include <aws/quicksight/model/DeleteGroupMembershipResult.h>
#include <aws/quicksight/model/DeleteUserResult.h>
#include <aws/quicksight/model/DeleteUserByPrincipalIdResult.h>
#include <aws/quicksight/model/DescribeGroupResult.h>
#include <aws/quicksight/model/DescribeUserResult.h>
#include <aws/quicksight/model/GetDashboardEmbedUrlResult.h>
#include <aws/quicksight/model/ListGroupMembershipsResult.h>
#include <aws/quicksight/model/ListGroupsResult.h>
#include <aws/quicksight/model/ListUserGroupsResult.h>
#include <aws/quicksight/model/ListUsersResult.h>
#include <aws/quicksight/model/RegisterUserResult.h>
#include <aws/quicksight/model/UpdateGroupResult.h>
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
        class CreateGroupRequest;
        class CreateGroupMembershipRequest;
        class DeleteGroupRequest;
        class DeleteGroupMembershipRequest;
        class DeleteUserRequest;
        class DeleteUserByPrincipalIdRequest;
        class DescribeGroupRequest;
        class DescribeUserRequest;
        class GetDashboardEmbedUrlRequest;
        class ListGroupMembershipsRequest;
        class ListGroupsRequest;
        class ListUserGroupsRequest;
        class ListUsersRequest;
        class RegisterUserRequest;
        class UpdateGroupRequest;
        class UpdateUserRequest;

        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<QuickSightErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateGroupMembershipResult, Aws::Client::AWSError<QuickSightErrors>> CreateGroupMembershipOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, Aws::Client::AWSError<QuickSightErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupMembershipResult, Aws::Client::AWSError<QuickSightErrors>> DeleteGroupMembershipOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, Aws::Client::AWSError<QuickSightErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DeleteUserByPrincipalIdResult, Aws::Client::AWSError<QuickSightErrors>> DeleteUserByPrincipalIdOutcome;
        typedef Aws::Utils::Outcome<DescribeGroupResult, Aws::Client::AWSError<QuickSightErrors>> DescribeGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeUserResult, Aws::Client::AWSError<QuickSightErrors>> DescribeUserOutcome;
        typedef Aws::Utils::Outcome<GetDashboardEmbedUrlResult, Aws::Client::AWSError<QuickSightErrors>> GetDashboardEmbedUrlOutcome;
        typedef Aws::Utils::Outcome<ListGroupMembershipsResult, Aws::Client::AWSError<QuickSightErrors>> ListGroupMembershipsOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, Aws::Client::AWSError<QuickSightErrors>> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUserGroupsResult, Aws::Client::AWSError<QuickSightErrors>> ListUserGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<QuickSightErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<RegisterUserResult, Aws::Client::AWSError<QuickSightErrors>> RegisterUserOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, Aws::Client::AWSError<QuickSightErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, Aws::Client::AWSError<QuickSightErrors>> UpdateUserOutcome;

        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateGroupMembershipOutcome> CreateGroupMembershipOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteGroupMembershipOutcome> DeleteGroupMembershipOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserByPrincipalIdOutcome> DeleteUserByPrincipalIdOutcomeCallable;
        typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
        typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
        typedef std::future<GetDashboardEmbedUrlOutcome> GetDashboardEmbedUrlOutcomeCallable;
        typedef std::future<ListGroupMembershipsOutcome> ListGroupMembershipsOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
} // namespace Model

  class QuickSightClient;

    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::CreateGroupMembershipRequest&, const Model::CreateGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteGroupMembershipRequest&, const Model::DeleteGroupMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupMembershipResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DeleteUserByPrincipalIdRequest&, const Model::DeleteUserByPrincipalIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserByPrincipalIdResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::GetDashboardEmbedUrlRequest&, const Model::GetDashboardEmbedUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardEmbedUrlResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupMembershipsRequest&, const Model::ListGroupMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembershipsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUserGroupsRequest&, const Model::ListUserGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserGroupsResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::RegisterUserRequest&, const Model::RegisterUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterUserResponseReceivedHandler;
    typedef std::function<void(const QuickSightClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
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
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the AWS Identity and Access Management (IAM) user or role that's making the
         * call. The IAM user isn't deleted as a result of this call. </p> <p>The
         * permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;
         * </i> </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * delete-user --aws-account-id=111122223333 --namespace=default --user-name=Pat
         * </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the AWS Identity and Access Management (IAM) user or role that's making the
         * call. The IAM user isn't deleted as a result of this call. </p> <p>The
         * permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;
         * </i> </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * delete-user --aws-account-id=111122223333 --namespace=default --user-name=Pat
         * </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the AWS Identity and Access Management (IAM) user or role that's making the
         * call. The IAM user isn't deleted as a result of this call. </p> <p>The
         * permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;
         * </i> </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * delete-user --aws-account-id=111122223333 --namespace=default --user-name=Pat
         * </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user identified by its principal ID. </p> <p>The permission
         * resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;
         * </i> </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * delete-user-by-principal-id --aws-account-id=111122223333 --namespace=default
         * --principal-id=ABCDEFJA26JLI7EUUOEHS </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserByPrincipalIdOutcome DeleteUserByPrincipalId(const Model::DeleteUserByPrincipalIdRequest& request) const;

        /**
         * <p>Deletes a user identified by its principal ID. </p> <p>The permission
         * resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;
         * </i> </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * delete-user-by-principal-id --aws-account-id=111122223333 --namespace=default
         * --principal-id=ABCDEFJA26JLI7EUUOEHS </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserByPrincipalIdOutcomeCallable DeleteUserByPrincipalIdCallable(const Model::DeleteUserByPrincipalIdRequest& request) const;

        /**
         * <p>Deletes a user identified by its principal ID. </p> <p>The permission
         * resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;
         * </i> </code>.</p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight
         * delete-user-by-principal-id --aws-account-id=111122223333 --namespace=default
         * --principal-id=ABCDEFJA26JLI7EUUOEHS </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserByPrincipalIdAsync(const Model::DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Returns information about a user, given the user name. </p> <p>The permission
         * resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a user object that contains the user's Amazon
         * Resource Name (ARN), AWS Identity and Access Management (IAM) role, and email
         * address. </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight describe-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Returns information about a user, given the user name. </p> <p>The permission
         * resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a user object that contains the user's Amazon
         * Resource Name (ARN), AWS Identity and Access Management (IAM) role, and email
         * address. </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight describe-user
         * --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Returns information about a user, given the user name. </p> <p>The permission
         * resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a user object that contains the user's Amazon
         * Resource Name (ARN), AWS Identity and Access Management (IAM) role, and email
         * address. </p> <p> <b>CLI Sample:</b> </p> <p> <code>aws quicksight describe-user
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
         * href="https://docs.aws.amazon.com/en_us/quicksight/latest/user/embedding.html">
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
         * us-east-1</code> </p> <p>Get the URL for the embedded dashboard</p> <p>
         * <code>aws quicksight get-dashboard-embed-url --aws-account-id 111122223333
         * --dashboard-id 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type IAM</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardEmbedUrlOutcome GetDashboardEmbedUrl(const Model::GetDashboardEmbedUrlRequest& request) const;

        /**
         * <p>Generates a server-side embeddable URL and authorization code. Before this
         * can work properly, first you need to configure the dashboards and user
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/en_us/quicksight/latest/user/embedding.html">
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
         * us-east-1</code> </p> <p>Get the URL for the embedded dashboard</p> <p>
         * <code>aws quicksight get-dashboard-embed-url --aws-account-id 111122223333
         * --dashboard-id 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type IAM</code>
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
         * href="https://docs.aws.amazon.com/en_us/quicksight/latest/user/embedding.html">
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
         * us-east-1</code> </p> <p>Get the URL for the embedded dashboard</p> <p>
         * <code>aws quicksight get-dashboard-embed-url --aws-account-id 111122223333
         * --dashboard-id 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type IAM</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDashboardEmbedUrlAsync(const Model::GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a one or more group objects. </p> <p> <b>CLI
         * Sample:</b> </p> <p> <code>aws quicksight list-user-groups -\-user-name=Pat
         * -\-aws-account-id=111122223333 -\-namespace=default -\-region=us-east-1 </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUserGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserGroupsOutcome ListUserGroups(const Model::ListUserGroupsRequest& request) const;

        /**
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a one or more group objects. </p> <p> <b>CLI
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
         * of.</p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a one or more group objects. </p> <p> <b>CLI
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
         * account. </p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>*</i>
         * </code>.</p> <p>The response is a list of user objects, containing each user's
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
         * account. </p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>*</i>
         * </code>.</p> <p>The response is a list of user objects, containing each user's
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
         * account. </p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>*</i>
         * </code>.</p> <p>The response is a list of user objects, containing each user's
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
         * </p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>.</p> <p>The condition resource is the Amazon Resource Name (ARN) for the
         * IAM user or role, and the session name. </p> <p>The condition keys are
         * <code>quicksight:IamArn</code> and <code>quicksight:SessionName</code>. </p> <p>
         * <b>CLI Sample:</b> </p> <p> <code>aws quicksight register-user
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
         * </p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>.</p> <p>The condition resource is the Amazon Resource Name (ARN) for the
         * IAM user or role, and the session name. </p> <p>The condition keys are
         * <code>quicksight:IamArn</code> and <code>quicksight:SessionName</code>. </p> <p>
         * <b>CLI Sample:</b> </p> <p> <code>aws quicksight register-user
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
         * </p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>.</p> <p>The condition resource is the Amazon Resource Name (ARN) for the
         * IAM user or role, and the session name. </p> <p>The condition keys are
         * <code>quicksight:IamArn</code> and <code>quicksight:SessionName</code>. </p> <p>
         * <b>CLI Sample:</b> </p> <p> <code>aws quicksight register-user
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
         * <p>Updates an Amazon QuickSight user.</p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a user object that contains the user's Amazon
         * QuickSight user name, email address, active or inactive status in Amazon
         * QuickSight, Amazon QuickSight role, and Amazon Resource Name (ARN). </p> <p>
         * <b>CLI Sample:</b> </p> <p> <code>aws quicksight update-user --user-name=Pat
         * --role=ADMIN --email=new_address@amazon.com --aws-account-id=111122223333
         * --namespace=default --region=us-east-1 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates an Amazon QuickSight user.</p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a user object that contains the user's Amazon
         * QuickSight user name, email address, active or inactive status in Amazon
         * QuickSight, Amazon QuickSight role, and Amazon Resource Name (ARN). </p> <p>
         * <b>CLI Sample:</b> </p> <p> <code>aws quicksight update-user --user-name=Pat
         * --role=ADMIN --email=new_address@amazon.com --aws-account-id=111122223333
         * --namespace=default --region=us-east-1 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates an Amazon QuickSight user.</p> <p>The permission resource is
         * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
         * </code>. </p> <p>The response is a user object that contains the user's Amazon
         * QuickSight user name, email address, active or inactive status in Amazon
         * QuickSight, Amazon QuickSight role, and Amazon Resource Name (ARN). </p> <p>
         * <b>CLI Sample:</b> </p> <p> <code>aws quicksight update-user --user-name=Pat
         * --role=ADMIN --email=new_address@amazon.com --aws-account-id=111122223333
         * --namespace=default --region=us-east-1 </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupMembershipAsyncHelper(const Model::CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupMembershipAsyncHelper(const Model::DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserByPrincipalIdAsyncHelper(const Model::DeleteUserByPrincipalIdRequest& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupAsyncHelper(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDashboardEmbedUrlAsyncHelper(const Model::GetDashboardEmbedUrlRequest& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupMembershipsAsyncHelper(const Model::ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserGroupsAsyncHelper(const Model::ListUserGroupsRequest& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterUserAsyncHelper(const Model::RegisterUserRequest& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace QuickSight
} // namespace Aws
