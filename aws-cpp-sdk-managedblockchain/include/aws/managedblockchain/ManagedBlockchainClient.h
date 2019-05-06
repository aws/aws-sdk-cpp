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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/managedblockchain/model/CreateMemberResult.h>
#include <aws/managedblockchain/model/CreateNetworkResult.h>
#include <aws/managedblockchain/model/CreateNodeResult.h>
#include <aws/managedblockchain/model/CreateProposalResult.h>
#include <aws/managedblockchain/model/DeleteMemberResult.h>
#include <aws/managedblockchain/model/DeleteNodeResult.h>
#include <aws/managedblockchain/model/GetMemberResult.h>
#include <aws/managedblockchain/model/GetNetworkResult.h>
#include <aws/managedblockchain/model/GetNodeResult.h>
#include <aws/managedblockchain/model/GetProposalResult.h>
#include <aws/managedblockchain/model/ListInvitationsResult.h>
#include <aws/managedblockchain/model/ListMembersResult.h>
#include <aws/managedblockchain/model/ListNetworksResult.h>
#include <aws/managedblockchain/model/ListNodesResult.h>
#include <aws/managedblockchain/model/ListProposalVotesResult.h>
#include <aws/managedblockchain/model/ListProposalsResult.h>
#include <aws/managedblockchain/model/RejectInvitationResult.h>
#include <aws/managedblockchain/model/VoteOnProposalResult.h>
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

namespace ManagedBlockchain
{

namespace Model
{
        class CreateMemberRequest;
        class CreateNetworkRequest;
        class CreateNodeRequest;
        class CreateProposalRequest;
        class DeleteMemberRequest;
        class DeleteNodeRequest;
        class GetMemberRequest;
        class GetNetworkRequest;
        class GetNodeRequest;
        class GetProposalRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class ListNetworksRequest;
        class ListNodesRequest;
        class ListProposalVotesRequest;
        class ListProposalsRequest;
        class RejectInvitationRequest;
        class VoteOnProposalRequest;

        typedef Aws::Utils::Outcome<CreateMemberResult, Aws::Client::AWSError<ManagedBlockchainErrors>> CreateMemberOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkResult, Aws::Client::AWSError<ManagedBlockchainErrors>> CreateNetworkOutcome;
        typedef Aws::Utils::Outcome<CreateNodeResult, Aws::Client::AWSError<ManagedBlockchainErrors>> CreateNodeOutcome;
        typedef Aws::Utils::Outcome<CreateProposalResult, Aws::Client::AWSError<ManagedBlockchainErrors>> CreateProposalOutcome;
        typedef Aws::Utils::Outcome<DeleteMemberResult, Aws::Client::AWSError<ManagedBlockchainErrors>> DeleteMemberOutcome;
        typedef Aws::Utils::Outcome<DeleteNodeResult, Aws::Client::AWSError<ManagedBlockchainErrors>> DeleteNodeOutcome;
        typedef Aws::Utils::Outcome<GetMemberResult, Aws::Client::AWSError<ManagedBlockchainErrors>> GetMemberOutcome;
        typedef Aws::Utils::Outcome<GetNetworkResult, Aws::Client::AWSError<ManagedBlockchainErrors>> GetNetworkOutcome;
        typedef Aws::Utils::Outcome<GetNodeResult, Aws::Client::AWSError<ManagedBlockchainErrors>> GetNodeOutcome;
        typedef Aws::Utils::Outcome<GetProposalResult, Aws::Client::AWSError<ManagedBlockchainErrors>> GetProposalOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, Aws::Client::AWSError<ManagedBlockchainErrors>> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, Aws::Client::AWSError<ManagedBlockchainErrors>> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListNetworksResult, Aws::Client::AWSError<ManagedBlockchainErrors>> ListNetworksOutcome;
        typedef Aws::Utils::Outcome<ListNodesResult, Aws::Client::AWSError<ManagedBlockchainErrors>> ListNodesOutcome;
        typedef Aws::Utils::Outcome<ListProposalVotesResult, Aws::Client::AWSError<ManagedBlockchainErrors>> ListProposalVotesOutcome;
        typedef Aws::Utils::Outcome<ListProposalsResult, Aws::Client::AWSError<ManagedBlockchainErrors>> ListProposalsOutcome;
        typedef Aws::Utils::Outcome<RejectInvitationResult, Aws::Client::AWSError<ManagedBlockchainErrors>> RejectInvitationOutcome;
        typedef Aws::Utils::Outcome<VoteOnProposalResult, Aws::Client::AWSError<ManagedBlockchainErrors>> VoteOnProposalOutcome;

