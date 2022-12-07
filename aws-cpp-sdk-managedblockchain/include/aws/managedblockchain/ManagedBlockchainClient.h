/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/managedblockchain/ManagedBlockchainServiceClientModel.h>

namespace Aws
{
namespace ManagedBlockchain
{
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
   * don't apply to Ethereum.</p> <p>The description for each action indicates the
   * framework or frameworks to which it applies. Data types and properties that
   * apply only in the context of a particular framework are similarly indicated.</p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API ManagedBlockchainClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ManagedBlockchainClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainClient(const Aws::ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration = Aws::ManagedBlockchain::ManagedBlockchainClientConfiguration(),
                                std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider = Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider = Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
                                const Aws::ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration = Aws::ManagedBlockchain::ManagedBlockchainClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedBlockchainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider = Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
                                const Aws::ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration = Aws::ManagedBlockchain::ManagedBlockchainClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedBlockchainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ManagedBlockchainClient();

        /**
         *  <p>The token based access feature is in preview release for Ethereum
         * on Amazon Managed Blockchain and is subject to change. We recommend that you use
         * this feature only with test scenarios, and not in production environments.</p>
         *  <p>Creates a new accessor for use with Managed Blockchain Ethereum
         * nodes. An accessor object is a container that has the information required for
         * token based access to your Ethereum nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateAccessor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessorOutcome CreateAccessor(const Model::CreateAccessorRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessorOutcomeCallable CreateAccessorCallable(const Model::CreateAccessorRequest& request) const;

        /**
         * An Async wrapper for CreateAccessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessorAsync(const Model::CreateAccessorRequest& request, const CreateAccessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a member within a Managed Blockchain network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemberOutcome CreateMember(const Model::CreateMemberRequest& request) const;

        /**
         * A Callable wrapper for CreateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMemberOutcomeCallable CreateMemberCallable(const Model::CreateMemberRequest& request) const;

        /**
         * An Async wrapper for CreateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkOutcomeCallable CreateNetworkCallable(const Model::CreateNetworkRequest& request) const;

        /**
         * An Async wrapper for CreateNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNodeOutcomeCallable CreateNodeCallable(const Model::CreateNodeRequest& request) const;

        /**
         * An Async wrapper for CreateNode that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateProposal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProposalOutcomeCallable CreateProposalCallable(const Model::CreateProposalRequest& request) const;

        /**
         * An Async wrapper for CreateProposal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProposalAsync(const Model::CreateProposalRequest& request, const CreateProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The token based access feature is in preview release for Ethereum
         * on Amazon Managed Blockchain and is subject to change. We recommend that you use
         * this feature only with test scenarios, and not in production environments.</p>
         *  <p>Deletes an accessor that your Amazon Web Services account owns.
         * An accessor object is a container that has the information required for token
         * based access to your Ethereum nodes including, the <code>BILLING_TOKEN</code>.
         * After an accessor is deleted, the status of the accessor changes from
         * <code>AVAILABLE</code> to <code>PENDING_DELETION</code>. An accessor in the
         * <code>PENDING_DELETION</code> state can’t be used for new WebSocket requests or
         * HTTP requests. However, WebSocket connections that were initiated while the
         * accessor was in the <code>AVAILABLE</code> state remain open until they expire
         * (up to 2 hours).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteAccessor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessorOutcome DeleteAccessor(const Model::DeleteAccessorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessorOutcomeCallable DeleteAccessorCallable(const Model::DeleteAccessorRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessorAsync(const Model::DeleteAccessorRequest& request, const DeleteAccessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a member. Deleting a member removes the member and all associated
         * resources from the network. <code>DeleteMember</code> can only be called for a
         * specified <code>MemberId</code> if the principal performing the action is
         * associated with the Amazon Web Services account that owns the member. In all
         * other cases, the <code>DeleteMember</code> action is carried out as the result
         * of an approved proposal to remove a member. If <code>MemberId</code> is the last
         * member in a network specified by the last Amazon Web Services account, the
         * network is deleted also.</p> <p>Applies only to Hyperledger
         * Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMemberOutcome DeleteMember(const Model::DeleteMemberRequest& request) const;

        /**
         * A Callable wrapper for DeleteMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMemberOutcomeCallable DeleteMemberCallable(const Model::DeleteMemberRequest& request) const;

        /**
         * An Async wrapper for DeleteMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMemberAsync(const Model::DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a node that your Amazon Web Services account owns. All data on the
         * node is lost and cannot be recovered.</p> <p>Applies to Hyperledger Fabric and
         * Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNodeOutcome DeleteNode(const Model::DeleteNodeRequest& request) const;

        /**
         * A Callable wrapper for DeleteNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNodeOutcomeCallable DeleteNodeCallable(const Model::DeleteNodeRequest& request) const;

        /**
         * An Async wrapper for DeleteNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNodeAsync(const Model::DeleteNodeRequest& request, const DeleteNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The token based access feature is in preview release for Ethereum
         * on Amazon Managed Blockchain and is subject to change. We recommend that you use
         * this feature only with test scenarios, and not in production environments.</p>
         *  <p>Returns detailed information about an accessor. An accessor
         * object is a container that has the information required for token based access
         * to your Ethereum nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetAccessor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessorOutcome GetAccessor(const Model::GetAccessorRequest& request) const;

        /**
         * A Callable wrapper for GetAccessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessorOutcomeCallable GetAccessorCallable(const Model::GetAccessorRequest& request) const;

        /**
         * An Async wrapper for GetAccessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessorAsync(const Model::GetAccessorRequest& request, const GetAccessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a member.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;

        /**
         * A Callable wrapper for GetMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberOutcomeCallable GetMemberCallable(const Model::GetMemberRequest& request) const;

        /**
         * An Async wrapper for GetMember that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkOutcomeCallable GetNetworkCallable(const Model::GetNetworkRequest& request) const;

        /**
         * An Async wrapper for GetNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNodeOutcomeCallable GetNodeCallable(const Model::GetNodeRequest& request) const;

        /**
         * An Async wrapper for GetNode that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetProposal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProposalOutcomeCallable GetProposalCallable(const Model::GetProposalRequest& request) const;

        /**
         * An Async wrapper for GetProposal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProposalAsync(const Model::GetProposalRequest& request, const GetProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The token based access feature is in preview release for Ethereum
         * on Amazon Managed Blockchain and is subject to change. We recommend that you use
         * this feature only with test scenarios, and not in production environments.</p>
         *  <p>Returns a list of the accessors and their properties. Accessor
         * objects are containers that have the information required for token based access
         * to your Ethereum nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListAccessors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessorsOutcome ListAccessors(const Model::ListAccessorsRequest& request) const;

        /**
         * A Callable wrapper for ListAccessors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessorsOutcomeCallable ListAccessorsCallable(const Model::ListAccessorsRequest& request) const;

        /**
         * An Async wrapper for ListAccessors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessorsAsync(const Model::ListAccessorsRequest& request, const ListAccessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all invitations for the current Amazon Web Services
         * account.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
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
         * <p>Returns a list of the members in a network and properties of their
         * configurations.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
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
         * <p>Returns information about the networks in which the current Amazon Web
         * Services account participates.</p> <p>Applies to Hyperledger Fabric and
         * Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request) const;

        /**
         * A Callable wrapper for ListNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworksOutcomeCallable ListNetworksCallable(const Model::ListNetworksRequest& request) const;

        /**
         * An Async wrapper for ListNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodesOutcomeCallable ListNodesCallable(const Model::ListNodesRequest& request) const;

        /**
         * An Async wrapper for ListNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListProposalVotes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProposalVotesOutcomeCallable ListProposalVotesCallable(const Model::ListProposalVotesRequest& request) const;

        /**
         * An Async wrapper for ListProposalVotes that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListProposals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProposalsOutcomeCallable ListProposalsCallable(const Model::ListProposalsRequest& request) const;

        /**
         * An Async wrapper for ListProposals that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an Amazon Web Services account that has received an invitation to
         * create a member and join a network.</p> <p>Applies only to Hyperledger
         * Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMemberOutcomeCallable UpdateMemberCallable(const Model::UpdateMemberRequest& request) const;

        /**
         * An Async wrapper for UpdateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNodeOutcomeCallable UpdateNodeCallable(const Model::UpdateNodeRequest& request) const;

        /**
         * An Async wrapper for UpdateNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNodeAsync(const Model::UpdateNodeRequest& request, const UpdateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same Amazon Web Services account as the principal that calls the action.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteOnProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::VoteOnProposalOutcome VoteOnProposal(const Model::VoteOnProposalRequest& request) const;

        /**
         * A Callable wrapper for VoteOnProposal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VoteOnProposalOutcomeCallable VoteOnProposalCallable(const Model::VoteOnProposalRequest& request) const;

        /**
         * An Async wrapper for VoteOnProposal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VoteOnProposalAsync(const Model::VoteOnProposalRequest& request, const VoteOnProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ManagedBlockchainEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ManagedBlockchainClient>;
      void init(const ManagedBlockchainClientConfiguration& clientConfiguration);

      ManagedBlockchainClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ManagedBlockchainEndpointProviderBase> m_endpointProvider;
  };

} // namespace ManagedBlockchain
} // namespace Aws
