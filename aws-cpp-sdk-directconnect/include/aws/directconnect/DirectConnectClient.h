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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/AcceptDirectConnectGatewayAssociationProposalResult.h>
#include <aws/directconnect/model/AllocateHostedConnectionResult.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/AllocateTransitVirtualInterfaceResult.h>
#include <aws/directconnect/model/AssociateConnectionWithLagResult.h>
#include <aws/directconnect/model/AssociateHostedConnectionResult.h>
#include <aws/directconnect/model/AssociateVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmConnectionResult.h>
#include <aws/directconnect/model/ConfirmPrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmTransitVirtualInterfaceResult.h>
#include <aws/directconnect/model/CreateBGPPeerResult.h>
#include <aws/directconnect/model/CreateConnectionResult.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayResult.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationResult.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationProposalResult.h>
#include <aws/directconnect/model/CreateInterconnectResult.h>
#include <aws/directconnect/model/CreateLagResult.h>
#include <aws/directconnect/model/CreatePrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/CreatePublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/CreateTransitVirtualInterfaceResult.h>
#include <aws/directconnect/model/DeleteBGPPeerResult.h>
#include <aws/directconnect/model/DeleteConnectionResult.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayResult.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationResult.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationProposalResult.h>
#include <aws/directconnect/model/DeleteInterconnectResult.h>
#include <aws/directconnect/model/DeleteLagResult.h>
#include <aws/directconnect/model/DeleteVirtualInterfaceResult.h>
#include <aws/directconnect/model/DescribeConnectionsResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationProposalsResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationsResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAttachmentsResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewaysResult.h>
#include <aws/directconnect/model/DescribeHostedConnectionsResult.h>
#include <aws/directconnect/model/DescribeInterconnectsResult.h>
#include <aws/directconnect/model/DescribeLagsResult.h>
#include <aws/directconnect/model/DescribeLoaResult.h>
#include <aws/directconnect/model/DescribeLocationsResult.h>
#include <aws/directconnect/model/DescribeTagsResult.h>
#include <aws/directconnect/model/DescribeVirtualGatewaysResult.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesResult.h>
#include <aws/directconnect/model/DisassociateConnectionFromLagResult.h>
#include <aws/directconnect/model/TagResourceResult.h>
#include <aws/directconnect/model/UntagResourceResult.h>
#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationResult.h>
#include <aws/directconnect/model/UpdateLagResult.h>
#include <aws/directconnect/model/UpdateVirtualInterfaceAttributesResult.h>
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

namespace DirectConnect
{

namespace Model
{
        class AcceptDirectConnectGatewayAssociationProposalRequest;
        class AllocateHostedConnectionRequest;
        class AllocatePrivateVirtualInterfaceRequest;
        class AllocatePublicVirtualInterfaceRequest;
        class AllocateTransitVirtualInterfaceRequest;
        class AssociateConnectionWithLagRequest;
        class AssociateHostedConnectionRequest;
        class AssociateVirtualInterfaceRequest;
        class ConfirmConnectionRequest;
        class ConfirmPrivateVirtualInterfaceRequest;
        class ConfirmPublicVirtualInterfaceRequest;
        class ConfirmTransitVirtualInterfaceRequest;
        class CreateBGPPeerRequest;
        class CreateConnectionRequest;
        class CreateDirectConnectGatewayRequest;
        class CreateDirectConnectGatewayAssociationRequest;
        class CreateDirectConnectGatewayAssociationProposalRequest;
        class CreateInterconnectRequest;
        class CreateLagRequest;
        class CreatePrivateVirtualInterfaceRequest;
        class CreatePublicVirtualInterfaceRequest;
        class CreateTransitVirtualInterfaceRequest;
        class DeleteBGPPeerRequest;
        class DeleteConnectionRequest;
        class DeleteDirectConnectGatewayRequest;
        class DeleteDirectConnectGatewayAssociationRequest;
        class DeleteDirectConnectGatewayAssociationProposalRequest;
        class DeleteInterconnectRequest;
        class DeleteLagRequest;
        class DeleteVirtualInterfaceRequest;
        class DescribeConnectionsRequest;
        class DescribeDirectConnectGatewayAssociationProposalsRequest;
        class DescribeDirectConnectGatewayAssociationsRequest;
        class DescribeDirectConnectGatewayAttachmentsRequest;
        class DescribeDirectConnectGatewaysRequest;
        class DescribeHostedConnectionsRequest;
        class DescribeInterconnectsRequest;
        class DescribeLagsRequest;
        class DescribeLoaRequest;
        class DescribeTagsRequest;
        class DescribeVirtualInterfacesRequest;
        class DisassociateConnectionFromLagRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDirectConnectGatewayAssociationRequest;
        class UpdateLagRequest;
        class UpdateVirtualInterfaceAttributesRequest;

        typedef Aws::Utils::Outcome<AcceptDirectConnectGatewayAssociationProposalResult, Aws::Client::AWSError<DirectConnectErrors>> AcceptDirectConnectGatewayAssociationProposalOutcome;
        typedef Aws::Utils::Outcome<AllocateHostedConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> AllocateHostedConnectionOutcome;
        typedef Aws::Utils::Outcome<AllocatePrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AllocatePrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<AllocatePublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AllocatePublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<AllocateTransitVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AllocateTransitVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<AssociateConnectionWithLagResult, Aws::Client::AWSError<DirectConnectErrors>> AssociateConnectionWithLagOutcome;
        typedef Aws::Utils::Outcome<AssociateHostedConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> AssociateHostedConnectionOutcome;
        typedef Aws::Utils::Outcome<AssociateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> AssociateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<ConfirmConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmConnectionOutcome;
        typedef Aws::Utils::Outcome<ConfirmPrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmPrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<ConfirmPublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmPublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<ConfirmTransitVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> ConfirmTransitVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreateBGPPeerResult, Aws::Client::AWSError<DirectConnectErrors>> CreateBGPPeerOutcome;
        typedef Aws::Utils::Outcome<CreateConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> CreateConnectionOutcome;
        typedef Aws::Utils::Outcome<CreateDirectConnectGatewayResult, Aws::Client::AWSError<DirectConnectErrors>> CreateDirectConnectGatewayOutcome;
        typedef Aws::Utils::Outcome<CreateDirectConnectGatewayAssociationResult, Aws::Client::AWSError<DirectConnectErrors>> CreateDirectConnectGatewayAssociationOutcome;
        typedef Aws::Utils::Outcome<CreateDirectConnectGatewayAssociationProposalResult, Aws::Client::AWSError<DirectConnectErrors>> CreateDirectConnectGatewayAssociationProposalOutcome;
        typedef Aws::Utils::Outcome<CreateInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> CreateInterconnectOutcome;
        typedef Aws::Utils::Outcome<CreateLagResult, Aws::Client::AWSError<DirectConnectErrors>> CreateLagOutcome;
        typedef Aws::Utils::Outcome<CreatePrivateVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> CreatePrivateVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreatePublicVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> CreatePublicVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreateTransitVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> CreateTransitVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<DeleteBGPPeerResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteBGPPeerOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteDirectConnectGatewayResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteDirectConnectGatewayOutcome;
        typedef Aws::Utils::Outcome<DeleteDirectConnectGatewayAssociationResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteDirectConnectGatewayAssociationOutcome;
        typedef Aws::Utils::Outcome<DeleteDirectConnectGatewayAssociationProposalResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteDirectConnectGatewayAssociationProposalOutcome;
        typedef Aws::Utils::Outcome<DeleteInterconnectResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteInterconnectOutcome;
        typedef Aws::Utils::Outcome<DeleteLagResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteLagOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualInterfaceResult, Aws::Client::AWSError<DirectConnectErrors>> DeleteVirtualInterfaceOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDirectConnectGatewayAssociationProposalsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeDirectConnectGatewayAssociationProposalsOutcome;
        typedef Aws::Utils::Outcome<DescribeDirectConnectGatewayAssociationsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeDirectConnectGatewayAssociationsOutcome;
        typedef Aws::Utils::Outcome<DescribeDirectConnectGatewayAttachmentsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeDirectConnectGatewayAttachmentsOutcome;
        typedef Aws::Utils::Outcome<DescribeDirectConnectGatewaysResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeDirectConnectGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeHostedConnectionsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeHostedConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeInterconnectsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeInterconnectsOutcome;
        typedef Aws::Utils::Outcome<DescribeLagsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeLagsOutcome;
        typedef Aws::Utils::Outcome<DescribeLoaResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeLoaOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeLocationsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualGatewaysResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeVirtualGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualInterfacesResult, Aws::Client::AWSError<DirectConnectErrors>> DescribeVirtualInterfacesOutcome;
        typedef Aws::Utils::Outcome<DisassociateConnectionFromLagResult, Aws::Client::AWSError<DirectConnectErrors>> DisassociateConnectionFromLagOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<DirectConnectErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<DirectConnectErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDirectConnectGatewayAssociationResult, Aws::Client::AWSError<DirectConnectErrors>> UpdateDirectConnectGatewayAssociationOutcome;
        typedef Aws::Utils::Outcome<UpdateLagResult, Aws::Client::AWSError<DirectConnectErrors>> UpdateLagOutcome;
        typedef Aws::Utils::Outcome<UpdateVirtualInterfaceAttributesResult, Aws::Client::AWSError<DirectConnectErrors>> UpdateVirtualInterfaceAttributesOutcome;

