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

#include <aws/location/LocationServiceClient.h>
#include <aws/location/LocationServiceEndpoint.h>
#include <aws/location/LocationServiceErrorMarshaller.h>
#include <aws/location/model/AssociateTrackerConsumerRequest.h>
#include <aws/location/model/BatchDeleteDevicePositionHistoryRequest.h>
#include <aws/location/model/BatchDeleteGeofenceRequest.h>
#include <aws/location/model/BatchEvaluateGeofencesRequest.h>
#include <aws/location/model/BatchGetDevicePositionRequest.h>
#include <aws/location/model/BatchPutGeofenceRequest.h>
#include <aws/location/model/BatchUpdateDevicePositionRequest.h>
#include <aws/location/model/CalculateRouteRequest.h>
#include <aws/location/model/CalculateRouteMatrixRequest.h>
#include <aws/location/model/CreateGeofenceCollectionRequest.h>
#include <aws/location/model/CreateMapRequest.h>
#include <aws/location/model/CreatePlaceIndexRequest.h>
#include <aws/location/model/CreateRouteCalculatorRequest.h>
#include <aws/location/model/CreateTrackerRequest.h>
#include <aws/location/model/DeleteGeofenceCollectionRequest.h>
#include <aws/location/model/DeleteMapRequest.h>
#include <aws/location/model/DeletePlaceIndexRequest.h>
#include <aws/location/model/DeleteRouteCalculatorRequest.h>
#include <aws/location/model/DeleteTrackerRequest.h>
#include <aws/location/model/DescribeGeofenceCollectionRequest.h>
#include <aws/location/model/DescribeMapRequest.h>
#include <aws/location/model/DescribePlaceIndexRequest.h>
#include <aws/location/model/DescribeRouteCalculatorRequest.h>
#include <aws/location/model/DescribeTrackerRequest.h>
#include <aws/location/model/DisassociateTrackerConsumerRequest.h>
#include <aws/location/model/GetDevicePositionRequest.h>
#include <aws/location/model/GetDevicePositionHistoryRequest.h>
#include <aws/location/model/GetGeofenceRequest.h>
#include <aws/location/model/GetMapGlyphsRequest.h>
#include <aws/location/model/GetMapSpritesRequest.h>
#include <aws/location/model/GetMapStyleDescriptorRequest.h>
#include <aws/location/model/GetMapTileRequest.h>
#include <aws/location/model/ListDevicePositionsRequest.h>
#include <aws/location/model/ListGeofenceCollectionsRequest.h>
#include <aws/location/model/ListGeofencesRequest.h>
#include <aws/location/model/ListMapsRequest.h>
#include <aws/location/model/ListPlaceIndexesRequest.h>
#include <aws/location/model/ListRouteCalculatorsRequest.h>
#include <aws/location/model/ListTagsForResourceRequest.h>
#include <aws/location/model/ListTrackerConsumersRequest.h>
#include <aws/location/model/ListTrackersRequest.h>
#include <aws/location/model/PutGeofenceRequest.h>
#include <aws/location/model/SearchPlaceIndexForPositionRequest.h>
#include <aws/location/model/SearchPlaceIndexForSuggestionsRequest.h>
#include <aws/location/model/SearchPlaceIndexForTextRequest.h>
#include <aws/location/model/TagResourceRequest.h>
#include <aws/location/model/UntagResourceRequest.h>
#include <aws/location/model/UpdateGeofenceCollectionRequest.h>
#include <aws/location/model/UpdateMapRequest.h>
#include <aws/location/model/UpdatePlaceIndexRequest.h>
#include <aws/location/model/UpdateRouteCalculatorRequest.h>
#include <aws/location/model/UpdateTrackerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LocationService;
using namespace Aws::LocationService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "geo";
static const char* ALLOCATION_TAG = "LocationServiceClient";

LocationServiceClient::LocationServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LocationServiceClient::LocationServiceClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LocationServiceClient::LocationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LocationServiceClient::~LocationServiceClient()
{
}

void LocationServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Location");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = LocationServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void LocationServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

