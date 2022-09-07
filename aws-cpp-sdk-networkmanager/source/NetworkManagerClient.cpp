/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/networkmanager/NetworkManagerClient.h>
#include <aws/networkmanager/NetworkManagerEndpoint.h>
#include <aws/networkmanager/NetworkManagerErrorMarshaller.h>
#include <aws/networkmanager/model/AcceptAttachmentRequest.h>
#include <aws/networkmanager/model/AssociateConnectPeerRequest.h>
#include <aws/networkmanager/model/AssociateCustomerGatewayRequest.h>
#include <aws/networkmanager/model/AssociateLinkRequest.h>
#include <aws/networkmanager/model/AssociateTransitGatewayConnectPeerRequest.h>
#include <aws/networkmanager/model/CreateConnectAttachmentRequest.h>
#include <aws/networkmanager/model/CreateConnectPeerRequest.h>
#include <aws/networkmanager/model/CreateConnectionRequest.h>
#include <aws/networkmanager/model/CreateCoreNetworkRequest.h>
#include <aws/networkmanager/model/CreateDeviceRequest.h>
#include <aws/networkmanager/model/CreateGlobalNetworkRequest.h>
#include <aws/networkmanager/model/CreateLinkRequest.h>
#include <aws/networkmanager/model/CreateSiteRequest.h>
#include <aws/networkmanager/model/CreateSiteToSiteVpnAttachmentRequest.h>
#include <aws/networkmanager/model/CreateTransitGatewayPeeringRequest.h>
#include <aws/networkmanager/model/CreateTransitGatewayRouteTableAttachmentRequest.h>
#include <aws/networkmanager/model/CreateVpcAttachmentRequest.h>
#include <aws/networkmanager/model/DeleteAttachmentRequest.h>
#include <aws/networkmanager/model/DeleteConnectPeerRequest.h>
#include <aws/networkmanager/model/DeleteConnectionRequest.h>
#include <aws/networkmanager/model/DeleteCoreNetworkRequest.h>
#include <aws/networkmanager/model/DeleteCoreNetworkPolicyVersionRequest.h>
#include <aws/networkmanager/model/DeleteDeviceRequest.h>
#include <aws/networkmanager/model/DeleteGlobalNetworkRequest.h>
#include <aws/networkmanager/model/DeleteLinkRequest.h>
#include <aws/networkmanager/model/DeletePeeringRequest.h>
#include <aws/networkmanager/model/DeleteResourcePolicyRequest.h>
#include <aws/networkmanager/model/DeleteSiteRequest.h>
#include <aws/networkmanager/model/DeregisterTransitGatewayRequest.h>
#include <aws/networkmanager/model/DescribeGlobalNetworksRequest.h>
#include <aws/networkmanager/model/DisassociateConnectPeerRequest.h>
#include <aws/networkmanager/model/DisassociateCustomerGatewayRequest.h>
#include <aws/networkmanager/model/DisassociateLinkRequest.h>
#include <aws/networkmanager/model/DisassociateTransitGatewayConnectPeerRequest.h>
#include <aws/networkmanager/model/ExecuteCoreNetworkChangeSetRequest.h>
#include <aws/networkmanager/model/GetConnectAttachmentRequest.h>
#include <aws/networkmanager/model/GetConnectPeerRequest.h>
#include <aws/networkmanager/model/GetConnectPeerAssociationsRequest.h>
#include <aws/networkmanager/model/GetConnectionsRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeEventsRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeSetRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkPolicyRequest.h>
#include <aws/networkmanager/model/GetCustomerGatewayAssociationsRequest.h>
#include <aws/networkmanager/model/GetDevicesRequest.h>
#include <aws/networkmanager/model/GetLinkAssociationsRequest.h>
#include <aws/networkmanager/model/GetLinksRequest.h>
#include <aws/networkmanager/model/GetNetworkResourceCountsRequest.h>
#include <aws/networkmanager/model/GetNetworkResourceRelationshipsRequest.h>
#include <aws/networkmanager/model/GetNetworkResourcesRequest.h>
#include <aws/networkmanager/model/GetNetworkRoutesRequest.h>
#include <aws/networkmanager/model/GetNetworkTelemetryRequest.h>
#include <aws/networkmanager/model/GetResourcePolicyRequest.h>
#include <aws/networkmanager/model/GetRouteAnalysisRequest.h>
#include <aws/networkmanager/model/GetSiteToSiteVpnAttachmentRequest.h>
#include <aws/networkmanager/model/GetSitesRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayConnectPeerAssociationsRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayPeeringRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayRegistrationsRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayRouteTableAttachmentRequest.h>
#include <aws/networkmanager/model/GetVpcAttachmentRequest.h>
#include <aws/networkmanager/model/ListAttachmentsRequest.h>
#include <aws/networkmanager/model/ListConnectPeersRequest.h>
#include <aws/networkmanager/model/ListCoreNetworkPolicyVersionsRequest.h>
#include <aws/networkmanager/model/ListCoreNetworksRequest.h>
#include <aws/networkmanager/model/ListOrganizationServiceAccessStatusRequest.h>
#include <aws/networkmanager/model/ListPeeringsRequest.h>
#include <aws/networkmanager/model/ListTagsForResourceRequest.h>
#include <aws/networkmanager/model/PutCoreNetworkPolicyRequest.h>
#include <aws/networkmanager/model/PutResourcePolicyRequest.h>
#include <aws/networkmanager/model/RegisterTransitGatewayRequest.h>
#include <aws/networkmanager/model/RejectAttachmentRequest.h>
#include <aws/networkmanager/model/RestoreCoreNetworkPolicyVersionRequest.h>
#include <aws/networkmanager/model/StartOrganizationServiceAccessUpdateRequest.h>
#include <aws/networkmanager/model/StartRouteAnalysisRequest.h>
#include <aws/networkmanager/model/TagResourceRequest.h>
#include <aws/networkmanager/model/UntagResourceRequest.h>
#include <aws/networkmanager/model/UpdateConnectionRequest.h>
#include <aws/networkmanager/model/UpdateCoreNetworkRequest.h>
#include <aws/networkmanager/model/UpdateDeviceRequest.h>
#include <aws/networkmanager/model/UpdateGlobalNetworkRequest.h>
#include <aws/networkmanager/model/UpdateLinkRequest.h>
#include <aws/networkmanager/model/UpdateNetworkResourceMetadataRequest.h>
#include <aws/networkmanager/model/UpdateSiteRequest.h>
#include <aws/networkmanager/model/UpdateVpcAttachmentRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NetworkManager;
using namespace Aws::NetworkManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "networkmanager";
static const char* ALLOCATION_TAG = "NetworkManagerClient";

NetworkManagerClient::NetworkManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkManagerClient::NetworkManagerClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkManagerClient::NetworkManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkManagerClient::~NetworkManagerClient()
{
}

void NetworkManagerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("NetworkManager");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + NetworkManagerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void NetworkManagerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AcceptAttachmentOutcome NetworkManagerClient::AcceptAttachment(const AcceptAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptAttachment", "Required field: AttachmentId, is not set");
    return AcceptAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  uri.AddPathSegments("/accept");
  return AcceptAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptAttachmentOutcomeCallable NetworkManagerClient::AcceptAttachmentCallable(const AcceptAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientAcceptAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const AcceptAttachmentRequest& request, const AcceptAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptAttachment(request), context);
}

void NetworkManagerClient::AcceptAttachmentAsync(const AcceptAttachmentRequest& request, const AcceptAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientAcceptAttachmentAsyncHelper( this, request, handler, context ); } );
}

AssociateConnectPeerOutcome NetworkManagerClient::AssociateConnectPeer(const AssociateConnectPeerRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateConnectPeer", "Required field: GlobalNetworkId, is not set");
    return AssociateConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/connect-peer-associations");
  return AssociateConnectPeerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateConnectPeerOutcomeCallable NetworkManagerClient::AssociateConnectPeerCallable(const AssociateConnectPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateConnectPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateConnectPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientAssociateConnectPeerAsyncHelper(NetworkManagerClient const * const clientThis, const AssociateConnectPeerRequest& request, const AssociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateConnectPeer(request), context);
}

void NetworkManagerClient::AssociateConnectPeerAsync(const AssociateConnectPeerRequest& request, const AssociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientAssociateConnectPeerAsyncHelper( this, request, handler, context ); } );
}

