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

#include <aws/outposts/OutpostsClient.h>
#include <aws/outposts/OutpostsEndpoint.h>
#include <aws/outposts/OutpostsErrorMarshaller.h>
#include <aws/outposts/model/CancelOrderRequest.h>
#include <aws/outposts/model/CreateOrderRequest.h>
#include <aws/outposts/model/CreateOutpostRequest.h>
#include <aws/outposts/model/CreateSiteRequest.h>
#include <aws/outposts/model/DeleteOutpostRequest.h>
#include <aws/outposts/model/DeleteSiteRequest.h>
#include <aws/outposts/model/GetCatalogItemRequest.h>
#include <aws/outposts/model/GetConnectionRequest.h>
#include <aws/outposts/model/GetOrderRequest.h>
#include <aws/outposts/model/GetOutpostRequest.h>
#include <aws/outposts/model/GetOutpostInstanceTypesRequest.h>
#include <aws/outposts/model/GetSiteRequest.h>
#include <aws/outposts/model/GetSiteAddressRequest.h>
#include <aws/outposts/model/ListAssetsRequest.h>
#include <aws/outposts/model/ListCatalogItemsRequest.h>
#include <aws/outposts/model/ListOrdersRequest.h>
#include <aws/outposts/model/ListOutpostsRequest.h>
#include <aws/outposts/model/ListSitesRequest.h>
#include <aws/outposts/model/ListTagsForResourceRequest.h>
#include <aws/outposts/model/StartConnectionRequest.h>
#include <aws/outposts/model/TagResourceRequest.h>
#include <aws/outposts/model/UntagResourceRequest.h>
#include <aws/outposts/model/UpdateOutpostRequest.h>
#include <aws/outposts/model/UpdateSiteRequest.h>
#include <aws/outposts/model/UpdateSiteAddressRequest.h>
#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Outposts;
using namespace Aws::Outposts::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "outposts";
static const char* ALLOCATION_TAG = "OutpostsClient";

OutpostsClient::OutpostsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OutpostsClient::OutpostsClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OutpostsClient::OutpostsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OutpostsClient::~OutpostsClient()
{
}

void OutpostsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Outposts");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + OutpostsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void OutpostsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelOrderOutcome OutpostsClient::CancelOrder(const CancelOrderRequest& request) const
{
  if (!request.OrderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelOrder", "Required field: OrderId, is not set");
    return CancelOrderOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/orders/");
  uri.AddPathSegment(request.GetOrderId());
  uri.AddPathSegments("/cancel");
  return CancelOrderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelOrderOutcomeCallable OutpostsClient::CancelOrderCallable(const CancelOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::CancelOrderAsync(const CancelOrderRequest& request, const CancelOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelOrderAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::CancelOrderAsyncHelper(const CancelOrderRequest& request, const CancelOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelOrder(request), context);
}

CreateOrderOutcome OutpostsClient::CreateOrder(const CreateOrderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/orders");
  return CreateOrderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOrderOutcomeCallable OutpostsClient::CreateOrderCallable(const CreateOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::CreateOrderAsync(const CreateOrderRequest& request, const CreateOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOrderAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::CreateOrderAsyncHelper(const CreateOrderRequest& request, const CreateOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOrder(request), context);
}

CreateOutpostOutcome OutpostsClient::CreateOutpost(const CreateOutpostRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/outposts");
  return CreateOutpostOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOutpostOutcomeCallable OutpostsClient::CreateOutpostCallable(const CreateOutpostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOutpostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOutpost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::CreateOutpostAsync(const CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOutpostAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::CreateOutpostAsyncHelper(const CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOutpost(request), context);
}

CreateSiteOutcome OutpostsClient::CreateSite(const CreateSiteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites");
  return CreateSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSiteOutcomeCallable OutpostsClient::CreateSiteCallable(const CreateSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::CreateSiteAsync(const CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSiteAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::CreateSiteAsyncHelper(const CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSite(request), context);
}

DeleteOutpostOutcome OutpostsClient::DeleteOutpost(const DeleteOutpostRequest& request) const
{
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOutpost", "Required field: OutpostId, is not set");
    return DeleteOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/outposts/");
  uri.AddPathSegment(request.GetOutpostId());
  return DeleteOutpostOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOutpostOutcomeCallable OutpostsClient::DeleteOutpostCallable(const DeleteOutpostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOutpostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOutpost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::DeleteOutpostAsync(const DeleteOutpostRequest& request, const DeleteOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOutpostAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::DeleteOutpostAsyncHelper(const DeleteOutpostRequest& request, const DeleteOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOutpost(request), context);
}

DeleteSiteOutcome OutpostsClient::DeleteSite(const DeleteSiteRequest& request) const
{
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSite", "Required field: SiteId, is not set");
    return DeleteSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  return DeleteSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSiteOutcomeCallable OutpostsClient::DeleteSiteCallable(const DeleteSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::DeleteSiteAsync(const DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSiteAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::DeleteSiteAsyncHelper(const DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSite(request), context);
}

GetCatalogItemOutcome OutpostsClient::GetCatalogItem(const GetCatalogItemRequest& request) const
{
  if (!request.CatalogItemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCatalogItem", "Required field: CatalogItemId, is not set");
    return GetCatalogItemOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CatalogItemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/catalog/item/");
  uri.AddPathSegment(request.GetCatalogItemId());
  return GetCatalogItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCatalogItemOutcomeCallable OutpostsClient::GetCatalogItemCallable(const GetCatalogItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCatalogItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCatalogItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetCatalogItemAsync(const GetCatalogItemRequest& request, const GetCatalogItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCatalogItemAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetCatalogItemAsyncHelper(const GetCatalogItemRequest& request, const GetCatalogItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCatalogItem(request), context);
}

GetConnectionOutcome OutpostsClient::GetConnection(const GetConnectionRequest& request) const
{
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: ConnectionId, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connections/");
  uri.AddPathSegment(request.GetConnectionId());
  return GetConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionOutcomeCallable OutpostsClient::GetConnectionCallable(const GetConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetConnectionAsync(const GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectionAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetConnectionAsyncHelper(const GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnection(request), context);
}

GetOrderOutcome OutpostsClient::GetOrder(const GetOrderRequest& request) const
{
  if (!request.OrderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOrder", "Required field: OrderId, is not set");
    return GetOrderOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/orders/");
  uri.AddPathSegment(request.GetOrderId());
  return GetOrderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOrderOutcomeCallable OutpostsClient::GetOrderCallable(const GetOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetOrderAsync(const GetOrderRequest& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOrderAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetOrderAsyncHelper(const GetOrderRequest& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOrder(request), context);
}

GetOutpostOutcome OutpostsClient::GetOutpost(const GetOutpostRequest& request) const
{
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOutpost", "Required field: OutpostId, is not set");
    return GetOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/outposts/");
  uri.AddPathSegment(request.GetOutpostId());
  return GetOutpostOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOutpostOutcomeCallable OutpostsClient::GetOutpostCallable(const GetOutpostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOutpostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOutpost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetOutpostAsync(const GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOutpostAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetOutpostAsyncHelper(const GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOutpost(request), context);
}

GetOutpostInstanceTypesOutcome OutpostsClient::GetOutpostInstanceTypes(const GetOutpostInstanceTypesRequest& request) const
{
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOutpostInstanceTypes", "Required field: OutpostId, is not set");
    return GetOutpostInstanceTypesOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/outposts/");
  uri.AddPathSegment(request.GetOutpostId());
  uri.AddPathSegments("/instanceTypes");
  return GetOutpostInstanceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOutpostInstanceTypesOutcomeCallable OutpostsClient::GetOutpostInstanceTypesCallable(const GetOutpostInstanceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOutpostInstanceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOutpostInstanceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetOutpostInstanceTypesAsync(const GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOutpostInstanceTypesAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetOutpostInstanceTypesAsyncHelper(const GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOutpostInstanceTypes(request), context);
}

GetSiteOutcome OutpostsClient::GetSite(const GetSiteRequest& request) const
{
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSite", "Required field: SiteId, is not set");
    return GetSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  return GetSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSiteOutcomeCallable OutpostsClient::GetSiteCallable(const GetSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetSiteAsync(const GetSiteRequest& request, const GetSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSiteAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetSiteAsyncHelper(const GetSiteRequest& request, const GetSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSite(request), context);
}

GetSiteAddressOutcome OutpostsClient::GetSiteAddress(const GetSiteAddressRequest& request) const
{
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSiteAddress", "Required field: SiteId, is not set");
    return GetSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  if (!request.AddressTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSiteAddress", "Required field: AddressType, is not set");
    return GetSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddressType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  uri.AddPathSegments("/address");
  return GetSiteAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSiteAddressOutcomeCallable OutpostsClient::GetSiteAddressCallable(const GetSiteAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSiteAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSiteAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetSiteAddressAsync(const GetSiteAddressRequest& request, const GetSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSiteAddressAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetSiteAddressAsyncHelper(const GetSiteAddressRequest& request, const GetSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSiteAddress(request), context);
}

ListAssetsOutcome OutpostsClient::ListAssets(const ListAssetsRequest& request) const
{
  if (!request.OutpostIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssets", "Required field: OutpostIdentifier, is not set");
    return ListAssetsOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/outposts/");
  uri.AddPathSegment(request.GetOutpostIdentifier());
  uri.AddPathSegments("/assets");
  return ListAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssetsOutcomeCallable OutpostsClient::ListAssetsCallable(const ListAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListAssetsAsync(const ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssetsAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListAssetsAsyncHelper(const ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssets(request), context);
}

ListCatalogItemsOutcome OutpostsClient::ListCatalogItems(const ListCatalogItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/catalog/items");
  return ListCatalogItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCatalogItemsOutcomeCallable OutpostsClient::ListCatalogItemsCallable(const ListCatalogItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCatalogItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCatalogItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListCatalogItemsAsync(const ListCatalogItemsRequest& request, const ListCatalogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCatalogItemsAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListCatalogItemsAsyncHelper(const ListCatalogItemsRequest& request, const ListCatalogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCatalogItems(request), context);
}

ListOrdersOutcome OutpostsClient::ListOrders(const ListOrdersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-orders");
  return ListOrdersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrdersOutcomeCallable OutpostsClient::ListOrdersCallable(const ListOrdersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrdersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListOrdersAsync(const ListOrdersRequest& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOrdersAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListOrdersAsyncHelper(const ListOrdersRequest& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOrders(request), context);
}

ListOutpostsOutcome OutpostsClient::ListOutposts(const ListOutpostsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/outposts");
  return ListOutpostsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOutpostsOutcomeCallable OutpostsClient::ListOutpostsCallable(const ListOutpostsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOutpostsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOutposts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListOutpostsAsync(const ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOutpostsAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListOutpostsAsyncHelper(const ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOutposts(request), context);
}

ListSitesOutcome OutpostsClient::ListSites(const ListSitesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites");
  return ListSitesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSitesOutcomeCallable OutpostsClient::ListSitesCallable(const ListSitesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListSitesAsync(const ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSitesAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListSitesAsyncHelper(const ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSites(request), context);
}

ListTagsForResourceOutcome OutpostsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable OutpostsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartConnectionOutcome OutpostsClient::StartConnection(const StartConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/connections");
  return StartConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartConnectionOutcomeCallable OutpostsClient::StartConnectionCallable(const StartConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::StartConnectionAsync(const StartConnectionRequest& request, const StartConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartConnectionAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::StartConnectionAsyncHelper(const StartConnectionRequest& request, const StartConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartConnection(request), context);
}

TagResourceOutcome OutpostsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable OutpostsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome OutpostsClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable OutpostsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateOutpostOutcome OutpostsClient::UpdateOutpost(const UpdateOutpostRequest& request) const
{
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOutpost", "Required field: OutpostId, is not set");
    return UpdateOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/outposts/");
  uri.AddPathSegment(request.GetOutpostId());
  return UpdateOutpostOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateOutpostOutcomeCallable OutpostsClient::UpdateOutpostCallable(const UpdateOutpostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOutpostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOutpost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::UpdateOutpostAsync(const UpdateOutpostRequest& request, const UpdateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateOutpostAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::UpdateOutpostAsyncHelper(const UpdateOutpostRequest& request, const UpdateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateOutpost(request), context);
}

UpdateSiteOutcome OutpostsClient::UpdateSite(const UpdateSiteRequest& request) const
{
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSite", "Required field: SiteId, is not set");
    return UpdateSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  return UpdateSiteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSiteOutcomeCallable OutpostsClient::UpdateSiteCallable(const UpdateSiteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSiteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::UpdateSiteAsync(const UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSiteAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::UpdateSiteAsyncHelper(const UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSite(request), context);
}

UpdateSiteAddressOutcome OutpostsClient::UpdateSiteAddress(const UpdateSiteAddressRequest& request) const
{
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSiteAddress", "Required field: SiteId, is not set");
    return UpdateSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  uri.AddPathSegments("/address");
  return UpdateSiteAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSiteAddressOutcomeCallable OutpostsClient::UpdateSiteAddressCallable(const UpdateSiteAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSiteAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSiteAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::UpdateSiteAddressAsync(const UpdateSiteAddressRequest& request, const UpdateSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSiteAddressAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::UpdateSiteAddressAsyncHelper(const UpdateSiteAddressRequest& request, const UpdateSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSiteAddress(request), context);
}

UpdateSiteRackPhysicalPropertiesOutcome OutpostsClient::UpdateSiteRackPhysicalProperties(const UpdateSiteRackPhysicalPropertiesRequest& request) const
{
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSiteRackPhysicalProperties", "Required field: SiteId, is not set");
    return UpdateSiteRackPhysicalPropertiesOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sites/");
  uri.AddPathSegment(request.GetSiteId());
  uri.AddPathSegments("/rackPhysicalProperties");
  return UpdateSiteRackPhysicalPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSiteRackPhysicalPropertiesOutcomeCallable OutpostsClient::UpdateSiteRackPhysicalPropertiesCallable(const UpdateSiteRackPhysicalPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSiteRackPhysicalPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSiteRackPhysicalProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::UpdateSiteRackPhysicalPropertiesAsync(const UpdateSiteRackPhysicalPropertiesRequest& request, const UpdateSiteRackPhysicalPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSiteRackPhysicalPropertiesAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::UpdateSiteRackPhysicalPropertiesAsyncHelper(const UpdateSiteRackPhysicalPropertiesRequest& request, const UpdateSiteRackPhysicalPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSiteRackPhysicalProperties(request), context);
}