AssociateTrackerConsumerOutcome LocationServiceClient::AssociateTrackerConsumer(const AssociateTrackerConsumerRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTrackerConsumer", "Required field: TrackerName, is not set");
    return AssociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("AssociateTrackerConsumer", "Invalid DNS host: " << uri.GetAuthority());
      return AssociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/consumers");
  return AssociateTrackerConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTrackerConsumerOutcomeCallable LocationServiceClient::AssociateTrackerConsumerCallable(const AssociateTrackerConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTrackerConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTrackerConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientAssociateTrackerConsumerAsyncHelper(LocationServiceClient const * const clientThis, const AssociateTrackerConsumerRequest& request, const AssociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateTrackerConsumer(request), context);
}

void LocationServiceClient::AssociateTrackerConsumerAsync(const AssociateTrackerConsumerRequest& request, const AssociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientAssociateTrackerConsumerAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteDevicePositionHistoryOutcome LocationServiceClient::BatchDeleteDevicePositionHistory(const BatchDeleteDevicePositionHistoryRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteDevicePositionHistory", "Required field: TrackerName, is not set");
    return BatchDeleteDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchDeleteDevicePositionHistory", "Invalid DNS host: " << uri.GetAuthority());
      return BatchDeleteDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/delete-positions");
  return BatchDeleteDevicePositionHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteDevicePositionHistoryOutcomeCallable LocationServiceClient::BatchDeleteDevicePositionHistoryCallable(const BatchDeleteDevicePositionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteDevicePositionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteDevicePositionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientBatchDeleteDevicePositionHistoryAsyncHelper(LocationServiceClient const * const clientThis, const BatchDeleteDevicePositionHistoryRequest& request, const BatchDeleteDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteDevicePositionHistory(request), context);
}

void LocationServiceClient::BatchDeleteDevicePositionHistoryAsync(const BatchDeleteDevicePositionHistoryRequest& request, const BatchDeleteDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientBatchDeleteDevicePositionHistoryAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteGeofenceOutcome LocationServiceClient::BatchDeleteGeofence(const BatchDeleteGeofenceRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteGeofence", "Required field: CollectionName, is not set");
    return BatchDeleteGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchDeleteGeofence", "Invalid DNS host: " << uri.GetAuthority());
      return BatchDeleteGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  uri.AddPathSegments("/delete-geofences");
  return BatchDeleteGeofenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteGeofenceOutcomeCallable LocationServiceClient::BatchDeleteGeofenceCallable(const BatchDeleteGeofenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteGeofenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteGeofence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientBatchDeleteGeofenceAsyncHelper(LocationServiceClient const * const clientThis, const BatchDeleteGeofenceRequest& request, const BatchDeleteGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteGeofence(request), context);
}

void LocationServiceClient::BatchDeleteGeofenceAsync(const BatchDeleteGeofenceRequest& request, const BatchDeleteGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientBatchDeleteGeofenceAsyncHelper( this, request, handler, context ); } );
}

BatchEvaluateGeofencesOutcome LocationServiceClient::BatchEvaluateGeofences(const BatchEvaluateGeofencesRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchEvaluateGeofences", "Required field: CollectionName, is not set");
    return BatchEvaluateGeofencesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchEvaluateGeofences", "Invalid DNS host: " << uri.GetAuthority());
      return BatchEvaluateGeofencesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  uri.AddPathSegments("/positions");
  return BatchEvaluateGeofencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchEvaluateGeofencesOutcomeCallable LocationServiceClient::BatchEvaluateGeofencesCallable(const BatchEvaluateGeofencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchEvaluateGeofencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchEvaluateGeofences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientBatchEvaluateGeofencesAsyncHelper(LocationServiceClient const * const clientThis, const BatchEvaluateGeofencesRequest& request, const BatchEvaluateGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchEvaluateGeofences(request), context);
}

void LocationServiceClient::BatchEvaluateGeofencesAsync(const BatchEvaluateGeofencesRequest& request, const BatchEvaluateGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientBatchEvaluateGeofencesAsyncHelper( this, request, handler, context ); } );
}

BatchGetDevicePositionOutcome LocationServiceClient::BatchGetDevicePosition(const BatchGetDevicePositionRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetDevicePosition", "Required field: TrackerName, is not set");
    return BatchGetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchGetDevicePosition", "Invalid DNS host: " << uri.GetAuthority());
      return BatchGetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/get-positions");
  return BatchGetDevicePositionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDevicePositionOutcomeCallable LocationServiceClient::BatchGetDevicePositionCallable(const BatchGetDevicePositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDevicePositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDevicePosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientBatchGetDevicePositionAsyncHelper(LocationServiceClient const * const clientThis, const BatchGetDevicePositionRequest& request, const BatchGetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetDevicePosition(request), context);
}

void LocationServiceClient::BatchGetDevicePositionAsync(const BatchGetDevicePositionRequest& request, const BatchGetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientBatchGetDevicePositionAsyncHelper( this, request, handler, context ); } );
}

BatchPutGeofenceOutcome LocationServiceClient::BatchPutGeofence(const BatchPutGeofenceRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchPutGeofence", "Required field: CollectionName, is not set");
    return BatchPutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchPutGeofence", "Invalid DNS host: " << uri.GetAuthority());
      return BatchPutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  uri.AddPathSegments("/put-geofences");
  return BatchPutGeofenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchPutGeofenceOutcomeCallable LocationServiceClient::BatchPutGeofenceCallable(const BatchPutGeofenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutGeofenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutGeofence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientBatchPutGeofenceAsyncHelper(LocationServiceClient const * const clientThis, const BatchPutGeofenceRequest& request, const BatchPutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchPutGeofence(request), context);
}

void LocationServiceClient::BatchPutGeofenceAsync(const BatchPutGeofenceRequest& request, const BatchPutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientBatchPutGeofenceAsyncHelper( this, request, handler, context ); } );
}

BatchUpdateDevicePositionOutcome LocationServiceClient::BatchUpdateDevicePosition(const BatchUpdateDevicePositionRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateDevicePosition", "Required field: TrackerName, is not set");
    return BatchUpdateDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchUpdateDevicePosition", "Invalid DNS host: " << uri.GetAuthority());
      return BatchUpdateDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/positions");
  return BatchUpdateDevicePositionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateDevicePositionOutcomeCallable LocationServiceClient::BatchUpdateDevicePositionCallable(const BatchUpdateDevicePositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateDevicePositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateDevicePosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientBatchUpdateDevicePositionAsyncHelper(LocationServiceClient const * const clientThis, const BatchUpdateDevicePositionRequest& request, const BatchUpdateDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchUpdateDevicePosition(request), context);
}

void LocationServiceClient::BatchUpdateDevicePositionAsync(const BatchUpdateDevicePositionRequest& request, const BatchUpdateDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientBatchUpdateDevicePositionAsyncHelper( this, request, handler, context ); } );
}

