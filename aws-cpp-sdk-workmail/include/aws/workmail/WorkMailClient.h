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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workmail/model/AssociateDelegateToResourceResult.h>
#include <aws/workmail/model/AssociateMemberToGroupResult.h>
#include <aws/workmail/model/CreateAliasResult.h>
#include <aws/workmail/model/CreateGroupResult.h>
#include <aws/workmail/model/CreateResourceResult.h>
#include <aws/workmail/model/CreateUserResult.h>
#include <aws/workmail/model/DeleteAliasResult.h>
#include <aws/workmail/model/DeleteGroupResult.h>
#include <aws/workmail/model/DeleteMailboxPermissionsResult.h>
#include <aws/workmail/model/DeleteResourceResult.h>
#include <aws/workmail/model/DeleteUserResult.h>
#include <aws/workmail/model/DeregisterFromWorkMailResult.h>
#include <aws/workmail/model/DescribeGroupResult.h>
#include <aws/workmail/model/DescribeOrganizationResult.h>
#include <aws/workmail/model/DescribeResourceResult.h>
#include <aws/workmail/model/DescribeUserResult.h>
#include <aws/workmail/model/DisassociateDelegateFromResourceResult.h>
#include <aws/workmail/model/DisassociateMemberFromGroupResult.h>
#include <aws/workmail/model/GetMailboxDetailsResult.h>
#include <aws/workmail/model/ListAliasesResult.h>
#include <aws/workmail/model/ListGroupMembersResult.h>
#include <aws/workmail/model/ListGroupsResult.h>
#include <aws/workmail/model/ListMailboxPermissionsResult.h>
#include <aws/workmail/model/ListOrganizationsResult.h>
#include <aws/workmail/model/ListResourceDelegatesResult.h>
#include <aws/workmail/model/ListResourcesResult.h>
#include <aws/workmail/model/ListUsersResult.h>
#include <aws/workmail/model/PutMailboxPermissionsResult.h>
#include <aws/workmail/model/RegisterToWorkMailResult.h>
#include <aws/workmail/model/ResetPasswordResult.h>
#include <aws/workmail/model/UpdateMailboxQuotaResult.h>
#include <aws/workmail/model/UpdatePrimaryEmailAddressResult.h>
#include <aws/workmail/model/UpdateResourceResult.h>
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

namespace WorkMail
{

namespace Model
{
        class AssociateDelegateToResourceRequest;
        class AssociateMemberToGroupRequest;
        class CreateAliasRequest;
        class CreateGroupRequest;
        class CreateResourceRequest;
        class CreateUserRequest;
        class DeleteAliasRequest;
        class DeleteGroupRequest;
        class DeleteMailboxPermissionsRequest;
        class DeleteResourceRequest;
        class DeleteUserRequest;
        class DeregisterFromWorkMailRequest;
        class DescribeGroupRequest;
        class DescribeOrganizationRequest;
        class DescribeResourceRequest;
        class DescribeUserRequest;
        class DisassociateDelegateFromResourceRequest;
        class DisassociateMemberFromGroupRequest;
        class GetMailboxDetailsRequest;
        class ListAliasesRequest;
        class ListGroupMembersRequest;
        class ListGroupsRequest;
        class ListMailboxPermissionsRequest;
        class ListOrganizationsRequest;
        class ListResourceDelegatesRequest;
        class ListResourcesRequest;
        class ListUsersRequest;
        class PutMailboxPermissionsRequest;
        class RegisterToWorkMailRequest;
        class ResetPasswordRequest;
        class UpdateMailboxQuotaRequest;
        class UpdatePrimaryEmailAddressRequest;
        class UpdateResourceRequest;