        typedef std::future<AcceptDirectConnectGatewayAssociationProposalOutcome> AcceptDirectConnectGatewayAssociationProposalOutcomeCallable;
        typedef std::future<AllocateHostedConnectionOutcome> AllocateHostedConnectionOutcomeCallable;
        typedef std::future<AllocatePrivateVirtualInterfaceOutcome> AllocatePrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<AllocatePublicVirtualInterfaceOutcome> AllocatePublicVirtualInterfaceOutcomeCallable;
        typedef std::future<AllocateTransitVirtualInterfaceOutcome> AllocateTransitVirtualInterfaceOutcomeCallable;
        typedef std::future<AssociateConnectionWithLagOutcome> AssociateConnectionWithLagOutcomeCallable;
        typedef std::future<AssociateHostedConnectionOutcome> AssociateHostedConnectionOutcomeCallable;
        typedef std::future<AssociateVirtualInterfaceOutcome> AssociateVirtualInterfaceOutcomeCallable;
        typedef std::future<ConfirmConnectionOutcome> ConfirmConnectionOutcomeCallable;
        typedef std::future<ConfirmPrivateVirtualInterfaceOutcome> ConfirmPrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<ConfirmPublicVirtualInterfaceOutcome> ConfirmPublicVirtualInterfaceOutcomeCallable;
        typedef std::future<ConfirmTransitVirtualInterfaceOutcome> ConfirmTransitVirtualInterfaceOutcomeCallable;
        typedef std::future<CreateBGPPeerOutcome> CreateBGPPeerOutcomeCallable;
        typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
        typedef std::future<CreateDirectConnectGatewayOutcome> CreateDirectConnectGatewayOutcomeCallable;
        typedef std::future<CreateDirectConnectGatewayAssociationOutcome> CreateDirectConnectGatewayAssociationOutcomeCallable;
        typedef std::future<CreateDirectConnectGatewayAssociationProposalOutcome> CreateDirectConnectGatewayAssociationProposalOutcomeCallable;
        typedef std::future<CreateInterconnectOutcome> CreateInterconnectOutcomeCallable;
        typedef std::future<CreateLagOutcome> CreateLagOutcomeCallable;
        typedef std::future<CreatePrivateVirtualInterfaceOutcome> CreatePrivateVirtualInterfaceOutcomeCallable;
        typedef std::future<CreatePublicVirtualInterfaceOutcome> CreatePublicVirtualInterfaceOutcomeCallable;
        typedef std::future<CreateTransitVirtualInterfaceOutcome> CreateTransitVirtualInterfaceOutcomeCallable;
        typedef std::future<DeleteBGPPeerOutcome> DeleteBGPPeerOutcomeCallable;
        typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
        typedef std::future<DeleteDirectConnectGatewayOutcome> DeleteDirectConnectGatewayOutcomeCallable;
        typedef std::future<DeleteDirectConnectGatewayAssociationOutcome> DeleteDirectConnectGatewayAssociationOutcomeCallable;
        typedef std::future<DeleteDirectConnectGatewayAssociationProposalOutcome> DeleteDirectConnectGatewayAssociationProposalOutcomeCallable;
        typedef std::future<DeleteInterconnectOutcome> DeleteInterconnectOutcomeCallable;
        typedef std::future<DeleteLagOutcome> DeleteLagOutcomeCallable;
        typedef std::future<DeleteVirtualInterfaceOutcome> DeleteVirtualInterfaceOutcomeCallable;
        typedef std::future<DescribeConnectionsOutcome> DescribeConnectionsOutcomeCallable;
        typedef std::future<DescribeDirectConnectGatewayAssociationProposalsOutcome> DescribeDirectConnectGatewayAssociationProposalsOutcomeCallable;
        typedef std::future<DescribeDirectConnectGatewayAssociationsOutcome> DescribeDirectConnectGatewayAssociationsOutcomeCallable;
        typedef std::future<DescribeDirectConnectGatewayAttachmentsOutcome> DescribeDirectConnectGatewayAttachmentsOutcomeCallable;
        typedef std::future<DescribeDirectConnectGatewaysOutcome> DescribeDirectConnectGatewaysOutcomeCallable;
        typedef std::future<DescribeHostedConnectionsOutcome> DescribeHostedConnectionsOutcomeCallable;
        typedef std::future<DescribeInterconnectsOutcome> DescribeInterconnectsOutcomeCallable;
        typedef std::future<DescribeLagsOutcome> DescribeLagsOutcomeCallable;
        typedef std::future<DescribeLoaOutcome> DescribeLoaOutcomeCallable;
        typedef std::future<DescribeLocationsOutcome> DescribeLocationsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeVirtualGatewaysOutcome> DescribeVirtualGatewaysOutcomeCallable;
        typedef std::future<DescribeVirtualInterfacesOutcome> DescribeVirtualInterfacesOutcomeCallable;
        typedef std::future<DisassociateConnectionFromLagOutcome> DisassociateConnectionFromLagOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDirectConnectGatewayAssociationOutcome> UpdateDirectConnectGatewayAssociationOutcomeCallable;
        typedef std::future<UpdateLagOutcome> UpdateLagOutcomeCallable;
        typedef std::future<UpdateVirtualInterfaceAttributesOutcome> UpdateVirtualInterfaceAttributesOutcomeCallable;
} // namespace Model

  class DirectConnectClient;