CalculateRouteOutcome LocationServiceClient::CalculateRoute(const CalculateRouteRequest& request) const
{
  if (!request.CalculatorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CalculateRoute", "Required field: CalculatorName, is not set");
    return CalculateRouteOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("routes." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CalculateRoute", "Invalid DNS host: " << uri.GetAuthority());
      return CalculateRouteOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/routes/v0/calculators/");
  uri.AddPathSegment(request.GetCalculatorName());
  uri.AddPathSegments("/calculate/route");
  return CalculateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CalculateRouteOutcomeCallable LocationServiceClient::CalculateRouteCallable(const CalculateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CalculateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CalculateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientCalculateRouteAsyncHelper(LocationServiceClient const * const clientThis, const CalculateRouteRequest& request, const CalculateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CalculateRoute(request), context);
}

void LocationServiceClient::CalculateRouteAsync(const CalculateRouteRequest& request, const CalculateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientCalculateRouteAsyncHelper( this, request, handler, context ); } );
}

CalculateRouteMatrixOutcome LocationServiceClient::CalculateRouteMatrix(const CalculateRouteMatrixRequest& request) const
{
  if (!request.CalculatorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CalculateRouteMatrix", "Required field: CalculatorName, is not set");
    return CalculateRouteMatrixOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("routes." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CalculateRouteMatrix", "Invalid DNS host: " << uri.GetAuthority());
      return CalculateRouteMatrixOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/routes/v0/calculators/");
  uri.AddPathSegment(request.GetCalculatorName());
  uri.AddPathSegments("/calculate/route-matrix");
  return CalculateRouteMatrixOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CalculateRouteMatrixOutcomeCallable LocationServiceClient::CalculateRouteMatrixCallable(const CalculateRouteMatrixRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CalculateRouteMatrixOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CalculateRouteMatrix(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientCalculateRouteMatrixAsyncHelper(LocationServiceClient const * const clientThis, const CalculateRouteMatrixRequest& request, const CalculateRouteMatrixResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CalculateRouteMatrix(request), context);
}

void LocationServiceClient::CalculateRouteMatrixAsync(const CalculateRouteMatrixRequest& request, const CalculateRouteMatrixResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientCalculateRouteMatrixAsyncHelper( this, request, handler, context ); } );
}

CreateGeofenceCollectionOutcome LocationServiceClient::CreateGeofenceCollection(const CreateGeofenceCollectionRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateGeofenceCollection", "Invalid DNS host: " << uri.GetAuthority());
      return CreateGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections");
  return CreateGeofenceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGeofenceCollectionOutcomeCallable LocationServiceClient::CreateGeofenceCollectionCallable(const CreateGeofenceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGeofenceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGeofenceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientCreateGeofenceCollectionAsyncHelper(LocationServiceClient const * const clientThis, const CreateGeofenceCollectionRequest& request, const CreateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGeofenceCollection(request), context);
}

void LocationServiceClient::CreateGeofenceCollectionAsync(const CreateGeofenceCollectionRequest& request, const CreateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientCreateGeofenceCollectionAsyncHelper( this, request, handler, context ); } );
}

CreateMapOutcome LocationServiceClient::CreateMap(const CreateMapRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateMap", "Invalid DNS host: " << uri.GetAuthority());
      return CreateMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps");
  return CreateMapOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMapOutcomeCallable LocationServiceClient::CreateMapCallable(const CreateMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientCreateMapAsyncHelper(LocationServiceClient const * const clientThis, const CreateMapRequest& request, const CreateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMap(request), context);
}

void LocationServiceClient::CreateMapAsync(const CreateMapRequest& request, const CreateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientCreateMapAsyncHelper( this, request, handler, context ); } );
}

CreatePlaceIndexOutcome LocationServiceClient::CreatePlaceIndex(const CreatePlaceIndexRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreatePlaceIndex", "Invalid DNS host: " << uri.GetAuthority());
      return CreatePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/indexes");
  return CreatePlaceIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePlaceIndexOutcomeCallable LocationServiceClient::CreatePlaceIndexCallable(const CreatePlaceIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlaceIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlaceIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientCreatePlaceIndexAsyncHelper(LocationServiceClient const * const clientThis, const CreatePlaceIndexRequest& request, const CreatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePlaceIndex(request), context);
}

void LocationServiceClient::CreatePlaceIndexAsync(const CreatePlaceIndexRequest& request, const CreatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientCreatePlaceIndexAsyncHelper( this, request, handler, context ); } );
}

CreateRouteCalculatorOutcome LocationServiceClient::CreateRouteCalculator(const CreateRouteCalculatorRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("routes." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateRouteCalculator", "Invalid DNS host: " << uri.GetAuthority());
      return CreateRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/routes/v0/calculators");
  return CreateRouteCalculatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRouteCalculatorOutcomeCallable LocationServiceClient::CreateRouteCalculatorCallable(const CreateRouteCalculatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteCalculatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRouteCalculator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientCreateRouteCalculatorAsyncHelper(LocationServiceClient const * const clientThis, const CreateRouteCalculatorRequest& request, const CreateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRouteCalculator(request), context);
}

void LocationServiceClient::CreateRouteCalculatorAsync(const CreateRouteCalculatorRequest& request, const CreateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientCreateRouteCalculatorAsyncHelper( this, request, handler, context ); } );
}

CreateTrackerOutcome LocationServiceClient::CreateTracker(const CreateTrackerRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateTracker", "Invalid DNS host: " << uri.GetAuthority());
      return CreateTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers");
  return CreateTrackerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrackerOutcomeCallable LocationServiceClient::CreateTrackerCallable(const CreateTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientCreateTrackerAsyncHelper(LocationServiceClient const * const clientThis, const CreateTrackerRequest& request, const CreateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTracker(request), context);
}

void LocationServiceClient::CreateTrackerAsync(const CreateTrackerRequest& request, const CreateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientCreateTrackerAsyncHelper( this, request, handler, context ); } );
}

DeleteGeofenceCollectionOutcome LocationServiceClient::DeleteGeofenceCollection(const DeleteGeofenceCollectionRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGeofenceCollection", "Required field: CollectionName, is not set");
    return DeleteGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteGeofenceCollection", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  return DeleteGeofenceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGeofenceCollectionOutcomeCallable LocationServiceClient::DeleteGeofenceCollectionCallable(const DeleteGeofenceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGeofenceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGeofenceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDeleteGeofenceCollectionAsyncHelper(LocationServiceClient const * const clientThis, const DeleteGeofenceCollectionRequest& request, const DeleteGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGeofenceCollection(request), context);
}

void LocationServiceClient::DeleteGeofenceCollectionAsync(const DeleteGeofenceCollectionRequest& request, const DeleteGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDeleteGeofenceCollectionAsyncHelper( this, request, handler, context ); } );
}

DeleteMapOutcome LocationServiceClient::DeleteMap(const DeleteMapRequest& request) const
{
  if (!request.MapNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMap", "Required field: MapName, is not set");
    return DeleteMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteMap", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps/");
  uri.AddPathSegment(request.GetMapName());
  return DeleteMapOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMapOutcomeCallable LocationServiceClient::DeleteMapCallable(const DeleteMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDeleteMapAsyncHelper(LocationServiceClient const * const clientThis, const DeleteMapRequest& request, const DeleteMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMap(request), context);
}

void LocationServiceClient::DeleteMapAsync(const DeleteMapRequest& request, const DeleteMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDeleteMapAsyncHelper( this, request, handler, context ); } );
}

DeletePlaceIndexOutcome LocationServiceClient::DeletePlaceIndex(const DeletePlaceIndexRequest& request) const
{
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlaceIndex", "Required field: IndexName, is not set");
    return DeletePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeletePlaceIndex", "Invalid DNS host: " << uri.GetAuthority());
      return DeletePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/indexes/");
  uri.AddPathSegment(request.GetIndexName());
  return DeletePlaceIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePlaceIndexOutcomeCallable LocationServiceClient::DeletePlaceIndexCallable(const DeletePlaceIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlaceIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlaceIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDeletePlaceIndexAsyncHelper(LocationServiceClient const * const clientThis, const DeletePlaceIndexRequest& request, const DeletePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePlaceIndex(request), context);
}

void LocationServiceClient::DeletePlaceIndexAsync(const DeletePlaceIndexRequest& request, const DeletePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDeletePlaceIndexAsyncHelper( this, request, handler, context ); } );
}

