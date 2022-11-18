/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/managedblockchain/ManagedBlockchainServiceClientModel.h>
#include <aws/managedblockchain/ManagedBlockchainLegacyAsyncMacros.h>

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
  class AWS_MANAGEDBLOCKCHAIN_API ManagedBlockchainClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates a member within a Managed Blockchain network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemberOutcome CreateMember(const Model::CreateMemberRequest& request) const;


        /**
         * <p>Creates a new blockchain network using Amazon Managed Blockchain.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request) const;


        /**
         * <p>Creates a node on the specified blockchain network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/CreateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeOutcome CreateNode(const Model::CreateNodeRequest& request) const;


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
         * <p>Deletes a node that your Amazon Web Services account owns. All data on the
         * node is lost and cannot be recovered.</p> <p>Applies to Hyperledger Fabric and
         * Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/DeleteNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNodeOutcome DeleteNode(const Model::DeleteNodeRequest& request) const;


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
         * <p>Returns detailed information about a member.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;


        /**
         * <p>Returns detailed information about a network.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkOutcome GetNetwork(const Model::GetNetworkRequest& request) const;


        /**
         * <p>Returns detailed information about a node.</p> <p>Applies to Hyperledger
         * Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetNode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNodeOutcome GetNode(const Model::GetNodeRequest& request) const;


        /**
         * <p>Returns detailed information about a proposal.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/GetProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProposalOutcome GetProposal(const Model::GetProposalRequest& request) const;


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
         * <p>Returns a list of all invitations for the current Amazon Web Services
         * account.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;


        /**
         * <p>Returns a list of the members in a network and properties of their
         * configurations.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;


        /**
         * <p>Returns information about the networks in which the current Amazon Web
         * Services account participates.</p> <p>Applies to Hyperledger Fabric and
         * Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request) const;


        /**
         * <p>Returns information about the nodes within a network.</p> <p>Applies to
         * Hyperledger Fabric and Ethereum.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;


        /**
         * <p>Returns the list of votes for a specified proposal, including the value of
         * each vote and the unique identifier of the member that cast the vote.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposalVotes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProposalVotesOutcome ListProposalVotes(const Model::ListProposalVotesRequest& request) const;


        /**
         * <p>Returns a list of proposals for the network.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ListProposals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProposalsOutcome ListProposals(const Model::ListProposalsRequest& request) const;


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
         * <p>Rejects an invitation to join a network. This action can be called by a
         * principal in an Amazon Web Services account that has received an invitation to
         * create a member and join a network.</p> <p>Applies only to Hyperledger
         * Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RejectInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInvitationOutcome RejectInvitation(const Model::RejectInvitationRequest& request) const;


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
         * <p>Updates a member configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberOutcome UpdateMember(const Model::UpdateMemberRequest& request) const;


        /**
         * <p>Updates a node configuration with new parameters.</p> <p>Applies only to
         * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/UpdateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodeOutcome UpdateNode(const Model::UpdateNodeRequest& request) const;


        /**
         * <p>Casts a vote for a specified <code>ProposalId</code> on behalf of a member.
         * The member to vote as, specified by <code>VoterMemberId</code>, must be in the
         * same Amazon Web Services account as the principal that calls the action.</p>
         * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteOnProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::VoteOnProposalOutcome VoteOnProposal(const Model::VoteOnProposalRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ManagedBlockchainEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ManagedBlockchainClientConfiguration& clientConfiguration);

      ManagedBlockchainClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ManagedBlockchainEndpointProviderBase> m_endpointProvider;
  };

} // namespace ManagedBlockchain
} // namespace Aws
