/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/managedblockchain/model/ListTagsForResourceResult.h>
#include <aws/managedblockchain/model/RejectInvitationResult.h>
#include <aws/managedblockchain/model/TagResourceResult.h>
#include <aws/managedblockchain/model/UntagResourceResult.h>
#include <aws/managedblockchain/model/UpdateMemberResult.h>
#include <aws/managedblockchain/model/UpdateNodeResult.h>
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
        class ListTagsForResourceRequest;
        class RejectInvitationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateMemberRequest;
        class UpdateNodeRequest;
        class VoteOnProposalRequest;

        typedef Aws::Utils::Outcome<CreateMemberResult, ManagedBlockchainError> CreateMemberOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkResult, ManagedBlockchainError> CreateNetworkOutcome;
        typedef Aws::Utils::Outcome<CreateNodeResult, ManagedBlockchainError> CreateNodeOutcome;
        typedef Aws::Utils::Outcome<CreateProposalResult, ManagedBlockchainError> CreateProposalOutcome;
        typedef Aws::Utils::Outcome<DeleteMemberResult, ManagedBlockchainError> DeleteMemberOutcome;
        typedef Aws::Utils::Outcome<DeleteNodeResult, ManagedBlockchainError> DeleteNodeOutcome;
        typedef Aws::Utils::Outcome<GetMemberResult, ManagedBlockchainError> GetMemberOutcome;
        typedef Aws::Utils::Outcome<GetNetworkResult, ManagedBlockchainError> GetNetworkOutcome;
        typedef Aws::Utils::Outcome<GetNodeResult, ManagedBlockchainError> GetNodeOutcome;
        typedef Aws::Utils::Outcome<GetProposalResult, ManagedBlockchainError> GetProposalOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, ManagedBlockchainError> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, ManagedBlockchainError> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListNetworksResult, ManagedBlockchainError> ListNetworksOutcome;
        typedef Aws::Utils::Outcome<ListNodesResult, ManagedBlockchainError> ListNodesOutcome;
        typedef Aws::Utils::Outcome<ListProposalVotesResult, ManagedBlockchainError> ListProposalVotesOutcome;
        typedef Aws::Utils::Outcome<ListProposalsResult, ManagedBlockchainError> ListProposalsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ManagedBlockchainError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RejectInvitationResult, ManagedBlockchainError> RejectInvitationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ManagedBlockchainError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ManagedBlockchainError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateMemberResult, ManagedBlockchainError> UpdateMemberOutcome;
        typedef Aws::Utils::Outcome<UpdateNodeResult, ManagedBlockchainError> UpdateNodeOutcome;
        typedef Aws::Utils::Outcome<VoteOnProposalResult, ManagedBlockchainError> VoteOnProposalOutcome;

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
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RejectInvitationOutcome> RejectInvitationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateMemberOutcome> UpdateMemberOutcomeCallable;
        typedef std::future<UpdateNodeOutcome> UpdateNodeOutcomeCallable;
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
    typedef std::function<void(const ManagedBlockchainClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::RejectInvitationRequest&, const Model::RejectInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInvitationResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::UpdateMemberRequest&, const Model::UpdateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMemberResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::UpdateNodeRequest&, const Model::UpdateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodeResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainClient*, const Model::VoteOnProposalRequest&, const Model::VoteOnProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VoteOnProposalResponseReceivedHandler;

  /**
   * <p/> <p>Amazon Managed Blockchain is a fully managed service for creating and
   * managing blockchain networks using open-source frameworks. Blockchain allows you
   * to build applications where multiple parties can securely and transparently run
   * transactions and share data without the need for a trusted, central
   * authority.</p> <p>Managed Blockchain supports the Hyperledger Fabric and
   * Ethereum open-source frameworks. Because of fundamental differences between the
   * frameworks, some API actions or data types may only apply in the context of one
   * framework and not the other. For example, actions related to Hyperledger Fabric
   * network members such as <code>CreateMember</code> and <code>DeleteMember</code>
   * do not apply to Ethereum.</p> <p>The description for each action indicates the
   * framework or frameworks to which it applies. Data types and properties that
   * apply only in the context of a particular framework are similarly indicated.</p>
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


        /**
         * <p>Creates a member within a Managed Blockchain network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemberOutcome CreateMember(const Model::CreateMemberRequest& request) const;

        /**
         * <p>Creates a member within a Managed Blockchain network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMemberOutcomeCallable CreateMemberCallable(const Model::CreateMemberRequest& request) const;

        /**
         * <p>Creates a member within a Managed Blockchain network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMemberAsync(const Model::CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new blockchain network using Amazon Managed Blockchain.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request) const;

        /**
         * <p>Creates a new blockchain network using Amazon Managed Blockchain.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNetwork">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkOutcomeCallable CreateNetworkCallable(const Model::CreateNetworkRequest& request) const;

        /**
         * <p>Creates a new blockchain network using Amazon Managed Blockchain.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNetwork">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAsync(const Model::CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a node on the specified blockchain network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeOutcome CreateNode(const Model::CreateNodeRequest& request) const;

        /**
         * <p>Creates a node on the specified blockchain network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNodeOutcomeCallable CreateNodeCallable(const Model::CreateNodeRequest& request) const;

        /**
         * <p>Creates a node on the specified blockchain network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNodeAsync(const Model::CreateNodeRequest& request, const CreateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a proposal for a change to the network that other members of the
         * network can vote on, for example, a proposal to add a new member to the network.
         * Any member can create a proposal.</p> <p>Applies only to Hyperledger
         * Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProposalOutcome CreateProposal(const Model::CreateProposalRequest& request) const;

        /**
         * <p>Creates a proposal for a change to the network that other members of the
         * network can vote on, for example, a proposal to add a new member to the network.
         * Any member can create a proposal.</p> <p>Applies only to Hyperledger
         * Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProposalOutcomeCallable CreateProposalCallable(const Model::CreateProposalRequest& request) const;

        /**
         * <p>Creates a proposal for a change to the network that other members of the
         * network can vote on, for example, a proposal to add a new member to the network.
         * Any member can create a proposal.</p> <p>Applies only to Hyperledger
         * Fabric.</p><p><h3>See Also:</h3>   <a
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
         * network specified by the last AWS account, the network is deleted also.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
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
         * network specified by the last AWS account, the network is deleted also.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
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
         * network specified by the last AWS account, the network is deleted also.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMemberAsync(const Model::DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a node that your AWS account owns. All data on the node is lost and
         * cannot be recovered.</p> <p>Applies to Hyperledger Fabric and
         * Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNodeOutcome DeleteNode(const Model::DeleteNodeRequest& request) const;

        /**
         * <p>Deletes a node that your AWS account owns. All data on the node is lost and
         * cannot be recovered.</p> <p>Applies to Hyperledger Fabric and
         * Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNodeOutcomeCallable DeleteNodeCallable(const Model::DeleteNodeRequest& request) const;

        /**
         * <p>Deletes a node that your AWS account owns. All data on the node is lost and
         * cannot be recovered.</p> <p>Applies to Hyperledger Fabric and
         * Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNodeAsync(const Model::DeleteNodeRequest& request, const DeleteNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a member.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;

        /**
         * <p>Returns detailed information about a member.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberOutcomeCallable GetMemberCallable(const Model::GetMemberRequest& request) const;

        /**
         * <p>Returns detailed information about a member.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberAsync(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a network.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkOutcome GetNetwork(const Model::GetNetworkRequest& request) const;

        /**
         * <p>Returns detailed information about a network.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNetwork">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkOutcomeCallable GetNetworkCallable(const Model::GetNetworkRequest& request) const;

        /**
         * <p>Returns detailed information about a network.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNetwork">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkAsync(const Model::GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a node.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNodeOutcome GetNode(const Model::GetNodeRequest& request) const;

        /**
         * <p>Returns detailed information about a node.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNodeOutcomeCallable GetNodeCallable(const Model::GetNodeRequest& request) const;

        /**
         * <p>Returns detailed information about a node.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNodeAsync(const Model::GetNodeRequest& request, const GetNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a proposal.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProposalOutcome GetProposal(const Model::GetProposalRequest& request) const;

        /**
         * <p>Returns detailed information about a proposal.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProposalOutcomeCallable GetProposalCallable(const Model::GetProposalRequest& request) const;

        /**
         * <p>Returns detailed information about a proposal.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetProposal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProposalAsync(const Model::GetProposalRequest& request, const GetProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all invitations for the current AWS account.</p> <p>Applies
         * only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Returns a list of all invitations for the current AWS account.</p> <p>Applies
         * only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Returns a list of all invitations for the current AWS account.</p> <p>Applies
         * only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the members in a network and properties of their
         * configurations.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * <p>Returns a list of the members in a network and properties of their
         * configurations.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * <p>Returns a list of the members in a network and properties of their
         * configurations.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the networks in which the current AWS account
         * participates.</p> <p>Applies to Hyperledger Fabric and Ethereum.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request) const;

        /**
         * <p>Returns information about the networks in which the current AWS account
         * participates.</p> <p>Applies to Hyperledger Fabric and Ethereum.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworksOutcomeCallable ListNetworksCallable(const Model::ListNetworksRequest& request) const;

        /**
         * <p>Returns information about the networks in which the current AWS account
         * participates.</p> <p>Applies to Hyperledger Fabric and Ethereum.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworksAsync(const Model::ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the nodes within a network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * <p>Returns information about the nodes within a network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNodes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodesOutcomeCallable ListNodesCallable(const Model::ListNodesRequest& request) const;

        /**
         * <p>Returns information about the nodes within a network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNodes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodesAsync(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of votes for a specified proposal, including the value of
         * each vote and the unique identifier of the member that cast the vote.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposalVotes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProposalVotesOutcome ListProposalVotes(const Model::ListProposalVotesRequest& request) const;

        /**
         * <p>Returns the list of votes for a specified proposal, including the value of
         * each vote and the unique identifier of the member that cast the vote.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposalVotes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProposalVotesOutcomeCallable ListProposalVotesCallable(const Model::ListProposalVotesRequest& request) const;

        /**
         * <p>Returns the list of votes for a specified proposal, including the value of
         * each vote and the unique identifier of the member that cast the vote.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposalVotes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProposalVotesAsync(const Model::ListProposalVotesRequest& request, const ListProposalVotesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of proposals for the network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProposalsOutcome ListProposals(const Model::ListProposalsRequest& request) const;

        /**
         * <p>Returns a list of proposals for the network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposals">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProposalsOutcomeCallable ListProposalsCallable(const Model::ListProposalsRequest& request) const;

        /**
         * <p>Returns a list of proposals for the network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposals">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProposalsAsync(const Model::ListProposalsRequest& request, const ListProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags for the specified resource. Each tag consists of a key
         * and optional value.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags for the specified resource. Each tag consists of a key
         * and optional value.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags for the specified resource. Each tag consists of a key
         * and optional value.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an AWS account that has received an invitation to create a member
         * and join a network.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInvitationOutcome RejectInvitation(const Model::RejectInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an AWS account that has received an invitation to create a member
         * and join a network.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInvitationOutcomeCallable RejectInvitationCallable(const Model::RejectInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an AWS account that has received an invitation to create a member
         * and join a network.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectInvitationAsync(const Model::RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites the specified tags for the specified Amazon Managed
         * Blockchain resource. Each tag consists of a key and optional value.</p> <p>When
         * you specify a tag key that already exists, the tag value is overwritten with the
         * new value. Use <code>UntagResource</code> to remove tag keys.</p> <p>A resource
         * can have up to 50 tags. If you try to create more than 50 tags for a resource,
         * your request fails and returns an error.</p> <p>For more information about tags,
         * see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites the specified tags for the specified Amazon Managed
         * Blockchain resource. Each tag consists of a key and optional value.</p> <p>When
         * you specify a tag key that already exists, the tag value is overwritten with the
         * new value. Use <code>UntagResource</code> to remove tag keys.</p> <p>A resource
         * can have up to 50 tags. If you try to create more than 50 tags for a resource,
         * your request fails and returns an error.</p> <p>For more information about tags,
         * see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites the specified tags for the specified Amazon Managed
         * Blockchain resource. Each tag consists of a key and optional value.</p> <p>When
         * you specify a tag key that already exists, the tag value is overwritten with the
         * new value. Use <code>UntagResource</code> to remove tag keys.</p> <p>A resource
         * can have up to 50 tags. If you try to create more than 50 tags for a resource,
         * your request fails and returns an error.</p> <p>For more information about tags,
         * see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the Amazon Managed Blockchain resource.</p>
         * <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the Amazon Managed Blockchain resource.</p>
         * <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the Amazon Managed Blockchain resource.</p>
         * <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
         * or <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
         * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a member configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberOutcome UpdateMember(const Model::UpdateMemberRequest& request) const;

        /**
         * <p>Updates a member configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMemberOutcomeCallable UpdateMemberCallable(const Model::UpdateMemberRequest& request) const;

        /**
         * <p>Updates a member configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMemberAsync(const Model::UpdateMemberRequest& request, const UpdateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a node configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodeOutcome UpdateNode(const Model::UpdateNodeRequest& request) const;

        /**
         * <p>Updates a node configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNodeOutcomeCallable UpdateNodeCallable(const Model::UpdateNodeRequest& request) const;

        /**
         * <p>Updates a node configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNodeAsync(const Model::UpdateNodeRequest& request, const UpdateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same AWS account as the principal that calls the action.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteOnProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::VoteOnProposalOutcome VoteOnProposal(const Model::VoteOnProposalRequest& request) const;

        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same AWS account as the principal that calls the action.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteOnProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VoteOnProposalOutcomeCallable VoteOnProposalCallable(const Model::VoteOnProposalRequest& request) const;

        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same AWS account as the principal that calls the action.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
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
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectInvitationAsyncHelper(const Model::RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMemberAsyncHelper(const Model::UpdateMemberRequest& request, const UpdateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNodeAsyncHelper(const Model::UpdateNodeRequest& request, const UpdateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VoteOnProposalAsyncHelper(const Model::VoteOnProposalRequest& request, const VoteOnProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ManagedBlockchain
} // namespace Aws