DeleteRouteCalculatorOutcome LocationServiceClient::DeleteRouteCalculator(const DeleteRouteCalculatorRequest& request) const
{
  if (!request.CalculatorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteCalculator", "Required field: CalculatorName, is not set");
    return DeleteRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("routes." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteRouteCalculator", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/routes/v0/calculators/");
  uri.AddPathSegment(request.GetCalculatorName());
  return DeleteRouteCalculatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteCalculatorOutcomeCallable LocationServiceClient::DeleteRouteCalculatorCallable(const DeleteRouteCalculatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteCalculatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRouteCalculator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDeleteRouteCalculatorAsyncHelper(LocationServiceClient const * const clientThis, const DeleteRouteCalculatorRequest& request, const DeleteRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRouteCalculator(request), context);
}

void LocationServiceClient::DeleteRouteCalculatorAsync(const DeleteRouteCalculatorRequest& request, const DeleteRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDeleteRouteCalculatorAsyncHelper( this, request, handler, context ); } );
}

DeleteTrackerOutcome LocationServiceClient::DeleteTracker(const DeleteTrackerRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTracker", "Required field: TrackerName, is not set");
    return DeleteTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteTracker", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  return DeleteTrackerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrackerOutcomeCallable LocationServiceClient::DeleteTrackerCallable(const DeleteTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDeleteTrackerAsyncHelper(LocationServiceClient const * const clientThis, const DeleteTrackerRequest& request, const DeleteTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTracker(request), context);
}

void LocationServiceClient::DeleteTrackerAsync(const DeleteTrackerRequest& request, const DeleteTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDeleteTrackerAsyncHelper( this, request, handler, context ); } );
}

DescribeGeofenceCollectionOutcome LocationServiceClient::DescribeGeofenceCollection(const DescribeGeofenceCollectionRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGeofenceCollection", "Required field: CollectionName, is not set");
    return DescribeGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeGeofenceCollection", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  return DescribeGeofenceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGeofenceCollectionOutcomeCallable LocationServiceClient::DescribeGeofenceCollectionCallable(const DescribeGeofenceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGeofenceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGeofenceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDescribeGeofenceCollectionAsyncHelper(LocationServiceClient const * const clientThis, const DescribeGeofenceCollectionRequest& request, const DescribeGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGeofenceCollection(request), context);
}

void LocationServiceClient::DescribeGeofenceCollectionAsync(const DescribeGeofenceCollectionRequest& request, const DescribeGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDescribeGeofenceCollectionAsyncHelper( this, request, handler, context ); } );
}

DescribeMapOutcome LocationServiceClient::DescribeMap(const DescribeMapRequest& request) const
{
  if (!request.MapNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMap", "Required field: MapName, is not set");
    return DescribeMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeMap", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps/");
  uri.AddPathSegment(request.GetMapName());
  return DescribeMapOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMapOutcomeCallable LocationServiceClient::DescribeMapCallable(const DescribeMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDescribeMapAsyncHelper(LocationServiceClient const * const clientThis, const DescribeMapRequest& request, const DescribeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMap(request), context);
}

void LocationServiceClient::DescribeMapAsync(const DescribeMapRequest& request, const DescribeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDescribeMapAsyncHelper( this, request, handler, context ); } );
}

DescribePlaceIndexOutcome LocationServiceClient::DescribePlaceIndex(const DescribePlaceIndexRequest& request) const
{
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePlaceIndex", "Required field: IndexName, is not set");
    return DescribePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribePlaceIndex", "Invalid DNS host: " << uri.GetAuthority());
      return DescribePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/indexes/");
  uri.AddPathSegment(request.GetIndexName());
  return DescribePlaceIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePlaceIndexOutcomeCallable LocationServiceClient::DescribePlaceIndexCallable(const DescribePlaceIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePlaceIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePlaceIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDescribePlaceIndexAsyncHelper(LocationServiceClient const * const clientThis, const DescribePlaceIndexRequest& request, const DescribePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePlaceIndex(request), context);
}

void LocationServiceClient::DescribePlaceIndexAsync(const DescribePlaceIndexRequest& request, const DescribePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDescribePlaceIndexAsyncHelper( this, request, handler, context ); } );
}

DescribeRouteCalculatorOutcome LocationServiceClient::DescribeRouteCalculator(const DescribeRouteCalculatorRequest& request) const
{
  if (!request.CalculatorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRouteCalculator", "Required field: CalculatorName, is not set");
    return DescribeRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("routes." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeRouteCalculator", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/routes/v0/calculators/");
  uri.AddPathSegment(request.GetCalculatorName());
  return DescribeRouteCalculatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRouteCalculatorOutcomeCallable LocationServiceClient::DescribeRouteCalculatorCallable(const DescribeRouteCalculatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRouteCalculatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRouteCalculator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDescribeRouteCalculatorAsyncHelper(LocationServiceClient const * const clientThis, const DescribeRouteCalculatorRequest& request, const DescribeRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRouteCalculator(request), context);
}

void LocationServiceClient::DescribeRouteCalculatorAsync(const DescribeRouteCalculatorRequest& request, const DescribeRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDescribeRouteCalculatorAsyncHelper( this, request, handler, context ); } );
}

DescribeTrackerOutcome LocationServiceClient::DescribeTracker(const DescribeTrackerRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTracker", "Required field: TrackerName, is not set");
    return DescribeTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeTracker", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  return DescribeTrackerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrackerOutcomeCallable LocationServiceClient::DescribeTrackerCallable(const DescribeTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDescribeTrackerAsyncHelper(LocationServiceClient const * const clientThis, const DescribeTrackerRequest& request, const DescribeTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTracker(request), context);
}

void LocationServiceClient::DescribeTrackerAsync(const DescribeTrackerRequest& request, const DescribeTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDescribeTrackerAsyncHelper( this, request, handler, context ); } );
}

