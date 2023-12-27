﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/detective/DetectiveServiceClientModel.h>
#include <aws/detective/model/DisableOrganizationAdminAccountRequest.h>

namespace Aws
{
namespace Detective
{
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
   * organization behavior graph. The Detective administrator account is also the
   * delegated administrator account for Detective in Organizations.</p> <p>The
   * Detective administrator account can enable any organization account as a member
   * account in the organization behavior graph. The organization accounts do not
   * receive invitations. The Detective administrator account can also invite other
   * accounts to the organization behavior graph.</p> <p>Every behavior graph is
   * specific to a Region. You can only use the API to manage behavior graphs that
   * belong to the Region that is associated with the currently selected
   * endpoint.</p> <p>The administrator account for a behavior graph can use the
   * Detective API to do the following:</p> <ul> <li> <p>Enable and disable
   * Detective. Enabling Detective creates a new behavior graph.</p> </li> <li>
   * <p>View the list of member accounts in a behavior graph.</p> </li> <li> <p>Add
   * member accounts to a behavior graph.</p> </li> <li> <p>Remove member accounts
   * from a behavior graph.</p> </li> <li> <p>Apply tags to a behavior graph.</p>
   * </li> </ul> <p>The organization management account can use the Detective API to
   * select the delegated administrator for Detective.</p> <p>The Detective
   * administrator account for an organization can use the Detective API to do the
   * following:</p> <ul> <li> <p>Perform all of the functions of an administrator
   * account.</p> </li> <li> <p>Determine whether to automatically enable new
   * organization accounts as member accounts in the organization behavior graph.</p>
   * </li> </ul> <p>An invited member account can use the Detective API to do the
   * following:</p> <ul> <li> <p>View the list of behavior graphs that they are
   * invited to.</p> </li> <li> <p>Accept an invitation to contribute to a behavior
   * graph.</p> </li> <li> <p>Decline an invitation to contribute to a behavior
   * graph.</p> </li> <li> <p>Remove their account from a behavior graph.</p> </li>
   * </ul> <p>All API actions are logged as CloudTrail events. See <a
   * href="https://docs.aws.amazon.com/detective/latest/adminguide/logging-using-cloudtrail.html">Logging
   * Detective API Calls with CloudTrail</a>.</p>  <p>We replaced the term
   * "master account" with the term "administrator account." An administrator account
   * is used to centrally manage multiple accounts. In the case of Detective, the
   * administrator account manages the accounts in their behavior graph.</p> 
   */
  class AWS_DETECTIVE_API DetectiveClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DetectiveClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef DetectiveClientConfiguration ClientConfigurationType;
      typedef DetectiveEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DetectiveClient(const Aws::Detective::DetectiveClientConfiguration& clientConfiguration = Aws::Detective::DetectiveClientConfiguration(),
                        std::shared_ptr<DetectiveEndpointProviderBase> endpointProvider = Aws::MakeShared<DetectiveEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DetectiveClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<DetectiveEndpointProviderBase> endpointProvider = Aws::MakeShared<DetectiveEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Detective::DetectiveClientConfiguration& clientConfiguration = Aws::Detective::DetectiveClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DetectiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<DetectiveEndpointProviderBase> endpointProvider = Aws::MakeShared<DetectiveEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Detective::DetectiveClientConfiguration& clientConfiguration = Aws::Detective::DetectiveClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DetectiveClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DetectiveClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DetectiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
        template<typename AcceptInvitationRequestT = Model::AcceptInvitationRequest>
        Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const AcceptInvitationRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::AcceptInvitation, request);
        }

