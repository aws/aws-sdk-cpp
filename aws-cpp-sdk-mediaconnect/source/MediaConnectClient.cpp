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

#include <aws/mediaconnect/MediaConnectClient.h>
#include <aws/mediaconnect/MediaConnectEndpoint.h>
#include <aws/mediaconnect/MediaConnectErrorMarshaller.h>
#include <aws/mediaconnect/model/AddFlowOutputsRequest.h>
#include <aws/mediaconnect/model/AddFlowSourcesRequest.h>
#include <aws/mediaconnect/model/AddFlowVpcInterfacesRequest.h>
#include <aws/mediaconnect/model/CreateFlowRequest.h>
#include <aws/mediaconnect/model/DeleteFlowRequest.h>
#include <aws/mediaconnect/model/DescribeFlowRequest.h>
#include <aws/mediaconnect/model/DescribeOfferingRequest.h>
#include <aws/mediaconnect/model/DescribeReservationRequest.h>
#include <aws/mediaconnect/model/GrantFlowEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListFlowsRequest.h>
#include <aws/mediaconnect/model/ListOfferingsRequest.h>
#include <aws/mediaconnect/model/ListReservationsRequest.h>
#include <aws/mediaconnect/model/ListTagsForResourceRequest.h>
#include <aws/mediaconnect/model/PurchaseOfferingRequest.h>
#include <aws/mediaconnect/model/RemoveFlowOutputRequest.h>
#include <aws/mediaconnect/model/RemoveFlowSourceRequest.h>
#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceRequest.h>
#include <aws/mediaconnect/model/RevokeFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/StartFlowRequest.h>
#include <aws/mediaconnect/model/StopFlowRequest.h>
#include <aws/mediaconnect/model/TagResourceRequest.h>
#include <aws/mediaconnect/model/UntagResourceRequest.h>
#include <aws/mediaconnect/model/UpdateFlowRequest.h>
#include <aws/mediaconnect/model/UpdateFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/UpdateFlowOutputRequest.h>
#include <aws/mediaconnect/model/UpdateFlowSourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaConnect;
using namespace Aws::MediaConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediaconnect";
static const char* ALLOCATION_TAG = "MediaConnectClient";


MediaConnectClient::MediaConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConnectClient::~MediaConnectClient()
{
}

void MediaConnectClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("MediaConnect");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaConnectEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaConnectClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddFlowOutputsOutcome MediaConnectClient::AddFlowOutputs(const AddFlowOutputsRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowOutputs", "Required field: FlowArn, is not set");
    return AddFlowOutputsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/outputs";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddFlowOutputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddFlowOutputsOutcomeCallable MediaConnectClient::AddFlowOutputsCallable(const AddFlowOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddFlowOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddFlowOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::AddFlowOutputsAsync(const AddFlowOutputsRequest& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddFlowOutputsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::AddFlowOutputsAsyncHelper(const AddFlowOutputsRequest& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddFlowOutputs(request), context);
}

AddFlowSourcesOutcome MediaConnectClient::AddFlowSources(const AddFlowSourcesRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowSources", "Required field: FlowArn, is not set");
    return AddFlowSourcesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/source";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddFlowSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddFlowSourcesOutcomeCallable MediaConnectClient::AddFlowSourcesCallable(const AddFlowSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddFlowSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddFlowSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::AddFlowSourcesAsync(const AddFlowSourcesRequest& request, const AddFlowSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddFlowSourcesAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::AddFlowSourcesAsyncHelper(const AddFlowSourcesRequest& request, const AddFlowSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddFlowSources(request), context);
}

AddFlowVpcInterfacesOutcome MediaConnectClient::AddFlowVpcInterfaces(const AddFlowVpcInterfacesRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowVpcInterfaces", "Required field: FlowArn, is not set");
    return AddFlowVpcInterfacesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/vpcInterfaces";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddFlowVpcInterfacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddFlowVpcInterfacesOutcomeCallable MediaConnectClient::AddFlowVpcInterfacesCallable(const AddFlowVpcInterfacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddFlowVpcInterfacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddFlowVpcInterfaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::AddFlowVpcInterfacesAsync(const AddFlowVpcInterfacesRequest& request, const AddFlowVpcInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddFlowVpcInterfacesAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::AddFlowVpcInterfacesAsyncHelper(const AddFlowVpcInterfacesRequest& request, const AddFlowVpcInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddFlowVpcInterfaces(request), context);
}