DisassociateTrackerConsumerOutcome LocationServiceClient::DisassociateTrackerConsumer(const DisassociateTrackerConsumerRequest& request) const
{
  if (!request.ConsumerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTrackerConsumer", "Required field: ConsumerArn, is not set");
    return DisassociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConsumerArn]", false));
  }
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTrackerConsumer", "Required field: TrackerName, is not set");
    return DisassociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DisassociateTrackerConsumer", "Invalid DNS host: " << uri.GetAuthority());
      return DisassociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/consumers/");
  uri.AddPathSegment(request.GetConsumerArn());
  return DisassociateTrackerConsumerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTrackerConsumerOutcomeCallable LocationServiceClient::DisassociateTrackerConsumerCallable(const DisassociateTrackerConsumerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTrackerConsumerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTrackerConsumer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientDisassociateTrackerConsumerAsyncHelper(LocationServiceClient const * const clientThis, const DisassociateTrackerConsumerRequest& request, const DisassociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateTrackerConsumer(request), context);
}

void LocationServiceClient::DisassociateTrackerConsumerAsync(const DisassociateTrackerConsumerRequest& request, const DisassociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientDisassociateTrackerConsumerAsyncHelper( this, request, handler, context ); } );
}

GetDevicePositionOutcome LocationServiceClient::GetDevicePosition(const GetDevicePositionRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicePosition", "Required field: DeviceId, is not set");
    return GetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicePosition", "Required field: TrackerName, is not set");
    return GetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetDevicePosition", "Invalid DNS host: " << uri.GetAuthority());
      return GetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/devices/");
  uri.AddPathSegment(request.GetDeviceId());
  uri.AddPathSegments("/positions/latest");
  return GetDevicePositionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDevicePositionOutcomeCallable LocationServiceClient::GetDevicePositionCallable(const GetDevicePositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicePositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevicePosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientGetDevicePositionAsyncHelper(LocationServiceClient const * const clientThis, const GetDevicePositionRequest& request, const GetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevicePosition(request), context);
}

void LocationServiceClient::GetDevicePositionAsync(const GetDevicePositionRequest& request, const GetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientGetDevicePositionAsyncHelper( this, request, handler, context ); } );
}

GetDevicePositionHistoryOutcome LocationServiceClient::GetDevicePositionHistory(const GetDevicePositionHistoryRequest& request) const
{
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicePositionHistory", "Required field: DeviceId, is not set");
    return GetDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicePositionHistory", "Required field: TrackerName, is not set");
    return GetDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetDevicePositionHistory", "Invalid DNS host: " << uri.GetAuthority());
      return GetDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/devices/");
  uri.AddPathSegment(request.GetDeviceId());
  uri.AddPathSegments("/list-positions");
  return GetDevicePositionHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDevicePositionHistoryOutcomeCallable LocationServiceClient::GetDevicePositionHistoryCallable(const GetDevicePositionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicePositionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevicePositionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientGetDevicePositionHistoryAsyncHelper(LocationServiceClient const * const clientThis, const GetDevicePositionHistoryRequest& request, const GetDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevicePositionHistory(request), context);
}

void LocationServiceClient::GetDevicePositionHistoryAsync(const GetDevicePositionHistoryRequest& request, const GetDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientGetDevicePositionHistoryAsyncHelper( this, request, handler, context ); } );
}

GetGeofenceOutcome LocationServiceClient::GetGeofence(const GetGeofenceRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGeofence", "Required field: CollectionName, is not set");
    return GetGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  if (!request.GeofenceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGeofence", "Required field: GeofenceId, is not set");
    return GetGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GeofenceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetGeofence", "Invalid DNS host: " << uri.GetAuthority());
      return GetGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  uri.AddPathSegments("/geofences/");
  uri.AddPathSegment(request.GetGeofenceId());
  return GetGeofenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGeofenceOutcomeCallable LocationServiceClient::GetGeofenceCallable(const GetGeofenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeofenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeofence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientGetGeofenceAsyncHelper(LocationServiceClient const * const clientThis, const GetGeofenceRequest& request, const GetGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGeofence(request), context);
}

void LocationServiceClient::GetGeofenceAsync(const GetGeofenceRequest& request, const GetGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientGetGeofenceAsyncHelper( this, request, handler, context ); } );
}

GetMapGlyphsOutcome LocationServiceClient::GetMapGlyphs(const GetMapGlyphsRequest& request) const
{
  if (!request.FontStackHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapGlyphs", "Required field: FontStack, is not set");
    return GetMapGlyphsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FontStack]", false));
  }
  if (!request.FontUnicodeRangeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapGlyphs", "Required field: FontUnicodeRange, is not set");
    return GetMapGlyphsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FontUnicodeRange]", false));
  }
  if (!request.MapNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapGlyphs", "Required field: MapName, is not set");
    return GetMapGlyphsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetMapGlyphs", "Invalid DNS host: " << uri.GetAuthority());
      return GetMapGlyphsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps/");
  uri.AddPathSegment(request.GetMapName());
  uri.AddPathSegments("/glyphs/");
  uri.AddPathSegment(request.GetFontStack());
  uri.AddPathSegment(request.GetFontUnicodeRange());
  return GetMapGlyphsOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetMapGlyphsOutcomeCallable LocationServiceClient::GetMapGlyphsCallable(const GetMapGlyphsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMapGlyphsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMapGlyphs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientGetMapGlyphsAsyncHelper(LocationServiceClient const * const clientThis, const GetMapGlyphsRequest& request, const GetMapGlyphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMapGlyphs(request), context);
}

void LocationServiceClient::GetMapGlyphsAsync(const GetMapGlyphsRequest& request, const GetMapGlyphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientGetMapGlyphsAsyncHelper( this, request, handler, context ); } );
}

GetMapSpritesOutcome LocationServiceClient::GetMapSprites(const GetMapSpritesRequest& request) const
{
  if (!request.FileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapSprites", "Required field: FileName, is not set");
    return GetMapSpritesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileName]", false));
  }
  if (!request.MapNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapSprites", "Required field: MapName, is not set");
    return GetMapSpritesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetMapSprites", "Invalid DNS host: " << uri.GetAuthority());
      return GetMapSpritesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps/");
  uri.AddPathSegment(request.GetMapName());
  uri.AddPathSegments("/sprites/");
  uri.AddPathSegment(request.GetFileName());
  return GetMapSpritesOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetMapSpritesOutcomeCallable LocationServiceClient::GetMapSpritesCallable(const GetMapSpritesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMapSpritesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMapSprites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientGetMapSpritesAsyncHelper(LocationServiceClient const * const clientThis, const GetMapSpritesRequest& request, const GetMapSpritesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMapSprites(request), context);
}

void LocationServiceClient::GetMapSpritesAsync(const GetMapSpritesRequest& request, const GetMapSpritesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientGetMapSpritesAsyncHelper( this, request, handler, context ); } );
}

