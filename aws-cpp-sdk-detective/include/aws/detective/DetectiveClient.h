﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/detective/model/CreateGraphResult.h>
#include <aws/detective/model/CreateMembersResult.h>
#include <aws/detective/model/DeleteMembersResult.h>
#include <aws/detective/model/DescribeOrganizationConfigurationResult.h>
#include <aws/detective/model/GetMembersResult.h>
#include <aws/detective/model/ListGraphsResult.h>
#include <aws/detective/model/ListInvitationsResult.h>
#include <aws/detective/model/ListMembersResult.h>
#include <aws/detective/model/ListOrganizationAdminAccountsResult.h>
#include <aws/detective/model/ListTagsForResourceResult.h>
#include <aws/detective/model/TagResourceResult.h>
#include <aws/detective/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
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

namespace Detective
{

namespace Model
{
        class AcceptInvitationRequest;
        class CreateGraphRequest;
        class CreateMembersRequest;
        class DeleteGraphRequest;
        class DeleteMembersRequest;
        class DescribeOrganizationConfigurationRequest;
        class DisassociateMembershipRequest;
        class EnableOrganizationAdminAccountRequest;
        class GetMembersRequest;
        class ListGraphsRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class ListOrganizationAdminAccountsRequest;
        class ListTagsForResourceRequest;
        class RejectInvitationRequest;
        class StartMonitoringMemberRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateOrganizationConfigurationRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<CreateGraphResult, DetectiveError> CreateGraphOutcome;
        typedef Aws::Utils::Outcome<CreateMembersResult, DetectiveError> CreateMembersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DeleteGraphOutcome;
        typedef Aws::Utils::Outcome<DeleteMembersResult, DetectiveError> DeleteMembersOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, DetectiveError> DescribeOrganizationConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DisableOrganizationAdminAccountOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DisassociateMembershipOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> EnableOrganizationAdminAccountOutcome;
        typedef Aws::Utils::Outcome<GetMembersResult, DetectiveError> GetMembersOutcome;
        typedef Aws::Utils::Outcome<ListGraphsResult, DetectiveError> ListGraphsOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, DetectiveError> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, DetectiveError> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, DetectiveError> ListOrganizationAdminAccountsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, DetectiveError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> RejectInvitationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> StartMonitoringMemberOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, DetectiveError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, DetectiveError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> UpdateOrganizationConfigurationOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<CreateGraphOutcome> CreateGraphOutcomeCallable;
        typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
        typedef std::future<DeleteGraphOutcome> DeleteGraphOutcomeCallable;
        typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
        typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
        typedef std::future<DisableOrganizationAdminAccountOutcome> DisableOrganizationAdminAccountOutcomeCallable;
        typedef std::future<DisassociateMembershipOutcome> DisassociateMembershipOutcomeCallable;
        typedef std::future<EnableOrganizationAdminAccountOutcome> EnableOrganizationAdminAccountOutcomeCallable;
        typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
        typedef std::future<ListGraphsOutcome> ListGraphsOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RejectInvitationOutcome> RejectInvitationOutcomeCallable;
        typedef std::future<StartMonitoringMemberOutcome> StartMonitoringMemberOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
} // namespace Model

  class DetectiveClient;