        typedef Aws::Utils::Outcome<AssociateDelegateToResourceResult, Aws::Client::AWSError<WorkMailErrors>> AssociateDelegateToResourceOutcome;
        typedef Aws::Utils::Outcome<AssociateMemberToGroupResult, Aws::Client::AWSError<WorkMailErrors>> AssociateMemberToGroupOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<WorkMailErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<WorkMailErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateResourceResult, Aws::Client::AWSError<WorkMailErrors>> CreateResourceOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<WorkMailErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteAliasResult, Aws::Client::AWSError<WorkMailErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, Aws::Client::AWSError<WorkMailErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteMailboxPermissionsResult, Aws::Client::AWSError<WorkMailErrors>> DeleteMailboxPermissionsOutcome;
        typedef Aws::Utils::Outcome<DeleteResourceResult, Aws::Client::AWSError<WorkMailErrors>> DeleteResourceOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, Aws::Client::AWSError<WorkMailErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DeregisterFromWorkMailResult, Aws::Client::AWSError<WorkMailErrors>> DeregisterFromWorkMailOutcome;
        typedef Aws::Utils::Outcome<DescribeGroupResult, Aws::Client::AWSError<WorkMailErrors>> DescribeGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationResult, Aws::Client::AWSError<WorkMailErrors>> DescribeOrganizationOutcome;
        typedef Aws::Utils::Outcome<DescribeResourceResult, Aws::Client::AWSError<WorkMailErrors>> DescribeResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeUserResult, Aws::Client::AWSError<WorkMailErrors>> DescribeUserOutcome;
        typedef Aws::Utils::Outcome<DisassociateDelegateFromResourceResult, Aws::Client::AWSError<WorkMailErrors>> DisassociateDelegateFromResourceOutcome;
        typedef Aws::Utils::Outcome<DisassociateMemberFromGroupResult, Aws::Client::AWSError<WorkMailErrors>> DisassociateMemberFromGroupOutcome;
        typedef Aws::Utils::Outcome<GetMailboxDetailsResult, Aws::Client::AWSError<WorkMailErrors>> GetMailboxDetailsOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<WorkMailErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListGroupMembersResult, Aws::Client::AWSError<WorkMailErrors>> ListGroupMembersOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, Aws::Client::AWSError<WorkMailErrors>> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<ListMailboxPermissionsResult, Aws::Client::AWSError<WorkMailErrors>> ListMailboxPermissionsOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationsResult, Aws::Client::AWSError<WorkMailErrors>> ListOrganizationsOutcome;
        typedef Aws::Utils::Outcome<ListResourceDelegatesResult, Aws::Client::AWSError<WorkMailErrors>> ListResourceDelegatesOutcome;
        typedef Aws::Utils::Outcome<ListResourcesResult, Aws::Client::AWSError<WorkMailErrors>> ListResourcesOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<WorkMailErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<PutMailboxPermissionsResult, Aws::Client::AWSError<WorkMailErrors>> PutMailboxPermissionsOutcome;
        typedef Aws::Utils::Outcome<RegisterToWorkMailResult, Aws::Client::AWSError<WorkMailErrors>> RegisterToWorkMailOutcome;
        typedef Aws::Utils::Outcome<ResetPasswordResult, Aws::Client::AWSError<WorkMailErrors>> ResetPasswordOutcome;
        typedef Aws::Utils::Outcome<UpdateMailboxQuotaResult, Aws::Client::AWSError<WorkMailErrors>> UpdateMailboxQuotaOutcome;
        typedef Aws::Utils::Outcome<UpdatePrimaryEmailAddressResult, Aws::Client::AWSError<WorkMailErrors>> UpdatePrimaryEmailAddressOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceResult, Aws::Client::AWSError<WorkMailErrors>> UpdateResourceOutcome;