AssociateCustomerGatewayOutcome NetworkManagerClient::AssociateCustomerGateway(const AssociateCustomerGatewayRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateCustomerGateway", "Required field: GlobalNetworkId, is not set");
    return AssociateCustomerGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/customer-gateway-associations");
  return AssociateCustomerGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateCustomerGatewayOutcomeCallable NetworkManagerClient::AssociateCustomerGatewayCallable(const AssociateCustomerGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateCustomerGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateCustomerGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientAssociateCustomerGatewayAsyncHelper(NetworkManagerClient const * const clientThis, const AssociateCustomerGatewayRequest& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateCustomerGateway(request), context);
}

void NetworkManagerClient::AssociateCustomerGatewayAsync(const AssociateCustomerGatewayRequest& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientAssociateCustomerGatewayAsyncHelper( this, request, handler, context ); } );
}

AssociateLinkOutcome NetworkManagerClient::AssociateLink(const AssociateLinkRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLink", "Required field: GlobalNetworkId, is not set");
    return AssociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/link-associations");
  return AssociateLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateLinkOutcomeCallable NetworkManagerClient::AssociateLinkCallable(const AssociateLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientAssociateLinkAsyncHelper(NetworkManagerClient const * const clientThis, const AssociateLinkRequest& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateLink(request), context);
}

void NetworkManagerClient::AssociateLinkAsync(const AssociateLinkRequest& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientAssociateLinkAsyncHelper( this, request, handler, context ); } );
}

AssociateTransitGatewayConnectPeerOutcome NetworkManagerClient::AssociateTransitGatewayConnectPeer(const AssociateTransitGatewayConnectPeerRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTransitGatewayConnectPeer", "Required field: GlobalNetworkId, is not set");
    return AssociateTransitGatewayConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/transit-gateway-connect-peer-associations");
  return AssociateTransitGatewayConnectPeerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTransitGatewayConnectPeerOutcomeCallable NetworkManagerClient::AssociateTransitGatewayConnectPeerCallable(const AssociateTransitGatewayConnectPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTransitGatewayConnectPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTransitGatewayConnectPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientAssociateTransitGatewayConnectPeerAsyncHelper(NetworkManagerClient const * const clientThis, const AssociateTransitGatewayConnectPeerRequest& request, const AssociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateTransitGatewayConnectPeer(request), context);
}

void NetworkManagerClient::AssociateTransitGatewayConnectPeerAsync(const AssociateTransitGatewayConnectPeerRequest& request, const AssociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientAssociateTransitGatewayConnectPeerAsyncHelper( this, request, handler, context ); } );
}

CreateConnectAttachmentOutcome NetworkManagerClient::CreateConnectAttachment(const CreateConnectAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-attachments");
  return CreateConnectAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectAttachmentOutcomeCallable NetworkManagerClient::CreateConnectAttachmentCallable(const CreateConnectAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateConnectAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const CreateConnectAttachmentRequest& request, const CreateConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnectAttachment(request), context);
}

void NetworkManagerClient::CreateConnectAttachmentAsync(const CreateConnectAttachmentRequest& request, const CreateConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateConnectAttachmentAsyncHelper( this, request, handler, context ); } );
}

CreateConnectPeerOutcome NetworkManagerClient::CreateConnectPeer(const CreateConnectPeerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-peers");
  return CreateConnectPeerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectPeerOutcomeCallable NetworkManagerClient::CreateConnectPeerCallable(const CreateConnectPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateConnectPeerAsyncHelper(NetworkManagerClient const * const clientThis, const CreateConnectPeerRequest& request, const CreateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnectPeer(request), context);
}

void NetworkManagerClient::CreateConnectPeerAsync(const CreateConnectPeerRequest& request, const CreateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateConnectPeerAsyncHelper( this, request, handler, context ); } );
}

CreateConnectionOutcome NetworkManagerClient::CreateConnection(const CreateConnectionRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConnection", "Required field: GlobalNetworkId, is not set");
    return CreateConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/connections");
  return CreateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionOutcomeCallable NetworkManagerClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateConnectionAsyncHelper(NetworkManagerClient const * const clientThis, const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnection(request), context);
}

void NetworkManagerClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateConnectionAsyncHelper( this, request, handler, context ); } );
}

CreateCoreNetworkOutcome NetworkManagerClient::CreateCoreNetwork(const CreateCoreNetworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks");
  return CreateCoreNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCoreNetworkOutcomeCallable NetworkManagerClient::CreateCoreNetworkCallable(const CreateCoreNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCoreNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCoreNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateCoreNetworkAsyncHelper(NetworkManagerClient const * const clientThis, const CreateCoreNetworkRequest& request, const CreateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCoreNetwork(request), context);
}

void NetworkManagerClient::CreateCoreNetworkAsync(const CreateCoreNetworkRequest& request, const CreateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateCoreNetworkAsyncHelper( this, request, handler, context ); } );
}

CreateDeviceOutcome NetworkManagerClient::CreateDevice(const CreateDeviceRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDevice", "Required field: GlobalNetworkId, is not set");
    return CreateDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/devices");
  return CreateDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceOutcomeCallable NetworkManagerClient::CreateDeviceCallable(const CreateDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateDeviceAsyncHelper(NetworkManagerClient const * const clientThis, const CreateDeviceRequest& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDevice(request), context);
}

void NetworkManagerClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateDeviceAsyncHelper( this, request, handler, context ); } );
}

CreateGlobalNetworkOutcome NetworkManagerClient::CreateGlobalNetwork(const CreateGlobalNetworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks");
  return CreateGlobalNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGlobalNetworkOutcomeCallable NetworkManagerClient::CreateGlobalNetworkCallable(const CreateGlobalNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateGlobalNetworkAsyncHelper(NetworkManagerClient const * const clientThis, const CreateGlobalNetworkRequest& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGlobalNetwork(request), context);
}

void NetworkManagerClient::CreateGlobalNetworkAsync(const CreateGlobalNetworkRequest& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateGlobalNetworkAsyncHelper( this, request, handler, context ); } );
}

CreateLinkOutcome NetworkManagerClient::CreateLink(const CreateLinkRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLink", "Required field: GlobalNetworkId, is not set");
    return CreateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/links");
  return CreateLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLinkOutcomeCallable NetworkManagerClient::CreateLinkCallable(const CreateLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateLinkAsyncHelper(NetworkManagerClient const * const clientThis, const CreateLinkRequest& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLink(request), context);
}

void NetworkManagerClient::CreateLinkAsync(const CreateLinkRequest& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateLinkAsyncHelper( this, request, handler, context ); } );
}

CreateSiteOutcome NetworkManagerClient::CreateSite(const CreateSiteRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSite", "Required field: GlobalNetworkId, is not set");
    return CreateSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/sites");
  return CreateSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSiteOutcomeCallable NetworkManagerClient::CreateSiteCallable(const CreateSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateSiteAsyncHelper(NetworkManagerClient const * const clientThis, const CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSite(request), context);
}

void NetworkManagerClient::CreateSiteAsync(const CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateSiteAsyncHelper( this, request, handler, context ); } );
}

CreateSiteToSiteVpnAttachmentOutcome NetworkManagerClient::CreateSiteToSiteVpnAttachment(const CreateSiteToSiteVpnAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/site-to-site-vpn-attachments");
  return CreateSiteToSiteVpnAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSiteToSiteVpnAttachmentOutcomeCallable NetworkManagerClient::CreateSiteToSiteVpnAttachmentCallable(const CreateSiteToSiteVpnAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSiteToSiteVpnAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSiteToSiteVpnAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateSiteToSiteVpnAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const CreateSiteToSiteVpnAttachmentRequest& request, const CreateSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSiteToSiteVpnAttachment(request), context);
}

void NetworkManagerClient::CreateSiteToSiteVpnAttachmentAsync(const CreateSiteToSiteVpnAttachmentRequest& request, const CreateSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateSiteToSiteVpnAttachmentAsyncHelper( this, request, handler, context ); } );
}

CreateTransitGatewayPeeringOutcome NetworkManagerClient::CreateTransitGatewayPeering(const CreateTransitGatewayPeeringRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/transit-gateway-peerings");
  return CreateTransitGatewayPeeringOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTransitGatewayPeeringOutcomeCallable NetworkManagerClient::CreateTransitGatewayPeeringCallable(const CreateTransitGatewayPeeringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayPeeringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransitGatewayPeering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateTransitGatewayPeeringAsyncHelper(NetworkManagerClient const * const clientThis, const CreateTransitGatewayPeeringRequest& request, const CreateTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTransitGatewayPeering(request), context);
}

void NetworkManagerClient::CreateTransitGatewayPeeringAsync(const CreateTransitGatewayPeeringRequest& request, const CreateTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateTransitGatewayPeeringAsyncHelper( this, request, handler, context ); } );
}

