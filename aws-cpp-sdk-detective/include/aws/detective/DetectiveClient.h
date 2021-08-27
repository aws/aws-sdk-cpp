/**
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
#include <aws/detective/model/GetMembersResult.h>
#include <aws/detective/model/ListGraphsResult.h>
#include <aws/detective/model/ListInvitationsResult.h>
#include <aws/detective/model/ListMembersResult.h>
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
        class CreateMembersRequest;
        class DeleteGraphRequest;
        class DeleteMembersRequest;
        class DisassociateMembershipRequest;
        class GetMembersRequest;
        class ListGraphsRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class RejectInvitationRequest;
        class StartMonitoringMemberRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<CreateGraphResult, DetectiveError> CreateGraphOutcome;
        typedef Aws::Utils::Outcome<CreateMembersResult, DetectiveError> CreateMembersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DeleteGraphOutcome;
        typedef Aws::Utils::Outcome<DeleteMembersResult, DetectiveError> DeleteMembersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DisassociateMembershipOutcome;
        typedef Aws::Utils::Outcome<GetMembersResult, DetectiveError> GetMembersOutcome;
        typedef Aws::Utils::Outcome<ListGraphsResult, DetectiveError> ListGraphsOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, DetectiveError> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, DetectiveError> ListMembersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> RejectInvitationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> StartMonitoringMemberOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<CreateGraphOutcome> CreateGraphOutcomeCallable;
        typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
        typedef std::future<DeleteGraphOutcome> DeleteGraphOutcomeCallable;
        typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
        typedef std::future<DisassociateMembershipOutcome> DisassociateMembershipOutcomeCallable;
        typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
        typedef std::future<ListGraphsOutcome> ListGraphsOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<RejectInvitationOutcome> RejectInvitationOutcomeCallable;
        typedef std::future<StartMonitoringMemberOutcome> StartMonitoringMemberOutcomeCallable;
} // namespace Model

  class DetectiveClient;

    typedef std::function<void(const DetectiveClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::CreateGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGraphResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DeleteGraphRequest&, const Model::DeleteGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGraphResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DisassociateMembershipRequest&, const Model::DisassociateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembershipResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListGraphsRequest&, const Model::ListGraphsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGraphsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::RejectInvitationRequest&, const Model::RejectInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInvitationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::StartMonitoringMemberRequest&, const Model::StartMonitoringMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitoringMemberResponseReceivedHandler;

  /**
   * <p>Detective uses machine learning and purpose-built visualizations to help you
   * analyze and investigate security issues across your Amazon Web Services (AWS)
   * workloads. Detective automatically extracts time-based events such as login
   * attempts, API calls, and network traffic from AWS CloudTrail and Amazon Virtual
   * Private Cloud (Amazon VPC) flow logs. It also extracts findings detected by
   * Amazon GuardDuty.</p> <p>The Detective API primarily supports the creation and
   * management of behavior graphs. A behavior graph contains the extracted data from
   * a set of member accounts, and is created and managed by a master account.</p>
   * <p>Every behavior graph is specific to a Region. You can only use the API to
   * manage graphs that belong to the Region that is associated with the currently
   * selected endpoint.</p> <p>A Detective master account can use the Detective API
   * to do the following:</p> <ul> <li> <p>Enable and disable Detective. Enabling
   * Detective creates a new behavior graph.</p> </li> <li> <p>View the list of
   * member accounts in a behavior graph.</p> </li> <li> <p>Add member accounts to a
   * behavior graph.</p> </li> <li> <p>Remove member accounts from a behavior
   * graph.</p> </li> </ul> <p>A member account can use the Detective API to do the
   * following:</p> <ul> <li> <p>View the list of behavior graphs that they are
   * invited to.</p> </li> <li> <p>Accept an invitation to contribute to a behavior
   * graph.</p> </li> <li> <p>Decline an invitation to contribute to a behavior
   * graph.</p> </li> <li> <p>Remove their account from a behavior graph.</p> </li>
   * </ul> <p>All API actions are logged as CloudTrail events. See <a
   * href="https://docs.aws.amazon.com/detective/latest/adminguide/logging-using-cloudtrail.html">Logging
   * Detective API Calls with CloudTrail</a>.</p>
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
         * <p>Accepts an invitation for the member account to contribute data to a behavior
         * graph. This operation can only be called by an invited member account. </p>
         * <p>The request provides the ARN of behavior graph.</p> <p>The member account
         * status in the graph must be <code>INVITED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts an invitation for the member account to contribute data to a behavior
         * graph. This operation can only be called by an invited member account. </p>
         * <p>The request provides the ARN of behavior graph.</p> <p>The member account
         * status in the graph must be <code>INVITED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new behavior graph for the calling account, and sets that account
         * as the master account. This operation is called by the account that is enabling
         * Detective.</p> <p>Before you try to enable Detective, make sure that your
         * account has been enrolled in Amazon GuardDuty for at least 48 hours. If you do
         * not meet this requirement, you cannot enable Detective. If you do meet the
         * GuardDuty prerequisite, then when you make the request to enable Detective, it
         * checks whether your data volume is within the Detective quota. If it exceeds the
         * quota, then you cannot enable Detective. </p> <p>The operation also enables
         * Detective for the calling account in the currently selected Region. It returns
         * the ARN of the new behavior graph.</p> <p> <code>CreateGraph</code> triggers a
         * process to create the corresponding data tables for the new behavior graph.</p>
         * <p>An account can only be the master account for one behavior graph within a
         * Region. If the same account calls <code>CreateGraph</code> with the same master
         * account, it always returns the same behavior graph ARN. It does not create a new
         * behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphOutcome CreateGraph() const;

        /**
         * <p>Creates a new behavior graph for the calling account, and sets that account
         * as the master account. This operation is called by the account that is enabling
         * Detective.</p> <p>Before you try to enable Detective, make sure that your
         * account has been enrolled in Amazon GuardDuty for at least 48 hours. If you do
         * not meet this requirement, you cannot enable Detective. If you do meet the
         * GuardDuty prerequisite, then when you make the request to enable Detective, it
         * checks whether your data volume is within the Detective quota. If it exceeds the
         * quota, then you cannot enable Detective. </p> <p>The operation also enables
         * Detective for the calling account in the currently selected Region. It returns
         * the ARN of the new behavior graph.</p> <p> <code>CreateGraph</code> triggers a
         * process to create the corresponding data tables for the new behavior graph.</p>
         * <p>An account can only be the master account for one behavior graph within a
         * Region. If the same account calls <code>CreateGraph</code> with the same master
         * account, it always returns the same behavior graph ARN. It does not create a new
         * behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateGraph">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGraphOutcomeCallable CreateGraphCallable() const;

        /**
         * <p>Creates a new behavior graph for the calling account, and sets that account
         * as the master account. This operation is called by the account that is enabling
         * Detective.</p> <p>Before you try to enable Detective, make sure that your
         * account has been enrolled in Amazon GuardDuty for at least 48 hours. If you do
         * not meet this requirement, you cannot enable Detective. If you do meet the
         * GuardDuty prerequisite, then when you make the request to enable Detective, it
         * checks whether your data volume is within the Detective quota. If it exceeds the
         * quota, then you cannot enable Detective. </p> <p>The operation also enables
         * Detective for the calling account in the currently selected Region. It returns
         * the ARN of the new behavior graph.</p> <p> <code>CreateGraph</code> triggers a
         * process to create the corresponding data tables for the new behavior graph.</p>
         * <p>An account can only be the master account for one behavior graph within a
         * Region. If the same account calls <code>CreateGraph</code> with the same master
         * account, it always returns the same behavior graph ARN. It does not create a new
         * behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateGraph">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGraphAsync(const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Sends a request to invite the specified AWS accounts to be member accounts in
         * the behavior graph. This operation can only be called by the master account for
         * a behavior graph. </p> <p> <code>CreateMembers</code> verifies the accounts and
         * then sends invitations to the verified accounts.</p> <p>The request provides the
         * behavior graph ARN and the list of accounts to invite.</p> <p>The response
         * separates the requested accounts into two lists:</p> <ul> <li> <p>The accounts
         * that <code>CreateMembers</code> was able to start the verification for. This
         * list includes member accounts that are being verified, that have passed
         * verification and are being sent an invitation, and that have failed
         * verification.</p> </li> <li> <p>The accounts that <code>CreateMembers</code> was
         * unable to process. This list includes accounts that were already invited to be
         * member accounts in the behavior graph.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Sends a request to invite the specified AWS accounts to be member accounts in
         * the behavior graph. This operation can only be called by the master account for
         * a behavior graph. </p> <p> <code>CreateMembers</code> verifies the accounts and
         * then sends invitations to the verified accounts.</p> <p>The request provides the
         * behavior graph ARN and the list of accounts to invite.</p> <p>The response
         * separates the requested accounts into two lists:</p> <ul> <li> <p>The accounts
         * that <code>CreateMembers</code> was able to start the verification for. This
         * list includes member accounts that are being verified, that have passed
         * verification and are being sent an invitation, and that have failed
         * verification.</p> </li> <li> <p>The accounts that <code>CreateMembers</code> was
         * unable to process. This list includes accounts that were already invited to be
         * member accounts in the behavior graph.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Sends a request to invite the specified AWS accounts to be member accounts in
         * the behavior graph. This operation can only be called by the master account for
         * a behavior graph. </p> <p> <code>CreateMembers</code> verifies the accounts and
         * then sends invitations to the verified accounts.</p> <p>The request provides the
         * behavior graph ARN and the list of accounts to invite.</p> <p>The response
         * separates the requested accounts into two lists:</p> <ul> <li> <p>The accounts
         * that <code>CreateMembers</code> was able to start the verification for. This
         * list includes member accounts that are being verified, that have passed
         * verification and are being sent an invitation, and that have failed
         * verification.</p> </li> <li> <p>The accounts that <code>CreateMembers</code> was
         * unable to process. This list includes accounts that were already invited to be
         * member accounts in the behavior graph.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified behavior graph and queues it to be deleted. This
         * operation removes the graph from each member account's list of behavior
         * graphs.</p> <p> <code>DeleteGraph</code> can only be called by the master
         * account for a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphOutcome DeleteGraph(const Model::DeleteGraphRequest& request) const;

        /**
         * <p>Disables the specified behavior graph and queues it to be deleted. This
         * operation removes the graph from each member account's list of behavior
         * graphs.</p> <p> <code>DeleteGraph</code> can only be called by the master
         * account for a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteGraph">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGraphOutcomeCallable DeleteGraphCallable(const Model::DeleteGraphRequest& request) const;

        /**
         * <p>Disables the specified behavior graph and queues it to be deleted. This
         * operation removes the graph from each member account's list of behavior
         * graphs.</p> <p> <code>DeleteGraph</code> can only be called by the master
         * account for a behavior graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteGraph">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGraphAsync(const Model::DeleteGraphRequest& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more member accounts from the master account behavior graph.
         * This operation can only be called by a Detective master account. That account
         * cannot use <code>DeleteMembers</code> to delete their own account from the
         * behavior graph. To disable a behavior graph, the master account uses the
         * <code>DeleteGraph</code> API method.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes one or more member accounts from the master account behavior graph.
         * This operation can only be called by a Detective master account. That account
         * cannot use <code>DeleteMembers</code> to delete their own account from the
         * behavior graph. To disable a behavior graph, the master account uses the
         * <code>DeleteGraph</code> API method.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes one or more member accounts from the master account behavior graph.
         * This operation can only be called by a Detective master account. That account
         * cannot use <code>DeleteMembers</code> to delete their own account from the
         * behavior graph. To disable a behavior graph, the master account uses the
         * <code>DeleteGraph</code> API method.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the member account from the specified behavior graph. This operation
         * can only be called by a member account that has the <code>ENABLED</code>
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DisassociateMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembershipOutcome DisassociateMembership(const Model::DisassociateMembershipRequest& request) const;

        /**
         * <p>Removes the member account from the specified behavior graph. This operation
         * can only be called by a member account that has the <code>ENABLED</code>
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DisassociateMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembershipOutcomeCallable DisassociateMembershipCallable(const Model::DisassociateMembershipRequest& request) const;

        /**
         * <p>Removes the member account from the specified behavior graph. This operation
         * can only be called by a member account that has the <code>ENABLED</code>
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DisassociateMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembershipAsync(const Model::DisassociateMembershipRequest& request, const DisassociateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the membership details for specified member accounts for a behavior
         * graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the membership details for specified member accounts for a behavior
         * graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the membership details for specified member accounts for a behavior
         * graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of behavior graphs that the calling account is a master of.
         * This operation can only be called by a master account.</p> <p>Because an account
         * can currently only be the master of one behavior graph within a Region, the
         * results always contain a single graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListGraphs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphsOutcome ListGraphs(const Model::ListGraphsRequest& request) const;

        /**
         * <p>Returns the list of behavior graphs that the calling account is a master of.
         * This operation can only be called by a master account.</p> <p>Because an account
         * can currently only be the master of one behavior graph within a Region, the
         * results always contain a single graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListGraphs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGraphsOutcomeCallable ListGraphsCallable(const Model::ListGraphsRequest& request) const;

        /**
         * <p>Returns the list of behavior graphs that the calling account is a master of.
         * This operation can only be called by a master account.</p> <p>Because an account
         * can currently only be the master of one behavior graph within a Region, the
         * results always contain a single graph.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListGraphs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGraphsAsync(const Model::ListGraphsRequest& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of open and accepted behavior graph invitations for the
         * member account. This operation can only be called by a member account.</p>
         * <p>Open invitations are invitations that the member account has not responded
         * to.</p> <p>The results do not include behavior graphs for which the member
         * account declined the invitation. The results also do not include behavior graphs
         * that the member account resigned from or was removed from.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Retrieves the list of open and accepted behavior graph invitations for the
         * member account. This operation can only be called by a member account.</p>
         * <p>Open invitations are invitations that the member account has not responded
         * to.</p> <p>The results do not include behavior graphs for which the member
         * account declined the invitation. The results also do not include behavior graphs
         * that the member account resigned from or was removed from.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Retrieves the list of open and accepted behavior graph invitations for the
         * member account. This operation can only be called by a member account.</p>
         * <p>Open invitations are invitations that the member account has not responded
         * to.</p> <p>The results do not include behavior graphs for which the member
         * account declined the invitation. The results also do not include behavior graphs
         * that the member account resigned from or was removed from.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of member accounts for a behavior graph. Does not return
         * member accounts that were removed from the behavior graph.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * <p>Retrieves the list of member accounts for a behavior graph. Does not return
         * member accounts that were removed from the behavior graph.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * <p>Retrieves the list of member accounts for a behavior graph. Does not return
         * member accounts that were removed from the behavior graph.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an invitation to contribute the account data to a behavior graph.
         * This operation must be called by a member account that has the
         * <code>INVITED</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/RejectInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInvitationOutcome RejectInvitation(const Model::RejectInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to contribute the account data to a behavior graph.
         * This operation must be called by a member account that has the
         * <code>INVITED</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/RejectInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInvitationOutcomeCallable RejectInvitationCallable(const Model::RejectInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to contribute the account data to a behavior graph.
         * This operation must be called by a member account that has the
         * <code>INVITED</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/RejectInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Sends a request to enable data ingest for a member account that has a status
         * of <code>ACCEPTED_BUT_DISABLED</code>.</p> <p>For valid member accounts, the
         * status is updated as follows.</p> <ul> <li> <p>If Detective enabled the member
         * account, then the new status is <code>ENABLED</code>.</p> </li> <li> <p>If
         * Detective cannot enable the member account, the status remains
         * <code>ACCEPTED_BUT_DISABLED</code>. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/StartMonitoringMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMonitoringMemberOutcomeCallable StartMonitoringMemberCallable(const Model::StartMonitoringMemberRequest& request) const;

        /**
         * <p>Sends a request to enable data ingest for a member account that has a status
         * of <code>ACCEPTED_BUT_DISABLED</code>.</p> <p>For valid member accounts, the
         * status is updated as follows.</p> <ul> <li> <p>If Detective enabled the member
         * account, then the new status is <code>ENABLED</code>.</p> </li> <li> <p>If
         * Detective cannot enable the member account, the status remains
         * <code>ACCEPTED_BUT_DISABLED</code>. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/StartMonitoringMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMonitoringMemberAsync(const Model::StartMonitoringMemberRequest& request, const StartMonitoringMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInvitationAsyncHelper(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGraphAsyncHelper(const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMembersAsyncHelper(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGraphAsyncHelper(const Model::DeleteGraphRequest& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMembersAsyncHelper(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMembershipAsyncHelper(const Model::DisassociateMembershipRequest& request, const DisassociateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMembersAsyncHelper(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGraphsAsyncHelper(const Model::ListGraphsRequest& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectInvitationAsyncHelper(const Model::RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMonitoringMemberAsyncHelper(const Model::StartMonitoringMemberRequest& request, const StartMonitoringMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Detective
} // namespace Aws