        typedef std::future<AssociateDelegateToResourceOutcome> AssociateDelegateToResourceOutcomeCallable;
        typedef std::future<AssociateMemberToGroupOutcome> AssociateMemberToGroupOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteMailboxPermissionsOutcome> DeleteMailboxPermissionsOutcomeCallable;
        typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeregisterFromWorkMailOutcome> DeregisterFromWorkMailOutcomeCallable;
        typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
        typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
        typedef std::future<DescribeResourceOutcome> DescribeResourceOutcomeCallable;
        typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
        typedef std::future<DisassociateDelegateFromResourceOutcome> DisassociateDelegateFromResourceOutcomeCallable;
        typedef std::future<DisassociateMemberFromGroupOutcome> DisassociateMemberFromGroupOutcomeCallable;
        typedef std::future<GetMailboxDetailsOutcome> GetMailboxDetailsOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListGroupMembersOutcome> ListGroupMembersOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<ListMailboxPermissionsOutcome> ListMailboxPermissionsOutcomeCallable;
        typedef std::future<ListOrganizationsOutcome> ListOrganizationsOutcomeCallable;
        typedef std::future<ListResourceDelegatesOutcome> ListResourceDelegatesOutcomeCallable;
        typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<PutMailboxPermissionsOutcome> PutMailboxPermissionsOutcomeCallable;
        typedef std::future<RegisterToWorkMailOutcome> RegisterToWorkMailOutcomeCallable;
        typedef std::future<ResetPasswordOutcome> ResetPasswordOutcomeCallable;
        typedef std::future<UpdateMailboxQuotaOutcome> UpdateMailboxQuotaOutcomeCallable;
        typedef std::future<UpdatePrimaryEmailAddressOutcome> UpdatePrimaryEmailAddressOutcomeCallable;
        typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
} // namespace Model

  class WorkMailClient;