CreateTransitGatewayRouteTableAttachmentOutcome NetworkManagerClient::CreateTransitGatewayRouteTableAttachment(const CreateTransitGatewayRouteTableAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/transit-gateway-route-table-attachments");
  return CreateTransitGatewayRouteTableAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTransitGatewayRouteTableAttachmentOutcomeCallable NetworkManagerClient::CreateTransitGatewayRouteTableAttachmentCallable(const CreateTransitGatewayRouteTableAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayRouteTableAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransitGatewayRouteTableAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateTransitGatewayRouteTableAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const CreateTransitGatewayRouteTableAttachmentRequest& request, const CreateTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTransitGatewayRouteTableAttachment(request), context);
}

void NetworkManagerClient::CreateTransitGatewayRouteTableAttachmentAsync(const CreateTransitGatewayRouteTableAttachmentRequest& request, const CreateTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateTransitGatewayRouteTableAttachmentAsyncHelper( this, request, handler, context ); } );
}

CreateVpcAttachmentOutcome NetworkManagerClient::CreateVpcAttachment(const CreateVpcAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpc-attachments");
  return CreateVpcAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcAttachmentOutcomeCallable NetworkManagerClient::CreateVpcAttachmentCallable(const CreateVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientCreateVpcAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const CreateVpcAttachmentRequest& request, const CreateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVpcAttachment(request), context);
}

void NetworkManagerClient::CreateVpcAttachmentAsync(const CreateVpcAttachmentRequest& request, const CreateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientCreateVpcAttachmentAsyncHelper( this, request, handler, context ); } );
}

DeleteAttachmentOutcome NetworkManagerClient::DeleteAttachment(const DeleteAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttachment", "Required field: AttachmentId, is not set");
    return DeleteAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  return DeleteAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAttachmentOutcomeCallable NetworkManagerClient::DeleteAttachmentCallable(const DeleteAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteAttachmentRequest& request, const DeleteAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAttachment(request), context);
}

void NetworkManagerClient::DeleteAttachmentAsync(const DeleteAttachmentRequest& request, const DeleteAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteAttachmentAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectPeerOutcome NetworkManagerClient::DeleteConnectPeer(const DeleteConnectPeerRequest& request) const
{
  if (!request.ConnectPeerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnectPeer", "Required field: ConnectPeerId, is not set");
    return DeleteConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectPeerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-peers/");
  uri.AddPathSegment(request.GetConnectPeerId());
  return DeleteConnectPeerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectPeerOutcomeCallable NetworkManagerClient::DeleteConnectPeerCallable(const DeleteConnectPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnectPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteConnectPeerAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteConnectPeerRequest& request, const DeleteConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnectPeer(request), context);
}

void NetworkManagerClient::DeleteConnectPeerAsync(const DeleteConnectPeerRequest& request, const DeleteConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteConnectPeerAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectionOutcome NetworkManagerClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: GlobalNetworkId, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: ConnectionId, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/connections/");
  uri.AddPathSegment(request.GetConnectionId());
  return DeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable NetworkManagerClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteConnectionAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnection(request), context);
}

void NetworkManagerClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteCoreNetworkOutcome NetworkManagerClient::DeleteCoreNetwork(const DeleteCoreNetworkRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetwork", "Required field: CoreNetworkId, is not set");
    return DeleteCoreNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  return DeleteCoreNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCoreNetworkOutcomeCallable NetworkManagerClient::DeleteCoreNetworkCallable(const DeleteCoreNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCoreNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCoreNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteCoreNetworkAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteCoreNetworkRequest& request, const DeleteCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCoreNetwork(request), context);
}

void NetworkManagerClient::DeleteCoreNetworkAsync(const DeleteCoreNetworkRequest& request, const DeleteCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteCoreNetworkAsyncHelper( this, request, handler, context ); } );
}

DeleteCoreNetworkPolicyVersionOutcome NetworkManagerClient::DeleteCoreNetworkPolicyVersion(const DeleteCoreNetworkPolicyVersionRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetworkPolicyVersion", "Required field: CoreNetworkId, is not set");
    return DeleteCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetworkPolicyVersion", "Required field: PolicyVersionId, is not set");
    return DeleteCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-policy-versions/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  return DeleteCoreNetworkPolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCoreNetworkPolicyVersionOutcomeCallable NetworkManagerClient::DeleteCoreNetworkPolicyVersionCallable(const DeleteCoreNetworkPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCoreNetworkPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCoreNetworkPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteCoreNetworkPolicyVersionAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteCoreNetworkPolicyVersionRequest& request, const DeleteCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCoreNetworkPolicyVersion(request), context);
}

void NetworkManagerClient::DeleteCoreNetworkPolicyVersionAsync(const DeleteCoreNetworkPolicyVersionRequest& request, const DeleteCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteCoreNetworkPolicyVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteDeviceOutcome NetworkManagerClient::DeleteDevice(const DeleteDeviceRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDevice", "Required field: GlobalNetworkId, is not set");
    return DeleteDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDevice", "Required field: DeviceId, is not set");
    return DeleteDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/devices/");
  uri.AddPathSegment(request.GetDeviceId());
  return DeleteDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceOutcomeCallable NetworkManagerClient::DeleteDeviceCallable(const DeleteDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteDeviceAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDevice(request), context);
}

void NetworkManagerClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteDeviceAsyncHelper( this, request, handler, context ); } );
}

DeleteGlobalNetworkOutcome NetworkManagerClient::DeleteGlobalNetwork(const DeleteGlobalNetworkRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGlobalNetwork", "Required field: GlobalNetworkId, is not set");
    return DeleteGlobalNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  return DeleteGlobalNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGlobalNetworkOutcomeCallable NetworkManagerClient::DeleteGlobalNetworkCallable(const DeleteGlobalNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGlobalNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGlobalNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteGlobalNetworkAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteGlobalNetworkRequest& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGlobalNetwork(request), context);
}

void NetworkManagerClient::DeleteGlobalNetworkAsync(const DeleteGlobalNetworkRequest& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteGlobalNetworkAsyncHelper( this, request, handler, context ); } );
}

DeleteLinkOutcome NetworkManagerClient::DeleteLink(const DeleteLinkRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLink", "Required field: GlobalNetworkId, is not set");
    return DeleteLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.LinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLink", "Required field: LinkId, is not set");
    return DeleteLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/links/");
  uri.AddPathSegment(request.GetLinkId());
  return DeleteLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLinkOutcomeCallable NetworkManagerClient::DeleteLinkCallable(const DeleteLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteLinkAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteLinkRequest& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLink(request), context);
}

void NetworkManagerClient::DeleteLinkAsync(const DeleteLinkRequest& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteLinkAsyncHelper( this, request, handler, context ); } );
}

DeletePeeringOutcome NetworkManagerClient::DeletePeering(const DeletePeeringRequest& request) const
{
  if (!request.PeeringIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePeering", "Required field: PeeringId, is not set");
    return DeletePeeringOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PeeringId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/peerings/");
  uri.AddPathSegment(request.GetPeeringId());
  return DeletePeeringOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePeeringOutcomeCallable NetworkManagerClient::DeletePeeringCallable(const DeletePeeringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePeeringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePeering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeletePeeringAsyncHelper(NetworkManagerClient const * const clientThis, const DeletePeeringRequest& request, const DeletePeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePeering(request), context);
}

void NetworkManagerClient::DeletePeeringAsync(const DeletePeeringRequest& request, const DeletePeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeletePeeringAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome NetworkManagerClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resource-policy/");
  uri.AddPathSegment(request.GetResourceArn());
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable NetworkManagerClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteResourcePolicyAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void NetworkManagerClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteSiteOutcome NetworkManagerClient::DeleteSite(const DeleteSiteRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSite", "Required field: GlobalNetworkId, is not set");
    return DeleteSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSite", "Required field: SiteId, is not set");
    return DeleteSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  return DeleteSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSiteOutcomeCallable NetworkManagerClient::DeleteSiteCallable(const DeleteSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeleteSiteAsyncHelper(NetworkManagerClient const * const clientThis, const DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSite(request), context);
}

void NetworkManagerClient::DeleteSiteAsync(const DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeleteSiteAsyncHelper( this, request, handler, context ); } );
}

DeregisterTransitGatewayOutcome NetworkManagerClient::DeregisterTransitGateway(const DeregisterTransitGatewayRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterTransitGateway", "Required field: GlobalNetworkId, is not set");
    return DeregisterTransitGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.TransitGatewayArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterTransitGateway", "Required field: TransitGatewayArn, is not set");
    return DeregisterTransitGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransitGatewayArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/transit-gateway-registrations/");
  uri.AddPathSegment(request.GetTransitGatewayArn());
  return DeregisterTransitGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTransitGatewayOutcomeCallable NetworkManagerClient::DeregisterTransitGatewayCallable(const DeregisterTransitGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTransitGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTransitGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDeregisterTransitGatewayAsyncHelper(NetworkManagerClient const * const clientThis, const DeregisterTransitGatewayRequest& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterTransitGateway(request), context);
}

void NetworkManagerClient::DeregisterTransitGatewayAsync(const DeregisterTransitGatewayRequest& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDeregisterTransitGatewayAsyncHelper( this, request, handler, context ); } );
}

DescribeGlobalNetworksOutcome NetworkManagerClient::DescribeGlobalNetworks(const DescribeGlobalNetworksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks");
  return DescribeGlobalNetworksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGlobalNetworksOutcomeCallable NetworkManagerClient::DescribeGlobalNetworksCallable(const DescribeGlobalNetworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalNetworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalNetworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDescribeGlobalNetworksAsyncHelper(NetworkManagerClient const * const clientThis, const DescribeGlobalNetworksRequest& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGlobalNetworks(request), context);
}

void NetworkManagerClient::DescribeGlobalNetworksAsync(const DescribeGlobalNetworksRequest& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDescribeGlobalNetworksAsyncHelper( this, request, handler, context ); } );
}