        /**
         * An Async wrapper for AcceptInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptInvitationRequestT = Model::AcceptInvitationRequest>
        void AcceptInvitationAsync(const AcceptInvitationRequestT& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::AcceptInvitation, request, handler, context);
        }

        /**
         * <p>Gets data source package information for the behavior graph.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/BatchGetGraphMemberDatasources">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetGraphMemberDatasourcesOutcome BatchGetGraphMemberDatasources(const Model::BatchGetGraphMemberDatasourcesRequest& request) const;

        /**
         * A Callable wrapper for BatchGetGraphMemberDatasources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetGraphMemberDatasourcesRequestT = Model::BatchGetGraphMemberDatasourcesRequest>
        Model::BatchGetGraphMemberDatasourcesOutcomeCallable BatchGetGraphMemberDatasourcesCallable(const BatchGetGraphMemberDatasourcesRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::BatchGetGraphMemberDatasources, request);
        }

        /**
         * An Async wrapper for BatchGetGraphMemberDatasources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetGraphMemberDatasourcesRequestT = Model::BatchGetGraphMemberDatasourcesRequest>
        void BatchGetGraphMemberDatasourcesAsync(const BatchGetGraphMemberDatasourcesRequestT& request, const BatchGetGraphMemberDatasourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::BatchGetGraphMemberDatasources, request, handler, context);
        }

        /**
         * <p>Gets information on the data source package history for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/BatchGetMembershipDatasources">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetMembershipDatasourcesOutcome BatchGetMembershipDatasources(const Model::BatchGetMembershipDatasourcesRequest& request) const;

        /**
         * A Callable wrapper for BatchGetMembershipDatasources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetMembershipDatasourcesRequestT = Model::BatchGetMembershipDatasourcesRequest>
        Model::BatchGetMembershipDatasourcesOutcomeCallable BatchGetMembershipDatasourcesCallable(const BatchGetMembershipDatasourcesRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::BatchGetMembershipDatasources, request);
        }

        /**
         * An Async wrapper for BatchGetMembershipDatasources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetMembershipDatasourcesRequestT = Model::BatchGetMembershipDatasourcesRequest>
        void BatchGetMembershipDatasourcesAsync(const BatchGetMembershipDatasourcesRequestT& request, const BatchGetMembershipDatasourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::BatchGetMembershipDatasources, request, handler, context);
        }

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
        template<typename CreateGraphRequestT = Model::CreateGraphRequest>
        Model::CreateGraphOutcomeCallable CreateGraphCallable(const CreateGraphRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::CreateGraph, request);
        }

        /**
         * An Async wrapper for CreateGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGraphRequestT = Model::CreateGraphRequest>
        void CreateGraphAsync(const CreateGraphRequestT& request, const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::CreateGraph, request, handler, context);
        }

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
        template<typename CreateMembersRequestT = Model::CreateMembersRequest>
        Model::CreateMembersOutcomeCallable CreateMembersCallable(const CreateMembersRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::CreateMembers, request);
        }

        /**
         * An Async wrapper for CreateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMembersRequestT = Model::CreateMembersRequest>
        void CreateMembersAsync(const CreateMembersRequestT& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::CreateMembers, request, handler, context);
        }

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
        template<typename DeleteGraphRequestT = Model::DeleteGraphRequest>
        Model::DeleteGraphOutcomeCallable DeleteGraphCallable(const DeleteGraphRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::DeleteGraph, request);
        }

        /**
         * An Async wrapper for DeleteGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGraphRequestT = Model::DeleteGraphRequest>
        void DeleteGraphAsync(const DeleteGraphRequestT& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::DeleteGraph, request, handler, context);
        }

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
        template<typename DeleteMembersRequestT = Model::DeleteMembersRequest>
        Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const DeleteMembersRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::DeleteMembers, request);
        }

        /**
         * An Async wrapper for DeleteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMembersRequestT = Model::DeleteMembersRequest>
        void DeleteMembersAsync(const DeleteMembersRequestT& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::DeleteMembers, request, handler, context);
        }

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
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::DescribeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        void DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequestT& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::DescribeOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p>Removes the Detective administrator account in the current Region. Deletes
         * the organization behavior graph.</p> <p>Can only be called by the organization
         * management account.</p> <p>Removing the Detective administrator account does not
         * affect the delegated administrator account for Detective in Organizations.</p>
         * <p>To remove the delegated administrator account in Organizations, use the
         * Organizations API. Removing the delegated administrator account also removes the
         * Detective administrator account in all Regions, except for Regions where the
         * Detective administrator account is the organization management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request = {}) const;

        /**
         * A Callable wrapper for DisableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequestT& request = {}) const
        {
            return SubmitCallable(&DetectiveClient::DisableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        void DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DisableOrganizationAdminAccountRequestT& request = {}) const
        {
            return SubmitAsync(&DetectiveClient::DisableOrganizationAdminAccount, request, handler, context);
        }

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
        template<typename DisassociateMembershipRequestT = Model::DisassociateMembershipRequest>
        Model::DisassociateMembershipOutcomeCallable DisassociateMembershipCallable(const DisassociateMembershipRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::DisassociateMembership, request);
        }

        /**
         * An Async wrapper for DisassociateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMembershipRequestT = Model::DisassociateMembershipRequest>
        void DisassociateMembershipAsync(const DisassociateMembershipRequestT& request, const DisassociateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::DisassociateMembership, request, handler, context);
        }

        /**
         * <p>Designates the Detective administrator account for the organization in the
         * current Region.</p> <p>If the account does not have Detective enabled, then
         * enables Detective for that account and creates a new behavior graph.</p> <p>Can
         * only be called by the organization management account.</p> <p>If the
         * organization has a delegated administrator account in Organizations, then the
         * Detective administrator account must be either the delegated administrator
         * account or the organization management account.</p> <p>If the organization does
         * not have a delegated administrator account in Organizations, then you can choose
         * any account in the organization. If you choose an account other than the
         * organization management account, Detective calls Organizations to make that
         * account the delegated administrator account for Detective. The organization
         * management account cannot be the delegated administrator account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::EnableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        void EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequestT& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::EnableOrganizationAdminAccount, request, handler, context);
        }

        /**
         * <p>Returns the investigation results of an investigation for a behavior graph.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/GetInvestigation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvestigationOutcome GetInvestigation(const Model::GetInvestigationRequest& request) const;

        /**
         * A Callable wrapper for GetInvestigation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInvestigationRequestT = Model::GetInvestigationRequest>
        Model::GetInvestigationOutcomeCallable GetInvestigationCallable(const GetInvestigationRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::GetInvestigation, request);
        }

        /**
         * An Async wrapper for GetInvestigation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvestigationRequestT = Model::GetInvestigationRequest>
        void GetInvestigationAsync(const GetInvestigationRequestT& request, const GetInvestigationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::GetInvestigation, request, handler, context);
        }

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
        template<typename GetMembersRequestT = Model::GetMembersRequest>
        Model::GetMembersOutcomeCallable GetMembersCallable(const GetMembersRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::GetMembers, request);
        }

        /**
         * An Async wrapper for GetMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMembersRequestT = Model::GetMembersRequest>
        void GetMembersAsync(const GetMembersRequestT& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::GetMembers, request, handler, context);
        }

        /**
         * <p>Lists data source packages in the behavior graph.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListDatasourcePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasourcePackagesOutcome ListDatasourcePackages(const Model::ListDatasourcePackagesRequest& request) const;

        /**
         * A Callable wrapper for ListDatasourcePackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasourcePackagesRequestT = Model::ListDatasourcePackagesRequest>
        Model::ListDatasourcePackagesOutcomeCallable ListDatasourcePackagesCallable(const ListDatasourcePackagesRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListDatasourcePackages, request);
        }

        /**
         * An Async wrapper for ListDatasourcePackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasourcePackagesRequestT = Model::ListDatasourcePackagesRequest>
        void ListDatasourcePackagesAsync(const ListDatasourcePackagesRequestT& request, const ListDatasourcePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListDatasourcePackages, request, handler, context);
        }

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
        template<typename ListGraphsRequestT = Model::ListGraphsRequest>
        Model::ListGraphsOutcomeCallable ListGraphsCallable(const ListGraphsRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListGraphs, request);
        }

        /**
         * An Async wrapper for ListGraphs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGraphsRequestT = Model::ListGraphsRequest>
        void ListGraphsAsync(const ListGraphsRequestT& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListGraphs, request, handler, context);
        }

        /**
         * <p>Get the indicators from an investigation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListIndicators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndicatorsOutcome ListIndicators(const Model::ListIndicatorsRequest& request) const;

        /**
         * A Callable wrapper for ListIndicators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIndicatorsRequestT = Model::ListIndicatorsRequest>
        Model::ListIndicatorsOutcomeCallable ListIndicatorsCallable(const ListIndicatorsRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListIndicators, request);
        }

        /**
         * An Async wrapper for ListIndicators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIndicatorsRequestT = Model::ListIndicatorsRequest>
        void ListIndicatorsAsync(const ListIndicatorsRequestT& request, const ListIndicatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListIndicators, request, handler, context);
        }

        /**
         * <p>List all Investigations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListInvestigations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvestigationsOutcome ListInvestigations(const Model::ListInvestigationsRequest& request) const;

        /**
         * A Callable wrapper for ListInvestigations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvestigationsRequestT = Model::ListInvestigationsRequest>
        Model::ListInvestigationsOutcomeCallable ListInvestigationsCallable(const ListInvestigationsRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListInvestigations, request);
        }

        /**
         * An Async wrapper for ListInvestigations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvestigationsRequestT = Model::ListInvestigationsRequest>
        void ListInvestigationsAsync(const ListInvestigationsRequestT& request, const ListInvestigationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListInvestigations, request, handler, context);
        }

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
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const ListInvitationsRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListInvitations, request);
        }

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        void ListInvitationsAsync(const ListInvitationsRequestT& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListInvitations, request, handler, context);
        }

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
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        Model::ListMembersOutcomeCallable ListMembersCallable(const ListMembersRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListMembers, request);
        }

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        void ListMembersAsync(const ListMembersRequestT& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListMembers, request, handler, context);
        }

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
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListOrganizationAdminAccounts, request);
        }

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        void ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequestT& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListOrganizationAdminAccounts, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename RejectInvitationRequestT = Model::RejectInvitationRequest>
        Model::RejectInvitationOutcomeCallable RejectInvitationCallable(const RejectInvitationRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::RejectInvitation, request);
        }

        /**
         * An Async wrapper for RejectInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectInvitationRequestT = Model::RejectInvitationRequest>
        void RejectInvitationAsync(const RejectInvitationRequestT& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::RejectInvitation, request, handler, context);
        }

        /**
         * <p>initiate an investigation on an entity in a graph</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/StartInvestigation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInvestigationOutcome StartInvestigation(const Model::StartInvestigationRequest& request) const;

        /**
         * A Callable wrapper for StartInvestigation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInvestigationRequestT = Model::StartInvestigationRequest>
        Model::StartInvestigationOutcomeCallable StartInvestigationCallable(const StartInvestigationRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::StartInvestigation, request);
        }

        /**
         * An Async wrapper for StartInvestigation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInvestigationRequestT = Model::StartInvestigationRequest>
        void StartInvestigationAsync(const StartInvestigationRequestT& request, const StartInvestigationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::StartInvestigation, request, handler, context);
        }

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
        template<typename StartMonitoringMemberRequestT = Model::StartMonitoringMemberRequest>
        Model::StartMonitoringMemberOutcomeCallable StartMonitoringMemberCallable(const StartMonitoringMemberRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::StartMonitoringMember, request);
        }

        /**
         * An Async wrapper for StartMonitoringMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMonitoringMemberRequestT = Model::StartMonitoringMemberRequest>
        void StartMonitoringMemberAsync(const StartMonitoringMemberRequestT& request, const StartMonitoringMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::StartMonitoringMember, request, handler, context);
        }

        /**
         * <p>Applies tag values to a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Starts a data source packages for the behavior graph.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/UpdateDatasourcePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasourcePackagesOutcome UpdateDatasourcePackages(const Model::UpdateDatasourcePackagesRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatasourcePackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatasourcePackagesRequestT = Model::UpdateDatasourcePackagesRequest>
        Model::UpdateDatasourcePackagesOutcomeCallable UpdateDatasourcePackagesCallable(const UpdateDatasourcePackagesRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::UpdateDatasourcePackages, request);
        }

        /**
         * An Async wrapper for UpdateDatasourcePackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatasourcePackagesRequestT = Model::UpdateDatasourcePackagesRequest>
        void UpdateDatasourcePackagesAsync(const UpdateDatasourcePackagesRequestT& request, const UpdateDatasourcePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::UpdateDatasourcePackages, request, handler, context);
        }

        /**
         * <p>Update the state of an investigation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/UpdateInvestigationState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInvestigationStateOutcome UpdateInvestigationState(const Model::UpdateInvestigationStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateInvestigationState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInvestigationStateRequestT = Model::UpdateInvestigationStateRequest>
        Model::UpdateInvestigationStateOutcomeCallable UpdateInvestigationStateCallable(const UpdateInvestigationStateRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::UpdateInvestigationState, request);
        }

        /**
         * An Async wrapper for UpdateInvestigationState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInvestigationStateRequestT = Model::UpdateInvestigationStateRequest>
        void UpdateInvestigationStateAsync(const UpdateInvestigationStateRequestT& request, const UpdateInvestigationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::UpdateInvestigationState, request, handler, context);
        }

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
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&DetectiveClient::UpdateOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        void UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequestT& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DetectiveClient::UpdateOrganizationConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DetectiveEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DetectiveClient>;
      void init(const DetectiveClientConfiguration& clientConfiguration);

      DetectiveClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DetectiveEndpointProviderBase> m_endpointProvider;
  };

} // namespace Detective
} // namespace Aws