    typedef std::function<void(const WorkMailClient*, const Model::AssociateDelegateToResourceRequest&, const Model::AssociateDelegateToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDelegateToResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::AssociateMemberToGroupRequest&, const Model::AssociateMemberToGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberToGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateResourceRequest&, const Model::CreateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteMailboxPermissionsRequest&, const Model::DeleteMailboxPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMailboxPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteResourceRequest&, const Model::DeleteResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeregisterFromWorkMailRequest&, const Model::DeregisterFromWorkMailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterFromWorkMailResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeOrganizationRequest&, const Model::DescribeOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeResourceRequest&, const Model::DescribeResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DisassociateDelegateFromResourceRequest&, const Model::DisassociateDelegateFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDelegateFromResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DisassociateMemberFromGroupRequest&, const Model::DisassociateMemberFromGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberFromGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMailboxDetailsRequest&, const Model::GetMailboxDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMailboxDetailsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListGroupMembersRequest&, const Model::ListGroupMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembersResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListMailboxPermissionsRequest&, const Model::ListMailboxPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMailboxPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListOrganizationsRequest&, const Model::ListOrganizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListResourceDelegatesRequest&, const Model::ListResourceDelegatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceDelegatesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::PutMailboxPermissionsRequest&, const Model::PutMailboxPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMailboxPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::RegisterToWorkMailRequest&, const Model::RegisterToWorkMailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterToWorkMailResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ResetPasswordRequest&, const Model::ResetPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetPasswordResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateMailboxQuotaRequest&, const Model::UpdateMailboxQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMailboxQuotaResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdatePrimaryEmailAddressRequest&, const Model::UpdatePrimaryEmailAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePrimaryEmailAddressResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;

  /**
   * <p>Amazon WorkMail is a secure, managed business email and calendaring service
   * with support for existing desktop and mobile email clients. You can access your
   * email, contacts, and calendars using Microsoft Outlook, your browser, or other
   * native iOS and Android email applications. You can integrate WorkMail with your
   * existing corporate directory and control both the keys that encrypt your data
   * and the location in which your data is stored.</p> <p>The WorkMail API is
   * designed for the following scenarios:</p> <ul> <li> <p>Listing and describing
   * organizations</p> </li> </ul> <ul> <li> <p>Managing users</p> </li> </ul> <ul>
   * <li> <p>Managing groups</p> </li> </ul> <ul> <li> <p>Managing resources</p>
   * </li> </ul> <p>All WorkMail API operations are Amazon-authenticated and
   * certificate-signed. They not only require the use of the AWS SDK, but also allow
   * for the exclusive use of AWS Identity and Access Management users and roles to
   * help facilitate access, trust, and permission policies. By creating a role and
   * allowing an IAM user to access the WorkMail site, the IAM user gains full
   * administrative visibility into the entire WorkMail organization (or as set in
   * the IAM policy). This includes, but is not limited to, the ability to create,
   * update, and delete users, groups, and resources. This allows developers to
   * perform the scenarios listed above, as well as give users the ability to grant
   * access on a selective basis using the IAM model.</p>
   */
  class AWS_WORKMAIL_API WorkMailClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkMailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WorkMailClient();

        inline virtual const char* GetServiceClientName() const override { return "WorkMail"; }


        /**
         * <p>Adds a member (user or group) to the resource's set of
         * delegates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateDelegateToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDelegateToResourceOutcome AssociateDelegateToResource(const Model::AssociateDelegateToResourceRequest& request) const;

        /**
         * <p>Adds a member (user or group) to the resource's set of
         * delegates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateDelegateToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDelegateToResourceOutcomeCallable AssociateDelegateToResourceCallable(const Model::AssociateDelegateToResourceRequest& request) const;

        /**
         * <p>Adds a member (user or group) to the resource's set of
         * delegates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateDelegateToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDelegateToResourceAsync(const Model::AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a member (user or group) to the group's set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateMemberToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToGroupOutcome AssociateMemberToGroup(const Model::AssociateMemberToGroupRequest& request) const;

        /**
         * <p>Adds a member (user or group) to the group's set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateMemberToGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateMemberToGroupOutcomeCallable AssociateMemberToGroupCallable(const Model::AssociateMemberToGroupRequest& request) const;

        /**
         * <p>Adds a member (user or group) to the group's set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateMemberToGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateMemberToGroupAsync(const Model::AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an alias to the set of a given member (user or group) of Amazon
         * WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Adds an alias to the set of a given member (user or group) of Amazon
         * WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Adds an alias to the set of a given member (user or group) of Amazon
         * WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a group that can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a group that can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a group that can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon WorkMail resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * <p>Creates a new Amazon WorkMail resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request) const;

        /**
         * <p>Creates a new Amazon WorkMail resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user who can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user who can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user who can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more specified aliases from a set of aliases for a given
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Remove one or more specified aliases from a set of aliases for a given
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Remove one or more specified aliases from a set of aliases for a given
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a group from Amazon WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a group from Amazon WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a group from Amazon WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes permissions granted to a member (user or group).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMailboxPermissionsOutcome DeleteMailboxPermissions(const Model::DeleteMailboxPermissionsRequest& request) const;

        /**
         * <p>Deletes permissions granted to a member (user or group).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMailboxPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMailboxPermissionsOutcomeCallable DeleteMailboxPermissionsCallable(const Model::DeleteMailboxPermissionsRequest& request) const;

        /**
         * <p>Deletes permissions granted to a member (user or group).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMailboxPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMailboxPermissionsAsync(const Model::DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * <p>Deletes the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request) const;

        /**
         * <p>Deletes the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user from Amazon WorkMail and all subsequent systems. Before you
         * can delete a user, the user state must be <code>DISABLED</code>. Use the
         * <a>DescribeUser</a> action to confirm the user state.</p> <p>Deleting a user is
         * permanent and cannot be undone. WorkMail archives user mailboxes for 30 days
         * before they are permanently removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user from Amazon WorkMail and all subsequent systems. Before you
         * can delete a user, the user state must be <code>DISABLED</code>. Use the
         * <a>DescribeUser</a> action to confirm the user state.</p> <p>Deleting a user is
         * permanent and cannot be undone. WorkMail archives user mailboxes for 30 days
         * before they are permanently removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user from Amazon WorkMail and all subsequent systems. Before you
         * can delete a user, the user state must be <code>DISABLED</code>. Use the
         * <a>DescribeUser</a> action to confirm the user state.</p> <p>Deleting a user is
         * permanent and cannot be undone. WorkMail archives user mailboxes for 30 days
         * before they are permanently removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Mark a user, group, or resource as no longer used in Amazon WorkMail. This
         * action disassociates the mailbox and schedules it for clean-up. WorkMail keeps
         * mailboxes for 30 days before they are permanently removed. The functionality in
         * the console is <i>Disable</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterFromWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterFromWorkMailOutcome DeregisterFromWorkMail(const Model::DeregisterFromWorkMailRequest& request) const;

        /**
         * <p>Mark a user, group, or resource as no longer used in Amazon WorkMail. This
         * action disassociates the mailbox and schedules it for clean-up. WorkMail keeps
         * mailboxes for 30 days before they are permanently removed. The functionality in
         * the console is <i>Disable</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterFromWorkMail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterFromWorkMailOutcomeCallable DeregisterFromWorkMailCallable(const Model::DeregisterFromWorkMailRequest& request) const;

        /**
         * <p>Mark a user, group, or resource as no longer used in Amazon WorkMail. This
         * action disassociates the mailbox and schedules it for clean-up. WorkMail keeps
         * mailboxes for 30 days before they are permanently removed. The functionality in
         * the console is <i>Disable</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterFromWorkMail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterFromWorkMailAsync(const Model::DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data available for the group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * <p>Returns the data available for the group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request) const;

        /**
         * <p>Returns the data available for the group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides more information regarding a given organization based on its
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest& request) const;

        /**
         * <p>Provides more information regarding a given organization based on its
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const Model::DescribeOrganizationRequest& request) const;

        /**
         * <p>Provides more information regarding a given organization based on its
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationAsync(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data available for the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest& request) const;

        /**
         * <p>Returns the data available for the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceOutcomeCallable DescribeResourceCallable(const Model::DescribeResourceRequest& request) const;

        /**
         * <p>Returns the data available for the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceAsync(const Model::DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information regarding the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Provides information regarding the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Provides information regarding the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member from the resource's set of delegates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateDelegateFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDelegateFromResourceOutcome DisassociateDelegateFromResource(const Model::DisassociateDelegateFromResourceRequest& request) const;

        /**
         * <p>Removes a member from the resource's set of delegates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateDelegateFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDelegateFromResourceOutcomeCallable DisassociateDelegateFromResourceCallable(const Model::DisassociateDelegateFromResourceRequest& request) const;

        /**
         * <p>Removes a member from the resource's set of delegates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateDelegateFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDelegateFromResourceAsync(const Model::DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member from a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateMemberFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromGroupOutcome DisassociateMemberFromGroup(const Model::DisassociateMemberFromGroupRequest& request) const;

        /**
         * <p>Removes a member from a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateMemberFromGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMemberFromGroupOutcomeCallable DisassociateMemberFromGroupCallable(const Model::DisassociateMemberFromGroupRequest& request) const;

        /**
         * <p>Removes a member from a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateMemberFromGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMemberFromGroupAsync(const Model::DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a user's mailbox details for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailboxDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMailboxDetailsOutcome GetMailboxDetails(const Model::GetMailboxDetailsRequest& request) const;

        /**
         * <p>Requests a user's mailbox details for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailboxDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMailboxDetailsOutcomeCallable GetMailboxDetailsCallable(const Model::GetMailboxDetailsRequest& request) const;

        /**
         * <p>Requests a user's mailbox details for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailboxDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMailboxDetailsAsync(const Model::GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a paginated call to list the aliases associated with a given
         * entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Creates a paginated call to list the aliases associated with a given
         * entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Creates a paginated call to list the aliases associated with a given
         * entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an overview of the members of a group. Users and groups can be
         * members of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembersOutcome ListGroupMembers(const Model::ListGroupMembersRequest& request) const;

        /**
         * <p>Returns an overview of the members of a group. Users and groups can be
         * members of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupMembersOutcomeCallable ListGroupMembersCallable(const Model::ListGroupMembersRequest& request) const;

        /**
         * <p>Returns an overview of the members of a group. Users and groups can be
         * members of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupMembersAsync(const Model::ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the organization's groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Returns summaries of the organization's groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Returns summaries of the organization's groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the mailbox permissions associated with a user, group, or resource
         * mailbox.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailboxPermissionsOutcome ListMailboxPermissions(const Model::ListMailboxPermissionsRequest& request) const;

        /**
         * <p>Lists the mailbox permissions associated with a user, group, or resource
         * mailbox.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMailboxPermissionsOutcomeCallable ListMailboxPermissionsCallable(const Model::ListMailboxPermissionsRequest& request) const;

        /**
         * <p>Lists the mailbox permissions associated with a user, group, or resource
         * mailbox.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMailboxPermissionsAsync(const Model::ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the customer's non-deleted organizations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListOrganizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationsOutcome ListOrganizations(const Model::ListOrganizationsRequest& request) const;

        /**
         * <p>Returns summaries of the customer's non-deleted organizations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListOrganizations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationsOutcomeCallable ListOrganizationsCallable(const Model::ListOrganizationsRequest& request) const;

        /**
         * <p>Returns summaries of the customer's non-deleted organizations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListOrganizations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationsAsync(const Model::ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the delegates associated with a resource. Users and groups can be
         * resource delegates and answer requests on behalf of the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResourceDelegates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDelegatesOutcome ListResourceDelegates(const Model::ListResourceDelegatesRequest& request) const;

        /**
         * <p>Lists the delegates associated with a resource. Users and groups can be
         * resource delegates and answer requests on behalf of the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResourceDelegates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceDelegatesOutcomeCallable ListResourceDelegatesCallable(const Model::ListResourceDelegatesRequest& request) const;

        /**
         * <p>Lists the delegates associated with a resource. Users and groups can be
         * resource delegates and answer requests on behalf of the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResourceDelegates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceDelegatesAsync(const Model::ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the organization's resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Returns summaries of the organization's resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Returns summaries of the organization's resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the organization's users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Returns summaries of the organization's users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Returns summaries of the organization's users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets permissions for a user, group, or resource. This replaces any
         * pre-existing permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMailboxPermissionsOutcome PutMailboxPermissions(const Model::PutMailboxPermissionsRequest& request) const;

        /**
         * <p>Sets permissions for a user, group, or resource. This replaces any
         * pre-existing permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMailboxPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMailboxPermissionsOutcomeCallable PutMailboxPermissionsCallable(const Model::PutMailboxPermissionsRequest& request) const;

        /**
         * <p>Sets permissions for a user, group, or resource. This replaces any
         * pre-existing permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMailboxPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMailboxPermissionsAsync(const Model::PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an existing and disabled user, group, or resource for Amazon
         * WorkMail use by associating a mailbox and calendaring capabilities. It performs
         * no change if the user, group, or resource is enabled and fails if the user,
         * group, or resource is deleted. This operation results in the accumulation of
         * costs. For more information, see <a
         * href="https://aws.amazon.com//workmail/pricing">Pricing</a>. The equivalent
         * console functionality for this operation is <i>Enable</i>. </p> <p>Users can
         * either be created by calling the <a>CreateUser</a> API operation or they can be
         * synchronized from your directory. For more information, see
         * <a>DeregisterFromWorkMail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterToWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterToWorkMailOutcome RegisterToWorkMail(const Model::RegisterToWorkMailRequest& request) const;

        /**
         * <p>Registers an existing and disabled user, group, or resource for Amazon
         * WorkMail use by associating a mailbox and calendaring capabilities. It performs
         * no change if the user, group, or resource is enabled and fails if the user,
         * group, or resource is deleted. This operation results in the accumulation of
         * costs. For more information, see <a
         * href="https://aws.amazon.com//workmail/pricing">Pricing</a>. The equivalent
         * console functionality for this operation is <i>Enable</i>. </p> <p>Users can
         * either be created by calling the <a>CreateUser</a> API operation or they can be
         * synchronized from your directory. For more information, see
         * <a>DeregisterFromWorkMail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterToWorkMail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterToWorkMailOutcomeCallable RegisterToWorkMailCallable(const Model::RegisterToWorkMailRequest& request) const;

        /**
         * <p>Registers an existing and disabled user, group, or resource for Amazon
         * WorkMail use by associating a mailbox and calendaring capabilities. It performs
         * no change if the user, group, or resource is enabled and fails if the user,
         * group, or resource is deleted. This operation results in the accumulation of
         * costs. For more information, see <a
         * href="https://aws.amazon.com//workmail/pricing">Pricing</a>. The equivalent
         * console functionality for this operation is <i>Enable</i>. </p> <p>Users can
         * either be created by calling the <a>CreateUser</a> API operation or they can be
         * synchronized from your directory. For more information, see
         * <a>DeregisterFromWorkMail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterToWorkMail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterToWorkMailAsync(const Model::RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the administrator to reset the password for a user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ResetPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest& request) const;

        /**
         * <p>Allows the administrator to reset the password for a user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ResetPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetPasswordOutcomeCallable ResetPasswordCallable(const Model::ResetPasswordRequest& request) const;

        /**
         * <p>Allows the administrator to reset the password for a user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ResetPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetPasswordAsync(const Model::ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user's current mailbox quota for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMailboxQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMailboxQuotaOutcome UpdateMailboxQuota(const Model::UpdateMailboxQuotaRequest& request) const;

        /**
         * <p>Updates a user's current mailbox quota for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMailboxQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMailboxQuotaOutcomeCallable UpdateMailboxQuotaCallable(const Model::UpdateMailboxQuotaRequest& request) const;

        /**
         * <p>Updates a user's current mailbox quota for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMailboxQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMailboxQuotaAsync(const Model::UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the primary email for a user, group, or resource. The current email
         * is moved into the list of aliases (or swapped between an existing alias and the
         * current primary email), and the email provided in the input is promoted as the
         * primary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdatePrimaryEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePrimaryEmailAddressOutcome UpdatePrimaryEmailAddress(const Model::UpdatePrimaryEmailAddressRequest& request) const;

        /**
         * <p>Updates the primary email for a user, group, or resource. The current email
         * is moved into the list of aliases (or swapped between an existing alias and the
         * current primary email), and the email provided in the input is promoted as the
         * primary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdatePrimaryEmailAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePrimaryEmailAddressOutcomeCallable UpdatePrimaryEmailAddressCallable(const Model::UpdatePrimaryEmailAddressRequest& request) const;

        /**
         * <p>Updates the primary email for a user, group, or resource. The current email
         * is moved into the list of aliases (or swapped between an existing alias and the
         * current primary email), and the email provided in the input is promoted as the
         * primary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdatePrimaryEmailAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePrimaryEmailAddressAsync(const Model::UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates data for the resource. To have the latest information, it must be
         * preceded by a <a>DescribeResource</a> call. The dataset in the request should be
         * the one expected when performing another <code>DescribeResource</code>
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Updates data for the resource. To have the latest information, it must be
         * preceded by a <a>DescribeResource</a> call. The dataset in the request should be
         * the one expected when performing another <code>DescribeResource</code>
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Updates data for the resource. To have the latest information, it must be
         * preceded by a <a>DescribeResource</a> call. The dataset in the request should be
         * the one expected when performing another <code>DescribeResource</code>
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateDelegateToResourceAsyncHelper(const Model::AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateMemberToGroupAsyncHelper(const Model::AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceAsyncHelper(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMailboxPermissionsAsyncHelper(const Model::DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceAsyncHelper(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterFromWorkMailAsyncHelper(const Model::DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupAsyncHelper(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationAsyncHelper(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceAsyncHelper(const Model::DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDelegateFromResourceAsyncHelper(const Model::DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMemberFromGroupAsyncHelper(const Model::DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMailboxDetailsAsyncHelper(const Model::GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupMembersAsyncHelper(const Model::ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMailboxPermissionsAsyncHelper(const Model::ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationsAsyncHelper(const Model::ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceDelegatesAsyncHelper(const Model::ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesAsyncHelper(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMailboxPermissionsAsyncHelper(const Model::PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterToWorkMailAsyncHelper(const Model::RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetPasswordAsyncHelper(const Model::ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMailboxQuotaAsyncHelper(const Model::UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePrimaryEmailAddressAsyncHelper(const Model::UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceAsyncHelper(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkMail
} // namespace Aws
