/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/directconnect/DirectConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/directconnect/DirectConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DirectConnectClient header */
#include <aws/directconnect/model/AcceptDirectConnectGatewayAssociationProposalResult.h>
#include <aws/directconnect/model/AllocateHostedConnectionResult.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceResult.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceResult.h>
#include <aws/directconnect/model/AllocateTransitVirtualInterfaceResult.h>
#include <aws/directconnect/model/AssociateConnectionWithLagResult.h>
#include <aws/directconnect/model/AssociateHostedConnectionResult.h>
#include <aws/directconnect/model/AssociateMacSecKeyResult.h>
#include <aws/directconnect/model/AssociateVirtualInterfaceResult.h>
#include <aws/directconnect/model/ConfirmConnectionResult.h>
#include <aws/directconnect/model/ConfirmCustomerAgreementResult.h>
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
#include <aws/directconnect/model/DescribeCustomerMetadataResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationProposalsResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationsResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAttachmentsResult.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewaysResult.h>
#include <aws/directconnect/model/DescribeHostedConnectionsResult.h>
#include <aws/directconnect/model/DescribeInterconnectsResult.h>
#include <aws/directconnect/model/DescribeLagsResult.h>
#include <aws/directconnect/model/DescribeLoaResult.h>
#include <aws/directconnect/model/DescribeLocationsResult.h>
#include <aws/directconnect/model/DescribeRouterConfigurationResult.h>
#include <aws/directconnect/model/DescribeTagsResult.h>
#include <aws/directconnect/model/DescribeVirtualGatewaysResult.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesResult.h>
#include <aws/directconnect/model/DisassociateConnectionFromLagResult.h>
#include <aws/directconnect/model/DisassociateMacSecKeyResult.h>
#include <aws/directconnect/model/ListVirtualInterfaceTestHistoryResult.h>
#include <aws/directconnect/model/StartBgpFailoverTestResult.h>
#include <aws/directconnect/model/StopBgpFailoverTestResult.h>
#include <aws/directconnect/model/TagResourceResult.h>
#include <aws/directconnect/model/UntagResourceResult.h>
#include <aws/directconnect/model/UpdateConnectionResult.h>
#include <aws/directconnect/model/UpdateDirectConnectGatewayResult.h>
#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationResult.h>
#include <aws/directconnect/model/UpdateLagResult.h>
#include <aws/directconnect/model/UpdateVirtualInterfaceAttributesResult.h>
/* End of service model headers required in DirectConnectClient header */

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
    using DirectConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DirectConnectEndpointProviderBase = Aws::DirectConnect::Endpoint::DirectConnectEndpointProviderBase;
    using DirectConnectEndpointProvider = Aws::DirectConnect::Endpoint::DirectConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DirectConnectClient header */
      class AcceptDirectConnectGatewayAssociationProposalRequest;
      class AllocateHostedConnectionRequest;
      class AllocatePrivateVirtualInterfaceRequest;
      class AllocatePublicVirtualInterfaceRequest;
      class AllocateTransitVirtualInterfaceRequest;
      class AssociateConnectionWithLagRequest;
      class AssociateHostedConnectionRequest;
      class AssociateMacSecKeyRequest;
      class AssociateVirtualInterfaceRequest;
      class ConfirmConnectionRequest;
      class ConfirmCustomerAgreementRequest;
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
      class DescribeRouterConfigurationRequest;
      class DescribeTagsRequest;
      class DescribeVirtualInterfacesRequest;
      class DisassociateConnectionFromLagRequest;
      class DisassociateMacSecKeyRequest;
      class ListVirtualInterfaceTestHistoryRequest;
      class StartBgpFailoverTestRequest;
      class StopBgpFailoverTestRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConnectionRequest;
      class UpdateDirectConnectGatewayRequest;
      class UpdateDirectConnectGatewayAssociationRequest;
      class UpdateLagRequest;
      class UpdateVirtualInterfaceAttributesRequest;
      /* End of service model forward declarations required in DirectConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptDirectConnectGatewayAssociationProposalResult, DirectConnectError> AcceptDirectConnectGatewayAssociationProposalOutcome;
      typedef Aws::Utils::Outcome<AllocateHostedConnectionResult, DirectConnectError> AllocateHostedConnectionOutcome;
      typedef Aws::Utils::Outcome<AllocatePrivateVirtualInterfaceResult, DirectConnectError> AllocatePrivateVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<AllocatePublicVirtualInterfaceResult, DirectConnectError> AllocatePublicVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<AllocateTransitVirtualInterfaceResult, DirectConnectError> AllocateTransitVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<AssociateConnectionWithLagResult, DirectConnectError> AssociateConnectionWithLagOutcome;
      typedef Aws::Utils::Outcome<AssociateHostedConnectionResult, DirectConnectError> AssociateHostedConnectionOutcome;
      typedef Aws::Utils::Outcome<AssociateMacSecKeyResult, DirectConnectError> AssociateMacSecKeyOutcome;
      typedef Aws::Utils::Outcome<AssociateVirtualInterfaceResult, DirectConnectError> AssociateVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<ConfirmConnectionResult, DirectConnectError> ConfirmConnectionOutcome;
      typedef Aws::Utils::Outcome<ConfirmCustomerAgreementResult, DirectConnectError> ConfirmCustomerAgreementOutcome;
      typedef Aws::Utils::Outcome<ConfirmPrivateVirtualInterfaceResult, DirectConnectError> ConfirmPrivateVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<ConfirmPublicVirtualInterfaceResult, DirectConnectError> ConfirmPublicVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<ConfirmTransitVirtualInterfaceResult, DirectConnectError> ConfirmTransitVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<CreateBGPPeerResult, DirectConnectError> CreateBGPPeerOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, DirectConnectError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateDirectConnectGatewayResult, DirectConnectError> CreateDirectConnectGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateDirectConnectGatewayAssociationResult, DirectConnectError> CreateDirectConnectGatewayAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateDirectConnectGatewayAssociationProposalResult, DirectConnectError> CreateDirectConnectGatewayAssociationProposalOutcome;
      typedef Aws::Utils::Outcome<CreateInterconnectResult, DirectConnectError> CreateInterconnectOutcome;
      typedef Aws::Utils::Outcome<CreateLagResult, DirectConnectError> CreateLagOutcome;
      typedef Aws::Utils::Outcome<CreatePrivateVirtualInterfaceResult, DirectConnectError> CreatePrivateVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<CreatePublicVirtualInterfaceResult, DirectConnectError> CreatePublicVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<CreateTransitVirtualInterfaceResult, DirectConnectError> CreateTransitVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<DeleteBGPPeerResult, DirectConnectError> DeleteBGPPeerOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, DirectConnectError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteDirectConnectGatewayResult, DirectConnectError> DeleteDirectConnectGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteDirectConnectGatewayAssociationResult, DirectConnectError> DeleteDirectConnectGatewayAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteDirectConnectGatewayAssociationProposalResult, DirectConnectError> DeleteDirectConnectGatewayAssociationProposalOutcome;
      typedef Aws::Utils::Outcome<DeleteInterconnectResult, DirectConnectError> DeleteInterconnectOutcome;
      typedef Aws::Utils::Outcome<DeleteLagResult, DirectConnectError> DeleteLagOutcome;
      typedef Aws::Utils::Outcome<DeleteVirtualInterfaceResult, DirectConnectError> DeleteVirtualInterfaceOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectionsResult, DirectConnectError> DescribeConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomerMetadataResult, DirectConnectError> DescribeCustomerMetadataOutcome;
      typedef Aws::Utils::Outcome<DescribeDirectConnectGatewayAssociationProposalsResult, DirectConnectError> DescribeDirectConnectGatewayAssociationProposalsOutcome;
      typedef Aws::Utils::Outcome<DescribeDirectConnectGatewayAssociationsResult, DirectConnectError> DescribeDirectConnectGatewayAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeDirectConnectGatewayAttachmentsResult, DirectConnectError> DescribeDirectConnectGatewayAttachmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeDirectConnectGatewaysResult, DirectConnectError> DescribeDirectConnectGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeHostedConnectionsResult, DirectConnectError> DescribeHostedConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeInterconnectsResult, DirectConnectError> DescribeInterconnectsOutcome;
      typedef Aws::Utils::Outcome<DescribeLagsResult, DirectConnectError> DescribeLagsOutcome;
      typedef Aws::Utils::Outcome<DescribeLoaResult, DirectConnectError> DescribeLoaOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationsResult, DirectConnectError> DescribeLocationsOutcome;
      typedef Aws::Utils::Outcome<DescribeRouterConfigurationResult, DirectConnectError> DescribeRouterConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResult, DirectConnectError> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeVirtualGatewaysResult, DirectConnectError> DescribeVirtualGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeVirtualInterfacesResult, DirectConnectError> DescribeVirtualInterfacesOutcome;
      typedef Aws::Utils::Outcome<DisassociateConnectionFromLagResult, DirectConnectError> DisassociateConnectionFromLagOutcome;
      typedef Aws::Utils::Outcome<DisassociateMacSecKeyResult, DirectConnectError> DisassociateMacSecKeyOutcome;
      typedef Aws::Utils::Outcome<ListVirtualInterfaceTestHistoryResult, DirectConnectError> ListVirtualInterfaceTestHistoryOutcome;
      typedef Aws::Utils::Outcome<StartBgpFailoverTestResult, DirectConnectError> StartBgpFailoverTestOutcome;
      typedef Aws::Utils::Outcome<StopBgpFailoverTestResult, DirectConnectError> StopBgpFailoverTestOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DirectConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DirectConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionResult, DirectConnectError> UpdateConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateDirectConnectGatewayResult, DirectConnectError> UpdateDirectConnectGatewayOutcome;
      typedef Aws::Utils::Outcome<UpdateDirectConnectGatewayAssociationResult, DirectConnectError> UpdateDirectConnectGatewayAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateLagResult, DirectConnectError> UpdateLagOutcome;
      typedef Aws::Utils::Outcome<UpdateVirtualInterfaceAttributesResult, DirectConnectError> UpdateVirtualInterfaceAttributesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptDirectConnectGatewayAssociationProposalOutcome> AcceptDirectConnectGatewayAssociationProposalOutcomeCallable;
      typedef std::future<AllocateHostedConnectionOutcome> AllocateHostedConnectionOutcomeCallable;
      typedef std::future<AllocatePrivateVirtualInterfaceOutcome> AllocatePrivateVirtualInterfaceOutcomeCallable;
      typedef std::future<AllocatePublicVirtualInterfaceOutcome> AllocatePublicVirtualInterfaceOutcomeCallable;
      typedef std::future<AllocateTransitVirtualInterfaceOutcome> AllocateTransitVirtualInterfaceOutcomeCallable;
      typedef std::future<AssociateConnectionWithLagOutcome> AssociateConnectionWithLagOutcomeCallable;
      typedef std::future<AssociateHostedConnectionOutcome> AssociateHostedConnectionOutcomeCallable;
      typedef std::future<AssociateMacSecKeyOutcome> AssociateMacSecKeyOutcomeCallable;
      typedef std::future<AssociateVirtualInterfaceOutcome> AssociateVirtualInterfaceOutcomeCallable;
      typedef std::future<ConfirmConnectionOutcome> ConfirmConnectionOutcomeCallable;
      typedef std::future<ConfirmCustomerAgreementOutcome> ConfirmCustomerAgreementOutcomeCallable;
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
      typedef std::future<DescribeCustomerMetadataOutcome> DescribeCustomerMetadataOutcomeCallable;
      typedef std::future<DescribeDirectConnectGatewayAssociationProposalsOutcome> DescribeDirectConnectGatewayAssociationProposalsOutcomeCallable;
      typedef std::future<DescribeDirectConnectGatewayAssociationsOutcome> DescribeDirectConnectGatewayAssociationsOutcomeCallable;
      typedef std::future<DescribeDirectConnectGatewayAttachmentsOutcome> DescribeDirectConnectGatewayAttachmentsOutcomeCallable;
      typedef std::future<DescribeDirectConnectGatewaysOutcome> DescribeDirectConnectGatewaysOutcomeCallable;
      typedef std::future<DescribeHostedConnectionsOutcome> DescribeHostedConnectionsOutcomeCallable;
      typedef std::future<DescribeInterconnectsOutcome> DescribeInterconnectsOutcomeCallable;
      typedef std::future<DescribeLagsOutcome> DescribeLagsOutcomeCallable;
      typedef std::future<DescribeLoaOutcome> DescribeLoaOutcomeCallable;
      typedef std::future<DescribeLocationsOutcome> DescribeLocationsOutcomeCallable;
      typedef std::future<DescribeRouterConfigurationOutcome> DescribeRouterConfigurationOutcomeCallable;
      typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
      typedef std::future<DescribeVirtualGatewaysOutcome> DescribeVirtualGatewaysOutcomeCallable;
      typedef std::future<DescribeVirtualInterfacesOutcome> DescribeVirtualInterfacesOutcomeCallable;
      typedef std::future<DisassociateConnectionFromLagOutcome> DisassociateConnectionFromLagOutcomeCallable;
      typedef std::future<DisassociateMacSecKeyOutcome> DisassociateMacSecKeyOutcomeCallable;
      typedef std::future<ListVirtualInterfaceTestHistoryOutcome> ListVirtualInterfaceTestHistoryOutcomeCallable;
      typedef std::future<StartBgpFailoverTestOutcome> StartBgpFailoverTestOutcomeCallable;
      typedef std::future<StopBgpFailoverTestOutcome> StopBgpFailoverTestOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
      typedef std::future<UpdateDirectConnectGatewayOutcome> UpdateDirectConnectGatewayOutcomeCallable;
      typedef std::future<UpdateDirectConnectGatewayAssociationOutcome> UpdateDirectConnectGatewayAssociationOutcomeCallable;
      typedef std::future<UpdateLagOutcome> UpdateLagOutcomeCallable;
      typedef std::future<UpdateVirtualInterfaceAttributesOutcome> UpdateVirtualInterfaceAttributesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DirectConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DirectConnectClient*, const Model::AcceptDirectConnectGatewayAssociationProposalRequest&, const Model::AcceptDirectConnectGatewayAssociationProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptDirectConnectGatewayAssociationProposalResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocateHostedConnectionRequest&, const Model::AllocateHostedConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateHostedConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePrivateVirtualInterfaceRequest&, const Model::AllocatePrivateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePrivateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocatePublicVirtualInterfaceRequest&, const Model::AllocatePublicVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocatePublicVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AllocateTransitVirtualInterfaceRequest&, const Model::AllocateTransitVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateTransitVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateConnectionWithLagRequest&, const Model::AssociateConnectionWithLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConnectionWithLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateHostedConnectionRequest&, const Model::AssociateHostedConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateHostedConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateMacSecKeyRequest&, const Model::AssociateMacSecKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMacSecKeyResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::AssociateVirtualInterfaceRequest&, const Model::AssociateVirtualInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVirtualInterfaceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmConnectionRequest&, const Model::ConfirmConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ConfirmCustomerAgreementRequest&, const Model::ConfirmCustomerAgreementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmCustomerAgreementResponseReceivedHandler;
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
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeCustomerMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomerMetadataResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewayAssociationProposalsRequest&, const Model::DescribeDirectConnectGatewayAssociationProposalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewayAssociationProposalsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewayAssociationsRequest&, const Model::DescribeDirectConnectGatewayAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewayAssociationsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewayAttachmentsRequest&, const Model::DescribeDirectConnectGatewayAttachmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewayAttachmentsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeDirectConnectGatewaysRequest&, const Model::DescribeDirectConnectGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectConnectGatewaysResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeHostedConnectionsRequest&, const Model::DescribeHostedConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostedConnectionsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeInterconnectsRequest&, const Model::DescribeInterconnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInterconnectsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLagsRequest&, const Model::DescribeLagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLagsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLoaRequest&, const Model::DescribeLoaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoaResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeRouterConfigurationRequest&, const Model::DescribeRouterConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRouterConfigurationResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualGatewaysResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DescribeVirtualInterfacesRequest&, const Model::DescribeVirtualInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualInterfacesResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DisassociateConnectionFromLagRequest&, const Model::DisassociateConnectionFromLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectionFromLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::DisassociateMacSecKeyRequest&, const Model::DisassociateMacSecKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMacSecKeyResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::ListVirtualInterfaceTestHistoryRequest&, const Model::ListVirtualInterfaceTestHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualInterfaceTestHistoryResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::StartBgpFailoverTestRequest&, const Model::StartBgpFailoverTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBgpFailoverTestResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::StopBgpFailoverTestRequest&, const Model::StopBgpFailoverTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBgpFailoverTestResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateDirectConnectGatewayRequest&, const Model::UpdateDirectConnectGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDirectConnectGatewayResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateDirectConnectGatewayAssociationRequest&, const Model::UpdateDirectConnectGatewayAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDirectConnectGatewayAssociationResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateLagRequest&, const Model::UpdateLagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLagResponseReceivedHandler;
    typedef std::function<void(const DirectConnectClient*, const Model::UpdateVirtualInterfaceAttributesRequest&, const Model::UpdateVirtualInterfaceAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualInterfaceAttributesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DirectConnect
} // namespace Aws