DisassociateConnectPeerOutcome NetworkManagerClient::DisassociateConnectPeer(const DisassociateConnectPeerRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateConnectPeer", "Required field: GlobalNetworkId, is not set");
    return DisassociateConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ConnectPeerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateConnectPeer", "Required field: ConnectPeerId, is not set");
    return DisassociateConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectPeerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/connect-peer-associations/");
  uri.AddPathSegment(request.GetConnectPeerId());
  return DisassociateConnectPeerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateConnectPeerOutcomeCallable NetworkManagerClient::DisassociateConnectPeerCallable(const DisassociateConnectPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateConnectPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateConnectPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDisassociateConnectPeerAsyncHelper(NetworkManagerClient const * const clientThis, const DisassociateConnectPeerRequest& request, const DisassociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateConnectPeer(request), context);
}

void NetworkManagerClient::DisassociateConnectPeerAsync(const DisassociateConnectPeerRequest& request, const DisassociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDisassociateConnectPeerAsyncHelper( this, request, handler, context ); } );
}

DisassociateCustomerGatewayOutcome NetworkManagerClient::DisassociateCustomerGateway(const DisassociateCustomerGatewayRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateCustomerGateway", "Required field: GlobalNetworkId, is not set");
    return DisassociateCustomerGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.CustomerGatewayArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateCustomerGateway", "Required field: CustomerGatewayArn, is not set");
    return DisassociateCustomerGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomerGatewayArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/customer-gateway-associations/");
  uri.AddPathSegment(request.GetCustomerGatewayArn());
  return DisassociateCustomerGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateCustomerGatewayOutcomeCallable NetworkManagerClient::DisassociateCustomerGatewayCallable(const DisassociateCustomerGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateCustomerGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateCustomerGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDisassociateCustomerGatewayAsyncHelper(NetworkManagerClient const * const clientThis, const DisassociateCustomerGatewayRequest& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateCustomerGateway(request), context);
}

void NetworkManagerClient::DisassociateCustomerGatewayAsync(const DisassociateCustomerGatewayRequest& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDisassociateCustomerGatewayAsyncHelper( this, request, handler, context ); } );
}

DisassociateLinkOutcome NetworkManagerClient::DisassociateLink(const DisassociateLinkRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLink", "Required field: GlobalNetworkId, is not set");
    return DisassociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLink", "Required field: DeviceId, is not set");
    return DisassociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  if (!request.LinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLink", "Required field: LinkId, is not set");
    return DisassociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/link-associations");
  return DisassociateLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLinkOutcomeCallable NetworkManagerClient::DisassociateLinkCallable(const DisassociateLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDisassociateLinkAsyncHelper(NetworkManagerClient const * const clientThis, const DisassociateLinkRequest& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateLink(request), context);
}

void NetworkManagerClient::DisassociateLinkAsync(const DisassociateLinkRequest& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDisassociateLinkAsyncHelper( this, request, handler, context ); } );
}

DisassociateTransitGatewayConnectPeerOutcome NetworkManagerClient::DisassociateTransitGatewayConnectPeer(const DisassociateTransitGatewayConnectPeerRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTransitGatewayConnectPeer", "Required field: GlobalNetworkId, is not set");
    return DisassociateTransitGatewayConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.TransitGatewayConnectPeerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTransitGatewayConnectPeer", "Required field: TransitGatewayConnectPeerArn, is not set");
    return DisassociateTransitGatewayConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransitGatewayConnectPeerArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/transit-gateway-connect-peer-associations/");
  uri.AddPathSegment(request.GetTransitGatewayConnectPeerArn());
  return DisassociateTransitGatewayConnectPeerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTransitGatewayConnectPeerOutcomeCallable NetworkManagerClient::DisassociateTransitGatewayConnectPeerCallable(const DisassociateTransitGatewayConnectPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTransitGatewayConnectPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTransitGatewayConnectPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientDisassociateTransitGatewayConnectPeerAsyncHelper(NetworkManagerClient const * const clientThis, const DisassociateTransitGatewayConnectPeerRequest& request, const DisassociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateTransitGatewayConnectPeer(request), context);
}

void NetworkManagerClient::DisassociateTransitGatewayConnectPeerAsync(const DisassociateTransitGatewayConnectPeerRequest& request, const DisassociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientDisassociateTransitGatewayConnectPeerAsyncHelper( this, request, handler, context ); } );
}

ExecuteCoreNetworkChangeSetOutcome NetworkManagerClient::ExecuteCoreNetworkChangeSet(const ExecuteCoreNetworkChangeSetRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExecuteCoreNetworkChangeSet", "Required field: CoreNetworkId, is not set");
    return ExecuteCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExecuteCoreNetworkChangeSet", "Required field: PolicyVersionId, is not set");
    return ExecuteCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-change-sets/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  uri.AddPathSegments("/execute");
  return ExecuteCoreNetworkChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteCoreNetworkChangeSetOutcomeCallable NetworkManagerClient::ExecuteCoreNetworkChangeSetCallable(const ExecuteCoreNetworkChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteCoreNetworkChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteCoreNetworkChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientExecuteCoreNetworkChangeSetAsyncHelper(NetworkManagerClient const * const clientThis, const ExecuteCoreNetworkChangeSetRequest& request, const ExecuteCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteCoreNetworkChangeSet(request), context);
}

void NetworkManagerClient::ExecuteCoreNetworkChangeSetAsync(const ExecuteCoreNetworkChangeSetRequest& request, const ExecuteCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientExecuteCoreNetworkChangeSetAsyncHelper( this, request, handler, context ); } );
}

GetConnectAttachmentOutcome NetworkManagerClient::GetConnectAttachment(const GetConnectAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectAttachment", "Required field: AttachmentId, is not set");
    return GetConnectAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  return GetConnectAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectAttachmentOutcomeCallable NetworkManagerClient::GetConnectAttachmentCallable(const GetConnectAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetConnectAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const GetConnectAttachmentRequest& request, const GetConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnectAttachment(request), context);
}

void NetworkManagerClient::GetConnectAttachmentAsync(const GetConnectAttachmentRequest& request, const GetConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetConnectAttachmentAsyncHelper( this, request, handler, context ); } );
}

GetConnectPeerOutcome NetworkManagerClient::GetConnectPeer(const GetConnectPeerRequest& request) const
{
  if (!request.ConnectPeerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectPeer", "Required field: ConnectPeerId, is not set");
    return GetConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectPeerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-peers/");
  uri.AddPathSegment(request.GetConnectPeerId());
  return GetConnectPeerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectPeerOutcomeCallable NetworkManagerClient::GetConnectPeerCallable(const GetConnectPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetConnectPeerAsyncHelper(NetworkManagerClient const * const clientThis, const GetConnectPeerRequest& request, const GetConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnectPeer(request), context);
}

void NetworkManagerClient::GetConnectPeerAsync(const GetConnectPeerRequest& request, const GetConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetConnectPeerAsyncHelper( this, request, handler, context ); } );
}

GetConnectPeerAssociationsOutcome NetworkManagerClient::GetConnectPeerAssociations(const GetConnectPeerAssociationsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectPeerAssociations", "Required field: GlobalNetworkId, is not set");
    return GetConnectPeerAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/connect-peer-associations");
  return GetConnectPeerAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectPeerAssociationsOutcomeCallable NetworkManagerClient::GetConnectPeerAssociationsCallable(const GetConnectPeerAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectPeerAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectPeerAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetConnectPeerAssociationsAsyncHelper(NetworkManagerClient const * const clientThis, const GetConnectPeerAssociationsRequest& request, const GetConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnectPeerAssociations(request), context);
}

void NetworkManagerClient::GetConnectPeerAssociationsAsync(const GetConnectPeerAssociationsRequest& request, const GetConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetConnectPeerAssociationsAsyncHelper( this, request, handler, context ); } );
}