CreateFlowOutcome MediaConnectClient::CreateFlow(const CreateFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFlowOutcomeCallable MediaConnectClient::CreateFlowCallable(const CreateFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::CreateFlowAsync(const CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::CreateFlowAsyncHelper(const CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFlow(request), context);
}

DeleteFlowOutcome MediaConnectClient::DeleteFlow(const DeleteFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFlow", "Required field: FlowArn, is not set");
    return DeleteFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFlowOutcomeCallable MediaConnectClient::DeleteFlowCallable(const DeleteFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::DeleteFlowAsync(const DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::DeleteFlowAsyncHelper(const DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFlow(request), context);
}

DescribeFlowOutcome MediaConnectClient::DescribeFlow(const DescribeFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFlow", "Required field: FlowArn, is not set");
    return DescribeFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowOutcomeCallable MediaConnectClient::DescribeFlowCallable(const DescribeFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::DescribeFlowAsyncHelper(const DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFlow(request), context);
}

DescribeOfferingOutcome MediaConnectClient::DescribeOffering(const DescribeOfferingRequest& request) const
{
  if (!request.OfferingArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingArn, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/offerings/";
  ss << request.GetOfferingArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOfferingOutcomeCallable MediaConnectClient::DescribeOfferingCallable(const DescribeOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::DescribeOfferingAsync(const DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOfferingAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::DescribeOfferingAsyncHelper(const DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOffering(request), context);
}

DescribeReservationOutcome MediaConnectClient::DescribeReservation(const DescribeReservationRequest& request) const
{
  if (!request.ReservationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationArn, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/reservations/";
  ss << request.GetReservationArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeReservationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservationOutcomeCallable MediaConnectClient::DescribeReservationCallable(const DescribeReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::DescribeReservationAsync(const DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservationAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::DescribeReservationAsyncHelper(const DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservation(request), context);
}

GrantFlowEntitlementsOutcome MediaConnectClient::GrantFlowEntitlements(const GrantFlowEntitlementsRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GrantFlowEntitlements", "Required field: FlowArn, is not set");
    return GrantFlowEntitlementsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/entitlements";
  uri.SetPath(uri.GetPath() + ss.str());
  return GrantFlowEntitlementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GrantFlowEntitlementsOutcomeCallable MediaConnectClient::GrantFlowEntitlementsCallable(const GrantFlowEntitlementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GrantFlowEntitlementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GrantFlowEntitlements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::GrantFlowEntitlementsAsync(const GrantFlowEntitlementsRequest& request, const GrantFlowEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GrantFlowEntitlementsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::GrantFlowEntitlementsAsyncHelper(const GrantFlowEntitlementsRequest& request, const GrantFlowEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GrantFlowEntitlements(request), context);
}

ListEntitlementsOutcome MediaConnectClient::ListEntitlements(const ListEntitlementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/entitlements";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEntitlementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEntitlementsOutcomeCallable MediaConnectClient::ListEntitlementsCallable(const ListEntitlementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitlementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitlements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListEntitlementsAsync(const ListEntitlementsRequest& request, const ListEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEntitlementsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListEntitlementsAsyncHelper(const ListEntitlementsRequest& request, const ListEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntitlements(request), context);
}

ListFlowsOutcome MediaConnectClient::ListFlows(const ListFlowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListFlowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFlowsOutcomeCallable MediaConnectClient::ListFlowsCallable(const ListFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListFlowsAsync(const ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFlowsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListFlowsAsyncHelper(const ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFlows(request), context);
}

ListOfferingsOutcome MediaConnectClient::ListOfferings(const ListOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/offerings";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingsOutcomeCallable MediaConnectClient::ListOfferingsCallable(const ListOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListOfferingsAsync(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOfferingsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListOfferingsAsyncHelper(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOfferings(request), context);
}

ListReservationsOutcome MediaConnectClient::ListReservations(const ListReservationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/reservations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListReservationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReservationsOutcomeCallable MediaConnectClient::ListReservationsCallable(const ListReservationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReservationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReservations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListReservationsAsync(const ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReservationsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListReservationsAsyncHelper(const ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReservations(request), context);
}

ListTagsForResourceOutcome MediaConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaConnectClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PurchaseOfferingOutcome MediaConnectClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  if (!request.OfferingArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingArn, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/offerings/";
  ss << request.GetOfferingArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return PurchaseOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PurchaseOfferingOutcomeCallable MediaConnectClient::PurchaseOfferingCallable(const PurchaseOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::PurchaseOfferingAsync(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseOfferingAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::PurchaseOfferingAsyncHelper(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseOffering(request), context);
}

RemoveFlowOutputOutcome MediaConnectClient::RemoveFlowOutput(const RemoveFlowOutputRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: FlowArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: OutputArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutputArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/outputs/";
  ss << request.GetOutputArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveFlowOutputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveFlowOutputOutcomeCallable MediaConnectClient::RemoveFlowOutputCallable(const RemoveFlowOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFlowOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFlowOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::RemoveFlowOutputAsync(const RemoveFlowOutputRequest& request, const RemoveFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveFlowOutputAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::RemoveFlowOutputAsyncHelper(const RemoveFlowOutputRequest& request, const RemoveFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveFlowOutput(request), context);
}

RemoveFlowSourceOutcome MediaConnectClient::RemoveFlowSource(const RemoveFlowSourceRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowSource", "Required field: FlowArn, is not set");
    return RemoveFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.SourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowSource", "Required field: SourceArn, is not set");
    return RemoveFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/source/";
  ss << request.GetSourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveFlowSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveFlowSourceOutcomeCallable MediaConnectClient::RemoveFlowSourceCallable(const RemoveFlowSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFlowSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFlowSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::RemoveFlowSourceAsync(const RemoveFlowSourceRequest& request, const RemoveFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveFlowSourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::RemoveFlowSourceAsyncHelper(const RemoveFlowSourceRequest& request, const RemoveFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveFlowSource(request), context);
}

RemoveFlowVpcInterfaceOutcome MediaConnectClient::RemoveFlowVpcInterface(const RemoveFlowVpcInterfaceRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowVpcInterface", "Required field: FlowArn, is not set");
    return RemoveFlowVpcInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.VpcInterfaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowVpcInterface", "Required field: VpcInterfaceName, is not set");
    return RemoveFlowVpcInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcInterfaceName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/vpcInterfaces/";
  ss << request.GetVpcInterfaceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveFlowVpcInterfaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveFlowVpcInterfaceOutcomeCallable MediaConnectClient::RemoveFlowVpcInterfaceCallable(const RemoveFlowVpcInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFlowVpcInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFlowVpcInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::RemoveFlowVpcInterfaceAsync(const RemoveFlowVpcInterfaceRequest& request, const RemoveFlowVpcInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveFlowVpcInterfaceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::RemoveFlowVpcInterfaceAsyncHelper(const RemoveFlowVpcInterfaceRequest& request, const RemoveFlowVpcInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveFlowVpcInterface(request), context);
}

RevokeFlowEntitlementOutcome MediaConnectClient::RevokeFlowEntitlement(const RevokeFlowEntitlementRequest& request) const
{
  if (!request.EntitlementArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: EntitlementArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: FlowArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/entitlements/";
  ss << request.GetEntitlementArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return RevokeFlowEntitlementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RevokeFlowEntitlementOutcomeCallable MediaConnectClient::RevokeFlowEntitlementCallable(const RevokeFlowEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeFlowEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeFlowEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::RevokeFlowEntitlementAsync(const RevokeFlowEntitlementRequest& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeFlowEntitlementAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::RevokeFlowEntitlementAsyncHelper(const RevokeFlowEntitlementRequest& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeFlowEntitlement(request), context);
}

StartFlowOutcome MediaConnectClient::StartFlow(const StartFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFlow", "Required field: FlowArn, is not set");
    return StartFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/start/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return StartFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFlowOutcomeCallable MediaConnectClient::StartFlowCallable(const StartFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::StartFlowAsync(const StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::StartFlowAsyncHelper(const StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFlow(request), context);
}

StopFlowOutcome MediaConnectClient::StopFlow(const StopFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopFlow", "Required field: FlowArn, is not set");
    return StopFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/stop/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return StopFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFlowOutcomeCallable MediaConnectClient::StopFlowCallable(const StopFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::StopFlowAsync(const StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::StopFlowAsyncHelper(const StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopFlow(request), context);
}

TagResourceOutcome MediaConnectClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MediaConnectClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome MediaConnectClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MediaConnectClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateFlowOutcome MediaConnectClient::UpdateFlow(const UpdateFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: FlowArn, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowOutcomeCallable MediaConnectClient::UpdateFlowCallable(const UpdateFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UpdateFlowAsync(const UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UpdateFlowAsyncHelper(const UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlow(request), context);
}

UpdateFlowEntitlementOutcome MediaConnectClient::UpdateFlowEntitlement(const UpdateFlowEntitlementRequest& request) const
{
  if (!request.EntitlementArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: EntitlementArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: FlowArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/entitlements/";
  ss << request.GetEntitlementArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFlowEntitlementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowEntitlementOutcomeCallable MediaConnectClient::UpdateFlowEntitlementCallable(const UpdateFlowEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlowEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UpdateFlowEntitlementAsync(const UpdateFlowEntitlementRequest& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowEntitlementAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UpdateFlowEntitlementAsyncHelper(const UpdateFlowEntitlementRequest& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlowEntitlement(request), context);
}

UpdateFlowOutputOutcome MediaConnectClient::UpdateFlowOutput(const UpdateFlowOutputRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: FlowArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: OutputArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutputArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/outputs/";
  ss << request.GetOutputArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFlowOutputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowOutputOutcomeCallable MediaConnectClient::UpdateFlowOutputCallable(const UpdateFlowOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlowOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UpdateFlowOutputAsync(const UpdateFlowOutputRequest& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowOutputAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UpdateFlowOutputAsyncHelper(const UpdateFlowOutputRequest& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlowOutput(request), context);
}

UpdateFlowSourceOutcome MediaConnectClient::UpdateFlowSource(const UpdateFlowSourceRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: FlowArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.SourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: SourceArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/source/";
  ss << request.GetSourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFlowSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowSourceOutcomeCallable MediaConnectClient::UpdateFlowSourceCallable(const UpdateFlowSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlowSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UpdateFlowSourceAsync(const UpdateFlowSourceRequest& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowSourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UpdateFlowSourceAsyncHelper(const UpdateFlowSourceRequest& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlowSource(request), context);
}