        typedef std::future<CreateMemberOutcome> CreateMemberOutcomeCallable;
        typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
        typedef std::future<CreateNodeOutcome> CreateNodeOutcomeCallable;
        typedef std::future<CreateProposalOutcome> CreateProposalOutcomeCallable;
        typedef std::future<DeleteMemberOutcome> DeleteMemberOutcomeCallable;
        typedef std::future<DeleteNodeOutcome> DeleteNodeOutcomeCallable;
        typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
        typedef std::future<GetNetworkOutcome> GetNetworkOutcomeCallable;
        typedef std::future<GetNodeOutcome> GetNodeOutcomeCallable;
        typedef std::future<GetProposalOutcome> GetProposalOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListNetworksOutcome> ListNetworksOutcomeCallable;
        typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
        typedef std::future<ListProposalVotesOutcome> ListProposalVotesOutcomeCallable;
        typedef std::future<ListProposalsOutcome> ListProposalsOutcomeCallable;
        typedef std::future<RejectInvitationOutcome> RejectInvitationOutcomeCallable;
        typedef std::future<VoteOnProposalOutcome> VoteOnProposalOutcomeCallable;
} // namespace Model

  class ManagedBlockchainClient;

    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateMemberRequest&, const Model::CreateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateNetworkRequest&, const Model::CreateNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateNodeRequest&, const Model::CreateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::CreateProposalRequest&, const Model::CreateProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProposalResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::DeleteMemberRequest&, const Model::DeleteMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::DeleteNodeRequest&, const Model::DeleteNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetMemberRequest&, const Model::GetMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetNetworkRequest&, const Model::GetNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetNodeRequest&, const Model::GetNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::GetProposalRequest&, const Model::GetProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProposalResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListNetworksRequest&, const Model::ListNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworksResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListNodesRequest&, const Model::ListNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodesResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListProposalVotesRequest&, const Model::ListProposalVotesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProposalVotesResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListProposalsRequest&, const Model::ListProposalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProposalsResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::RejectInvitationRequest&, const Model::RejectInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInvitationResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::VoteOnProposalRequest&, const Model::VoteOnProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VoteOnProposalResponseReceivedHandler;