GetConnectionsOutcome NetworkManagerClient::GetConnections(const GetConnectionsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnections", "Required field: GlobalNetworkId, is not set");
    return GetConnectionsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/connections");
  return GetConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionsOutcomeCallable NetworkManagerClient::GetConnectionsCallable(const GetConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetConnectionsAsyncHelper(NetworkManagerClient const * const clientThis, const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnections(request), context);
}

void NetworkManagerClient::GetConnectionsAsync(const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetConnectionsAsyncHelper( this, request, handler, context ); } );
}

GetCoreNetworkOutcome NetworkManagerClient::GetCoreNetwork(const GetCoreNetworkRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreNetwork", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  return GetCoreNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoreNetworkOutcomeCallable NetworkManagerClient::GetCoreNetworkCallable(const GetCoreNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetCoreNetworkAsyncHelper(NetworkManagerClient const * const clientThis, const GetCoreNetworkRequest& request, const GetCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCoreNetwork(request), context);
}

void NetworkManagerClient::GetCoreNetworkAsync(const GetCoreNetworkRequest& request, const GetCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetCoreNetworkAsyncHelper( this, request, handler, context ); } );
}

GetCoreNetworkChangeEventsOutcome NetworkManagerClient::GetCoreNetworkChangeEvents(const GetCoreNetworkChangeEventsRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeEvents", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkChangeEventsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeEvents", "Required field: PolicyVersionId, is not set");
    return GetCoreNetworkChangeEventsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-change-events/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  return GetCoreNetworkChangeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoreNetworkChangeEventsOutcomeCallable NetworkManagerClient::GetCoreNetworkChangeEventsCallable(const GetCoreNetworkChangeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreNetworkChangeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreNetworkChangeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetCoreNetworkChangeEventsAsyncHelper(NetworkManagerClient const * const clientThis, const GetCoreNetworkChangeEventsRequest& request, const GetCoreNetworkChangeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCoreNetworkChangeEvents(request), context);
}

void NetworkManagerClient::GetCoreNetworkChangeEventsAsync(const GetCoreNetworkChangeEventsRequest& request, const GetCoreNetworkChangeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetCoreNetworkChangeEventsAsyncHelper( this, request, handler, context ); } );
}

GetCoreNetworkChangeSetOutcome NetworkManagerClient::GetCoreNetworkChangeSet(const GetCoreNetworkChangeSetRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeSet", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeSet", "Required field: PolicyVersionId, is not set");
    return GetCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-change-sets/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  return GetCoreNetworkChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoreNetworkChangeSetOutcomeCallable NetworkManagerClient::GetCoreNetworkChangeSetCallable(const GetCoreNetworkChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreNetworkChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreNetworkChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetCoreNetworkChangeSetAsyncHelper(NetworkManagerClient const * const clientThis, const GetCoreNetworkChangeSetRequest& request, const GetCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCoreNetworkChangeSet(request), context);
}

void NetworkManagerClient::GetCoreNetworkChangeSetAsync(const GetCoreNetworkChangeSetRequest& request, const GetCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetCoreNetworkChangeSetAsyncHelper( this, request, handler, context ); } );
}

GetCoreNetworkPolicyOutcome NetworkManagerClient::GetCoreNetworkPolicy(const GetCoreNetworkPolicyRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkPolicy", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkPolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-policy");
  return GetCoreNetworkPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoreNetworkPolicyOutcomeCallable NetworkManagerClient::GetCoreNetworkPolicyCallable(const GetCoreNetworkPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreNetworkPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreNetworkPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetCoreNetworkPolicyAsyncHelper(NetworkManagerClient const * const clientThis, const GetCoreNetworkPolicyRequest& request, const GetCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCoreNetworkPolicy(request), context);
}

void NetworkManagerClient::GetCoreNetworkPolicyAsync(const GetCoreNetworkPolicyRequest& request, const GetCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetCoreNetworkPolicyAsyncHelper( this, request, handler, context ); } );
}

GetCustomerGatewayAssociationsOutcome NetworkManagerClient::GetCustomerGatewayAssociations(const GetCustomerGatewayAssociationsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCustomerGatewayAssociations", "Required field: GlobalNetworkId, is not set");
    return GetCustomerGatewayAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/customer-gateway-associations");
  return GetCustomerGatewayAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCustomerGatewayAssociationsOutcomeCallable NetworkManagerClient::GetCustomerGatewayAssociationsCallable(const GetCustomerGatewayAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCustomerGatewayAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCustomerGatewayAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetCustomerGatewayAssociationsAsyncHelper(NetworkManagerClient const * const clientThis, const GetCustomerGatewayAssociationsRequest& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCustomerGatewayAssociations(request), context);
}

void NetworkManagerClient::GetCustomerGatewayAssociationsAsync(const GetCustomerGatewayAssociationsRequest& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetCustomerGatewayAssociationsAsyncHelper( this, request, handler, context ); } );
}

GetDevicesOutcome NetworkManagerClient::GetDevices(const GetDevicesRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevices", "Required field: GlobalNetworkId, is not set");
    return GetDevicesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/devices");
  return GetDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDevicesOutcomeCallable NetworkManagerClient::GetDevicesCallable(const GetDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetDevicesAsyncHelper(NetworkManagerClient const * const clientThis, const GetDevicesRequest& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevices(request), context);
}

void NetworkManagerClient::GetDevicesAsync(const GetDevicesRequest& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetDevicesAsyncHelper( this, request, handler, context ); } );
}

GetLinkAssociationsOutcome NetworkManagerClient::GetLinkAssociations(const GetLinkAssociationsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLinkAssociations", "Required field: GlobalNetworkId, is not set");
    return GetLinkAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/link-associations");
  return GetLinkAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLinkAssociationsOutcomeCallable NetworkManagerClient::GetLinkAssociationsCallable(const GetLinkAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLinkAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLinkAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetLinkAssociationsAsyncHelper(NetworkManagerClient const * const clientThis, const GetLinkAssociationsRequest& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLinkAssociations(request), context);
}

void NetworkManagerClient::GetLinkAssociationsAsync(const GetLinkAssociationsRequest& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetLinkAssociationsAsyncHelper( this, request, handler, context ); } );
}

GetLinksOutcome NetworkManagerClient::GetLinks(const GetLinksRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLinks", "Required field: GlobalNetworkId, is not set");
    return GetLinksOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/links");
  return GetLinksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLinksOutcomeCallable NetworkManagerClient::GetLinksCallable(const GetLinksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLinksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLinks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetLinksAsyncHelper(NetworkManagerClient const * const clientThis, const GetLinksRequest& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLinks(request), context);
}

void NetworkManagerClient::GetLinksAsync(const GetLinksRequest& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetLinksAsyncHelper( this, request, handler, context ); } );
}

GetNetworkResourceCountsOutcome NetworkManagerClient::GetNetworkResourceCounts(const GetNetworkResourceCountsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkResourceCounts", "Required field: GlobalNetworkId, is not set");
    return GetNetworkResourceCountsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/network-resource-count");
  return GetNetworkResourceCountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkResourceCountsOutcomeCallable NetworkManagerClient::GetNetworkResourceCountsCallable(const GetNetworkResourceCountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkResourceCountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkResourceCounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetNetworkResourceCountsAsyncHelper(NetworkManagerClient const * const clientThis, const GetNetworkResourceCountsRequest& request, const GetNetworkResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkResourceCounts(request), context);
}

void NetworkManagerClient::GetNetworkResourceCountsAsync(const GetNetworkResourceCountsRequest& request, const GetNetworkResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetNetworkResourceCountsAsyncHelper( this, request, handler, context ); } );
}

GetNetworkResourceRelationshipsOutcome NetworkManagerClient::GetNetworkResourceRelationships(const GetNetworkResourceRelationshipsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkResourceRelationships", "Required field: GlobalNetworkId, is not set");
    return GetNetworkResourceRelationshipsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/network-resource-relationships");
  return GetNetworkResourceRelationshipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkResourceRelationshipsOutcomeCallable NetworkManagerClient::GetNetworkResourceRelationshipsCallable(const GetNetworkResourceRelationshipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkResourceRelationshipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkResourceRelationships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetNetworkResourceRelationshipsAsyncHelper(NetworkManagerClient const * const clientThis, const GetNetworkResourceRelationshipsRequest& request, const GetNetworkResourceRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkResourceRelationships(request), context);
}

void NetworkManagerClient::GetNetworkResourceRelationshipsAsync(const GetNetworkResourceRelationshipsRequest& request, const GetNetworkResourceRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetNetworkResourceRelationshipsAsyncHelper( this, request, handler, context ); } );
}

