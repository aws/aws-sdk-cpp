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

void NetworkManagerClient::AcceptAttachmentAsync(const AcceptAttachmentRequest& request, const AcceptAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::AcceptAttachmentAsyncHelper(const AcceptAttachmentRequest& request, const AcceptAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptAttachment(request), context);
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

void NetworkManagerClient::AssociateConnectPeerAsync(const AssociateConnectPeerRequest& request, const AssociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateConnectPeerAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::AssociateConnectPeerAsyncHelper(const AssociateConnectPeerRequest& request, const AssociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateConnectPeer(request), context);
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

void NetworkManagerClient::AssociateCustomerGatewayAsync(const AssociateCustomerGatewayRequest& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateCustomerGatewayAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::AssociateCustomerGatewayAsyncHelper(const AssociateCustomerGatewayRequest& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateCustomerGateway(request), context);
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

void NetworkManagerClient::AssociateLinkAsync(const AssociateLinkRequest& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateLinkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::AssociateLinkAsyncHelper(const AssociateLinkRequest& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateLink(request), context);
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

void NetworkManagerClient::AssociateTransitGatewayConnectPeerAsync(const AssociateTransitGatewayConnectPeerRequest& request, const AssociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateTransitGatewayConnectPeerAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::AssociateTransitGatewayConnectPeerAsyncHelper(const AssociateTransitGatewayConnectPeerRequest& request, const AssociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateTransitGatewayConnectPeer(request), context);
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

void NetworkManagerClient::CreateConnectAttachmentAsync(const CreateConnectAttachmentRequest& request, const CreateConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateConnectAttachmentAsyncHelper(const CreateConnectAttachmentRequest& request, const CreateConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnectAttachment(request), context);
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

void NetworkManagerClient::CreateConnectPeerAsync(const CreateConnectPeerRequest& request, const CreateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectPeerAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateConnectPeerAsyncHelper(const CreateConnectPeerRequest& request, const CreateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnectPeer(request), context);
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

void NetworkManagerClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectionAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateConnectionAsyncHelper(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnection(request), context);
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

void NetworkManagerClient::CreateCoreNetworkAsync(const CreateCoreNetworkRequest& request, const CreateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCoreNetworkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateCoreNetworkAsyncHelper(const CreateCoreNetworkRequest& request, const CreateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCoreNetwork(request), context);
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

void NetworkManagerClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeviceAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateDeviceAsyncHelper(const CreateDeviceRequest& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDevice(request), context);
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

void NetworkManagerClient::CreateGlobalNetworkAsync(const CreateGlobalNetworkRequest& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGlobalNetworkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateGlobalNetworkAsyncHelper(const CreateGlobalNetworkRequest& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGlobalNetwork(request), context);
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

void NetworkManagerClient::CreateLinkAsync(const CreateLinkRequest& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLinkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateLinkAsyncHelper(const CreateLinkRequest& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLink(request), context);
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

void NetworkManagerClient::CreateSiteAsync(const CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSiteAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateSiteAsyncHelper(const CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSite(request), context);
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

void NetworkManagerClient::CreateSiteToSiteVpnAttachmentAsync(const CreateSiteToSiteVpnAttachmentRequest& request, const CreateSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSiteToSiteVpnAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateSiteToSiteVpnAttachmentAsyncHelper(const CreateSiteToSiteVpnAttachmentRequest& request, const CreateSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSiteToSiteVpnAttachment(request), context);
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

void NetworkManagerClient::CreateTransitGatewayPeeringAsync(const CreateTransitGatewayPeeringRequest& request, const CreateTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransitGatewayPeeringAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateTransitGatewayPeeringAsyncHelper(const CreateTransitGatewayPeeringRequest& request, const CreateTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransitGatewayPeering(request), context);
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

void NetworkManagerClient::CreateTransitGatewayRouteTableAttachmentAsync(const CreateTransitGatewayRouteTableAttachmentRequest& request, const CreateTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransitGatewayRouteTableAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateTransitGatewayRouteTableAttachmentAsyncHelper(const CreateTransitGatewayRouteTableAttachmentRequest& request, const CreateTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransitGatewayRouteTableAttachment(request), context);
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

void NetworkManagerClient::CreateVpcAttachmentAsync(const CreateVpcAttachmentRequest& request, const CreateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::CreateVpcAttachmentAsyncHelper(const CreateVpcAttachmentRequest& request, const CreateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcAttachment(request), context);
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

void NetworkManagerClient::DeleteAttachmentAsync(const DeleteAttachmentRequest& request, const DeleteAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteAttachmentAsyncHelper(const DeleteAttachmentRequest& request, const DeleteAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAttachment(request), context);
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

void NetworkManagerClient::DeleteConnectPeerAsync(const DeleteConnectPeerRequest& request, const DeleteConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectPeerAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteConnectPeerAsyncHelper(const DeleteConnectPeerRequest& request, const DeleteConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnectPeer(request), context);
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

void NetworkManagerClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectionAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteConnectionAsyncHelper(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnection(request), context);
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

void NetworkManagerClient::DeleteCoreNetworkAsync(const DeleteCoreNetworkRequest& request, const DeleteCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCoreNetworkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteCoreNetworkAsyncHelper(const DeleteCoreNetworkRequest& request, const DeleteCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCoreNetwork(request), context);
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

void NetworkManagerClient::DeleteCoreNetworkPolicyVersionAsync(const DeleteCoreNetworkPolicyVersionRequest& request, const DeleteCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCoreNetworkPolicyVersionAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteCoreNetworkPolicyVersionAsyncHelper(const DeleteCoreNetworkPolicyVersionRequest& request, const DeleteCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCoreNetworkPolicyVersion(request), context);
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

void NetworkManagerClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeviceAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteDeviceAsyncHelper(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDevice(request), context);
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

void NetworkManagerClient::DeleteGlobalNetworkAsync(const DeleteGlobalNetworkRequest& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGlobalNetworkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteGlobalNetworkAsyncHelper(const DeleteGlobalNetworkRequest& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGlobalNetwork(request), context);
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

void NetworkManagerClient::DeleteLinkAsync(const DeleteLinkRequest& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLinkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteLinkAsyncHelper(const DeleteLinkRequest& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLink(request), context);
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

void NetworkManagerClient::DeletePeeringAsync(const DeletePeeringRequest& request, const DeletePeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePeeringAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeletePeeringAsyncHelper(const DeletePeeringRequest& request, const DeletePeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePeering(request), context);
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

void NetworkManagerClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteResourcePolicyAsyncHelper(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicy(request), context);
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

void NetworkManagerClient::DeleteSiteAsync(const DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSiteAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeleteSiteAsyncHelper(const DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSite(request), context);
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

void NetworkManagerClient::DeregisterTransitGatewayAsync(const DeregisterTransitGatewayRequest& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterTransitGatewayAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DeregisterTransitGatewayAsyncHelper(const DeregisterTransitGatewayRequest& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterTransitGateway(request), context);
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

void NetworkManagerClient::DescribeGlobalNetworksAsync(const DescribeGlobalNetworksRequest& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGlobalNetworksAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DescribeGlobalNetworksAsyncHelper(const DescribeGlobalNetworksRequest& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGlobalNetworks(request), context);
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

void NetworkManagerClient::DisassociateConnectPeerAsync(const DisassociateConnectPeerRequest& request, const DisassociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateConnectPeerAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DisassociateConnectPeerAsyncHelper(const DisassociateConnectPeerRequest& request, const DisassociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateConnectPeer(request), context);
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

void NetworkManagerClient::DisassociateCustomerGatewayAsync(const DisassociateCustomerGatewayRequest& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateCustomerGatewayAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DisassociateCustomerGatewayAsyncHelper(const DisassociateCustomerGatewayRequest& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateCustomerGateway(request), context);
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

void NetworkManagerClient::DisassociateLinkAsync(const DisassociateLinkRequest& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateLinkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DisassociateLinkAsyncHelper(const DisassociateLinkRequest& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateLink(request), context);
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

void NetworkManagerClient::DisassociateTransitGatewayConnectPeerAsync(const DisassociateTransitGatewayConnectPeerRequest& request, const DisassociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateTransitGatewayConnectPeerAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::DisassociateTransitGatewayConnectPeerAsyncHelper(const DisassociateTransitGatewayConnectPeerRequest& request, const DisassociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateTransitGatewayConnectPeer(request), context);
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

void NetworkManagerClient::ExecuteCoreNetworkChangeSetAsync(const ExecuteCoreNetworkChangeSetRequest& request, const ExecuteCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExecuteCoreNetworkChangeSetAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ExecuteCoreNetworkChangeSetAsyncHelper(const ExecuteCoreNetworkChangeSetRequest& request, const ExecuteCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecuteCoreNetworkChangeSet(request), context);
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

void NetworkManagerClient::GetConnectAttachmentAsync(const GetConnectAttachmentRequest& request, const GetConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetConnectAttachmentAsyncHelper(const GetConnectAttachmentRequest& request, const GetConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnectAttachment(request), context);
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

void NetworkManagerClient::GetConnectPeerAsync(const GetConnectPeerRequest& request, const GetConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectPeerAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetConnectPeerAsyncHelper(const GetConnectPeerRequest& request, const GetConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnectPeer(request), context);
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

void NetworkManagerClient::GetConnectPeerAssociationsAsync(const GetConnectPeerAssociationsRequest& request, const GetConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectPeerAssociationsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetConnectPeerAssociationsAsyncHelper(const GetConnectPeerAssociationsRequest& request, const GetConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnectPeerAssociations(request), context);
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

void NetworkManagerClient::GetConnectionsAsync(const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectionsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetConnectionsAsyncHelper(const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnections(request), context);
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

void NetworkManagerClient::GetCoreNetworkAsync(const GetCoreNetworkRequest& request, const GetCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCoreNetworkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetCoreNetworkAsyncHelper(const GetCoreNetworkRequest& request, const GetCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCoreNetwork(request), context);
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

void NetworkManagerClient::GetCoreNetworkChangeEventsAsync(const GetCoreNetworkChangeEventsRequest& request, const GetCoreNetworkChangeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCoreNetworkChangeEventsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetCoreNetworkChangeEventsAsyncHelper(const GetCoreNetworkChangeEventsRequest& request, const GetCoreNetworkChangeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCoreNetworkChangeEvents(request), context);
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

void NetworkManagerClient::GetCoreNetworkChangeSetAsync(const GetCoreNetworkChangeSetRequest& request, const GetCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCoreNetworkChangeSetAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetCoreNetworkChangeSetAsyncHelper(const GetCoreNetworkChangeSetRequest& request, const GetCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCoreNetworkChangeSet(request), context);
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

void NetworkManagerClient::GetCoreNetworkPolicyAsync(const GetCoreNetworkPolicyRequest& request, const GetCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCoreNetworkPolicyAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetCoreNetworkPolicyAsyncHelper(const GetCoreNetworkPolicyRequest& request, const GetCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCoreNetworkPolicy(request), context);
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

void NetworkManagerClient::GetCustomerGatewayAssociationsAsync(const GetCustomerGatewayAssociationsRequest& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCustomerGatewayAssociationsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetCustomerGatewayAssociationsAsyncHelper(const GetCustomerGatewayAssociationsRequest& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCustomerGatewayAssociations(request), context);
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

void NetworkManagerClient::GetDevicesAsync(const GetDevicesRequest& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDevicesAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetDevicesAsyncHelper(const GetDevicesRequest& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevices(request), context);
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

void NetworkManagerClient::GetLinkAssociationsAsync(const GetLinkAssociationsRequest& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLinkAssociationsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetLinkAssociationsAsyncHelper(const GetLinkAssociationsRequest& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLinkAssociations(request), context);
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

void NetworkManagerClient::GetLinksAsync(const GetLinksRequest& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLinksAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetLinksAsyncHelper(const GetLinksRequest& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLinks(request), context);
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

void NetworkManagerClient::GetNetworkResourceCountsAsync(const GetNetworkResourceCountsRequest& request, const GetNetworkResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkResourceCountsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetNetworkResourceCountsAsyncHelper(const GetNetworkResourceCountsRequest& request, const GetNetworkResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkResourceCounts(request), context);
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

void NetworkManagerClient::GetNetworkResourceRelationshipsAsync(const GetNetworkResourceRelationshipsRequest& request, const GetNetworkResourceRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkResourceRelationshipsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetNetworkResourceRelationshipsAsyncHelper(const GetNetworkResourceRelationshipsRequest& request, const GetNetworkResourceRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkResourceRelationships(request), context);
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

void NetworkManagerClient::GetNetworkResourcesAsync(const GetNetworkResourcesRequest& request, const GetNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkResourcesAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetNetworkResourcesAsyncHelper(const GetNetworkResourcesRequest& request, const GetNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkResources(request), context);
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

void NetworkManagerClient::GetNetworkRoutesAsync(const GetNetworkRoutesRequest& request, const GetNetworkRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkRoutesAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetNetworkRoutesAsyncHelper(const GetNetworkRoutesRequest& request, const GetNetworkRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkRoutes(request), context);
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

void NetworkManagerClient::GetNetworkTelemetryAsync(const GetNetworkTelemetryRequest& request, const GetNetworkTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkTelemetryAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetNetworkTelemetryAsyncHelper(const GetNetworkTelemetryRequest& request, const GetNetworkTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkTelemetry(request), context);
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

void NetworkManagerClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcePolicyAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetResourcePolicyAsyncHelper(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourcePolicy(request), context);
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

void NetworkManagerClient::GetRouteAnalysisAsync(const GetRouteAnalysisRequest& request, const GetRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRouteAnalysisAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetRouteAnalysisAsyncHelper(const GetRouteAnalysisRequest& request, const GetRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRouteAnalysis(request), context);
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

void NetworkManagerClient::GetSiteToSiteVpnAttachmentAsync(const GetSiteToSiteVpnAttachmentRequest& request, const GetSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSiteToSiteVpnAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetSiteToSiteVpnAttachmentAsyncHelper(const GetSiteToSiteVpnAttachmentRequest& request, const GetSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSiteToSiteVpnAttachment(request), context);
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

void NetworkManagerClient::GetSitesAsync(const GetSitesRequest& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSitesAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetSitesAsyncHelper(const GetSitesRequest& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSites(request), context);
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

void NetworkManagerClient::GetTransitGatewayConnectPeerAssociationsAsync(const GetTransitGatewayConnectPeerAssociationsRequest& request, const GetTransitGatewayConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTransitGatewayConnectPeerAssociationsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetTransitGatewayConnectPeerAssociationsAsyncHelper(const GetTransitGatewayConnectPeerAssociationsRequest& request, const GetTransitGatewayConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTransitGatewayConnectPeerAssociations(request), context);
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

void NetworkManagerClient::GetTransitGatewayPeeringAsync(const GetTransitGatewayPeeringRequest& request, const GetTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTransitGatewayPeeringAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetTransitGatewayPeeringAsyncHelper(const GetTransitGatewayPeeringRequest& request, const GetTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTransitGatewayPeering(request), context);
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

void NetworkManagerClient::GetTransitGatewayRegistrationsAsync(const GetTransitGatewayRegistrationsRequest& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTransitGatewayRegistrationsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetTransitGatewayRegistrationsAsyncHelper(const GetTransitGatewayRegistrationsRequest& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTransitGatewayRegistrations(request), context);
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

void NetworkManagerClient::GetTransitGatewayRouteTableAttachmentAsync(const GetTransitGatewayRouteTableAttachmentRequest& request, const GetTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTransitGatewayRouteTableAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetTransitGatewayRouteTableAttachmentAsyncHelper(const GetTransitGatewayRouteTableAttachmentRequest& request, const GetTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTransitGatewayRouteTableAttachment(request), context);
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

void NetworkManagerClient::GetVpcAttachmentAsync(const GetVpcAttachmentRequest& request, const GetVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::GetVpcAttachmentAsyncHelper(const GetVpcAttachmentRequest& request, const GetVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVpcAttachment(request), context);
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

void NetworkManagerClient::ListAttachmentsAsync(const ListAttachmentsRequest& request, const ListAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttachmentsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ListAttachmentsAsyncHelper(const ListAttachmentsRequest& request, const ListAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachments(request), context);
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

void NetworkManagerClient::ListConnectPeersAsync(const ListConnectPeersRequest& request, const ListConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConnectPeersAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ListConnectPeersAsyncHelper(const ListConnectPeersRequest& request, const ListConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConnectPeers(request), context);
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

void NetworkManagerClient::ListCoreNetworkPolicyVersionsAsync(const ListCoreNetworkPolicyVersionsRequest& request, const ListCoreNetworkPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCoreNetworkPolicyVersionsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ListCoreNetworkPolicyVersionsAsyncHelper(const ListCoreNetworkPolicyVersionsRequest& request, const ListCoreNetworkPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCoreNetworkPolicyVersions(request), context);
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

void NetworkManagerClient::ListCoreNetworksAsync(const ListCoreNetworksRequest& request, const ListCoreNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCoreNetworksAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ListCoreNetworksAsyncHelper(const ListCoreNetworksRequest& request, const ListCoreNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCoreNetworks(request), context);
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

void NetworkManagerClient::ListOrganizationServiceAccessStatusAsync(const ListOrganizationServiceAccessStatusRequest& request, const ListOrganizationServiceAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOrganizationServiceAccessStatusAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ListOrganizationServiceAccessStatusAsyncHelper(const ListOrganizationServiceAccessStatusRequest& request, const ListOrganizationServiceAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOrganizationServiceAccessStatus(request), context);
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

void NetworkManagerClient::ListPeeringsAsync(const ListPeeringsRequest& request, const ListPeeringsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPeeringsAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ListPeeringsAsyncHelper(const ListPeeringsRequest& request, const ListPeeringsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPeerings(request), context);
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

void NetworkManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
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

void NetworkManagerClient::PutCoreNetworkPolicyAsync(const PutCoreNetworkPolicyRequest& request, const PutCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutCoreNetworkPolicyAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::PutCoreNetworkPolicyAsyncHelper(const PutCoreNetworkPolicyRequest& request, const PutCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutCoreNetworkPolicy(request), context);
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

void NetworkManagerClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutResourcePolicyAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::PutResourcePolicyAsyncHelper(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResourcePolicy(request), context);
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

void NetworkManagerClient::RegisterTransitGatewayAsync(const RegisterTransitGatewayRequest& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterTransitGatewayAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::RegisterTransitGatewayAsyncHelper(const RegisterTransitGatewayRequest& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterTransitGateway(request), context);
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

void NetworkManagerClient::RejectAttachmentAsync(const RejectAttachmentRequest& request, const RejectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::RejectAttachmentAsyncHelper(const RejectAttachmentRequest& request, const RejectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectAttachment(request), context);
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

void NetworkManagerClient::RestoreCoreNetworkPolicyVersionAsync(const RestoreCoreNetworkPolicyVersionRequest& request, const RestoreCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreCoreNetworkPolicyVersionAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::RestoreCoreNetworkPolicyVersionAsyncHelper(const RestoreCoreNetworkPolicyVersionRequest& request, const RestoreCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreCoreNetworkPolicyVersion(request), context);
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

void NetworkManagerClient::StartOrganizationServiceAccessUpdateAsync(const StartOrganizationServiceAccessUpdateRequest& request, const StartOrganizationServiceAccessUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartOrganizationServiceAccessUpdateAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::StartOrganizationServiceAccessUpdateAsyncHelper(const StartOrganizationServiceAccessUpdateRequest& request, const StartOrganizationServiceAccessUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartOrganizationServiceAccessUpdate(request), context);
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

void NetworkManagerClient::StartRouteAnalysisAsync(const StartRouteAnalysisRequest& request, const StartRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartRouteAnalysisAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::StartRouteAnalysisAsyncHelper(const StartRouteAnalysisRequest& request, const StartRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartRouteAnalysis(request), context);
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

void NetworkManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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

void NetworkManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
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

void NetworkManagerClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConnectionAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateConnectionAsyncHelper(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConnection(request), context);
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

void NetworkManagerClient::UpdateCoreNetworkAsync(const UpdateCoreNetworkRequest& request, const UpdateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCoreNetworkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateCoreNetworkAsyncHelper(const UpdateCoreNetworkRequest& request, const UpdateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCoreNetwork(request), context);
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

void NetworkManagerClient::UpdateDeviceAsync(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateDeviceAsyncHelper(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDevice(request), context);
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

void NetworkManagerClient::UpdateGlobalNetworkAsync(const UpdateGlobalNetworkRequest& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGlobalNetworkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateGlobalNetworkAsyncHelper(const UpdateGlobalNetworkRequest& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGlobalNetwork(request), context);
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

void NetworkManagerClient::UpdateLinkAsync(const UpdateLinkRequest& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLinkAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateLinkAsyncHelper(const UpdateLinkRequest& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLink(request), context);
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

void NetworkManagerClient::UpdateNetworkResourceMetadataAsync(const UpdateNetworkResourceMetadataRequest& request, const UpdateNetworkResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNetworkResourceMetadataAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateNetworkResourceMetadataAsyncHelper(const UpdateNetworkResourceMetadataRequest& request, const UpdateNetworkResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNetworkResourceMetadata(request), context);
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

void NetworkManagerClient::UpdateSiteAsync(const UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSiteAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateSiteAsyncHelper(const UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSite(request), context);
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

void NetworkManagerClient::UpdateVpcAttachmentAsync(const UpdateVpcAttachmentRequest& request, const UpdateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void NetworkManagerClient::UpdateVpcAttachmentAsyncHelper(const UpdateVpcAttachmentRequest& request, const UpdateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVpcAttachment(request), context);
}

