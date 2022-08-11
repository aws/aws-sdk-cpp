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

#include <aws/privatenetworks/PrivateNetworksClient.h>
#include <aws/privatenetworks/PrivateNetworksEndpoint.h>
#include <aws/privatenetworks/PrivateNetworksErrorMarshaller.h>
#include <aws/privatenetworks/model/AcknowledgeOrderReceiptRequest.h>
#include <aws/privatenetworks/model/ActivateDeviceIdentifierRequest.h>
#include <aws/privatenetworks/model/ActivateNetworkSiteRequest.h>
#include <aws/privatenetworks/model/ConfigureAccessPointRequest.h>
#include <aws/privatenetworks/model/CreateNetworkRequest.h>
#include <aws/privatenetworks/model/CreateNetworkSiteRequest.h>
#include <aws/privatenetworks/model/DeactivateDeviceIdentifierRequest.h>
#include <aws/privatenetworks/model/DeleteNetworkRequest.h>
#include <aws/privatenetworks/model/DeleteNetworkSiteRequest.h>
#include <aws/privatenetworks/model/GetDeviceIdentifierRequest.h>
#include <aws/privatenetworks/model/GetNetworkRequest.h>
#include <aws/privatenetworks/model/GetNetworkResourceRequest.h>
#include <aws/privatenetworks/model/GetNetworkSiteRequest.h>
#include <aws/privatenetworks/model/GetOrderRequest.h>
#include <aws/privatenetworks/model/ListDeviceIdentifiersRequest.h>
#include <aws/privatenetworks/model/ListNetworkResourcesRequest.h>
#include <aws/privatenetworks/model/ListNetworkSitesRequest.h>
#include <aws/privatenetworks/model/ListNetworksRequest.h>
#include <aws/privatenetworks/model/ListOrdersRequest.h>
#include <aws/privatenetworks/model/ListTagsForResourceRequest.h>
#include <aws/privatenetworks/model/TagResourceRequest.h>
#include <aws/privatenetworks/model/UntagResourceRequest.h>
#include <aws/privatenetworks/model/UpdateNetworkSiteRequest.h>
#include <aws/privatenetworks/model/UpdateNetworkSitePlanRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PrivateNetworks;
using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "private-networks";
static const char* ALLOCATION_TAG = "PrivateNetworksClient";


PrivateNetworksClient::PrivateNetworksClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PrivateNetworksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PrivateNetworksClient::PrivateNetworksClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PrivateNetworksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PrivateNetworksClient::PrivateNetworksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PrivateNetworksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PrivateNetworksClient::~PrivateNetworksClient()
{
}

void PrivateNetworksClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("PrivateNetworks");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PrivateNetworksEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PrivateNetworksClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcknowledgeOrderReceiptOutcome PrivateNetworksClient::AcknowledgeOrderReceipt(const AcknowledgeOrderReceiptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/orders/acknowledge");
  return AcknowledgeOrderReceiptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcknowledgeOrderReceiptOutcomeCallable PrivateNetworksClient::AcknowledgeOrderReceiptCallable(const AcknowledgeOrderReceiptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcknowledgeOrderReceiptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcknowledgeOrderReceipt(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::AcknowledgeOrderReceiptAsync(const AcknowledgeOrderReceiptRequest& request, const AcknowledgeOrderReceiptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcknowledgeOrderReceiptAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::AcknowledgeOrderReceiptAsyncHelper(const AcknowledgeOrderReceiptRequest& request, const AcknowledgeOrderReceiptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcknowledgeOrderReceipt(request), context);
}

ActivateDeviceIdentifierOutcome PrivateNetworksClient::ActivateDeviceIdentifier(const ActivateDeviceIdentifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/device-identifiers/activate");
  return ActivateDeviceIdentifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateDeviceIdentifierOutcomeCallable PrivateNetworksClient::ActivateDeviceIdentifierCallable(const ActivateDeviceIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateDeviceIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateDeviceIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ActivateDeviceIdentifierAsync(const ActivateDeviceIdentifierRequest& request, const ActivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivateDeviceIdentifierAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ActivateDeviceIdentifierAsyncHelper(const ActivateDeviceIdentifierRequest& request, const ActivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateDeviceIdentifier(request), context);
}

ActivateNetworkSiteOutcome PrivateNetworksClient::ActivateNetworkSite(const ActivateNetworkSiteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-sites/activate");
  return ActivateNetworkSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateNetworkSiteOutcomeCallable PrivateNetworksClient::ActivateNetworkSiteCallable(const ActivateNetworkSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateNetworkSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateNetworkSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ActivateNetworkSiteAsync(const ActivateNetworkSiteRequest& request, const ActivateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivateNetworkSiteAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ActivateNetworkSiteAsyncHelper(const ActivateNetworkSiteRequest& request, const ActivateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateNetworkSite(request), context);
}

ConfigureAccessPointOutcome PrivateNetworksClient::ConfigureAccessPoint(const ConfigureAccessPointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-resources/configure");
  return ConfigureAccessPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ConfigureAccessPointOutcomeCallable PrivateNetworksClient::ConfigureAccessPointCallable(const ConfigureAccessPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ConfigureAccessPointAsync(const ConfigureAccessPointRequest& request, const ConfigureAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfigureAccessPointAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ConfigureAccessPointAsyncHelper(const ConfigureAccessPointRequest& request, const ConfigureAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfigureAccessPoint(request), context);
}

CreateNetworkOutcome PrivateNetworksClient::CreateNetwork(const CreateNetworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/networks");
  return CreateNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkOutcomeCallable PrivateNetworksClient::CreateNetworkCallable(const CreateNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::CreateNetworkAsync(const CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::CreateNetworkAsyncHelper(const CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetwork(request), context);
}

CreateNetworkSiteOutcome PrivateNetworksClient::CreateNetworkSite(const CreateNetworkSiteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-sites");
  return CreateNetworkSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkSiteOutcomeCallable PrivateNetworksClient::CreateNetworkSiteCallable(const CreateNetworkSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::CreateNetworkSiteAsync(const CreateNetworkSiteRequest& request, const CreateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkSiteAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::CreateNetworkSiteAsyncHelper(const CreateNetworkSiteRequest& request, const CreateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkSite(request), context);
}

DeactivateDeviceIdentifierOutcome PrivateNetworksClient::DeactivateDeviceIdentifier(const DeactivateDeviceIdentifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/device-identifiers/deactivate");
  return DeactivateDeviceIdentifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateDeviceIdentifierOutcomeCallable PrivateNetworksClient::DeactivateDeviceIdentifierCallable(const DeactivateDeviceIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateDeviceIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateDeviceIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::DeactivateDeviceIdentifierAsync(const DeactivateDeviceIdentifierRequest& request, const DeactivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeactivateDeviceIdentifierAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::DeactivateDeviceIdentifierAsyncHelper(const DeactivateDeviceIdentifierRequest& request, const DeactivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivateDeviceIdentifier(request), context);
}

DeleteNetworkOutcome PrivateNetworksClient::DeleteNetwork(const DeleteNetworkRequest& request) const
{
  if (!request.NetworkArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetwork", "Required field: NetworkArn, is not set");
    return DeleteNetworkOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/networks/");
  uri.AddPathSegment(request.GetNetworkArn());
  return DeleteNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkOutcomeCallable PrivateNetworksClient::DeleteNetworkCallable(const DeleteNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::DeleteNetworkAsync(const DeleteNetworkRequest& request, const DeleteNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::DeleteNetworkAsyncHelper(const DeleteNetworkRequest& request, const DeleteNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetwork(request), context);
}

DeleteNetworkSiteOutcome PrivateNetworksClient::DeleteNetworkSite(const DeleteNetworkSiteRequest& request) const
{
  if (!request.NetworkSiteArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetworkSite", "Required field: NetworkSiteArn, is not set");
    return DeleteNetworkSiteOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSiteArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-sites/");
  uri.AddPathSegment(request.GetNetworkSiteArn());
  return DeleteNetworkSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkSiteOutcomeCallable PrivateNetworksClient::DeleteNetworkSiteCallable(const DeleteNetworkSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::DeleteNetworkSiteAsync(const DeleteNetworkSiteRequest& request, const DeleteNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkSiteAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::DeleteNetworkSiteAsyncHelper(const DeleteNetworkSiteRequest& request, const DeleteNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkSite(request), context);
}

GetDeviceIdentifierOutcome PrivateNetworksClient::GetDeviceIdentifier(const GetDeviceIdentifierRequest& request) const
{
  if (!request.DeviceIdentifierArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceIdentifier", "Required field: DeviceIdentifierArn, is not set");
    return GetDeviceIdentifierOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceIdentifierArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/device-identifiers/");
  uri.AddPathSegment(request.GetDeviceIdentifierArn());
  return GetDeviceIdentifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceIdentifierOutcomeCallable PrivateNetworksClient::GetDeviceIdentifierCallable(const GetDeviceIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::GetDeviceIdentifierAsync(const GetDeviceIdentifierRequest& request, const GetDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceIdentifierAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::GetDeviceIdentifierAsyncHelper(const GetDeviceIdentifierRequest& request, const GetDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeviceIdentifier(request), context);
}

GetNetworkOutcome PrivateNetworksClient::GetNetwork(const GetNetworkRequest& request) const
{
  if (!request.NetworkArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetwork", "Required field: NetworkArn, is not set");
    return GetNetworkOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/networks/");
  uri.AddPathSegment(request.GetNetworkArn());
  return GetNetworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkOutcomeCallable PrivateNetworksClient::GetNetworkCallable(const GetNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::GetNetworkAsync(const GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::GetNetworkAsyncHelper(const GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetwork(request), context);
}

GetNetworkResourceOutcome PrivateNetworksClient::GetNetworkResource(const GetNetworkResourceRequest& request) const
{
  if (!request.NetworkResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkResource", "Required field: NetworkResourceArn, is not set");
    return GetNetworkResourceOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-resources/");
  uri.AddPathSegment(request.GetNetworkResourceArn());
  return GetNetworkResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkResourceOutcomeCallable PrivateNetworksClient::GetNetworkResourceCallable(const GetNetworkResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::GetNetworkResourceAsync(const GetNetworkResourceRequest& request, const GetNetworkResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkResourceAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::GetNetworkResourceAsyncHelper(const GetNetworkResourceRequest& request, const GetNetworkResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkResource(request), context);
}

GetNetworkSiteOutcome PrivateNetworksClient::GetNetworkSite(const GetNetworkSiteRequest& request) const
{
  if (!request.NetworkSiteArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkSite", "Required field: NetworkSiteArn, is not set");
    return GetNetworkSiteOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSiteArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-sites/");
  uri.AddPathSegment(request.GetNetworkSiteArn());
  return GetNetworkSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkSiteOutcomeCallable PrivateNetworksClient::GetNetworkSiteCallable(const GetNetworkSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::GetNetworkSiteAsync(const GetNetworkSiteRequest& request, const GetNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkSiteAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::GetNetworkSiteAsyncHelper(const GetNetworkSiteRequest& request, const GetNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkSite(request), context);
}

GetOrderOutcome PrivateNetworksClient::GetOrder(const GetOrderRequest& request) const
{
  if (!request.OrderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOrder", "Required field: OrderArn, is not set");
    return GetOrderOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrderArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/orders/");
  uri.AddPathSegment(request.GetOrderArn());
  return GetOrderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOrderOutcomeCallable PrivateNetworksClient::GetOrderCallable(const GetOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::GetOrderAsync(const GetOrderRequest& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOrderAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::GetOrderAsyncHelper(const GetOrderRequest& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOrder(request), context);
}

ListDeviceIdentifiersOutcome PrivateNetworksClient::ListDeviceIdentifiers(const ListDeviceIdentifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/device-identifiers/list");
  return ListDeviceIdentifiersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceIdentifiersOutcomeCallable PrivateNetworksClient::ListDeviceIdentifiersCallable(const ListDeviceIdentifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceIdentifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceIdentifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ListDeviceIdentifiersAsync(const ListDeviceIdentifiersRequest& request, const ListDeviceIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceIdentifiersAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ListDeviceIdentifiersAsyncHelper(const ListDeviceIdentifiersRequest& request, const ListDeviceIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceIdentifiers(request), context);
}

ListNetworkResourcesOutcome PrivateNetworksClient::ListNetworkResources(const ListNetworkResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-resources");
  return ListNetworkResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkResourcesOutcomeCallable PrivateNetworksClient::ListNetworkResourcesCallable(const ListNetworkResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworkResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworkResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ListNetworkResourcesAsync(const ListNetworkResourcesRequest& request, const ListNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNetworkResourcesAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ListNetworkResourcesAsyncHelper(const ListNetworkResourcesRequest& request, const ListNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNetworkResources(request), context);
}

ListNetworkSitesOutcome PrivateNetworksClient::ListNetworkSites(const ListNetworkSitesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-sites/list");
  return ListNetworkSitesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkSitesOutcomeCallable PrivateNetworksClient::ListNetworkSitesCallable(const ListNetworkSitesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworkSitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworkSites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ListNetworkSitesAsync(const ListNetworkSitesRequest& request, const ListNetworkSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNetworkSitesAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ListNetworkSitesAsyncHelper(const ListNetworkSitesRequest& request, const ListNetworkSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNetworkSites(request), context);
}

ListNetworksOutcome PrivateNetworksClient::ListNetworks(const ListNetworksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/networks/list");
  return ListNetworksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNetworksOutcomeCallable PrivateNetworksClient::ListNetworksCallable(const ListNetworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ListNetworksAsync(const ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNetworksAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ListNetworksAsyncHelper(const ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNetworks(request), context);
}

ListOrdersOutcome PrivateNetworksClient::ListOrders(const ListOrdersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/orders/list");
  return ListOrdersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrdersOutcomeCallable PrivateNetworksClient::ListOrdersCallable(const ListOrdersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrdersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ListOrdersAsync(const ListOrdersRequest& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOrdersAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ListOrdersAsyncHelper(const ListOrdersRequest& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOrders(request), context);
}

ListTagsForResourceOutcome PrivateNetworksClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PrivateNetworksClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PingOutcome PrivateNetworksClient::Ping() const
{
  Aws::StringStream ss;
  ss << m_uri << "/ping";
  return PingOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "Ping"));
}

PingOutcomeCallable PrivateNetworksClient::PingCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< PingOutcome() > >(ALLOCATION_TAG, [this](){ return this->Ping(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::PingAsync(const PingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->PingAsyncHelper( handler, context ); } );
}

void PrivateNetworksClient::PingAsyncHelper(const PingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, Ping(), context);
}

TagResourceOutcome PrivateNetworksClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PrivateNetworksClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome PrivateNetworksClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrivateNetworksErrors>(PrivateNetworksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PrivateNetworksClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateNetworkSiteOutcome PrivateNetworksClient::UpdateNetworkSite(const UpdateNetworkSiteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-sites/site");
  return UpdateNetworkSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkSiteOutcomeCallable PrivateNetworksClient::UpdateNetworkSiteCallable(const UpdateNetworkSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::UpdateNetworkSiteAsync(const UpdateNetworkSiteRequest& request, const UpdateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNetworkSiteAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::UpdateNetworkSiteAsyncHelper(const UpdateNetworkSiteRequest& request, const UpdateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNetworkSite(request), context);
}

UpdateNetworkSitePlanOutcome PrivateNetworksClient::UpdateNetworkSitePlan(const UpdateNetworkSitePlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/network-sites/plan");
  return UpdateNetworkSitePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkSitePlanOutcomeCallable PrivateNetworksClient::UpdateNetworkSitePlanCallable(const UpdateNetworkSitePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkSitePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkSitePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PrivateNetworksClient::UpdateNetworkSitePlanAsync(const UpdateNetworkSitePlanRequest& request, const UpdateNetworkSitePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNetworkSitePlanAsyncHelper( request, handler, context ); } );
}

void PrivateNetworksClient::UpdateNetworkSitePlanAsyncHelper(const UpdateNetworkSitePlanRequest& request, const UpdateNetworkSitePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNetworkSitePlan(request), context);
}