GetNetworkResourcesOutcome NetworkManagerClient::GetNetworkResources(const GetNetworkResourcesRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkResources", "Required field: GlobalNetworkId, is not set");
    return GetNetworkResourcesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/network-resources");
  return GetNetworkResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkResourcesOutcomeCallable NetworkManagerClient::GetNetworkResourcesCallable(const GetNetworkResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetNetworkResourcesAsyncHelper(NetworkManagerClient const * const clientThis, const GetNetworkResourcesRequest& request, const GetNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkResources(request), context);
}

void NetworkManagerClient::GetNetworkResourcesAsync(const GetNetworkResourcesRequest& request, const GetNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetNetworkResourcesAsyncHelper( this, request, handler, context ); } );
}

GetNetworkRoutesOutcome NetworkManagerClient::GetNetworkRoutes(const GetNetworkRoutesRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkRoutes", "Required field: GlobalNetworkId, is not set");
    return GetNetworkRoutesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/network-routes");
  return GetNetworkRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkRoutesOutcomeCallable NetworkManagerClient::GetNetworkRoutesCallable(const GetNetworkRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetNetworkRoutesAsyncHelper(NetworkManagerClient const * const clientThis, const GetNetworkRoutesRequest& request, const GetNetworkRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkRoutes(request), context);
}

void NetworkManagerClient::GetNetworkRoutesAsync(const GetNetworkRoutesRequest& request, const GetNetworkRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetNetworkRoutesAsyncHelper( this, request, handler, context ); } );
}

GetNetworkTelemetryOutcome NetworkManagerClient::GetNetworkTelemetry(const GetNetworkTelemetryRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkTelemetry", "Required field: GlobalNetworkId, is not set");
    return GetNetworkTelemetryOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/network-telemetry");
  return GetNetworkTelemetryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkTelemetryOutcomeCallable NetworkManagerClient::GetNetworkTelemetryCallable(const GetNetworkTelemetryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkTelemetryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkTelemetry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetNetworkTelemetryAsyncHelper(NetworkManagerClient const * const clientThis, const GetNetworkTelemetryRequest& request, const GetNetworkTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkTelemetry(request), context);
}

void NetworkManagerClient::GetNetworkTelemetryAsync(const GetNetworkTelemetryRequest& request, const GetNetworkTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetNetworkTelemetryAsyncHelper( this, request, handler, context ); } );
}

GetResourcePolicyOutcome NetworkManagerClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resource-policy/");
  uri.AddPathSegment(request.GetResourceArn());
  return GetResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable NetworkManagerClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetResourcePolicyAsyncHelper(NetworkManagerClient const * const clientThis, const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicy(request), context);
}

void NetworkManagerClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

GetRouteAnalysisOutcome NetworkManagerClient::GetRouteAnalysis(const GetRouteAnalysisRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRouteAnalysis", "Required field: GlobalNetworkId, is not set");
    return GetRouteAnalysisOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.RouteAnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRouteAnalysis", "Required field: RouteAnalysisId, is not set");
    return GetRouteAnalysisOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteAnalysisId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/route-analyses/");
  uri.AddPathSegment(request.GetRouteAnalysisId());
  return GetRouteAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRouteAnalysisOutcomeCallable NetworkManagerClient::GetRouteAnalysisCallable(const GetRouteAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRouteAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRouteAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetRouteAnalysisAsyncHelper(NetworkManagerClient const * const clientThis, const GetRouteAnalysisRequest& request, const GetRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRouteAnalysis(request), context);
}

void NetworkManagerClient::GetRouteAnalysisAsync(const GetRouteAnalysisRequest& request, const GetRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetRouteAnalysisAsyncHelper( this, request, handler, context ); } );
}

GetSiteToSiteVpnAttachmentOutcome NetworkManagerClient::GetSiteToSiteVpnAttachment(const GetSiteToSiteVpnAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSiteToSiteVpnAttachment", "Required field: AttachmentId, is not set");
    return GetSiteToSiteVpnAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/site-to-site-vpn-attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  return GetSiteToSiteVpnAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSiteToSiteVpnAttachmentOutcomeCallable NetworkManagerClient::GetSiteToSiteVpnAttachmentCallable(const GetSiteToSiteVpnAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSiteToSiteVpnAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSiteToSiteVpnAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetSiteToSiteVpnAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const GetSiteToSiteVpnAttachmentRequest& request, const GetSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSiteToSiteVpnAttachment(request), context);
}

void NetworkManagerClient::GetSiteToSiteVpnAttachmentAsync(const GetSiteToSiteVpnAttachmentRequest& request, const GetSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetSiteToSiteVpnAttachmentAsyncHelper( this, request, handler, context ); } );
}

GetSitesOutcome NetworkManagerClient::GetSites(const GetSitesRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSites", "Required field: GlobalNetworkId, is not set");
    return GetSitesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/sites");
  return GetSitesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSitesOutcomeCallable NetworkManagerClient::GetSitesCallable(const GetSitesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetSitesAsyncHelper(NetworkManagerClient const * const clientThis, const GetSitesRequest& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSites(request), context);
}

void NetworkManagerClient::GetSitesAsync(const GetSitesRequest& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetSitesAsyncHelper( this, request, handler, context ); } );
}

GetTransitGatewayConnectPeerAssociationsOutcome NetworkManagerClient::GetTransitGatewayConnectPeerAssociations(const GetTransitGatewayConnectPeerAssociationsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayConnectPeerAssociations", "Required field: GlobalNetworkId, is not set");
    return GetTransitGatewayConnectPeerAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/transit-gateway-connect-peer-associations");
  return GetTransitGatewayConnectPeerAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTransitGatewayConnectPeerAssociationsOutcomeCallable NetworkManagerClient::GetTransitGatewayConnectPeerAssociationsCallable(const GetTransitGatewayConnectPeerAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayConnectPeerAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTransitGatewayConnectPeerAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetTransitGatewayConnectPeerAssociationsAsyncHelper(NetworkManagerClient const * const clientThis, const GetTransitGatewayConnectPeerAssociationsRequest& request, const GetTransitGatewayConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTransitGatewayConnectPeerAssociations(request), context);
}

void NetworkManagerClient::GetTransitGatewayConnectPeerAssociationsAsync(const GetTransitGatewayConnectPeerAssociationsRequest& request, const GetTransitGatewayConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetTransitGatewayConnectPeerAssociationsAsyncHelper( this, request, handler, context ); } );
}

GetTransitGatewayPeeringOutcome NetworkManagerClient::GetTransitGatewayPeering(const GetTransitGatewayPeeringRequest& request) const
{
  if (!request.PeeringIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayPeering", "Required field: PeeringId, is not set");
    return GetTransitGatewayPeeringOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PeeringId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/transit-gateway-peerings/");
  uri.AddPathSegment(request.GetPeeringId());
  return GetTransitGatewayPeeringOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTransitGatewayPeeringOutcomeCallable NetworkManagerClient::GetTransitGatewayPeeringCallable(const GetTransitGatewayPeeringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayPeeringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTransitGatewayPeering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetTransitGatewayPeeringAsyncHelper(NetworkManagerClient const * const clientThis, const GetTransitGatewayPeeringRequest& request, const GetTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTransitGatewayPeering(request), context);
}

void NetworkManagerClient::GetTransitGatewayPeeringAsync(const GetTransitGatewayPeeringRequest& request, const GetTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetTransitGatewayPeeringAsyncHelper( this, request, handler, context ); } );
}

GetTransitGatewayRegistrationsOutcome NetworkManagerClient::GetTransitGatewayRegistrations(const GetTransitGatewayRegistrationsRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayRegistrations", "Required field: GlobalNetworkId, is not set");
    return GetTransitGatewayRegistrationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/transit-gateway-registrations");
  return GetTransitGatewayRegistrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTransitGatewayRegistrationsOutcomeCallable NetworkManagerClient::GetTransitGatewayRegistrationsCallable(const GetTransitGatewayRegistrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayRegistrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTransitGatewayRegistrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetTransitGatewayRegistrationsAsyncHelper(NetworkManagerClient const * const clientThis, const GetTransitGatewayRegistrationsRequest& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTransitGatewayRegistrations(request), context);
}

void NetworkManagerClient::GetTransitGatewayRegistrationsAsync(const GetTransitGatewayRegistrationsRequest& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetTransitGatewayRegistrationsAsyncHelper( this, request, handler, context ); } );
}

GetTransitGatewayRouteTableAttachmentOutcome NetworkManagerClient::GetTransitGatewayRouteTableAttachment(const GetTransitGatewayRouteTableAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayRouteTableAttachment", "Required field: AttachmentId, is not set");
    return GetTransitGatewayRouteTableAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/transit-gateway-route-table-attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  return GetTransitGatewayRouteTableAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTransitGatewayRouteTableAttachmentOutcomeCallable NetworkManagerClient::GetTransitGatewayRouteTableAttachmentCallable(const GetTransitGatewayRouteTableAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayRouteTableAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTransitGatewayRouteTableAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetTransitGatewayRouteTableAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const GetTransitGatewayRouteTableAttachmentRequest& request, const GetTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTransitGatewayRouteTableAttachment(request), context);
}