GetMapStyleDescriptorOutcome LocationServiceClient::GetMapStyleDescriptor(const GetMapStyleDescriptorRequest& request) const
{
  if (!request.MapNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapStyleDescriptor", "Required field: MapName, is not set");
    return GetMapStyleDescriptorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetMapStyleDescriptor", "Invalid DNS host: " << uri.GetAuthority());
      return GetMapStyleDescriptorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps/");
  uri.AddPathSegment(request.GetMapName());
  uri.AddPathSegments("/style-descriptor");
  return GetMapStyleDescriptorOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetMapStyleDescriptorOutcomeCallable LocationServiceClient::GetMapStyleDescriptorCallable(const GetMapStyleDescriptorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMapStyleDescriptorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMapStyleDescriptor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientGetMapStyleDescriptorAsyncHelper(LocationServiceClient const * const clientThis, const GetMapStyleDescriptorRequest& request, const GetMapStyleDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMapStyleDescriptor(request), context);
}

void LocationServiceClient::GetMapStyleDescriptorAsync(const GetMapStyleDescriptorRequest& request, const GetMapStyleDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientGetMapStyleDescriptorAsyncHelper( this, request, handler, context ); } );
}

GetMapTileOutcome LocationServiceClient::GetMapTile(const GetMapTileRequest& request) const
{
  if (!request.MapNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: MapName, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  if (!request.XHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: X, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [X]", false));
  }
  if (!request.YHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: Y, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Y]", false));
  }
  if (!request.ZHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: Z, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Z]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetMapTile", "Invalid DNS host: " << uri.GetAuthority());
      return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps/");
  uri.AddPathSegment(request.GetMapName());
  uri.AddPathSegments("/tiles/");
  uri.AddPathSegment(request.GetZ());
  uri.AddPathSegment(request.GetX());
  uri.AddPathSegment(request.GetY());
  return GetMapTileOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetMapTileOutcomeCallable LocationServiceClient::GetMapTileCallable(const GetMapTileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMapTileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMapTile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientGetMapTileAsyncHelper(LocationServiceClient const * const clientThis, const GetMapTileRequest& request, const GetMapTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMapTile(request), context);
}

void LocationServiceClient::GetMapTileAsync(const GetMapTileRequest& request, const GetMapTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientGetMapTileAsyncHelper( this, request, handler, context ); } );
}

ListDevicePositionsOutcome LocationServiceClient::ListDevicePositions(const ListDevicePositionsRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDevicePositions", "Required field: TrackerName, is not set");
    return ListDevicePositionsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListDevicePositions", "Invalid DNS host: " << uri.GetAuthority());
      return ListDevicePositionsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/list-positions");
  return ListDevicePositionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicePositionsOutcomeCallable LocationServiceClient::ListDevicePositionsCallable(const ListDevicePositionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicePositionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevicePositions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListDevicePositionsAsyncHelper(LocationServiceClient const * const clientThis, const ListDevicePositionsRequest& request, const ListDevicePositionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevicePositions(request), context);
}

void LocationServiceClient::ListDevicePositionsAsync(const ListDevicePositionsRequest& request, const ListDevicePositionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListDevicePositionsAsyncHelper( this, request, handler, context ); } );
}

ListGeofenceCollectionsOutcome LocationServiceClient::ListGeofenceCollections(const ListGeofenceCollectionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListGeofenceCollections", "Invalid DNS host: " << uri.GetAuthority());
      return ListGeofenceCollectionsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/list-collections");
  return ListGeofenceCollectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGeofenceCollectionsOutcomeCallable LocationServiceClient::ListGeofenceCollectionsCallable(const ListGeofenceCollectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeofenceCollectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeofenceCollections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListGeofenceCollectionsAsyncHelper(LocationServiceClient const * const clientThis, const ListGeofenceCollectionsRequest& request, const ListGeofenceCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGeofenceCollections(request), context);
}

void LocationServiceClient::ListGeofenceCollectionsAsync(const ListGeofenceCollectionsRequest& request, const ListGeofenceCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListGeofenceCollectionsAsyncHelper( this, request, handler, context ); } );
}

ListGeofencesOutcome LocationServiceClient::ListGeofences(const ListGeofencesRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGeofences", "Required field: CollectionName, is not set");
    return ListGeofencesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListGeofences", "Invalid DNS host: " << uri.GetAuthority());
      return ListGeofencesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  uri.AddPathSegments("/list-geofences");
  return ListGeofencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGeofencesOutcomeCallable LocationServiceClient::ListGeofencesCallable(const ListGeofencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeofencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeofences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListGeofencesAsyncHelper(LocationServiceClient const * const clientThis, const ListGeofencesRequest& request, const ListGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGeofences(request), context);
}

void LocationServiceClient::ListGeofencesAsync(const ListGeofencesRequest& request, const ListGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListGeofencesAsyncHelper( this, request, handler, context ); } );
}

ListMapsOutcome LocationServiceClient::ListMaps(const ListMapsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListMaps", "Invalid DNS host: " << uri.GetAuthority());
      return ListMapsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/list-maps");
  return ListMapsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMapsOutcomeCallable LocationServiceClient::ListMapsCallable(const ListMapsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMapsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMaps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListMapsAsyncHelper(LocationServiceClient const * const clientThis, const ListMapsRequest& request, const ListMapsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMaps(request), context);
}

void LocationServiceClient::ListMapsAsync(const ListMapsRequest& request, const ListMapsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListMapsAsyncHelper( this, request, handler, context ); } );
}

ListPlaceIndexesOutcome LocationServiceClient::ListPlaceIndexes(const ListPlaceIndexesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListPlaceIndexes", "Invalid DNS host: " << uri.GetAuthority());
      return ListPlaceIndexesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/list-indexes");
  return ListPlaceIndexesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPlaceIndexesOutcomeCallable LocationServiceClient::ListPlaceIndexesCallable(const ListPlaceIndexesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlaceIndexesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlaceIndexes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListPlaceIndexesAsyncHelper(LocationServiceClient const * const clientThis, const ListPlaceIndexesRequest& request, const ListPlaceIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPlaceIndexes(request), context);
}

void LocationServiceClient::ListPlaceIndexesAsync(const ListPlaceIndexesRequest& request, const ListPlaceIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListPlaceIndexesAsyncHelper( this, request, handler, context ); } );
}