    typedef std::function<void(const DetectiveClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::CreateGraphRequest&, const Model::CreateGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGraphResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DeleteGraphRequest&, const Model::DeleteGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGraphResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DisableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DisassociateMembershipRequest&, const Model::DisassociateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembershipResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::EnableOrganizationAdminAccountRequest&, const Model::EnableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListGraphsRequest&, const Model::ListGraphsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGraphsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::RejectInvitationRequest&, const Model::RejectInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInvitationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::StartMonitoringMemberRequest&, const Model::StartMonitoringMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitoringMemberResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;

  /**
   * <p>Detective uses machine learning and purpose-built visualizations to help you
   * to analyze and investigate security issues across your Amazon Web Services
   * (Amazon Web Services) workloads. Detective automatically extracts time-based
   * events such as login attempts, API calls, and network traffic from CloudTrail
   * and Amazon Virtual Private Cloud (Amazon VPC) flow logs. It also extracts
   * findings detected by Amazon GuardDuty.</p> <p>The Detective API primarily
   * supports the creation and management of behavior graphs. A behavior graph
   * contains the extracted data from a set of member accounts, and is created and
   * managed by an administrator account.</p> <p>To add a member account to the
   * behavior graph, the administrator account sends an invitation to the account.
   * When the account accepts the invitation, it becomes a member account in the
   * behavior graph.</p> <p>Detective is also integrated with Organizations. The
   * organization management account designates the Detective administrator account
   * for the organization. That account becomes the administrator account for the
   * organization behavior graph. The Detective administrator account can enable any
   * organization account as a member account in the organization behavior graph. The
   * organization accounts do not receive invitations. The Detective administrator
   * account can also invite other accounts to the organization behavior graph.</p>
   * <p>Every behavior graph is specific to a Region. You can only use the API to
   * manage behavior graphs that belong to the Region that is associated with the
   * currently selected endpoint.</p> <p>The administrator account for a behavior
   * graph can use the Detective API to do the following:</p> <ul> <li> <p>Enable and
   * disable Detective. Enabling Detective creates a new behavior graph.</p> </li>
   * <li> <p>View the list of member accounts in a behavior graph.</p> </li> <li>
   * <p>Add member accounts to a behavior graph.</p> </li> <li> <p>Remove member
   * accounts from a behavior graph.</p> </li> <li> <p>Apply tags to a behavior
   * graph.</p> </li> </ul> <p>The organization management account can use the
   * Detective API to select the delegated administrator for Detective.</p> <p>The
   * Detective administrator account for an organization can use the Detective API to
   * do the following:</p> <ul> <li> <p>Perform all of the functions of an
   * administrator account.</p> </li> <li> <p>Determine whether to automatically
   * enable new organization accounts as member accounts in the organization behavior
   * graph.</p> </li> </ul> <p>An invited member account can use the Detective API to
   * do the following:</p> <ul> <li> <p>View the list of behavior graphs that they
   * are invited to.</p> </li> <li> <p>Accept an invitation to contribute to a
   * behavior graph.</p> </li> <li> <p>Decline an invitation to contribute to a
   * behavior graph.</p> </li> <li> <p>Remove their account from a behavior
   * graph.</p> </li> </ul> <p>All API actions are logged as CloudTrail events. See
   * <a
   * href="https://docs.aws.amazon.com/detective/latest/adminguide/logging-using-cloudtrail.html">Logging
   * Detective API Calls with CloudTrail</a>.</p>  <p>We replaced the term
   * "master account" with the term "administrator account." An administrator account
   * is used to centrally manage multiple accounts. In the case of Detective, the
   * administrator account manages the accounts in their behavior graph.</p> 
   */
  class AWS_DETECTIVE_API DetectiveClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DetectiveClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DetectiveClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DetectiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DetectiveClient();


        /**
         * <p>Accepts an invitation for the member account to contribute data to a behavior
         * graph. This operation can only be called by an invited member account. </p>
         * <p>The request provides the ARN of behavior graph.</p> <p>The member account
         * status in the graph must be <code>INVITED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * A Callable wrapper for AcceptInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * An Async wrapper for AcceptInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new behavior graph for the calling account, and sets that account
         * as the administrator account. This operation is called by the account that is
         * enabling Detective.</p> <p>Before you try to enable Detective, make sure that
         * your account has been enrolled in Amazon GuardDuty for at least 48 hours. If you
         * do not meet this requirement, you cannot enable Detective. If you do meet the
         * GuardDuty prerequisite, then when you make the request to enable Detective, it
         * checks whether your data volume is within the Detective quota. If it exceeds the
         * quota, then you cannot enable Detective. </p> <p>The operation also enables
         * Detective for the calling account in the currently selected Region. It returns
         * the ARN of the new behavior graph.</p> <p> <code>CreateGraph</code> triggers a
         * process to create the corresponding data tables for the new behavior graph.</p>
         * <p>An account can only be the administrator account for one behavior graph
         * within a Region. If the same account calls <code>CreateGraph</code> with the
         * same administrator account, it always returns the same behavior graph ARN. It
         * does not create a new behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphOutcome CreateGraph(const Model::CreateGraphRequest& request) const;

        /**
         * A Callable wrapper for CreateGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGraphOutcomeCallable CreateGraphCallable(const Model::CreateGraphRequest& request) const;

        /**
         * An Async wrapper for CreateGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGraphAsync(const Model::CreateGraphRequest& request, const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>CreateMembers</code> is used to send invitations to accounts. For the
         * organization behavior graph, the Detective administrator account uses
         * <code>CreateMembers</code> to enable organization accounts as member
         * accounts.</p> <p>For invited accounts, <code>CreateMembers</code> sends a
         * request to invite the specified Amazon Web Services accounts to be member
         * accounts in the behavior graph. This operation can only be called by the
         * administrator account for a behavior graph. </p> <p> <code>CreateMembers</code>
         * verifies the accounts and then invites the verified accounts. The administrator
         * can optionally specify to not send invitation emails to the member accounts.
         * This would be used when the administrator manages their member accounts
         * centrally.</p> <p>For organization accounts in the organization behavior graph,
         * <code>CreateMembers</code> attempts to enable the accounts. The organization
         * accounts do not receive invitations.</p> <p>The request provides the behavior
         * graph ARN and the list of accounts to invite or to enable.</p> <p>The response
         * separates the requested accounts into two lists:</p> <ul> <li> <p>The accounts
         * that <code>CreateMembers</code> was able to process. For invited accounts,
         * includes member accounts that are being verified, that have passed verification
         * and are to be invited, and that have failed verification. For organization
         * accounts in the organization behavior graph, includes accounts that can be
         * enabled and that cannot be enabled.</p> </li> <li> <p>The accounts that
         * <code>CreateMembers</code> was unable to process. This list includes accounts
         * that were already invited to be member accounts in the behavior graph.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * A Callable wrapper for CreateMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * An Async wrapper for CreateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified behavior graph and queues it to be deleted. This
         * operation removes the behavior graph from each member account's list of behavior
         * graphs.</p> <p> <code>DeleteGraph</code> can only be called by the administrator
         * account for a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphOutcome DeleteGraph(const Model::DeleteGraphRequest& request) const;

        /**
         * A Callable wrapper for DeleteGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGraphOutcomeCallable DeleteGraphCallable(const Model::DeleteGraphRequest& request) const;

        /**
         * An Async wrapper for DeleteGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGraphAsync(const Model::DeleteGraphRequest& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified member accounts from the behavior graph. The removed
         * accounts no longer contribute data to the behavior graph. This operation can
         * only be called by the administrator account for the behavior graph.</p> <p>For
         * invited accounts, the removed accounts are deleted from the list of accounts in
         * the behavior graph. To restore the account, the administrator account must send
         * another invitation.</p> <p>For organization accounts in the organization
         * behavior graph, the Detective administrator account can always enable the
         * organization account again. Organization accounts that are not enabled as member
         * accounts are not included in the <code>ListMembers</code> results for the
         * organization behavior graph.</p> <p>An administrator account cannot use
         * <code>DeleteMembers</code> to remove their own account from the behavior graph.
         * To disable a behavior graph, the administrator account uses the
         * <code>DeleteGraph</code> API method.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * A Callable wrapper for DeleteMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * An Async wrapper for DeleteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the configuration for the organization behavior
         * graph. Currently indicates whether to automatically enable new organization
         * accounts as member accounts.</p> <p>Can only be called by the Detective
         * administrator account for the organization. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigurationAsync(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the Detective administrator account for the organization in the
         * current Region. Deletes the behavior graph for that account.</p> <p>Can only be
         * called by the organization management account. Before you can select a different
         * Detective administrator account, you must remove the Detective administrator
         * account in all Regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount() const;

        /**
         * A Callable wrapper for DisableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable() const;

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Removes the member account from the specified behavior graph. This operation
         * can only be called by an invited member account that has the
         * <code>ENABLED</code> status.</p> <p> <code>DisassociateMembership</code> cannot
         * be called by an organization account in the organization behavior graph. For the
         * organization behavior graph, the Detective administrator account determines
         * which organization accounts to enable or disable as member
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DisassociateMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembershipOutcome DisassociateMembership(const Model::DisassociateMembershipRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembershipOutcomeCallable DisassociateMembershipCallable(const Model::DisassociateMembershipRequest& request) const;

        /**
         * An Async wrapper for DisassociateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembershipAsync(const Model::DisassociateMembershipRequest& request, const DisassociateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates the Detective administrator account for the organization in the
         * current Region.</p> <p>If the account does not have Detective enabled, then
         * enables Detective for that account and creates a new behavior graph.</p> <p>Can
         * only be called by the organization management account.</p> <p>The Detective
         * administrator account for an organization must be the same in all Regions. If
         * you already designated a Detective administrator account in another Region, then
         * you must designate the same account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableOrganizationAdminAccountAsync(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the membership details for specified member accounts for a behavior
         * graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * A Callable wrapper for GetMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * An Async wrapper for GetMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of behavior graphs that the calling account is an
         * administrator account of. This operation can only be called by an administrator
         * account.</p> <p>Because an account can currently only be the administrator of
         * one behavior graph within a Region, the results always contain a single behavior
         * graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListGraphs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphsOutcome ListGraphs(const Model::ListGraphsRequest& request) const;

        /**
         * A Callable wrapper for ListGraphs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGraphsOutcomeCallable ListGraphsCallable(const Model::ListGraphsRequest& request) const;

        /**
         * An Async wrapper for ListGraphs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGraphsAsync(const Model::ListGraphsRequest& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of open and accepted behavior graph invitations for the
         * member account. This operation can only be called by an invited member
         * account.</p> <p>Open invitations are invitations that the member account has not
         * responded to.</p> <p>The results do not include behavior graphs for which the
         * member account declined the invitation. The results also do not include behavior
         * graphs that the member account resigned from or was removed from.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * A Callable wrapper for ListInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of member accounts for a behavior graph.</p> <p>For
         * invited accounts, the results do not include member accounts that were removed
         * from the behavior graph.</p> <p>For the organization behavior graph, the results
         * do not include organization accounts that the Detective administrator account
         * has not enabled as member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * A Callable wrapper for ListMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the Detective administrator account for an
         * organization. Can only be called by the organization management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationAdminAccountsAsync(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tag values that are assigned to a behavior graph.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an invitation to contribute the account data to a behavior graph.
         * This operation must be called by an invited member account that has the
         * <code>INVITED</code> status.</p> <p> <code>RejectInvitation</code> cannot be
         * called by an organization account in the organization behavior graph. In the
         * organization behavior graph, organization accounts do not receive an
         * invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/RejectInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInvitationOutcome RejectInvitation(const Model::RejectInvitationRequest& request) const;

        /**
         * A Callable wrapper for RejectInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInvitationOutcomeCallable RejectInvitationCallable(const Model::RejectInvitationRequest& request) const;

        /**
         * An Async wrapper for RejectInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectInvitationAsync(const Model::RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a request to enable data ingest for a member account that has a status
         * of <code>ACCEPTED_BUT_DISABLED</code>.</p> <p>For valid member accounts, the
         * status is updated as follows.</p> <ul> <li> <p>If Detective enabled the member
         * account, then the new status is <code>ENABLED</code>.</p> </li> <li> <p>If
         * Detective cannot enable the member account, the status remains
         * <code>ACCEPTED_BUT_DISABLED</code>. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/StartMonitoringMember">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringMemberOutcome StartMonitoringMember(const Model::StartMonitoringMemberRequest& request) const;

        /**
         * A Callable wrapper for StartMonitoringMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMonitoringMemberOutcomeCallable StartMonitoringMemberCallable(const Model::StartMonitoringMemberRequest& request) const;

        /**
         * An Async wrapper for StartMonitoringMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMonitoringMemberAsync(const Model::StartMonitoringMemberRequest& request, const StartMonitoringMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies tag values to a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for the Organizations integration in the current
         * Region. Can only be called by the Detective administrator account for the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationConfigurationAsync(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInvitationAsyncHelper(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGraphAsyncHelper(const Model::CreateGraphRequest& request, const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMembersAsyncHelper(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGraphAsyncHelper(const Model::DeleteGraphRequest& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMembersAsyncHelper(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationConfigurationAsyncHelper(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableOrganizationAdminAccountAsyncHelper(const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMembershipAsyncHelper(const Model::DisassociateMembershipRequest& request, const DisassociateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableOrganizationAdminAccountAsyncHelper(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMembersAsyncHelper(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGraphsAsyncHelper(const Model::ListGraphsRequest& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationAdminAccountsAsyncHelper(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectInvitationAsyncHelper(const Model::RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMonitoringMemberAsyncHelper(const Model::StartMonitoringMemberRequest& request, const StartMonitoringMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOrganizationConfigurationAsyncHelper(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Detective
} // namespace Aws