void NetworkManagerClient::GetTransitGatewayRouteTableAttachmentAsync(const GetTransitGatewayRouteTableAttachmentRequest& request, const GetTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetTransitGatewayRouteTableAttachmentAsyncHelper( this, request, handler, context ); } );
}

GetVpcAttachmentOutcome NetworkManagerClient::GetVpcAttachment(const GetVpcAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVpcAttachment", "Required field: AttachmentId, is not set");
    return GetVpcAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpc-attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  return GetVpcAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVpcAttachmentOutcomeCallable NetworkManagerClient::GetVpcAttachmentCallable(const GetVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientGetVpcAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const GetVpcAttachmentRequest& request, const GetVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVpcAttachment(request), context);
}

void NetworkManagerClient::GetVpcAttachmentAsync(const GetVpcAttachmentRequest& request, const GetVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientGetVpcAttachmentAsyncHelper( this, request, handler, context ); } );
}

ListAttachmentsOutcome NetworkManagerClient::ListAttachments(const ListAttachmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attachments");
  return ListAttachmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAttachmentsOutcomeCallable NetworkManagerClient::ListAttachmentsCallable(const ListAttachmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientListAttachmentsAsyncHelper(NetworkManagerClient const * const clientThis, const ListAttachmentsRequest& request, const ListAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAttachments(request), context);
}

void NetworkManagerClient::ListAttachmentsAsync(const ListAttachmentsRequest& request, const ListAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientListAttachmentsAsyncHelper( this, request, handler, context ); } );
}

ListConnectPeersOutcome NetworkManagerClient::ListConnectPeers(const ListConnectPeersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connect-peers");
  return ListConnectPeersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConnectPeersOutcomeCallable NetworkManagerClient::ListConnectPeersCallable(const ListConnectPeersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectPeersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectPeers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientListConnectPeersAsyncHelper(NetworkManagerClient const * const clientThis, const ListConnectPeersRequest& request, const ListConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConnectPeers(request), context);
}

void NetworkManagerClient::ListConnectPeersAsync(const ListConnectPeersRequest& request, const ListConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientListConnectPeersAsyncHelper( this, request, handler, context ); } );
}

ListCoreNetworkPolicyVersionsOutcome NetworkManagerClient::ListCoreNetworkPolicyVersions(const ListCoreNetworkPolicyVersionsRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCoreNetworkPolicyVersions", "Required field: CoreNetworkId, is not set");
    return ListCoreNetworkPolicyVersionsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-policy-versions");
  return ListCoreNetworkPolicyVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCoreNetworkPolicyVersionsOutcomeCallable NetworkManagerClient::ListCoreNetworkPolicyVersionsCallable(const ListCoreNetworkPolicyVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoreNetworkPolicyVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoreNetworkPolicyVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientListCoreNetworkPolicyVersionsAsyncHelper(NetworkManagerClient const * const clientThis, const ListCoreNetworkPolicyVersionsRequest& request, const ListCoreNetworkPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCoreNetworkPolicyVersions(request), context);
}

void NetworkManagerClient::ListCoreNetworkPolicyVersionsAsync(const ListCoreNetworkPolicyVersionsRequest& request, const ListCoreNetworkPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientListCoreNetworkPolicyVersionsAsyncHelper( this, request, handler, context ); } );
}

ListCoreNetworksOutcome NetworkManagerClient::ListCoreNetworks(const ListCoreNetworksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks");
  return ListCoreNetworksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCoreNetworksOutcomeCallable NetworkManagerClient::ListCoreNetworksCallable(const ListCoreNetworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoreNetworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoreNetworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientListCoreNetworksAsyncHelper(NetworkManagerClient const * const clientThis, const ListCoreNetworksRequest& request, const ListCoreNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCoreNetworks(request), context);
}

void NetworkManagerClient::ListCoreNetworksAsync(const ListCoreNetworksRequest& request, const ListCoreNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientListCoreNetworksAsyncHelper( this, request, handler, context ); } );
}

ListOrganizationServiceAccessStatusOutcome NetworkManagerClient::ListOrganizationServiceAccessStatus(const ListOrganizationServiceAccessStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organizations/service-access");
  return ListOrganizationServiceAccessStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationServiceAccessStatusOutcomeCallable NetworkManagerClient::ListOrganizationServiceAccessStatusCallable(const ListOrganizationServiceAccessStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationServiceAccessStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationServiceAccessStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientListOrganizationServiceAccessStatusAsyncHelper(NetworkManagerClient const * const clientThis, const ListOrganizationServiceAccessStatusRequest& request, const ListOrganizationServiceAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizationServiceAccessStatus(request), context);
}

void NetworkManagerClient::ListOrganizationServiceAccessStatusAsync(const ListOrganizationServiceAccessStatusRequest& request, const ListOrganizationServiceAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientListOrganizationServiceAccessStatusAsyncHelper( this, request, handler, context ); } );
}