  /**
   * <p/> <p>Amazon Managed Blockchain is a fully managed service for creating and
   * managing blockchain networks using open source frameworks. Blockchain allows you
   * to build applications where multiple parties can securely and transparently run
   * transactions and share data without the need for a trusted, central authority.
   * Currently, Managed Blockchain supports the Hyperledger Fabric open source
   * framework. </p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API ManagedBlockchainClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedBlockchainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ManagedBlockchainClient();

        inline virtual const char* GetServiceClientName() const override { return "ManagedBlockchain"; }


        /**
         * <p>Creates a member within a Managed Blockchain network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemberOutcome CreateMember(const Model::CreateMemberRequest& request) const;

        /**
         * <p>Creates a member within a Managed Blockchain network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMemberOutcomeCallable CreateMemberCallable(const Model::CreateMemberRequest& request) const;

        /**
         * <p>Creates a member within a Managed Blockchain network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMemberAsync(const Model::CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new blockchain network using Amazon Managed
         * Blockchain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request) const;

        /**
         * <p>Creates a new blockchain network using Amazon Managed
         * Blockchain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNetwork">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkOutcomeCallable CreateNetworkCallable(const Model::CreateNetworkRequest& request) const;

        /**
         * <p>Creates a new blockchain network using Amazon Managed
         * Blockchain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNetwork">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAsync(const Model::CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a peer node in a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeOutcome CreateNode(const Model::CreateNodeRequest& request) const;

        /**
         * <p>Creates a peer node in a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNodeOutcomeCallable CreateNodeCallable(const Model::CreateNodeRequest& request) const;

        /**
         * <p>Creates a peer node in a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNodeAsync(const Model::CreateNodeRequest& request, const CreateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a proposal for a change to the network that other members of the
         * network can vote on, for example, a proposal to add a new member to the network.
         * Any member can create a proposal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProposalOutcome CreateProposal(const Model::CreateProposalRequest& request) const;

        /**
         * <p>Creates a proposal for a change to the network that other members of the
         * network can vote on, for example, a proposal to add a new member to the network.
         * Any member can create a proposal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProposalOutcomeCallable CreateProposalCallable(const Model::CreateProposalRequest& request) const;

        /**
         * <p>Creates a proposal for a change to the network that other members of the
         * network can vote on, for example, a proposal to add a new member to the network.
         * Any member can create a proposal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateProposal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProposalAsync(const Model::CreateProposalRequest& request, const CreateProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a member. Deleting a member removes the member and all associated
         * resources from the network. <code>DeleteMember</code> can only be called for a
         * specified <code>MemberId</code> if the principal performing the action is
         * associated with the AWS account that owns the member. In all other cases, the
         * <code>DeleteMember</code> action is carried out as the result of an approved
         * proposal to remove a member. If <code>MemberId</code> is the last member in a
         * network specified by the last AWS account, the network is deleted
         * also.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMemberOutcome DeleteMember(const Model::DeleteMemberRequest& request) const;

        /**
         * <p>Deletes a member. Deleting a member removes the member and all associated
         * resources from the network. <code>DeleteMember</code> can only be called for a
         * specified <code>MemberId</code> if the principal performing the action is
         * associated with the AWS account that owns the member. In all other cases, the
         * <code>DeleteMember</code> action is carried out as the result of an approved
         * proposal to remove a member. If <code>MemberId</code> is the last member in a
         * network specified by the last AWS account, the network is deleted
         * also.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMemberOutcomeCallable DeleteMemberCallable(const Model::DeleteMemberRequest& request) const;

        /**
         * <p>Deletes a member. Deleting a member removes the member and all associated
         * resources from the network. <code>DeleteMember</code> can only be called for a
         * specified <code>MemberId</code> if the principal performing the action is
         * associated with the AWS account that owns the member. In all other cases, the
         * <code>DeleteMember</code> action is carried out as the result of an approved
         * proposal to remove a member. If <code>MemberId</code> is the last member in a
         * network specified by the last AWS account, the network is deleted
         * also.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMemberAsync(const Model::DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a peer node from a member that your AWS account owns. All data on the
         * node is lost and cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNodeOutcome DeleteNode(const Model::DeleteNodeRequest& request) const;

        /**
         * <p>Deletes a peer node from a member that your AWS account owns. All data on the
         * node is lost and cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNodeOutcomeCallable DeleteNodeCallable(const Model::DeleteNodeRequest& request) const;

        /**
         * <p>Deletes a peer node from a member that your AWS account owns. All data on the
         * node is lost and cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNodeAsync(const Model::DeleteNodeRequest& request, const DeleteNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;

        /**
         * <p>Returns detailed information about a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberOutcomeCallable GetMemberCallable(const Model::GetMemberRequest& request) const;

        /**
         * <p>Returns detailed information about a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberAsync(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkOutcome GetNetwork(const Model::GetNetworkRequest& request) const;

        /**
         * <p>Returns detailed information about a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNetwork">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkOutcomeCallable GetNetworkCallable(const Model::GetNetworkRequest& request) const;

        /**
         * <p>Returns detailed information about a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNetwork">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkAsync(const Model::GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a peer node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNodeOutcome GetNode(const Model::GetNodeRequest& request) const;

        /**
         * <p>Returns detailed information about a peer node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNodeOutcomeCallable GetNodeCallable(const Model::GetNodeRequest& request) const;

        /**
         * <p>Returns detailed information about a peer node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNodeAsync(const Model::GetNodeRequest& request, const GetNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a proposal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProposalOutcome GetProposal(const Model::GetProposalRequest& request) const;

        /**
         * <p>Returns detailed information about a proposal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProposalOutcomeCallable GetProposalCallable(const Model::GetProposalRequest& request) const;

        /**
         * <p>Returns detailed information about a proposal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetProposal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProposalAsync(const Model::GetProposalRequest& request, const GetProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a listing of all invitations made on the specified
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Returns a listing of all invitations made on the specified
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Returns a listing of all invitations made on the specified
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a listing of the members in a network and properties of their
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * <p>Returns a listing of the members in a network and properties of their
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * <p>Returns a listing of the members in a network and properties of their
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the networks in which the current AWS account has
         * members.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request) const;

        /**
         * <p>Returns information about the networks in which the current AWS account has
         * members.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworksOutcomeCallable ListNetworksCallable(const Model::ListNetworksRequest& request) const;

        /**
         * <p>Returns information about the networks in which the current AWS account has
         * members.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworksAsync(const Model::ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the nodes within a network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * <p>Returns information about the nodes within a network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNodes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodesOutcomeCallable ListNodesCallable(const Model::ListNodesRequest& request) const;

        /**
         * <p>Returns information about the nodes within a network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNodes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodesAsync(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the listing of votes for a specified proposal, including the value of
         * each vote and the unique identifier of the member that cast the
         * vote.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposalVotes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProposalVotesOutcome ListProposalVotes(const Model::ListProposalVotesRequest& request) const;

        /**
         * <p>Returns the listing of votes for a specified proposal, including the value of
         * each vote and the unique identifier of the member that cast the
         * vote.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposalVotes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProposalVotesOutcomeCallable ListProposalVotesCallable(const Model::ListProposalVotesRequest& request) const;

        /**
         * <p>Returns the listing of votes for a specified proposal, including the value of
         * each vote and the unique identifier of the member that cast the
         * vote.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposalVotes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProposalVotesAsync(const Model::ListProposalVotesRequest& request, const ListProposalVotesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a listing of proposals for the network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProposalsOutcome ListProposals(const Model::ListProposalsRequest& request) const;

        /**
         * <p>Returns a listing of proposals for the network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposals">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProposalsOutcomeCallable ListProposalsCallable(const Model::ListProposalsRequest& request) const;

        /**
         * <p>Returns a listing of proposals for the network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposals">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProposalsAsync(const Model::ListProposalsRequest& request, const ListProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an AWS account that has received an invitation to create a member
         * and join a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInvitationOutcome RejectInvitation(const Model::RejectInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an AWS account that has received an invitation to create a member
         * and join a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInvitationOutcomeCallable RejectInvitationCallable(const Model::RejectInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an AWS account that has received an invitation to create a member
         * and join a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectInvitationAsync(const Model::RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same AWS account as the principal that calls the action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteOnProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::VoteOnProposalOutcome VoteOnProposal(const Model::VoteOnProposalRequest& request) const;

        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same AWS account as the principal that calls the action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteOnProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VoteOnProposalOutcomeCallable VoteOnProposalCallable(const Model::VoteOnProposalRequest& request) const;

        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same AWS account as the principal that calls the action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteOnProposal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VoteOnProposalAsync(const Model::VoteOnProposalRequest& request, const VoteOnProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateMemberAsyncHelper(const Model::CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkAsyncHelper(const Model::CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNodeAsyncHelper(const Model::CreateNodeRequest& request, const CreateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProposalAsyncHelper(const Model::CreateProposalRequest& request, const CreateProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMemberAsyncHelper(const Model::DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNodeAsyncHelper(const Model::DeleteNodeRequest& request, const DeleteNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMemberAsyncHelper(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkAsyncHelper(const Model::GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNodeAsyncHelper(const Model::GetNodeRequest& request, const GetNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProposalAsyncHelper(const Model::GetProposalRequest& request, const GetProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNetworksAsyncHelper(const Model::ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNodesAsyncHelper(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProposalVotesAsyncHelper(const Model::ListProposalVotesRequest& request, const ListProposalVotesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProposalsAsyncHelper(const Model::ListProposalsRequest& request, const ListProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectInvitationAsyncHelper(const Model::RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VoteOnProposalAsyncHelper(const Model::VoteOnProposalRequest& request, const VoteOnProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ManagedBlockchain
} // namespace Aws