ListRouteCalculatorsOutcome LocationServiceClient::ListRouteCalculators(const ListRouteCalculatorsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("routes." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListRouteCalculators", "Invalid DNS host: " << uri.GetAuthority());
      return ListRouteCalculatorsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/routes/v0/list-calculators");
  return ListRouteCalculatorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRouteCalculatorsOutcomeCallable LocationServiceClient::ListRouteCalculatorsCallable(const ListRouteCalculatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRouteCalculatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRouteCalculators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListRouteCalculatorsAsyncHelper(LocationServiceClient const * const clientThis, const ListRouteCalculatorsRequest& request, const ListRouteCalculatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRouteCalculators(request), context);
}

void LocationServiceClient::ListRouteCalculatorsAsync(const ListRouteCalculatorsRequest& request, const ListRouteCalculatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListRouteCalculatorsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome LocationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("metadata." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListTagsForResource", "Invalid DNS host: " << uri.GetAuthority());
      return ListTagsForResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable LocationServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListTagsForResourceAsyncHelper(LocationServiceClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void LocationServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTrackerConsumersOutcome LocationServiceClient::ListTrackerConsumers(const ListTrackerConsumersRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrackerConsumers", "Required field: TrackerName, is not set");
    return ListTrackerConsumersOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListTrackerConsumers", "Invalid DNS host: " << uri.GetAuthority());
      return ListTrackerConsumersOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  uri.AddPathSegments("/list-consumers");
  return ListTrackerConsumersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrackerConsumersOutcomeCallable LocationServiceClient::ListTrackerConsumersCallable(const ListTrackerConsumersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrackerConsumersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrackerConsumers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListTrackerConsumersAsyncHelper(LocationServiceClient const * const clientThis, const ListTrackerConsumersRequest& request, const ListTrackerConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrackerConsumers(request), context);
}

void LocationServiceClient::ListTrackerConsumersAsync(const ListTrackerConsumersRequest& request, const ListTrackerConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListTrackerConsumersAsyncHelper( this, request, handler, context ); } );
}

ListTrackersOutcome LocationServiceClient::ListTrackers(const ListTrackersRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListTrackers", "Invalid DNS host: " << uri.GetAuthority());
      return ListTrackersOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/list-trackers");
  return ListTrackersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrackersOutcomeCallable LocationServiceClient::ListTrackersCallable(const ListTrackersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrackersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrackers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientListTrackersAsyncHelper(LocationServiceClient const * const clientThis, const ListTrackersRequest& request, const ListTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrackers(request), context);
}

void LocationServiceClient::ListTrackersAsync(const ListTrackersRequest& request, const ListTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientListTrackersAsyncHelper( this, request, handler, context ); } );
}

PutGeofenceOutcome LocationServiceClient::PutGeofence(const PutGeofenceRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGeofence", "Required field: CollectionName, is not set");
    return PutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  if (!request.GeofenceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGeofence", "Required field: GeofenceId, is not set");
    return PutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GeofenceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutGeofence", "Invalid DNS host: " << uri.GetAuthority());
      return PutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  uri.AddPathSegments("/geofences/");
  uri.AddPathSegment(request.GetGeofenceId());
  return PutGeofenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutGeofenceOutcomeCallable LocationServiceClient::PutGeofenceCallable(const PutGeofenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutGeofenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutGeofence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientPutGeofenceAsyncHelper(LocationServiceClient const * const clientThis, const PutGeofenceRequest& request, const PutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutGeofence(request), context);
}

void LocationServiceClient::PutGeofenceAsync(const PutGeofenceRequest& request, const PutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientPutGeofenceAsyncHelper( this, request, handler, context ); } );
}

SearchPlaceIndexForPositionOutcome LocationServiceClient::SearchPlaceIndexForPosition(const SearchPlaceIndexForPositionRequest& request) const
{
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchPlaceIndexForPosition", "Required field: IndexName, is not set");
    return SearchPlaceIndexForPositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("SearchPlaceIndexForPosition", "Invalid DNS host: " << uri.GetAuthority());
      return SearchPlaceIndexForPositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/indexes/");
  uri.AddPathSegment(request.GetIndexName());
  uri.AddPathSegments("/search/position");
  return SearchPlaceIndexForPositionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchPlaceIndexForPositionOutcomeCallable LocationServiceClient::SearchPlaceIndexForPositionCallable(const SearchPlaceIndexForPositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchPlaceIndexForPositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchPlaceIndexForPosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientSearchPlaceIndexForPositionAsyncHelper(LocationServiceClient const * const clientThis, const SearchPlaceIndexForPositionRequest& request, const SearchPlaceIndexForPositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchPlaceIndexForPosition(request), context);
}

void LocationServiceClient::SearchPlaceIndexForPositionAsync(const SearchPlaceIndexForPositionRequest& request, const SearchPlaceIndexForPositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientSearchPlaceIndexForPositionAsyncHelper( this, request, handler, context ); } );
}

SearchPlaceIndexForSuggestionsOutcome LocationServiceClient::SearchPlaceIndexForSuggestions(const SearchPlaceIndexForSuggestionsRequest& request) const
{
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchPlaceIndexForSuggestions", "Required field: IndexName, is not set");
    return SearchPlaceIndexForSuggestionsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("SearchPlaceIndexForSuggestions", "Invalid DNS host: " << uri.GetAuthority());
      return SearchPlaceIndexForSuggestionsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/indexes/");
  uri.AddPathSegment(request.GetIndexName());
  uri.AddPathSegments("/search/suggestions");
  return SearchPlaceIndexForSuggestionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchPlaceIndexForSuggestionsOutcomeCallable LocationServiceClient::SearchPlaceIndexForSuggestionsCallable(const SearchPlaceIndexForSuggestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchPlaceIndexForSuggestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchPlaceIndexForSuggestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientSearchPlaceIndexForSuggestionsAsyncHelper(LocationServiceClient const * const clientThis, const SearchPlaceIndexForSuggestionsRequest& request, const SearchPlaceIndexForSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchPlaceIndexForSuggestions(request), context);
}

void LocationServiceClient::SearchPlaceIndexForSuggestionsAsync(const SearchPlaceIndexForSuggestionsRequest& request, const SearchPlaceIndexForSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientSearchPlaceIndexForSuggestionsAsyncHelper( this, request, handler, context ); } );
}

SearchPlaceIndexForTextOutcome LocationServiceClient::SearchPlaceIndexForText(const SearchPlaceIndexForTextRequest& request) const
{
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchPlaceIndexForText", "Required field: IndexName, is not set");
    return SearchPlaceIndexForTextOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("SearchPlaceIndexForText", "Invalid DNS host: " << uri.GetAuthority());
      return SearchPlaceIndexForTextOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/indexes/");
  uri.AddPathSegment(request.GetIndexName());
  uri.AddPathSegments("/search/text");
  return SearchPlaceIndexForTextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchPlaceIndexForTextOutcomeCallable LocationServiceClient::SearchPlaceIndexForTextCallable(const SearchPlaceIndexForTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchPlaceIndexForTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchPlaceIndexForText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientSearchPlaceIndexForTextAsyncHelper(LocationServiceClient const * const clientThis, const SearchPlaceIndexForTextRequest& request, const SearchPlaceIndexForTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchPlaceIndexForText(request), context);
}

void LocationServiceClient::SearchPlaceIndexForTextAsync(const SearchPlaceIndexForTextRequest& request, const SearchPlaceIndexForTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientSearchPlaceIndexForTextAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome LocationServiceClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("metadata." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("TagResource", "Invalid DNS host: " << uri.GetAuthority());
      return TagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LocationServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientTagResourceAsyncHelper(LocationServiceClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void LocationServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome LocationServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("metadata." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UntagResource", "Invalid DNS host: " << uri.GetAuthority());
      return UntagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LocationServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientUntagResourceAsyncHelper(LocationServiceClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void LocationServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateGeofenceCollectionOutcome LocationServiceClient::UpdateGeofenceCollection(const UpdateGeofenceCollectionRequest& request) const
{
  if (!request.CollectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGeofenceCollection", "Required field: CollectionName, is not set");
    return UpdateGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("geofencing." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateGeofenceCollection", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/geofencing/v0/collections/");
  uri.AddPathSegment(request.GetCollectionName());
  return UpdateGeofenceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGeofenceCollectionOutcomeCallable LocationServiceClient::UpdateGeofenceCollectionCallable(const UpdateGeofenceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGeofenceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGeofenceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientUpdateGeofenceCollectionAsyncHelper(LocationServiceClient const * const clientThis, const UpdateGeofenceCollectionRequest& request, const UpdateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGeofenceCollection(request), context);
}

void LocationServiceClient::UpdateGeofenceCollectionAsync(const UpdateGeofenceCollectionRequest& request, const UpdateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientUpdateGeofenceCollectionAsyncHelper( this, request, handler, context ); } );
}

UpdateMapOutcome LocationServiceClient::UpdateMap(const UpdateMapRequest& request) const
{
  if (!request.MapNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMap", "Required field: MapName, is not set");
    return UpdateMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("maps." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateMap", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/maps/v0/maps/");
  uri.AddPathSegment(request.GetMapName());
  return UpdateMapOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMapOutcomeCallable LocationServiceClient::UpdateMapCallable(const UpdateMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientUpdateMapAsyncHelper(LocationServiceClient const * const clientThis, const UpdateMapRequest& request, const UpdateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMap(request), context);
}

void LocationServiceClient::UpdateMapAsync(const UpdateMapRequest& request, const UpdateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientUpdateMapAsyncHelper( this, request, handler, context ); } );
}

UpdatePlaceIndexOutcome LocationServiceClient::UpdatePlaceIndex(const UpdatePlaceIndexRequest& request) const
{
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePlaceIndex", "Required field: IndexName, is not set");
    return UpdatePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("places." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdatePlaceIndex", "Invalid DNS host: " << uri.GetAuthority());
      return UpdatePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/places/v0/indexes/");
  uri.AddPathSegment(request.GetIndexName());
  return UpdatePlaceIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdatePlaceIndexOutcomeCallable LocationServiceClient::UpdatePlaceIndexCallable(const UpdatePlaceIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePlaceIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePlaceIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientUpdatePlaceIndexAsyncHelper(LocationServiceClient const * const clientThis, const UpdatePlaceIndexRequest& request, const UpdatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePlaceIndex(request), context);
}

void LocationServiceClient::UpdatePlaceIndexAsync(const UpdatePlaceIndexRequest& request, const UpdatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientUpdatePlaceIndexAsyncHelper( this, request, handler, context ); } );
}

UpdateRouteCalculatorOutcome LocationServiceClient::UpdateRouteCalculator(const UpdateRouteCalculatorRequest& request) const
{
  if (!request.CalculatorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRouteCalculator", "Required field: CalculatorName, is not set");
    return UpdateRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("routes." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateRouteCalculator", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/routes/v0/calculators/");
  uri.AddPathSegment(request.GetCalculatorName());
  return UpdateRouteCalculatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRouteCalculatorOutcomeCallable LocationServiceClient::UpdateRouteCalculatorCallable(const UpdateRouteCalculatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRouteCalculatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRouteCalculator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientUpdateRouteCalculatorAsyncHelper(LocationServiceClient const * const clientThis, const UpdateRouteCalculatorRequest& request, const UpdateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRouteCalculator(request), context);
}

void LocationServiceClient::UpdateRouteCalculatorAsync(const UpdateRouteCalculatorRequest& request, const UpdateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientUpdateRouteCalculatorAsyncHelper( this, request, handler, context ); } );
}

UpdateTrackerOutcome LocationServiceClient::UpdateTracker(const UpdateTrackerRequest& request) const
{
  if (!request.TrackerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTracker", "Required field: TrackerName, is not set");
    return UpdateTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("tracking." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateTracker", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tracking/v0/trackers/");
  uri.AddPathSegment(request.GetTrackerName());
  return UpdateTrackerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrackerOutcomeCallable LocationServiceClient::UpdateTrackerCallable(const UpdateTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LocationServiceClientUpdateTrackerAsyncHelper(LocationServiceClient const * const clientThis, const UpdateTrackerRequest& request, const UpdateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTracker(request), context);
}

void LocationServiceClient::UpdateTrackerAsync(const UpdateTrackerRequest& request, const UpdateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LocationServiceClientUpdateTrackerAsyncHelper( this, request, handler, context ); } );
}