    typedef std::function<void(const DirectConnectClient*, const Model::AcceptDirectConnectGatewayAssociationProposalRequest&, const Model::AcceptDirectConnectGatewayAssociationProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptDirectConnectGatewayAssociationProposalResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocateHostedConnectionRequest&, const Model::AllocateHostedConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateHostedConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePrivateVirtualInterfaceRequest&, const Model::AllocatePrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePublicVirtualInterfaceRequest&, const Model::AllocatePublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocateTransitVirtualInterfaceRequest&, const Model::AllocateTransitVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateTransitVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateConnectionWithLagRequest&, const Model::AssociateConnectionWithLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConnectionWithLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateHostedConnectionRequest&, const Model::AssociateHostedConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateHostedConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateVirtualInterfaceRequest&, const Model::AssociateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmConnectionRequest&, const Model::ConfirmConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmPrivateVirtualInterfaceRequest&, const Model::ConfirmPrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmPrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmPublicVirtualInterfaceRequest&, const Model::ConfirmPublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmPublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmTransitVirtualInterfaceRequest&, const Model::ConfirmTransitVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmTransitVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateBGPPeerRequest&, const Model::CreateBGPPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBGPPeerResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateDirectConnectGatewayRequest&, const Model::CreateDirectConnectGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectConnectGatewayResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateDirectConnectGatewayAssociationRequest&, const Model::CreateDirectConnectGatewayAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectConnectGatewayAssociationResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateDirectConnectGatewayAssociationProposalRequest&, const Model::CreateDirectConnectGatewayAssociationProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectConnectGatewayAssociationProposalResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateInterconnectRequest&, const Model::CreateInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateLagRequest&, const Model::CreateLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreatePrivateVirtualInterfaceRequest&, const Model::CreatePrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreatePublicVirtualInterfaceRequest&, const Model::CreatePublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::CreateTransitVirtualInterfaceRequest&, const Model::CreateTransitVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteBGPPeerRequest&, const Model::DeleteBGPPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBGPPeerResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteDirectConnectGatewayRequest&, const Model::DeleteDirectConnectGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectConnectGatewayResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteDirectConnectGatewayAssociationRequest&, const Model::DeleteDirectConnectGatewayAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectConnectGatewayAssociationResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteDirectConnectGatewayAssociationProposalRequest&, const Model::DeleteDirectConnectGatewayAssociationProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectConnectGatewayAssociationProposalResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteInterconnectRequest&, const Model::DeleteInterconnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInterconnectResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteLagRequest&, const Model::DeleteLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DeleteVirtualInterfaceRequest&, const Model::DeleteVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeConnectionsRequest&, const Model::DescribeConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewayAssociationProposalsRequest&, const Model::DescribeDirectConnectGatewayAssociationProposalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewayAssociationProposalsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewayAssociationsRequest&, const Model::DescribeDirectConnectGatewayAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewayAssociationsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewayAttachmentsRequest&, const Model::DescribeDirectConnectGatewayAttachmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewayAttachmentsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewaysRequest&, const Model::DescribeDirectConnectGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewaysResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeHostedConnectionsRequest&, const Model::DescribeHostedConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostedConnectionsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeInterconnectsRequest&, const Model::DescribeInterconnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInterconnectsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLagsRequest&, const Model::DescribeLagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLagsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLoaRequest&, const Model::DescribeLoaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoaResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualGatewaysResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualInterfacesRequest&, const Model::DescribeVirtualInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualInterfacesResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DisassociateConnectionFromLagRequest&, const Model::DisassociateConnectionFromLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectionFromLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateDirectConnectGatewayAssociationRequest&, const Model::UpdateDirectConnectGatewayAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDirectConnectGatewayAssociationResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateLagRequest&, const Model::UpdateLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateVirtualInterfaceAttributesRequest&, const Model::UpdateVirtualInterfaceAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualInterfaceAttributesResponseReceivedHandler;

  /**
   * <p>AWS Direct Connect links your internal network to an AWS Direct Connect
   * location over a standard Ethernet fiber-optic cable. One end of the cable is
   * connected to your router, the other to an AWS Direct Connect router. With this
   * connection in place, you can create virtual interfaces directly to the AWS cloud
   * (for example, to Amazon EC2 and Amazon S3) and to Amazon VPC, bypassing Internet
   * service providers in your network path. A connection provides access to all AWS
   * Regions except the China (Beijing) and (China) Ningxia Regions. AWS resources in
   * the China Regions can only be accessed through locations associated with those
   * Regions.</p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectConnectClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DirectConnectClient();

        inline virtual const char* GetServiceClientName() const override { return "Direct Connect"; }


        /**
         * <p>Accepts a proposal request to attach a virtual private gateway or transit
         * gateway to a Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AcceptDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptDirectConnectGatewayAssociationProposalOutcome AcceptDirectConnectGatewayAssociationProposal(const Model::AcceptDirectConnectGatewayAssociationProposalRequest& request) const;

        /**
         * <p>Accepts a proposal request to attach a virtual private gateway or transit
         * gateway to a Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AcceptDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptDirectConnectGatewayAssociationProposalOutcomeCallable AcceptDirectConnectGatewayAssociationProposalCallable(const Model::AcceptDirectConnectGatewayAssociationProposalRequest& request) const;

        /**
         * <p>Accepts a proposal request to attach a virtual private gateway or transit
         * gateway to a Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AcceptDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptDirectConnectGatewayAssociationProposalAsync(const Model::AcceptDirectConnectGatewayAssociationProposalRequest& request, const AcceptDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a hosted connection on the specified interconnect or a link
         * aggregation group (LAG) of interconnects.</p> <p>Allocates a VLAN number and a
         * specified amount of capacity (bandwidth) for use by a hosted connection on the
         * specified interconnect or LAG of interconnects. AWS polices the hosted
         * connection for the specified capacity and the AWS Direct Connect Partner must
         * also police the hosted connection for the specified capacity.</p> <note>
         * <p>Intended for use by AWS Direct Connect Partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateHostedConnectionOutcome AllocateHostedConnection(const Model::AllocateHostedConnectionRequest& request) const;

        /**
         * <p>Creates a hosted connection on the specified interconnect or a link
         * aggregation group (LAG) of interconnects.</p> <p>Allocates a VLAN number and a
         * specified amount of capacity (bandwidth) for use by a hosted connection on the
         * specified interconnect or LAG of interconnects. AWS polices the hosted
         * connection for the specified capacity and the AWS Direct Connect Partner must
         * also police the hosted connection for the specified capacity.</p> <note>
         * <p>Intended for use by AWS Direct Connect Partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateHostedConnectionOutcomeCallable AllocateHostedConnectionCallable(const Model::AllocateHostedConnectionRequest& request) const;

        /**
         * <p>Creates a hosted connection on the specified interconnect or a link
         * aggregation group (LAG) of interconnects.</p> <p>Allocates a VLAN number and a
         * specified amount of capacity (bandwidth) for use by a hosted connection on the
         * specified interconnect or LAG of interconnects. AWS polices the hosted
         * connection for the specified capacity and the AWS Direct Connect Partner must
         * also police the hosted connection for the specified capacity.</p> <note>
         * <p>Intended for use by AWS Direct Connect Partners only.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateHostedConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateHostedConnectionAsync(const Model::AllocateHostedConnectionRequest& request, const AllocateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a private virtual interface to be owned by the specified AWS
         * account.</p> <p>Virtual interfaces created using this action must be confirmed
         * by the owner using <a>ConfirmPrivateVirtualInterface</a>. Until then, the
         * virtual interface is in the <code>Confirming</code> state and is not available
         * to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocatePrivateVirtualInterfaceOutcome AllocatePrivateVirtualInterface(const Model::AllocatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a private virtual interface to be owned by the specified AWS
         * account.</p> <p>Virtual interfaces created using this action must be confirmed
         * by the owner using <a>ConfirmPrivateVirtualInterface</a>. Until then, the
         * virtual interface is in the <code>Confirming</code> state and is not available
         * to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocatePrivateVirtualInterfaceOutcomeCallable AllocatePrivateVirtualInterfaceCallable(const Model::AllocatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a private virtual interface to be owned by the specified AWS
         * account.</p> <p>Virtual interfaces created using this action must be confirmed
         * by the owner using <a>ConfirmPrivateVirtualInterface</a>. Until then, the
         * virtual interface is in the <code>Confirming</code> state and is not available
         * to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocatePrivateVirtualInterfaceAsync(const Model::AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a public virtual interface to be owned by the specified AWS
         * account.</p> <p>The owner of a connection calls this function to provision a
         * public virtual interface to be owned by the specified AWS account.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the owner
         * using <a>ConfirmPublicVirtualInterface</a>. Until this step has been completed,
         * the virtual interface is in the <code>confirming</code> state and is not
         * available to handle traffic.</p> <p>When creating an IPv6 public virtual
         * interface, omit the Amazon address and customer address. IPv6 addresses are
         * automatically assigned from the Amazon pool of IPv6 addresses; you cannot
         * specify custom IPv6 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocatePublicVirtualInterfaceOutcome AllocatePublicVirtualInterface(const Model::AllocatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a public virtual interface to be owned by the specified AWS
         * account.</p> <p>The owner of a connection calls this function to provision a
         * public virtual interface to be owned by the specified AWS account.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the owner
         * using <a>ConfirmPublicVirtualInterface</a>. Until this step has been completed,
         * the virtual interface is in the <code>confirming</code> state and is not
         * available to handle traffic.</p> <p>When creating an IPv6 public virtual
         * interface, omit the Amazon address and customer address. IPv6 addresses are
         * automatically assigned from the Amazon pool of IPv6 addresses; you cannot
         * specify custom IPv6 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocatePublicVirtualInterfaceOutcomeCallable AllocatePublicVirtualInterfaceCallable(const Model::AllocatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a public virtual interface to be owned by the specified AWS
         * account.</p> <p>The owner of a connection calls this function to provision a
         * public virtual interface to be owned by the specified AWS account.</p>
         * <p>Virtual interfaces created using this function must be confirmed by the owner
         * using <a>ConfirmPublicVirtualInterface</a>. Until this step has been completed,
         * the virtual interface is in the <code>confirming</code> state and is not
         * available to handle traffic.</p> <p>When creating an IPv6 public virtual
         * interface, omit the Amazon address and customer address. IPv6 addresses are
         * automatically assigned from the Amazon pool of IPv6 addresses; you cannot
         * specify custom IPv6 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocatePublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocatePublicVirtualInterfaceAsync(const Model::AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a transit virtual interface to be owned by the specified AWS
         * account. Use this type of interface to connect a transit gateway to your Direct
         * Connect gateway.</p> <p>The owner of a connection provisions a transit virtual
         * interface to be owned by the specified AWS account.</p> <p>After you create a
         * transit virtual interface, it must be confirmed by the owner using
         * <a>ConfirmTransitVirtualInterface</a>. Until this step has been completed, the
         * transit virtual interface is in the <code>requested</code> state and is not
         * available to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateTransitVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateTransitVirtualInterfaceOutcome AllocateTransitVirtualInterface(const Model::AllocateTransitVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a transit virtual interface to be owned by the specified AWS
         * account. Use this type of interface to connect a transit gateway to your Direct
         * Connect gateway.</p> <p>The owner of a connection provisions a transit virtual
         * interface to be owned by the specified AWS account.</p> <p>After you create a
         * transit virtual interface, it must be confirmed by the owner using
         * <a>ConfirmTransitVirtualInterface</a>. Until this step has been completed, the
         * transit virtual interface is in the <code>requested</code> state and is not
         * available to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateTransitVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateTransitVirtualInterfaceOutcomeCallable AllocateTransitVirtualInterfaceCallable(const Model::AllocateTransitVirtualInterfaceRequest& request) const;

        /**
         * <p>Provisions a transit virtual interface to be owned by the specified AWS
         * account. Use this type of interface to connect a transit gateway to your Direct
         * Connect gateway.</p> <p>The owner of a connection provisions a transit virtual
         * interface to be owned by the specified AWS account.</p> <p>After you create a
         * transit virtual interface, it must be confirmed by the owner using
         * <a>ConfirmTransitVirtualInterface</a>. Until this step has been completed, the
         * transit virtual interface is in the <code>requested</code> state and is not
         * available to handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AllocateTransitVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateTransitVirtualInterfaceAsync(const Model::AllocateTransitVirtualInterfaceRequest& request, const AllocateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an existing connection with a link aggregation group (LAG). The
         * connection is interrupted and re-established as a member of the LAG
         * (connectivity to AWS is interrupted). The connection must be hosted on the same
         * AWS Direct Connect endpoint as the LAG, and its bandwidth must match the
         * bandwidth for the LAG. You can re-associate a connection that's currently
         * associated with a different LAG; however, if removing the connection would cause
         * the original LAG to fall below its setting for minimum number of operational
         * connections, the request fails.</p> <p>Any virtual interfaces that are directly
         * associated with the connection are automatically re-associated with the LAG. If
         * the connection was originally associated with a different LAG, the virtual
         * interfaces remain associated with the original LAG.</p> <p>For interconnects,
         * any hosted connections are automatically re-associated with the LAG. If the
         * interconnect was originally associated with a different LAG, the hosted
         * connections remain associated with the original LAG.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLag">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectionWithLagOutcome AssociateConnectionWithLag(const Model::AssociateConnectionWithLagRequest& request) const;

        /**
         * <p>Associates an existing connection with a link aggregation group (LAG). The
         * connection is interrupted and re-established as a member of the LAG
         * (connectivity to AWS is interrupted). The connection must be hosted on the same
         * AWS Direct Connect endpoint as the LAG, and its bandwidth must match the
         * bandwidth for the LAG. You can re-associate a connection that's currently
         * associated with a different LAG; however, if removing the connection would cause
         * the original LAG to fall below its setting for minimum number of operational
         * connections, the request fails.</p> <p>Any virtual interfaces that are directly
         * associated with the connection are automatically re-associated with the LAG. If
         * the connection was originally associated with a different LAG, the virtual
         * interfaces remain associated with the original LAG.</p> <p>For interconnects,
         * any hosted connections are automatically re-associated with the LAG. If the
         * interconnect was originally associated with a different LAG, the hosted
         * connections remain associated with the original LAG.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateConnectionWithLagOutcomeCallable AssociateConnectionWithLagCallable(const Model::AssociateConnectionWithLagRequest& request) const;

        /**
         * <p>Associates an existing connection with a link aggregation group (LAG). The
         * connection is interrupted and re-established as a member of the LAG
         * (connectivity to AWS is interrupted). The connection must be hosted on the same
         * AWS Direct Connect endpoint as the LAG, and its bandwidth must match the
         * bandwidth for the LAG. You can re-associate a connection that's currently
         * associated with a different LAG; however, if removing the connection would cause
         * the original LAG to fall below its setting for minimum number of operational
         * connections, the request fails.</p> <p>Any virtual interfaces that are directly
         * associated with the connection are automatically re-associated with the LAG. If
         * the connection was originally associated with a different LAG, the virtual
         * interfaces remain associated with the original LAG.</p> <p>For interconnects,
         * any hosted connections are automatically re-associated with the LAG. If the
         * interconnect was originally associated with a different LAG, the hosted
         * connections remain associated with the original LAG.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateConnectionWithLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateConnectionWithLagAsync(const Model::AssociateConnectionWithLagRequest& request, const AssociateConnectionWithLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a hosted connection and its virtual interfaces with a link
         * aggregation group (LAG) or interconnect. If the target interconnect or LAG has
         * an existing hosted connection with a conflicting VLAN number or IP address, the
         * operation fails. This action temporarily interrupts the hosted connection's
         * connectivity to AWS as it is being migrated.</p> <note> <p>Intended for use by
         * AWS Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateHostedConnectionOutcome AssociateHostedConnection(const Model::AssociateHostedConnectionRequest& request) const;

        /**
         * <p>Associates a hosted connection and its virtual interfaces with a link
         * aggregation group (LAG) or interconnect. If the target interconnect or LAG has
         * an existing hosted connection with a conflicting VLAN number or IP address, the
         * operation fails. This action temporarily interrupts the hosted connection's
         * connectivity to AWS as it is being migrated.</p> <note> <p>Intended for use by
         * AWS Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateHostedConnectionOutcomeCallable AssociateHostedConnectionCallable(const Model::AssociateHostedConnectionRequest& request) const;

        /**
         * <p>Associates a hosted connection and its virtual interfaces with a link
         * aggregation group (LAG) or interconnect. If the target interconnect or LAG has
         * an existing hosted connection with a conflicting VLAN number or IP address, the
         * operation fails. This action temporarily interrupts the hosted connection's
         * connectivity to AWS as it is being migrated.</p> <note> <p>Intended for use by
         * AWS Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateHostedConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateHostedConnectionAsync(const Model::AssociateHostedConnectionRequest& request, const AssociateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a virtual interface with a specified link aggregation group (LAG)
         * or connection. Connectivity to AWS is temporarily interrupted as the virtual
         * interface is being migrated. If the target connection or LAG has an associated
         * virtual interface with a conflicting VLAN number or a conflicting IP address,
         * the operation fails.</p> <p>Virtual interfaces associated with a hosted
         * connection cannot be associated with a LAG; hosted connections must be migrated
         * along with their virtual interfaces using <a>AssociateHostedConnection</a>.</p>
         * <p>To reassociate a virtual interface to a new connection or LAG, the requester
         * must own either the virtual interface itself or the connection to which the
         * virtual interface is currently associated. Additionally, the requester must own
         * the connection or LAG for the association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVirtualInterfaceOutcome AssociateVirtualInterface(const Model::AssociateVirtualInterfaceRequest& request) const;

        /**
         * <p>Associates a virtual interface with a specified link aggregation group (LAG)
         * or connection. Connectivity to AWS is temporarily interrupted as the virtual
         * interface is being migrated. If the target connection or LAG has an associated
         * virtual interface with a conflicting VLAN number or a conflicting IP address,
         * the operation fails.</p> <p>Virtual interfaces associated with a hosted
         * connection cannot be associated with a LAG; hosted connections must be migrated
         * along with their virtual interfaces using <a>AssociateHostedConnection</a>.</p>
         * <p>To reassociate a virtual interface to a new connection or LAG, the requester
         * must own either the virtual interface itself or the connection to which the
         * virtual interface is currently associated. Additionally, the requester must own
         * the connection or LAG for the association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateVirtualInterfaceOutcomeCallable AssociateVirtualInterfaceCallable(const Model::AssociateVirtualInterfaceRequest& request) const;

        /**
         * <p>Associates a virtual interface with a specified link aggregation group (LAG)
         * or connection. Connectivity to AWS is temporarily interrupted as the virtual
         * interface is being migrated. If the target connection or LAG has an associated
         * virtual interface with a conflicting VLAN number or a conflicting IP address,
         * the operation fails.</p> <p>Virtual interfaces associated with a hosted
         * connection cannot be associated with a LAG; hosted connections must be migrated
         * along with their virtual interfaces using <a>AssociateHostedConnection</a>.</p>
         * <p>To reassociate a virtual interface to a new connection or LAG, the requester
         * must own either the virtual interface itself or the connection to which the
         * virtual interface is currently associated. Additionally, the requester must own
         * the connection or LAG for the association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateVirtualInterfaceAsync(const Model::AssociateVirtualInterfaceRequest& request, const AssociateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms the creation of the specified hosted connection on an
         * interconnect.</p> <p>Upon creation, the hosted connection is initially in the
         * <code>Ordering</code> state, and remains in this state until the owner confirms
         * creation of the hosted connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmConnectionOutcome ConfirmConnection(const Model::ConfirmConnectionRequest& request) const;

        /**
         * <p>Confirms the creation of the specified hosted connection on an
         * interconnect.</p> <p>Upon creation, the hosted connection is initially in the
         * <code>Ordering</code> state, and remains in this state until the owner confirms
         * creation of the hosted connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmConnectionOutcomeCallable ConfirmConnectionCallable(const Model::ConfirmConnectionRequest& request) const;

        /**
         * <p>Confirms the creation of the specified hosted connection on an
         * interconnect.</p> <p>Upon creation, the hosted connection is initially in the
         * <code>Ordering</code> state, and remains in this state until the owner confirms
         * creation of the hosted connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmConnectionAsync(const Model::ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts ownership of a private virtual interface created by another AWS
         * account.</p> <p>After the virtual interface owner makes this call, the virtual
         * interface is created and attached to the specified virtual private gateway or
         * Direct Connect gateway, and is made available to handle traffic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmPrivateVirtualInterfaceOutcome ConfirmPrivateVirtualInterface(const Model::ConfirmPrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Accepts ownership of a private virtual interface created by another AWS
         * account.</p> <p>After the virtual interface owner makes this call, the virtual
         * interface is created and attached to the specified virtual private gateway or
         * Direct Connect gateway, and is made available to handle traffic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmPrivateVirtualInterfaceOutcomeCallable ConfirmPrivateVirtualInterfaceCallable(const Model::ConfirmPrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Accepts ownership of a private virtual interface created by another AWS
         * account.</p> <p>After the virtual interface owner makes this call, the virtual
         * interface is created and attached to the specified virtual private gateway or
         * Direct Connect gateway, and is made available to handle traffic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmPrivateVirtualInterfaceAsync(const Model::ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts ownership of a public virtual interface created by another AWS
         * account.</p> <p>After the virtual interface owner makes this call, the specified
         * virtual interface is created and made available to handle traffic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmPublicVirtualInterfaceOutcome ConfirmPublicVirtualInterface(const Model::ConfirmPublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Accepts ownership of a public virtual interface created by another AWS
         * account.</p> <p>After the virtual interface owner makes this call, the specified
         * virtual interface is created and made available to handle traffic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmPublicVirtualInterfaceOutcomeCallable ConfirmPublicVirtualInterfaceCallable(const Model::ConfirmPublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Accepts ownership of a public virtual interface created by another AWS
         * account.</p> <p>After the virtual interface owner makes this call, the specified
         * virtual interface is created and made available to handle traffic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmPublicVirtualInterfaceAsync(const Model::ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts ownership of a transit virtual interface created by another AWS
         * account.</p> <p> After the owner of the transit virtual interface makes this
         * call, the specified transit virtual interface is created and made available to
         * handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmTransitVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmTransitVirtualInterfaceOutcome ConfirmTransitVirtualInterface(const Model::ConfirmTransitVirtualInterfaceRequest& request) const;

        /**
         * <p>Accepts ownership of a transit virtual interface created by another AWS
         * account.</p> <p> After the owner of the transit virtual interface makes this
         * call, the specified transit virtual interface is created and made available to
         * handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmTransitVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmTransitVirtualInterfaceOutcomeCallable ConfirmTransitVirtualInterfaceCallable(const Model::ConfirmTransitVirtualInterfaceRequest& request) const;

        /**
         * <p>Accepts ownership of a transit virtual interface created by another AWS
         * account.</p> <p> After the owner of the transit virtual interface makes this
         * call, the specified transit virtual interface is created and made available to
         * handle traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmTransitVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmTransitVirtualInterfaceAsync(const Model::ConfirmTransitVirtualInterfaceRequest& request, const ConfirmTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a BGP peer on the specified virtual interface.</p> <p>You must create
         * a BGP peer for the corresponding address family (IPv4/IPv6) in order to access
         * AWS resources that also use that address family.</p> <p>If logical redundancy is
         * not supported by the connection, interconnect, or LAG, the BGP peer cannot be in
         * the same address family as an existing BGP peer on the virtual interface.</p>
         * <p>When creating a IPv6 BGP peer, omit the Amazon address and customer address.
         * IPv6 addresses are automatically assigned from the Amazon pool of IPv6
         * addresses; you cannot specify custom IPv6 addresses.</p> <p>For a public virtual
         * interface, the Autonomous System Number (ASN) must be private or already
         * whitelisted for the virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBGPPeerOutcome CreateBGPPeer(const Model::CreateBGPPeerRequest& request) const;

        /**
         * <p>Creates a BGP peer on the specified virtual interface.</p> <p>You must create
         * a BGP peer for the corresponding address family (IPv4/IPv6) in order to access
         * AWS resources that also use that address family.</p> <p>If logical redundancy is
         * not supported by the connection, interconnect, or LAG, the BGP peer cannot be in
         * the same address family as an existing BGP peer on the virtual interface.</p>
         * <p>When creating a IPv6 BGP peer, omit the Amazon address and customer address.
         * IPv6 addresses are automatically assigned from the Amazon pool of IPv6
         * addresses; you cannot specify custom IPv6 addresses.</p> <p>For a public virtual
         * interface, the Autonomous System Number (ASN) must be private or already
         * whitelisted for the virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBGPPeerOutcomeCallable CreateBGPPeerCallable(const Model::CreateBGPPeerRequest& request) const;

        /**
         * <p>Creates a BGP peer on the specified virtual interface.</p> <p>You must create
         * a BGP peer for the corresponding address family (IPv4/IPv6) in order to access
         * AWS resources that also use that address family.</p> <p>If logical redundancy is
         * not supported by the connection, interconnect, or LAG, the BGP peer cannot be in
         * the same address family as an existing BGP peer on the virtual interface.</p>
         * <p>When creating a IPv6 BGP peer, omit the Amazon address and customer address.
         * IPv6 addresses are automatically assigned from the Amazon pool of IPv6
         * addresses; you cannot specify custom IPv6 addresses.</p> <p>For a public virtual
         * interface, the Autonomous System Number (ASN) must be private or already
         * whitelisted for the virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBGPPeerAsync(const Model::CreateBGPPeerRequest& request, const CreateBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a connection between a customer network and a specific AWS Direct
         * Connect location.</p> <p>A connection links your internal network to an AWS
         * Direct Connect location over a standard Ethernet fiber-optic cable. One end of
         * the cable is connected to your router, the other to an AWS Direct Connect
         * router.</p> <p>To find the locations for your Region, use
         * <a>DescribeLocations</a>.</p> <p>You can automatically add the new connection to
         * a link aggregation group (LAG) by specifying a LAG ID in the request. This
         * ensures that the new connection is allocated on the same AWS Direct Connect
         * endpoint that hosts the specified LAG. If there are no available ports on the
         * endpoint, the request fails and no connection is created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a connection between a customer network and a specific AWS Direct
         * Connect location.</p> <p>A connection links your internal network to an AWS
         * Direct Connect location over a standard Ethernet fiber-optic cable. One end of
         * the cable is connected to your router, the other to an AWS Direct Connect
         * router.</p> <p>To find the locations for your Region, use
         * <a>DescribeLocations</a>.</p> <p>You can automatically add the new connection to
         * a link aggregation group (LAG) by specifying a LAG ID in the request. This
         * ensures that the new connection is allocated on the same AWS Direct Connect
         * endpoint that hosts the specified LAG. If there are no available ports on the
         * endpoint, the request fails and no connection is created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a connection between a customer network and a specific AWS Direct
         * Connect location.</p> <p>A connection links your internal network to an AWS
         * Direct Connect location over a standard Ethernet fiber-optic cable. One end of
         * the cable is connected to your router, the other to an AWS Direct Connect
         * router.</p> <p>To find the locations for your Region, use
         * <a>DescribeLocations</a>.</p> <p>You can automatically add the new connection to
         * a link aggregation group (LAG) by specifying a LAG ID in the request. This
         * ensures that the new connection is allocated on the same AWS Direct Connect
         * endpoint that hosts the specified LAG. If there are no available ports on the
         * endpoint, the request fails and no connection is created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Direct Connect gateway, which is an intermediate object that
         * enables you to connect a set of virtual interfaces and virtual private gateways.
         * A Direct Connect gateway is global and visible in any AWS Region after it is
         * created. The virtual interfaces and virtual private gateways that are connected
         * through a Direct Connect gateway can be in different AWS Regions. This enables
         * you to connect to a VPC in any Region, regardless of the Region in which the
         * virtual interfaces are located, and pass traffic between them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectConnectGatewayOutcome CreateDirectConnectGateway(const Model::CreateDirectConnectGatewayRequest& request) const;

        /**
         * <p>Creates a Direct Connect gateway, which is an intermediate object that
         * enables you to connect a set of virtual interfaces and virtual private gateways.
         * A Direct Connect gateway is global and visible in any AWS Region after it is
         * created. The virtual interfaces and virtual private gateways that are connected
         * through a Direct Connect gateway can be in different AWS Regions. This enables
         * you to connect to a VPC in any Region, regardless of the Region in which the
         * virtual interfaces are located, and pass traffic between them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDirectConnectGatewayOutcomeCallable CreateDirectConnectGatewayCallable(const Model::CreateDirectConnectGatewayRequest& request) const;

        /**
         * <p>Creates a Direct Connect gateway, which is an intermediate object that
         * enables you to connect a set of virtual interfaces and virtual private gateways.
         * A Direct Connect gateway is global and visible in any AWS Region after it is
         * created. The virtual interfaces and virtual private gateways that are connected
         * through a Direct Connect gateway can be in different AWS Regions. This enables
         * you to connect to a VPC in any Region, regardless of the Region in which the
         * virtual interfaces are located, and pass traffic between them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectConnectGatewayAsync(const Model::CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an association between a Direct Connect gateway and a virtual private
         * gateway. The virtual private gateway must be attached to a VPC and must not be
         * associated with another Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectConnectGatewayAssociationOutcome CreateDirectConnectGatewayAssociation(const Model::CreateDirectConnectGatewayAssociationRequest& request) const;

        /**
         * <p>Creates an association between a Direct Connect gateway and a virtual private
         * gateway. The virtual private gateway must be attached to a VPC and must not be
         * associated with another Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDirectConnectGatewayAssociationOutcomeCallable CreateDirectConnectGatewayAssociationCallable(const Model::CreateDirectConnectGatewayAssociationRequest& request) const;

        /**
         * <p>Creates an association between a Direct Connect gateway and a virtual private
         * gateway. The virtual private gateway must be attached to a VPC and must not be
         * associated with another Direct Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectConnectGatewayAssociationAsync(const Model::CreateDirectConnectGatewayAssociationRequest& request, const CreateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a proposal to associate the specified virtual private gateway or
         * transit gateway with the specified Direct Connect gateway.</p> <p>You can only
         * associate a Direct Connect gateway and virtual private gateway or transit
         * gateway when the account that owns the Direct Connect gateway and the account
         * that owns the virtual private gateway or transit gateway have the same AWS Payer
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectConnectGatewayAssociationProposalOutcome CreateDirectConnectGatewayAssociationProposal(const Model::CreateDirectConnectGatewayAssociationProposalRequest& request) const;

        /**
         * <p>Creates a proposal to associate the specified virtual private gateway or
         * transit gateway with the specified Direct Connect gateway.</p> <p>You can only
         * associate a Direct Connect gateway and virtual private gateway or transit
         * gateway when the account that owns the Direct Connect gateway and the account
         * that owns the virtual private gateway or transit gateway have the same AWS Payer
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDirectConnectGatewayAssociationProposalOutcomeCallable CreateDirectConnectGatewayAssociationProposalCallable(const Model::CreateDirectConnectGatewayAssociationProposalRequest& request) const;

        /**
         * <p>Creates a proposal to associate the specified virtual private gateway or
         * transit gateway with the specified Direct Connect gateway.</p> <p>You can only
         * associate a Direct Connect gateway and virtual private gateway or transit
         * gateway when the account that owns the Direct Connect gateway and the account
         * that owns the virtual private gateway or transit gateway have the same AWS Payer
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectConnectGatewayAssociationProposalAsync(const Model::CreateDirectConnectGatewayAssociationProposalRequest& request, const CreateDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an interconnect between an AWS Direct Connect Partner's network and a
         * specific AWS Direct Connect location.</p> <p>An interconnect is a connection
         * that is capable of hosting other connections. The AWS Direct Connect partner can
         * use an interconnect to provide AWS Direct Connect hosted connections to
         * customers through their own network services. Like a standard connection, an
         * interconnect links the partner's network to an AWS Direct Connect location over
         * a standard Ethernet fiber-optic cable. One end is connected to the partner's
         * router, the other to an AWS Direct Connect router.</p> <p>You can automatically
         * add the new interconnect to a link aggregation group (LAG) by specifying a LAG
         * ID in the request. This ensures that the new interconnect is allocated on the
         * same AWS Direct Connect endpoint that hosts the specified LAG. If there are no
         * available ports on the endpoint, the request fails and no interconnect is
         * created.</p> <p>For each end customer, the AWS Direct Connect Partner provisions
         * a connection on their interconnect by calling <a>AllocateHostedConnection</a>.
         * The end customer can then connect to AWS resources by creating a virtual
         * interface on their connection, using the VLAN assigned to them by the AWS Direct
         * Connect Partner.</p> <note> <p>Intended for use by AWS Direct Connect Partners
         * only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateInterconnect">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInterconnectOutcome CreateInterconnect(const Model::CreateInterconnectRequest& request) const;

        /**
         * <p>Creates an interconnect between an AWS Direct Connect Partner's network and a
         * specific AWS Direct Connect location.</p> <p>An interconnect is a connection
         * that is capable of hosting other connections. The AWS Direct Connect partner can
         * use an interconnect to provide AWS Direct Connect hosted connections to
         * customers through their own network services. Like a standard connection, an
         * interconnect links the partner's network to an AWS Direct Connect location over
         * a standard Ethernet fiber-optic cable. One end is connected to the partner's
         * router, the other to an AWS Direct Connect router.</p> <p>You can automatically
         * add the new interconnect to a link aggregation group (LAG) by specifying a LAG
         * ID in the request. This ensures that the new interconnect is allocated on the
         * same AWS Direct Connect endpoint that hosts the specified LAG. If there are no
         * available ports on the endpoint, the request fails and no interconnect is
         * created.</p> <p>For each end customer, the AWS Direct Connect Partner provisions
         * a connection on their interconnect by calling <a>AllocateHostedConnection</a>.
         * The end customer can then connect to AWS resources by creating a virtual
         * interface on their connection, using the VLAN assigned to them by the AWS Direct
         * Connect Partner.</p> <note> <p>Intended for use by AWS Direct Connect Partners
         * only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateInterconnect">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInterconnectOutcomeCallable CreateInterconnectCallable(const Model::CreateInterconnectRequest& request) const;

        /**
         * <p>Creates an interconnect between an AWS Direct Connect Partner's network and a
         * specific AWS Direct Connect location.</p> <p>An interconnect is a connection
         * that is capable of hosting other connections. The AWS Direct Connect partner can
         * use an interconnect to provide AWS Direct Connect hosted connections to
         * customers through their own network services. Like a standard connection, an
         * interconnect links the partner's network to an AWS Direct Connect location over
         * a standard Ethernet fiber-optic cable. One end is connected to the partner's
         * router, the other to an AWS Direct Connect router.</p> <p>You can automatically
         * add the new interconnect to a link aggregation group (LAG) by specifying a LAG
         * ID in the request. This ensures that the new interconnect is allocated on the
         * same AWS Direct Connect endpoint that hosts the specified LAG. If there are no
         * available ports on the endpoint, the request fails and no interconnect is
         * created.</p> <p>For each end customer, the AWS Direct Connect Partner provisions
         * a connection on their interconnect by calling <a>AllocateHostedConnection</a>.
         * The end customer can then connect to AWS resources by creating a virtual
         * interface on their connection, using the VLAN assigned to them by the AWS Direct
         * Connect Partner.</p> <note> <p>Intended for use by AWS Direct Connect Partners
         * only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateInterconnect">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInterconnectAsync(const Model::CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a link aggregation group (LAG) with the specified number of bundled
         * physical connections between the customer network and a specific AWS Direct
         * Connect location. A LAG is a logical interface that uses the Link Aggregation
         * Control Protocol (LACP) to aggregate multiple interfaces, enabling you to treat
         * them as a single interface.</p> <p>All connections in a LAG must use the same
         * bandwidth and must terminate at the same AWS Direct Connect endpoint.</p> <p>You
         * can have up to 10 connections per LAG. Regardless of this limit, if you request
         * more connections for the LAG than AWS Direct Connect can allocate on a single
         * endpoint, no LAG is created.</p> <p>You can specify an existing physical
         * connection or interconnect to include in the LAG (which counts towards the total
         * number of connections). Doing so interrupts the current physical connection or
         * hosted connections, and re-establishes them as a member of the LAG. The LAG will
         * be created on the same AWS Direct Connect endpoint to which the connection
         * terminates. Any virtual interfaces associated with the connection are
         * automatically disassociated and re-associated with the LAG. The connection ID
         * does not change.</p> <p>If the AWS account used to create a LAG is a registered
         * AWS Direct Connect Partner, the LAG is automatically enabled to host
         * sub-connections. For a LAG owned by a partner, any associated virtual interfaces
         * cannot be directly configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateLag">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLagOutcome CreateLag(const Model::CreateLagRequest& request) const;

        /**
         * <p>Creates a link aggregation group (LAG) with the specified number of bundled
         * physical connections between the customer network and a specific AWS Direct
         * Connect location. A LAG is a logical interface that uses the Link Aggregation
         * Control Protocol (LACP) to aggregate multiple interfaces, enabling you to treat
         * them as a single interface.</p> <p>All connections in a LAG must use the same
         * bandwidth and must terminate at the same AWS Direct Connect endpoint.</p> <p>You
         * can have up to 10 connections per LAG. Regardless of this limit, if you request
         * more connections for the LAG than AWS Direct Connect can allocate on a single
         * endpoint, no LAG is created.</p> <p>You can specify an existing physical
         * connection or interconnect to include in the LAG (which counts towards the total
         * number of connections). Doing so interrupts the current physical connection or
         * hosted connections, and re-establishes them as a member of the LAG. The LAG will
         * be created on the same AWS Direct Connect endpoint to which the connection
         * terminates. Any virtual interfaces associated with the connection are
         * automatically disassociated and re-associated with the LAG. The connection ID
         * does not change.</p> <p>If the AWS account used to create a LAG is a registered
         * AWS Direct Connect Partner, the LAG is automatically enabled to host
         * sub-connections. For a LAG owned by a partner, any associated virtual interfaces
         * cannot be directly configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLagOutcomeCallable CreateLagCallable(const Model::CreateLagRequest& request) const;

        /**
         * <p>Creates a link aggregation group (LAG) with the specified number of bundled
         * physical connections between the customer network and a specific AWS Direct
         * Connect location. A LAG is a logical interface that uses the Link Aggregation
         * Control Protocol (LACP) to aggregate multiple interfaces, enabling you to treat
         * them as a single interface.</p> <p>All connections in a LAG must use the same
         * bandwidth and must terminate at the same AWS Direct Connect endpoint.</p> <p>You
         * can have up to 10 connections per LAG. Regardless of this limit, if you request
         * more connections for the LAG than AWS Direct Connect can allocate on a single
         * endpoint, no LAG is created.</p> <p>You can specify an existing physical
         * connection or interconnect to include in the LAG (which counts towards the total
         * number of connections). Doing so interrupts the current physical connection or
         * hosted connections, and re-establishes them as a member of the LAG. The LAG will
         * be created on the same AWS Direct Connect endpoint to which the connection
         * terminates. Any virtual interfaces associated with the connection are
         * automatically disassociated and re-associated with the LAG. The connection ID
         * does not change.</p> <p>If the AWS account used to create a LAG is a registered
         * AWS Direct Connect Partner, the LAG is automatically enabled to host
         * sub-connections. For a LAG owned by a partner, any associated virtual interfaces
         * cannot be directly configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLagAsync(const Model::CreateLagRequest& request, const CreateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface can be
         * connected to either a Direct Connect gateway or a Virtual Private Gateway (VGW).
         * Connecting the private virtual interface to a Direct Connect gateway enables the
         * possibility for connecting to multiple VPCs, including VPCs in different AWS
         * Regions. Connecting the private virtual interface to a VGW only provides access
         * to a single VPC within the same Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrivateVirtualInterfaceOutcome CreatePrivateVirtualInterface(const Model::CreatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface can be
         * connected to either a Direct Connect gateway or a Virtual Private Gateway (VGW).
         * Connecting the private virtual interface to a Direct Connect gateway enables the
         * possibility for connecting to multiple VPCs, including VPCs in different AWS
         * Regions. Connecting the private virtual interface to a VGW only provides access
         * to a single VPC within the same Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePrivateVirtualInterfaceOutcomeCallable CreatePrivateVirtualInterfaceCallable(const Model::CreatePrivateVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a private virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A private virtual interface can be
         * connected to either a Direct Connect gateway or a Virtual Private Gateway (VGW).
         * Connecting the private virtual interface to a Direct Connect gateway enables the
         * possibility for connecting to multiple VPCs, including VPCs in different AWS
         * Regions. Connecting the private virtual interface to a VGW only provides access
         * to a single VPC within the same Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePrivateVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePrivateVirtualInterfaceAsync(const Model::CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon S3.</p> <p>When
         * creating an IPv6 public virtual interface (<code>addressFamily</code> is
         * <code>ipv6</code>), leave the <code>customer</code> and <code>amazon</code>
         * address fields blank to use auto-assigned IPv6 space. Custom IPv6 addresses are
         * not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePublicVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicVirtualInterfaceOutcome CreatePublicVirtualInterface(const Model::CreatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon S3.</p> <p>When
         * creating an IPv6 public virtual interface (<code>addressFamily</code> is
         * <code>ipv6</code>), leave the <code>customer</code> and <code>amazon</code>
         * address fields blank to use auto-assigned IPv6 space. Custom IPv6 addresses are
         * not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicVirtualInterfaceOutcomeCallable CreatePublicVirtualInterfaceCallable(const Model::CreatePublicVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a public virtual interface. A virtual interface is the VLAN that
         * transports AWS Direct Connect traffic. A public virtual interface supports
         * sending traffic to public services of AWS such as Amazon S3.</p> <p>When
         * creating an IPv6 public virtual interface (<code>addressFamily</code> is
         * <code>ipv6</code>), leave the <code>customer</code> and <code>amazon</code>
         * address fields blank to use auto-assigned IPv6 space. Custom IPv6 addresses are
         * not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreatePublicVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicVirtualInterfaceAsync(const Model::CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a transit virtual interface. A transit virtual interface should be
         * used to access one or more transit gateways associated with Direct Connect
         * gateways. A transit virtual interface enables the connection of multiple VPCs
         * attached to a transit gateway to a Direct Connect gateway.</p> <important> <p>If
         * you associate your transit gateway with one or more Direct Connect gateways, the
         * Autonomous System Number (ASN) used by the transit gateway and the Direct
         * Connect gateway must be different. For example, if you use the default ASN 64512
         * for both your the transit gateway and Direct Connect gateway, the association
         * request fails.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateTransitVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitVirtualInterfaceOutcome CreateTransitVirtualInterface(const Model::CreateTransitVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a transit virtual interface. A transit virtual interface should be
         * used to access one or more transit gateways associated with Direct Connect
         * gateways. A transit virtual interface enables the connection of multiple VPCs
         * attached to a transit gateway to a Direct Connect gateway.</p> <important> <p>If
         * you associate your transit gateway with one or more Direct Connect gateways, the
         * Autonomous System Number (ASN) used by the transit gateway and the Direct
         * Connect gateway must be different. For example, if you use the default ASN 64512
         * for both your the transit gateway and Direct Connect gateway, the association
         * request fails.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateTransitVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransitVirtualInterfaceOutcomeCallable CreateTransitVirtualInterfaceCallable(const Model::CreateTransitVirtualInterfaceRequest& request) const;

        /**
         * <p>Creates a transit virtual interface. A transit virtual interface should be
         * used to access one or more transit gateways associated with Direct Connect
         * gateways. A transit virtual interface enables the connection of multiple VPCs
         * attached to a transit gateway to a Direct Connect gateway.</p> <important> <p>If
         * you associate your transit gateway with one or more Direct Connect gateways, the
         * Autonomous System Number (ASN) used by the transit gateway and the Direct
         * Connect gateway must be different. For example, if you use the default ASN 64512
         * for both your the transit gateway and Direct Connect gateway, the association
         * request fails.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateTransitVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransitVirtualInterfaceAsync(const Model::CreateTransitVirtualInterfaceRequest& request, const CreateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified BGP peer on the specified virtual interface with the
         * specified customer address and ASN.</p> <p>You cannot delete the last BGP peer
         * from a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBGPPeerOutcome DeleteBGPPeer(const Model::DeleteBGPPeerRequest& request) const;

        /**
         * <p>Deletes the specified BGP peer on the specified virtual interface with the
         * specified customer address and ASN.</p> <p>You cannot delete the last BGP peer
         * from a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBGPPeerOutcomeCallable DeleteBGPPeerCallable(const Model::DeleteBGPPeerRequest& request) const;

        /**
         * <p>Deletes the specified BGP peer on the specified virtual interface with the
         * specified customer address and ASN.</p> <p>You cannot delete the last BGP peer
         * from a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBGPPeerAsync(const Model::DeleteBGPPeerRequest& request, const DeleteBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified connection.</p> <p>Deleting a connection only stops the
         * AWS Direct Connect port hour and data transfer charges. If you are partnering
         * with any third parties to connect with the AWS Direct Connect location, you must
         * cancel your service with them separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes the specified connection.</p> <p>Deleting a connection only stops the
         * AWS Direct Connect port hour and data transfer charges. If you are partnering
         * with any third parties to connect with the AWS Direct Connect location, you must
         * cancel your service with them separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes the specified connection.</p> <p>Deleting a connection only stops the
         * AWS Direct Connect port hour and data transfer charges. If you are partnering
         * with any third parties to connect with the AWS Direct Connect location, you must
         * cancel your service with them separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Direct Connect gateway. You must first delete all
         * virtual interfaces that are attached to the Direct Connect gateway and
         * disassociate all virtual private gateways that are associated with the Direct
         * Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectConnectGatewayOutcome DeleteDirectConnectGateway(const Model::DeleteDirectConnectGatewayRequest& request) const;

        /**
         * <p>Deletes the specified Direct Connect gateway. You must first delete all
         * virtual interfaces that are attached to the Direct Connect gateway and
         * disassociate all virtual private gateways that are associated with the Direct
         * Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDirectConnectGatewayOutcomeCallable DeleteDirectConnectGatewayCallable(const Model::DeleteDirectConnectGatewayRequest& request) const;

        /**
         * <p>Deletes the specified Direct Connect gateway. You must first delete all
         * virtual interfaces that are attached to the Direct Connect gateway and
         * disassociate all virtual private gateways that are associated with the Direct
         * Connect gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectConnectGatewayAsync(const Model::DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the association between the specified Direct Connect gateway and
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectConnectGatewayAssociationOutcome DeleteDirectConnectGatewayAssociation(const Model::DeleteDirectConnectGatewayAssociationRequest& request) const;

        /**
         * <p>Deletes the association between the specified Direct Connect gateway and
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDirectConnectGatewayAssociationOutcomeCallable DeleteDirectConnectGatewayAssociationCallable(const Model::DeleteDirectConnectGatewayAssociationRequest& request) const;

        /**
         * <p>Deletes the association between the specified Direct Connect gateway and
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectConnectGatewayAssociationAsync(const Model::DeleteDirectConnectGatewayAssociationRequest& request, const DeleteDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the association proposal request between the specified Direct Connect
         * gateway and virtual private gateway or transit gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectConnectGatewayAssociationProposalOutcome DeleteDirectConnectGatewayAssociationProposal(const Model::DeleteDirectConnectGatewayAssociationProposalRequest& request) const;

        /**
         * <p>Deletes the association proposal request between the specified Direct Connect
         * gateway and virtual private gateway or transit gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDirectConnectGatewayAssociationProposalOutcomeCallable DeleteDirectConnectGatewayAssociationProposalCallable(const Model::DeleteDirectConnectGatewayAssociationProposalRequest& request) const;

        /**
         * <p>Deletes the association proposal request between the specified Direct Connect
         * gateway and virtual private gateway or transit gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociationProposal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectConnectGatewayAssociationProposalAsync(const Model::DeleteDirectConnectGatewayAssociationProposalRequest& request, const DeleteDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>Intended for use by AWS
         * Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteInterconnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInterconnectOutcome DeleteInterconnect(const Model::DeleteInterconnectRequest& request) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>Intended for use by AWS
         * Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteInterconnect">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInterconnectOutcomeCallable DeleteInterconnectCallable(const Model::DeleteInterconnectRequest& request) const;

        /**
         * <p>Deletes the specified interconnect.</p> <note> <p>Intended for use by AWS
         * Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteInterconnect">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInterconnectAsync(const Model::DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified link aggregation group (LAG). You cannot delete a LAG
         * if it has active virtual interfaces or hosted connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteLag">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLagOutcome DeleteLag(const Model::DeleteLagRequest& request) const;

        /**
         * <p>Deletes the specified link aggregation group (LAG). You cannot delete a LAG
         * if it has active virtual interfaces or hosted connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLagOutcomeCallable DeleteLagCallable(const Model::DeleteLagRequest& request) const;

        /**
         * <p>Deletes the specified link aggregation group (LAG). You cannot delete a LAG
         * if it has active virtual interfaces or hosted connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLagAsync(const Model::DeleteLagRequest& request, const DeleteLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteVirtualInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualInterfaceOutcome DeleteVirtualInterface(const Model::DeleteVirtualInterfaceRequest& request) const;

        /**
         * <p>Deletes a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteVirtualInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualInterfaceOutcomeCallable DeleteVirtualInterfaceCallable(const Model::DeleteVirtualInterfaceRequest& request) const;

        /**
         * <p>Deletes a virtual interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteVirtualInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualInterfaceAsync(const Model::DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the specified connection or all connections in this
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionsOutcome DescribeConnections(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Displays the specified connection or all connections in this
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionsOutcomeCallable DescribeConnectionsCallable(const Model::DescribeConnectionsRequest& request) const;

        /**
         * <p>Displays the specified connection or all connections in this
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionsAsync(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more association proposals for connection between a virtual
         * private gateway or transit gateway and a Direct Connect gateway. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociationProposals">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewayAssociationProposalsOutcome DescribeDirectConnectGatewayAssociationProposals(const Model::DescribeDirectConnectGatewayAssociationProposalsRequest& request) const;

        /**
         * <p>Describes one or more association proposals for connection between a virtual
         * private gateway or transit gateway and a Direct Connect gateway. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociationProposals">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDirectConnectGatewayAssociationProposalsOutcomeCallable DescribeDirectConnectGatewayAssociationProposalsCallable(const Model::DescribeDirectConnectGatewayAssociationProposalsRequest& request) const;

        /**
         * <p>Describes one or more association proposals for connection between a virtual
         * private gateway or transit gateway and a Direct Connect gateway. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociationProposals">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectConnectGatewayAssociationProposalsAsync(const Model::DescribeDirectConnectGatewayAssociationProposalsRequest& request, const DescribeDirectConnectGatewayAssociationProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the associations between your Direct Connect gateways and virtual
         * private gateways. You must specify a Direct Connect gateway, a virtual private
         * gateway, or both. If you specify a Direct Connect gateway, the response contains
         * all virtual private gateways associated with the Direct Connect gateway. If you
         * specify a virtual private gateway, the response contains all Direct Connect
         * gateways associated with the virtual private gateway. If you specify both, the
         * response contains the association between the Direct Connect gateway and the
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewayAssociationsOutcome DescribeDirectConnectGatewayAssociations(const Model::DescribeDirectConnectGatewayAssociationsRequest& request) const;

        /**
         * <p>Lists the associations between your Direct Connect gateways and virtual
         * private gateways. You must specify a Direct Connect gateway, a virtual private
         * gateway, or both. If you specify a Direct Connect gateway, the response contains
         * all virtual private gateways associated with the Direct Connect gateway. If you
         * specify a virtual private gateway, the response contains all Direct Connect
         * gateways associated with the virtual private gateway. If you specify both, the
         * response contains the association between the Direct Connect gateway and the
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDirectConnectGatewayAssociationsOutcomeCallable DescribeDirectConnectGatewayAssociationsCallable(const Model::DescribeDirectConnectGatewayAssociationsRequest& request) const;

        /**
         * <p>Lists the associations between your Direct Connect gateways and virtual
         * private gateways. You must specify a Direct Connect gateway, a virtual private
         * gateway, or both. If you specify a Direct Connect gateway, the response contains
         * all virtual private gateways associated with the Direct Connect gateway. If you
         * specify a virtual private gateway, the response contains all Direct Connect
         * gateways associated with the virtual private gateway. If you specify both, the
         * response contains the association between the Direct Connect gateway and the
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectConnectGatewayAssociationsAsync(const Model::DescribeDirectConnectGatewayAssociationsRequest& request, const DescribeDirectConnectGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the attachments between your Direct Connect gateways and virtual
         * interfaces. You must specify a Direct Connect gateway, a virtual interface, or
         * both. If you specify a Direct Connect gateway, the response contains all virtual
         * interfaces attached to the Direct Connect gateway. If you specify a virtual
         * interface, the response contains all Direct Connect gateways attached to the
         * virtual interface. If you specify both, the response contains the attachment
         * between the Direct Connect gateway and the virtual interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewayAttachmentsOutcome DescribeDirectConnectGatewayAttachments(const Model::DescribeDirectConnectGatewayAttachmentsRequest& request) const;

        /**
         * <p>Lists the attachments between your Direct Connect gateways and virtual
         * interfaces. You must specify a Direct Connect gateway, a virtual interface, or
         * both. If you specify a Direct Connect gateway, the response contains all virtual
         * interfaces attached to the Direct Connect gateway. If you specify a virtual
         * interface, the response contains all Direct Connect gateways attached to the
         * virtual interface. If you specify both, the response contains the attachment
         * between the Direct Connect gateway and the virtual interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAttachments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDirectConnectGatewayAttachmentsOutcomeCallable DescribeDirectConnectGatewayAttachmentsCallable(const Model::DescribeDirectConnectGatewayAttachmentsRequest& request) const;

        /**
         * <p>Lists the attachments between your Direct Connect gateways and virtual
         * interfaces. You must specify a Direct Connect gateway, a virtual interface, or
         * both. If you specify a Direct Connect gateway, the response contains all virtual
         * interfaces attached to the Direct Connect gateway. If you specify a virtual
         * interface, the response contains all Direct Connect gateways attached to the
         * virtual interface. If you specify both, the response contains the attachment
         * between the Direct Connect gateway and the virtual interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAttachments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectConnectGatewayAttachmentsAsync(const Model::DescribeDirectConnectGatewayAttachmentsRequest& request, const DescribeDirectConnectGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all your Direct Connect gateways or only the specified Direct Connect
         * gateway. Deleted Direct Connect gateways are not returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectConnectGatewaysOutcome DescribeDirectConnectGateways(const Model::DescribeDirectConnectGatewaysRequest& request) const;

        /**
         * <p>Lists all your Direct Connect gateways or only the specified Direct Connect
         * gateway. Deleted Direct Connect gateways are not returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDirectConnectGatewaysOutcomeCallable DescribeDirectConnectGatewaysCallable(const Model::DescribeDirectConnectGatewaysRequest& request) const;

        /**
         * <p>Lists all your Direct Connect gateways or only the specified Direct Connect
         * gateway. Deleted Direct Connect gateways are not returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectConnectGatewaysAsync(const Model::DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the hosted connections that have been provisioned on the specified
         * interconnect or link aggregation group (LAG).</p> <note> <p>Intended for use by
         * AWS Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeHostedConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostedConnectionsOutcome DescribeHostedConnections(const Model::DescribeHostedConnectionsRequest& request) const;

        /**
         * <p>Lists the hosted connections that have been provisioned on the specified
         * interconnect or link aggregation group (LAG).</p> <note> <p>Intended for use by
         * AWS Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeHostedConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostedConnectionsOutcomeCallable DescribeHostedConnectionsCallable(const Model::DescribeHostedConnectionsRequest& request) const;

        /**
         * <p>Lists the hosted connections that have been provisioned on the specified
         * interconnect or link aggregation group (LAG).</p> <note> <p>Intended for use by
         * AWS Direct Connect Partners only.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeHostedConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostedConnectionsAsync(const Model::DescribeHostedConnectionsRequest& request, const DescribeHostedConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the interconnects owned by the AWS account or only the specified
         * interconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeInterconnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInterconnectsOutcome DescribeInterconnects(const Model::DescribeInterconnectsRequest& request) const;

        /**
         * <p>Lists the interconnects owned by the AWS account or only the specified
         * interconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeInterconnects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInterconnectsOutcomeCallable DescribeInterconnectsCallable(const Model::DescribeInterconnectsRequest& request) const;

        /**
         * <p>Lists the interconnects owned by the AWS account or only the specified
         * interconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeInterconnects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInterconnectsAsync(const Model::DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes all your link aggregation groups (LAG) or the specified
         * LAG.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLagsOutcome DescribeLags(const Model::DescribeLagsRequest& request) const;

        /**
         * <p>Describes all your link aggregation groups (LAG) or the specified
         * LAG.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLagsOutcomeCallable DescribeLagsCallable(const Model::DescribeLagsRequest& request) const;

        /**
         * <p>Describes all your link aggregation groups (LAG) or the specified
         * LAG.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLagsAsync(const Model::DescribeLagsRequest& request, const DescribeLagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the LOA-CFA for a connection, interconnect, or link aggregation group
         * (LAG).</p> <p>The Letter of Authorization - Connecting Facility Assignment
         * (LOA-CFA) is a document that is used when establishing your cross connect to AWS
         * at the colocation facility. For more information, see <a
         * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the <i>AWS Direct Connect
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoa">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoaOutcome DescribeLoa(const Model::DescribeLoaRequest& request) const;

        /**
         * <p>Gets the LOA-CFA for a connection, interconnect, or link aggregation group
         * (LAG).</p> <p>The Letter of Authorization - Connecting Facility Assignment
         * (LOA-CFA) is a document that is used when establishing your cross connect to AWS
         * at the colocation facility. For more information, see <a
         * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the <i>AWS Direct Connect
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoa">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoaOutcomeCallable DescribeLoaCallable(const Model::DescribeLoaRequest& request) const;

        /**
         * <p>Gets the LOA-CFA for a connection, interconnect, or link aggregation group
         * (LAG).</p> <p>The Letter of Authorization - Connecting Facility Assignment
         * (LOA-CFA) is a document that is used when establishing your cross connect to AWS
         * at the colocation facility. For more information, see <a
         * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting
         * Cross Connects at AWS Direct Connect Locations</a> in the <i>AWS Direct Connect
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoa">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoaAsync(const Model::DescribeLoaRequest& request, const DescribeLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the AWS Direct Connect locations in the current AWS Region. These are
         * the locations that can be selected when calling <a>CreateConnection</a> or
         * <a>CreateInterconnect</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationsOutcome DescribeLocations() const;

        /**
         * <p>Lists the AWS Direct Connect locations in the current AWS Region. These are
         * the locations that can be selected when calling <a>CreateConnection</a> or
         * <a>CreateInterconnect</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLocations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationsOutcomeCallable DescribeLocationsCallable() const;

        /**
         * <p>Lists the AWS Direct Connect locations in the current AWS Region. These are
         * the locations that can be selected when calling <a>CreateConnection</a> or
         * <a>CreateInterconnect</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLocations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationsAsync(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the tags associated with the specified AWS Direct Connect
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified AWS Direct Connect
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified AWS Direct Connect
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the virtual private gateways owned by the AWS account.</p> <p>You can
         * create one or more AWS Direct Connect private virtual interfaces linked to a
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualGatewaysOutcome DescribeVirtualGateways() const;

        /**
         * <p>Lists the virtual private gateways owned by the AWS account.</p> <p>You can
         * create one or more AWS Direct Connect private virtual interfaces linked to a
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualGatewaysOutcomeCallable DescribeVirtualGatewaysCallable() const;

        /**
         * <p>Lists the virtual private gateways owned by the AWS account.</p> <p>You can
         * create one or more AWS Direct Connect private virtual interfaces linked to a
         * virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualGatewaysAsync(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before you make the request are also returned. If
         * you specify a connection ID, only the virtual interfaces associated with the
         * connection are returned. If you specify a virtual interface ID, then only a
         * single virtual interface is returned.</p> <p>A virtual interface (VLAN)
         * transmits the traffic between the AWS Direct Connect location and the customer
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualInterfacesOutcome DescribeVirtualInterfaces(const Model::DescribeVirtualInterfacesRequest& request) const;

        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before you make the request are also returned. If
         * you specify a connection ID, only the virtual interfaces associated with the
         * connection are returned. If you specify a virtual interface ID, then only a
         * single virtual interface is returned.</p> <p>A virtual interface (VLAN)
         * transmits the traffic between the AWS Direct Connect location and the customer
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualInterfaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualInterfacesOutcomeCallable DescribeVirtualInterfacesCallable(const Model::DescribeVirtualInterfacesRequest& request) const;

        /**
         * <p>Displays all virtual interfaces for an AWS account. Virtual interfaces
         * deleted fewer than 15 minutes before you make the request are also returned. If
         * you specify a connection ID, only the virtual interfaces associated with the
         * connection are returned. If you specify a virtual interface ID, then only a
         * single virtual interface is returned.</p> <p>A virtual interface (VLAN)
         * transmits the traffic between the AWS Direct Connect location and the customer
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeVirtualInterfaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualInterfacesAsync(const Model::DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a connection from a link aggregation group (LAG). The
         * connection is interrupted and re-established as a standalone connection (the
         * connection is not deleted; to delete the connection, use the
         * <a>DeleteConnection</a> request). If the LAG has associated virtual interfaces
         * or hosted connections, they remain associated with the LAG. A disassociated
         * connection owned by an AWS Direct Connect Partner is automatically converted to
         * an interconnect.</p> <p>If disassociating the connection would cause the LAG to
         * fall below its setting for minimum number of operational connections, the
         * request fails, except when it's the last member of the LAG. If all connections
         * are disassociated, the LAG continues to exist as an empty LAG with no physical
         * connections. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateConnectionFromLag">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectionFromLagOutcome DisassociateConnectionFromLag(const Model::DisassociateConnectionFromLagRequest& request) const;

        /**
         * <p>Disassociates a connection from a link aggregation group (LAG). The
         * connection is interrupted and re-established as a standalone connection (the
         * connection is not deleted; to delete the connection, use the
         * <a>DeleteConnection</a> request). If the LAG has associated virtual interfaces
         * or hosted connections, they remain associated with the LAG. A disassociated
         * connection owned by an AWS Direct Connect Partner is automatically converted to
         * an interconnect.</p> <p>If disassociating the connection would cause the LAG to
         * fall below its setting for minimum number of operational connections, the
         * request fails, except when it's the last member of the LAG. If all connections
         * are disassociated, the LAG continues to exist as an empty LAG with no physical
         * connections. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateConnectionFromLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConnectionFromLagOutcomeCallable DisassociateConnectionFromLagCallable(const Model::DisassociateConnectionFromLagRequest& request) const;

        /**
         * <p>Disassociates a connection from a link aggregation group (LAG). The
         * connection is interrupted and re-established as a standalone connection (the
         * connection is not deleted; to delete the connection, use the
         * <a>DeleteConnection</a> request). If the LAG has associated virtual interfaces
         * or hosted connections, they remain associated with the LAG. A disassociated
         * connection owned by an AWS Direct Connect Partner is automatically converted to
         * an interconnect.</p> <p>If disassociating the connection would cause the LAG to
         * fall below its setting for minimum number of operational connections, the
         * request fails, except when it's the last member of the LAG. If all connections
         * are disassociated, the LAG continues to exist as an empty LAG with no physical
         * connections. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DisassociateConnectionFromLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConnectionFromLagAsync(const Model::DisassociateConnectionFromLagRequest& request, const DisassociateConnectionFromLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified AWS Direct Connect resource. Each
         * resource can have a maximum of 50 tags.</p> <p>Each tag consists of a key and an
         * optional value. If a tag with the same key is already associated with the
         * resource, this action updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified AWS Direct Connect resource. Each
         * resource can have a maximum of 50 tags.</p> <p>Each tag consists of a key and an
         * optional value. If a tag with the same key is already associated with the
         * resource, this action updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified AWS Direct Connect resource. Each
         * resource can have a maximum of 50 tags.</p> <p>Each tag consists of a key and an
         * optional value. If a tag with the same key is already associated with the
         * resource, this action updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified AWS Direct Connect
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified AWS Direct Connect
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified AWS Direct Connect
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attributes of the Direct Connect gateway
         * association.</p> <p>Add or remove prefixes from the association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectConnectGatewayAssociationOutcome UpdateDirectConnectGatewayAssociation(const Model::UpdateDirectConnectGatewayAssociationRequest& request) const;

        /**
         * <p>Updates the specified attributes of the Direct Connect gateway
         * association.</p> <p>Add or remove prefixes from the association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDirectConnectGatewayAssociationOutcomeCallable UpdateDirectConnectGatewayAssociationCallable(const Model::UpdateDirectConnectGatewayAssociationRequest& request) const;

        /**
         * <p>Updates the specified attributes of the Direct Connect gateway
         * association.</p> <p>Add or remove prefixes from the association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateDirectConnectGatewayAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDirectConnectGatewayAssociationAsync(const Model::UpdateDirectConnectGatewayAssociationRequest& request, const UpdateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the attributes of the specified link aggregation group (LAG).</p>
         * <p>You can update the following attributes:</p> <ul> <li> <p>The name of the
         * LAG.</p> </li> <li> <p>The value for the minimum number of connections that must
         * be operational for the LAG itself to be operational. </p> </li> </ul> <p>When
         * you create a LAG, the default value for the minimum number of operational
         * connections is zero (0). If you update this value and the number of operational
         * connections falls below the specified value, the LAG automatically goes down to
         * avoid over-utilization of the remaining connections. Adjust this value with
         * care, as it could force the LAG down if it is set higher than the current number
         * of operational connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLag">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLagOutcome UpdateLag(const Model::UpdateLagRequest& request) const;

        /**
         * <p>Updates the attributes of the specified link aggregation group (LAG).</p>
         * <p>You can update the following attributes:</p> <ul> <li> <p>The name of the
         * LAG.</p> </li> <li> <p>The value for the minimum number of connections that must
         * be operational for the LAG itself to be operational. </p> </li> </ul> <p>When
         * you create a LAG, the default value for the minimum number of operational
         * connections is zero (0). If you update this value and the number of operational
         * connections falls below the specified value, the LAG automatically goes down to
         * avoid over-utilization of the remaining connections. Adjust this value with
         * care, as it could force the LAG down if it is set higher than the current number
         * of operational connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLagOutcomeCallable UpdateLagCallable(const Model::UpdateLagRequest& request) const;

        /**
         * <p>Updates the attributes of the specified link aggregation group (LAG).</p>
         * <p>You can update the following attributes:</p> <ul> <li> <p>The name of the
         * LAG.</p> </li> <li> <p>The value for the minimum number of connections that must
         * be operational for the LAG itself to be operational. </p> </li> </ul> <p>When
         * you create a LAG, the default value for the minimum number of operational
         * connections is zero (0). If you update this value and the number of operational
         * connections falls below the specified value, the LAG automatically goes down to
         * avoid over-utilization of the remaining connections. Adjust this value with
         * care, as it could force the LAG down if it is set higher than the current number
         * of operational connections.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLagAsync(const Model::UpdateLagRequest& request, const UpdateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attributes of the specified virtual private
         * interface.</p> <p>Setting the MTU of a virtual interface to 9001 (jumbo frames)
         * can cause an update to the underlying physical connection if it wasn't updated
         * to support jumbo frames. Updating the connection disrupts network connectivity
         * for all virtual interfaces associated with the connection for up to 30 seconds.
         * To check whether your connection supports jumbo frames, call
         * <a>DescribeConnections</a>. To check whether your virtual interface supports
         * jumbo frames, call <a>DescribeVirtualInterfaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateVirtualInterfaceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualInterfaceAttributesOutcome UpdateVirtualInterfaceAttributes(const Model::UpdateVirtualInterfaceAttributesRequest& request) const;

        /**
         * <p>Updates the specified attributes of the specified virtual private
         * interface.</p> <p>Setting the MTU of a virtual interface to 9001 (jumbo frames)
         * can cause an update to the underlying physical connection if it wasn't updated
         * to support jumbo frames. Updating the connection disrupts network connectivity
         * for all virtual interfaces associated with the connection for up to 30 seconds.
         * To check whether your connection supports jumbo frames, call
         * <a>DescribeConnections</a>. To check whether your virtual interface supports
         * jumbo frames, call <a>DescribeVirtualInterfaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateVirtualInterfaceAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualInterfaceAttributesOutcomeCallable UpdateVirtualInterfaceAttributesCallable(const Model::UpdateVirtualInterfaceAttributesRequest& request) const;

        /**
         * <p>Updates the specified attributes of the specified virtual private
         * interface.</p> <p>Setting the MTU of a virtual interface to 9001 (jumbo frames)
         * can cause an update to the underlying physical connection if it wasn't updated
         * to support jumbo frames. Updating the connection disrupts network connectivity
         * for all virtual interfaces associated with the connection for up to 30 seconds.
         * To check whether your connection supports jumbo frames, call
         * <a>DescribeConnections</a>. To check whether your virtual interface supports
         * jumbo frames, call <a>DescribeVirtualInterfaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateVirtualInterfaceAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualInterfaceAttributesAsync(const Model::UpdateVirtualInterfaceAttributesRequest& request, const UpdateVirtualInterfaceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptDirectConnectGatewayAssociationProposalAsyncHelper(const Model::AcceptDirectConnectGatewayAssociationProposalRequest& request, const AcceptDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocateHostedConnectionAsyncHelper(const Model::AllocateHostedConnectionRequest& request, const AllocateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocatePrivateVirtualInterfaceAsyncHelper(const Model::AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocatePublicVirtualInterfaceAsyncHelper(const Model::AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocateTransitVirtualInterfaceAsyncHelper(const Model::AllocateTransitVirtualInterfaceRequest& request, const AllocateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateConnectionWithLagAsyncHelper(const Model::AssociateConnectionWithLagRequest& request, const AssociateConnectionWithLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateHostedConnectionAsyncHelper(const Model::AssociateHostedConnectionRequest& request, const AssociateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateVirtualInterfaceAsyncHelper(const Model::AssociateVirtualInterfaceRequest& request, const AssociateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmConnectionAsyncHelper(const Model::ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmPrivateVirtualInterfaceAsyncHelper(const Model::ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmPublicVirtualInterfaceAsyncHelper(const Model::ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmTransitVirtualInterfaceAsyncHelper(const Model::ConfirmTransitVirtualInterfaceRequest& request, const ConfirmTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBGPPeerAsyncHelper(const Model::CreateBGPPeerRequest& request, const CreateBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectionAsyncHelper(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDirectConnectGatewayAsyncHelper(const Model::CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDirectConnectGatewayAssociationAsyncHelper(const Model::CreateDirectConnectGatewayAssociationRequest& request, const CreateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDirectConnectGatewayAssociationProposalAsyncHelper(const Model::CreateDirectConnectGatewayAssociationProposalRequest& request, const CreateDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInterconnectAsyncHelper(const Model::CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLagAsyncHelper(const Model::CreateLagRequest& request, const CreateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePrivateVirtualInterfaceAsyncHelper(const Model::CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePublicVirtualInterfaceAsyncHelper(const Model::CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTransitVirtualInterfaceAsyncHelper(const Model::CreateTransitVirtualInterfaceRequest& request, const CreateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBGPPeerAsyncHelper(const Model::DeleteBGPPeerRequest& request, const DeleteBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAsyncHelper(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDirectConnectGatewayAsyncHelper(const Model::DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDirectConnectGatewayAssociationAsyncHelper(const Model::DeleteDirectConnectGatewayAssociationRequest& request, const DeleteDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDirectConnectGatewayAssociationProposalAsyncHelper(const Model::DeleteDirectConnectGatewayAssociationProposalRequest& request, const DeleteDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInterconnectAsyncHelper(const Model::DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLagAsyncHelper(const Model::DeleteLagRequest& request, const DeleteLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualInterfaceAsyncHelper(const Model::DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionsAsyncHelper(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDirectConnectGatewayAssociationProposalsAsyncHelper(const Model::DescribeDirectConnectGatewayAssociationProposalsRequest& request, const DescribeDirectConnectGatewayAssociationProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDirectConnectGatewayAssociationsAsyncHelper(const Model::DescribeDirectConnectGatewayAssociationsRequest& request, const DescribeDirectConnectGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDirectConnectGatewayAttachmentsAsyncHelper(const Model::DescribeDirectConnectGatewayAttachmentsRequest& request, const DescribeDirectConnectGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDirectConnectGatewaysAsyncHelper(const Model::DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHostedConnectionsAsyncHelper(const Model::DescribeHostedConnectionsRequest& request, const DescribeHostedConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInterconnectsAsyncHelper(const Model::DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLagsAsyncHelper(const Model::DescribeLagsRequest& request, const DescribeLagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoaAsyncHelper(const Model::DescribeLoaRequest& request, const DescribeLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationsAsyncHelper(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualGatewaysAsyncHelper(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualInterfacesAsyncHelper(const Model::DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateConnectionFromLagAsyncHelper(const Model::DisassociateConnectionFromLagRequest& request, const DisassociateConnectionFromLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDirectConnectGatewayAssociationAsyncHelper(const Model::UpdateDirectConnectGatewayAssociationRequest& request, const UpdateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLagAsyncHelper(const Model::UpdateLagRequest& request, const UpdateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualInterfaceAttributesAsyncHelper(const Model::UpdateVirtualInterfaceAttributesRequest& request, const UpdateVirtualInterfaceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DirectConnect
} // namespace Aws