ListPeeringsOutcome NetworkManagerClient::ListPeerings(const ListPeeringsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/peerings");
  return ListPeeringsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPeeringsOutcomeCallable NetworkManagerClient::ListPeeringsCallable(const ListPeeringsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPeeringsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPeerings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientListPeeringsAsyncHelper(NetworkManagerClient const * const clientThis, const ListPeeringsRequest& request, const ListPeeringsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPeerings(request), context);
}

void NetworkManagerClient::ListPeeringsAsync(const ListPeeringsRequest& request, const ListPeeringsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientListPeeringsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome NetworkManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable NetworkManagerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientListTagsForResourceAsyncHelper(NetworkManagerClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void NetworkManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutCoreNetworkPolicyOutcome NetworkManagerClient::PutCoreNetworkPolicy(const PutCoreNetworkPolicyRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCoreNetworkPolicy", "Required field: CoreNetworkId, is not set");
    return PutCoreNetworkPolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-policy");
  return PutCoreNetworkPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutCoreNetworkPolicyOutcomeCallable NetworkManagerClient::PutCoreNetworkPolicyCallable(const PutCoreNetworkPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCoreNetworkPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCoreNetworkPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientPutCoreNetworkPolicyAsyncHelper(NetworkManagerClient const * const clientThis, const PutCoreNetworkPolicyRequest& request, const PutCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutCoreNetworkPolicy(request), context);
}

void NetworkManagerClient::PutCoreNetworkPolicyAsync(const PutCoreNetworkPolicyRequest& request, const PutCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientPutCoreNetworkPolicyAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome NetworkManagerClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: ResourceArn, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resource-policy/");
  uri.AddPathSegment(request.GetResourceArn());
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable NetworkManagerClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientPutResourcePolicyAsyncHelper(NetworkManagerClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void NetworkManagerClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

RegisterTransitGatewayOutcome NetworkManagerClient::RegisterTransitGateway(const RegisterTransitGatewayRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterTransitGateway", "Required field: GlobalNetworkId, is not set");
    return RegisterTransitGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/transit-gateway-registrations");
  return RegisterTransitGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterTransitGatewayOutcomeCallable NetworkManagerClient::RegisterTransitGatewayCallable(const RegisterTransitGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTransitGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTransitGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientRegisterTransitGatewayAsyncHelper(NetworkManagerClient const * const clientThis, const RegisterTransitGatewayRequest& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterTransitGateway(request), context);
}

void NetworkManagerClient::RegisterTransitGatewayAsync(const RegisterTransitGatewayRequest& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientRegisterTransitGatewayAsyncHelper( this, request, handler, context ); } );
}

RejectAttachmentOutcome NetworkManagerClient::RejectAttachment(const RejectAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectAttachment", "Required field: AttachmentId, is not set");
    return RejectAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  uri.AddPathSegments("/reject");
  return RejectAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectAttachmentOutcomeCallable NetworkManagerClient::RejectAttachmentCallable(const RejectAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientRejectAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const RejectAttachmentRequest& request, const RejectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectAttachment(request), context);
}

void NetworkManagerClient::RejectAttachmentAsync(const RejectAttachmentRequest& request, const RejectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientRejectAttachmentAsyncHelper( this, request, handler, context ); } );
}

RestoreCoreNetworkPolicyVersionOutcome NetworkManagerClient::RestoreCoreNetworkPolicyVersion(const RestoreCoreNetworkPolicyVersionRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreCoreNetworkPolicyVersion", "Required field: CoreNetworkId, is not set");
    return RestoreCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreCoreNetworkPolicyVersion", "Required field: PolicyVersionId, is not set");
    return RestoreCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  uri.AddPathSegments("/core-network-policy-versions/");
  uri.AddPathSegment(request.GetPolicyVersionId());
  uri.AddPathSegments("/restore");
  return RestoreCoreNetworkPolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreCoreNetworkPolicyVersionOutcomeCallable NetworkManagerClient::RestoreCoreNetworkPolicyVersionCallable(const RestoreCoreNetworkPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreCoreNetworkPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreCoreNetworkPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientRestoreCoreNetworkPolicyVersionAsyncHelper(NetworkManagerClient const * const clientThis, const RestoreCoreNetworkPolicyVersionRequest& request, const RestoreCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreCoreNetworkPolicyVersion(request), context);
}

void NetworkManagerClient::RestoreCoreNetworkPolicyVersionAsync(const RestoreCoreNetworkPolicyVersionRequest& request, const RestoreCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientRestoreCoreNetworkPolicyVersionAsyncHelper( this, request, handler, context ); } );
}

StartOrganizationServiceAccessUpdateOutcome NetworkManagerClient::StartOrganizationServiceAccessUpdate(const StartOrganizationServiceAccessUpdateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organizations/service-access");
  return StartOrganizationServiceAccessUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartOrganizationServiceAccessUpdateOutcomeCallable NetworkManagerClient::StartOrganizationServiceAccessUpdateCallable(const StartOrganizationServiceAccessUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartOrganizationServiceAccessUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartOrganizationServiceAccessUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientStartOrganizationServiceAccessUpdateAsyncHelper(NetworkManagerClient const * const clientThis, const StartOrganizationServiceAccessUpdateRequest& request, const StartOrganizationServiceAccessUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartOrganizationServiceAccessUpdate(request), context);
}

void NetworkManagerClient::StartOrganizationServiceAccessUpdateAsync(const StartOrganizationServiceAccessUpdateRequest& request, const StartOrganizationServiceAccessUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientStartOrganizationServiceAccessUpdateAsyncHelper( this, request, handler, context ); } );
}

StartRouteAnalysisOutcome NetworkManagerClient::StartRouteAnalysis(const StartRouteAnalysisRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartRouteAnalysis", "Required field: GlobalNetworkId, is not set");
    return StartRouteAnalysisOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/route-analyses");
  return StartRouteAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRouteAnalysisOutcomeCallable NetworkManagerClient::StartRouteAnalysisCallable(const StartRouteAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRouteAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRouteAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientStartRouteAnalysisAsyncHelper(NetworkManagerClient const * const clientThis, const StartRouteAnalysisRequest& request, const StartRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartRouteAnalysis(request), context);
}

void NetworkManagerClient::StartRouteAnalysisAsync(const StartRouteAnalysisRequest& request, const StartRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientStartRouteAnalysisAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome NetworkManagerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable NetworkManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientTagResourceAsyncHelper(NetworkManagerClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void NetworkManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome NetworkManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable NetworkManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUntagResourceAsyncHelper(NetworkManagerClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void NetworkManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectionOutcome NetworkManagerClient::UpdateConnection(const UpdateConnectionRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: GlobalNetworkId, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: ConnectionId, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/connections/");
  uri.AddPathSegment(request.GetConnectionId());
  return UpdateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectionOutcomeCallable NetworkManagerClient::UpdateConnectionCallable(const UpdateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateConnectionAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnection(request), context);
}

void NetworkManagerClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateConnectionAsyncHelper( this, request, handler, context ); } );
}

UpdateCoreNetworkOutcome NetworkManagerClient::UpdateCoreNetwork(const UpdateCoreNetworkRequest& request) const
{
  if (!request.CoreNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCoreNetwork", "Required field: CoreNetworkId, is not set");
    return UpdateCoreNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/core-networks/");
  uri.AddPathSegment(request.GetCoreNetworkId());
  return UpdateCoreNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateCoreNetworkOutcomeCallable NetworkManagerClient::UpdateCoreNetworkCallable(const UpdateCoreNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCoreNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCoreNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateCoreNetworkAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateCoreNetworkRequest& request, const UpdateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCoreNetwork(request), context);
}

void NetworkManagerClient::UpdateCoreNetworkAsync(const UpdateCoreNetworkRequest& request, const UpdateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateCoreNetworkAsyncHelper( this, request, handler, context ); } );
}

UpdateDeviceOutcome NetworkManagerClient::UpdateDevice(const UpdateDeviceRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDevice", "Required field: GlobalNetworkId, is not set");
    return UpdateDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDevice", "Required field: DeviceId, is not set");
    return UpdateDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/devices/");
  uri.AddPathSegment(request.GetDeviceId());
  return UpdateDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceOutcomeCallable NetworkManagerClient::UpdateDeviceCallable(const UpdateDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateDeviceAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDevice(request), context);
}

void NetworkManagerClient::UpdateDeviceAsync(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateDeviceAsyncHelper( this, request, handler, context ); } );
}

UpdateGlobalNetworkOutcome NetworkManagerClient::UpdateGlobalNetwork(const UpdateGlobalNetworkRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGlobalNetwork", "Required field: GlobalNetworkId, is not set");
    return UpdateGlobalNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  return UpdateGlobalNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalNetworkOutcomeCallable NetworkManagerClient::UpdateGlobalNetworkCallable(const UpdateGlobalNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateGlobalNetworkAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateGlobalNetworkRequest& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGlobalNetwork(request), context);
}

void NetworkManagerClient::UpdateGlobalNetworkAsync(const UpdateGlobalNetworkRequest& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateGlobalNetworkAsyncHelper( this, request, handler, context ); } );
}

UpdateLinkOutcome NetworkManagerClient::UpdateLink(const UpdateLinkRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLink", "Required field: GlobalNetworkId, is not set");
    return UpdateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.LinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLink", "Required field: LinkId, is not set");
    return UpdateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/links/");
  uri.AddPathSegment(request.GetLinkId());
  return UpdateLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLinkOutcomeCallable NetworkManagerClient::UpdateLinkCallable(const UpdateLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateLinkAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateLinkRequest& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLink(request), context);
}

void NetworkManagerClient::UpdateLinkAsync(const UpdateLinkRequest& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateLinkAsyncHelper( this, request, handler, context ); } );
}

UpdateNetworkResourceMetadataOutcome NetworkManagerClient::UpdateNetworkResourceMetadata(const UpdateNetworkResourceMetadataRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkResourceMetadata", "Required field: GlobalNetworkId, is not set");
    return UpdateNetworkResourceMetadataOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkResourceMetadata", "Required field: ResourceArn, is not set");
    return UpdateNetworkResourceMetadataOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/network-resources/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/metadata");
  return UpdateNetworkResourceMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkResourceMetadataOutcomeCallable NetworkManagerClient::UpdateNetworkResourceMetadataCallable(const UpdateNetworkResourceMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkResourceMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkResourceMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateNetworkResourceMetadataAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateNetworkResourceMetadataRequest& request, const UpdateNetworkResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNetworkResourceMetadata(request), context);
}

void NetworkManagerClient::UpdateNetworkResourceMetadataAsync(const UpdateNetworkResourceMetadataRequest& request, const UpdateNetworkResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateNetworkResourceMetadataAsyncHelper( this, request, handler, context ); } );
}

UpdateSiteOutcome NetworkManagerClient::UpdateSite(const UpdateSiteRequest& request) const
{
  if (!request.GlobalNetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSite", "Required field: GlobalNetworkId, is not set");
    return UpdateSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSite", "Required field: SiteId, is not set");
    return UpdateSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-networks/");
  uri.AddPathSegment(request.GetGlobalNetworkId());
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  return UpdateSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSiteOutcomeCallable NetworkManagerClient::UpdateSiteCallable(const UpdateSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateSiteAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSite(request), context);
}

void NetworkManagerClient::UpdateSiteAsync(const UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateSiteAsyncHelper( this, request, handler, context ); } );
}

UpdateVpcAttachmentOutcome NetworkManagerClient::UpdateVpcAttachment(const UpdateVpcAttachmentRequest& request) const
{
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVpcAttachment", "Required field: AttachmentId, is not set");
    return UpdateVpcAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpc-attachments/");
  uri.AddPathSegment(request.GetAttachmentId());
  return UpdateVpcAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateVpcAttachmentOutcomeCallable NetworkManagerClient::UpdateVpcAttachmentCallable(const UpdateVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkManagerClientUpdateVpcAttachmentAsyncHelper(NetworkManagerClient const * const clientThis, const UpdateVpcAttachmentRequest& request, const UpdateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVpcAttachment(request), context);
}

void NetworkManagerClient::UpdateVpcAttachmentAsync(const UpdateVpcAttachmentRequest& request, const UpdateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkManagerClientUpdateVpcAttachmentAsyncHelper( this, request, handler, context ); } );
}

