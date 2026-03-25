/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/location/LocationServiceClient.h>
#include <aws/location/LocationServiceEndpointProvider.h>
#include <aws/location/LocationServiceErrorMarshaller.h>
#include <aws/location/model/AssociateTrackerConsumerRequest.h>
#include <aws/location/model/BatchDeleteDevicePositionHistoryRequest.h>
#include <aws/location/model/BatchDeleteGeofenceRequest.h>
#include <aws/location/model/BatchEvaluateGeofencesRequest.h>
#include <aws/location/model/BatchGetDevicePositionRequest.h>
#include <aws/location/model/BatchPutGeofenceRequest.h>
#include <aws/location/model/BatchUpdateDevicePositionRequest.h>
#include <aws/location/model/CalculateRouteMatrixRequest.h>
#include <aws/location/model/CalculateRouteRequest.h>
#include <aws/location/model/CreateGeofenceCollectionRequest.h>
#include <aws/location/model/CreateKeyRequest.h>
#include <aws/location/model/CreateMapRequest.h>
#include <aws/location/model/CreatePlaceIndexRequest.h>
#include <aws/location/model/CreateRouteCalculatorRequest.h>
#include <aws/location/model/CreateTrackerRequest.h>
#include <aws/location/model/DeleteGeofenceCollectionRequest.h>
#include <aws/location/model/DeleteKeyRequest.h>
#include <aws/location/model/DeleteMapRequest.h>
#include <aws/location/model/DeletePlaceIndexRequest.h>
#include <aws/location/model/DeleteRouteCalculatorRequest.h>
#include <aws/location/model/DeleteTrackerRequest.h>
#include <aws/location/model/DescribeGeofenceCollectionRequest.h>
#include <aws/location/model/DescribeKeyRequest.h>
#include <aws/location/model/DescribeMapRequest.h>
#include <aws/location/model/DescribePlaceIndexRequest.h>
#include <aws/location/model/DescribeRouteCalculatorRequest.h>
#include <aws/location/model/DescribeTrackerRequest.h>
#include <aws/location/model/DisassociateTrackerConsumerRequest.h>
#include <aws/location/model/ForecastGeofenceEventsRequest.h>
#include <aws/location/model/GetDevicePositionHistoryRequest.h>
#include <aws/location/model/GetDevicePositionRequest.h>
#include <aws/location/model/GetGeofenceRequest.h>
#include <aws/location/model/GetMapGlyphsRequest.h>
#include <aws/location/model/GetMapSpritesRequest.h>
#include <aws/location/model/GetMapStyleDescriptorRequest.h>
#include <aws/location/model/GetMapTileRequest.h>
#include <aws/location/model/GetPlaceRequest.h>
#include <aws/location/model/ListDevicePositionsRequest.h>
#include <aws/location/model/ListGeofenceCollectionsRequest.h>
#include <aws/location/model/ListGeofencesRequest.h>
#include <aws/location/model/ListKeysRequest.h>
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
#include <aws/location/model/UpdateKeyRequest.h>
#include <aws/location/model/UpdateMapRequest.h>
#include <aws/location/model/UpdatePlaceIndexRequest.h>
#include <aws/location/model/UpdateRouteCalculatorRequest.h>
#include <aws/location/model/UpdateTrackerRequest.h>
#include <aws/location/model/VerifyDevicePositionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LocationService;
using namespace Aws::LocationService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LocationService {
const char SERVICE_NAME[] = "geo";
const char ALLOCATION_TAG[] = "LocationServiceClient";
}  // namespace LocationService
}  // namespace Aws
const char* LocationServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* LocationServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

LocationServiceClient::LocationServiceClient(const LocationService::LocationServiceClientConfiguration& clientConfiguration,
                                             std::shared_ptr<LocationServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LocationServiceClient::LocationServiceClient(const AWSCredentials& credentials,
                                             std::shared_ptr<LocationServiceEndpointProviderBase> endpointProvider,
                                             const LocationService::LocationServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LocationServiceClient::LocationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<LocationServiceEndpointProviderBase> endpointProvider,
                                             const LocationService::LocationServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LocationServiceClient::LocationServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LocationServiceClient::LocationServiceClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LocationServiceClient::LocationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LocationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LocationServiceClient::~LocationServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LocationServiceEndpointProviderBase>& LocationServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void LocationServiceClient::init(const LocationService::LocationServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Location");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "geo");
}

void LocationServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LocationServiceClient::InvokeOperationOutcome LocationServiceClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateTrackerConsumerOutcome LocationServiceClient::AssociateTrackerConsumer(const AssociateTrackerConsumerRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTrackerConsumer", "Required field: TrackerName, is not set");
    return AssociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/consumers");
  };

  return AssociateTrackerConsumerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteDevicePositionHistoryOutcome LocationServiceClient::BatchDeleteDevicePositionHistory(
    const BatchDeleteDevicePositionHistoryRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteDevicePositionHistory", "Required field: TrackerName, is not set");
    return BatchDeleteDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-positions");
  };

  return BatchDeleteDevicePositionHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteGeofenceOutcome LocationServiceClient::BatchDeleteGeofence(const BatchDeleteGeofenceRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteGeofence", "Required field: CollectionName, is not set");
    return BatchDeleteGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-geofences");
  };

  return BatchDeleteGeofenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchEvaluateGeofencesOutcome LocationServiceClient::BatchEvaluateGeofences(const BatchEvaluateGeofencesRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchEvaluateGeofences", "Required field: CollectionName, is not set");
    return BatchEvaluateGeofencesOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/positions");
  };

  return BatchEvaluateGeofencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetDevicePositionOutcome LocationServiceClient::BatchGetDevicePosition(const BatchGetDevicePositionRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetDevicePosition", "Required field: TrackerName, is not set");
    return BatchGetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-positions");
  };

  return BatchGetDevicePositionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchPutGeofenceOutcome LocationServiceClient::BatchPutGeofence(const BatchPutGeofenceRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutGeofence", "Required field: CollectionName, is not set");
    return BatchPutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/put-geofences");
  };

  return BatchPutGeofenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateDevicePositionOutcome LocationServiceClient::BatchUpdateDevicePosition(const BatchUpdateDevicePositionRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateDevicePosition", "Required field: TrackerName, is not set");
    return BatchUpdateDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/positions");
  };

  return BatchUpdateDevicePositionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CalculateRouteOutcome LocationServiceClient::CalculateRoute(const CalculateRouteRequest& request) const {
  if (!request.CalculatorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CalculateRoute", "Required field: CalculatorName, is not set");
    return CalculateRouteOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CalculatorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/calculators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculate/route");
  };

  return CalculateRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CalculateRouteMatrixOutcome LocationServiceClient::CalculateRouteMatrix(const CalculateRouteMatrixRequest& request) const {
  if (!request.CalculatorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CalculateRouteMatrix", "Required field: CalculatorName, is not set");
    return CalculateRouteMatrixOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/calculators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculate/route-matrix");
  };

  return CalculateRouteMatrixOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGeofenceCollectionOutcome LocationServiceClient::CreateGeofenceCollection(const CreateGeofenceCollectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections");
  };

  return CreateGeofenceCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKeyOutcome LocationServiceClient::CreateKey(const CreateKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/v0/keys");
  };

  return CreateKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMapOutcome LocationServiceClient::CreateMap(const CreateMapRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps");
  };

  return CreateMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePlaceIndexOutcome LocationServiceClient::CreatePlaceIndex(const CreatePlaceIndexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes");
  };

  return CreatePlaceIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRouteCalculatorOutcome LocationServiceClient::CreateRouteCalculator(const CreateRouteCalculatorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/calculators");
  };

  return CreateRouteCalculatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrackerOutcome LocationServiceClient::CreateTracker(const CreateTrackerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers");
  };

  return CreateTrackerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGeofenceCollectionOutcome LocationServiceClient::DeleteGeofenceCollection(const DeleteGeofenceCollectionRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGeofenceCollection", "Required field: CollectionName, is not set");
    return DeleteGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
  };

  return DeleteGeofenceCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteKeyOutcome LocationServiceClient::DeleteKey(const DeleteKeyRequest& request) const {
  if (!request.KeyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKey", "Required field: KeyName, is not set");
    return DeleteKeyOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [KeyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/v0/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyName());
  };

  return DeleteKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMapOutcome LocationServiceClient::DeleteMap(const DeleteMapRequest& request) const {
  if (!request.MapNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMap", "Required field: MapName, is not set");
    return DeleteMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MapName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMapName());
  };

  return DeleteMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePlaceIndexOutcome LocationServiceClient::DeletePlaceIndex(const DeletePlaceIndexRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePlaceIndex", "Required field: IndexName, is not set");
    return DeletePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
  };

  return DeletePlaceIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouteCalculatorOutcome LocationServiceClient::DeleteRouteCalculator(const DeleteRouteCalculatorRequest& request) const {
  if (!request.CalculatorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteCalculator", "Required field: CalculatorName, is not set");
    return DeleteRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/calculators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatorName());
  };

  return DeleteRouteCalculatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTrackerOutcome LocationServiceClient::DeleteTracker(const DeleteTrackerRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTracker", "Required field: TrackerName, is not set");
    return DeleteTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
  };

  return DeleteTrackerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeGeofenceCollectionOutcome LocationServiceClient::DescribeGeofenceCollection(
    const DescribeGeofenceCollectionRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGeofenceCollection", "Required field: CollectionName, is not set");
    return DescribeGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
  };

  return DescribeGeofenceCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeKeyOutcome LocationServiceClient::DescribeKey(const DescribeKeyRequest& request) const {
  if (!request.KeyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeKey", "Required field: KeyName, is not set");
    return DescribeKeyOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [KeyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/v0/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyName());
  };

  return DescribeKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeMapOutcome LocationServiceClient::DescribeMap(const DescribeMapRequest& request) const {
  if (!request.MapNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMap", "Required field: MapName, is not set");
    return DescribeMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MapName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMapName());
  };

  return DescribeMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePlaceIndexOutcome LocationServiceClient::DescribePlaceIndex(const DescribePlaceIndexRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePlaceIndex", "Required field: IndexName, is not set");
    return DescribePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
  };

  return DescribePlaceIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRouteCalculatorOutcome LocationServiceClient::DescribeRouteCalculator(const DescribeRouteCalculatorRequest& request) const {
  if (!request.CalculatorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRouteCalculator", "Required field: CalculatorName, is not set");
    return DescribeRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/calculators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatorName());
  };

  return DescribeRouteCalculatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeTrackerOutcome LocationServiceClient::DescribeTracker(const DescribeTrackerRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTracker", "Required field: TrackerName, is not set");
    return DescribeTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
  };

  return DescribeTrackerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateTrackerConsumerOutcome LocationServiceClient::DisassociateTrackerConsumer(
    const DisassociateTrackerConsumerRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTrackerConsumer", "Required field: TrackerName, is not set");
    return DisassociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  if (!request.ConsumerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTrackerConsumer", "Required field: ConsumerArn, is not set");
    return DisassociateTrackerConsumerOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConsumerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/consumers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConsumerArn());
  };

  return DisassociateTrackerConsumerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ForecastGeofenceEventsOutcome LocationServiceClient::ForecastGeofenceEvents(const ForecastGeofenceEventsRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ForecastGeofenceEvents", "Required field: CollectionName, is not set");
    return ForecastGeofenceEventsOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/forecast-geofence-events");
  };

  return ForecastGeofenceEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDevicePositionOutcome LocationServiceClient::GetDevicePosition(const GetDevicePositionRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevicePosition", "Required field: TrackerName, is not set");
    return GetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevicePosition", "Required field: DeviceId, is not set");
    return GetDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/positions/latest");
  };

  return GetDevicePositionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDevicePositionHistoryOutcome LocationServiceClient::GetDevicePositionHistory(const GetDevicePositionHistoryRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevicePositionHistory", "Required field: TrackerName, is not set");
    return GetDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevicePositionHistory", "Required field: DeviceId, is not set");
    return GetDevicePositionHistoryOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-positions");
  };

  return GetDevicePositionHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGeofenceOutcome LocationServiceClient::GetGeofence(const GetGeofenceRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGeofence", "Required field: CollectionName, is not set");
    return GetGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CollectionName]", false));
  }
  if (!request.GeofenceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGeofence", "Required field: GeofenceId, is not set");
    return GetGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GeofenceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofences/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGeofenceId());
  };

  return GetGeofenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMapGlyphsOutcome LocationServiceClient::GetMapGlyphs(const GetMapGlyphsRequest& request) const {
  AWS_OPERATION_GUARD(GetMapGlyphs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMapGlyphs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MapNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapGlyphs", "Required field: MapName, is not set");
    return GetMapGlyphsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MapName]", false));
  }
  if (!request.FontStackHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapGlyphs", "Required field: FontStack, is not set");
    return GetMapGlyphsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FontStack]", false));
  }
  if (!request.FontUnicodeRangeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapGlyphs", "Required field: FontUnicodeRange, is not set");
    return GetMapGlyphsOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FontUnicodeRange]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMapGlyphs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMapGlyphs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMapGlyphs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMapGlyphsOutcome>(
      [&]() -> GetMapGlyphsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMapGlyphs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("maps.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMapGlyphsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMapName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/glyphs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFontStack());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFontUnicodeRange());
        return GetMapGlyphsOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMapSpritesOutcome LocationServiceClient::GetMapSprites(const GetMapSpritesRequest& request) const {
  AWS_OPERATION_GUARD(GetMapSprites);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMapSprites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MapNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapSprites", "Required field: MapName, is not set");
    return GetMapSpritesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MapName]", false));
  }
  if (!request.FileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapSprites", "Required field: FileName, is not set");
    return GetMapSpritesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FileName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMapSprites, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMapSprites, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMapSprites",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMapSpritesOutcome>(
      [&]() -> GetMapSpritesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMapSprites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("maps.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMapSpritesOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMapName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sprites/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileName());
        return GetMapSpritesOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMapStyleDescriptorOutcome LocationServiceClient::GetMapStyleDescriptor(const GetMapStyleDescriptorRequest& request) const {
  AWS_OPERATION_GUARD(GetMapStyleDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMapStyleDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MapNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapStyleDescriptor", "Required field: MapName, is not set");
    return GetMapStyleDescriptorOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MapName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMapStyleDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMapStyleDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMapStyleDescriptor",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMapStyleDescriptorOutcome>(
      [&]() -> GetMapStyleDescriptorOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMapStyleDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("maps.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMapStyleDescriptorOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMapName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/style-descriptor");
        return GetMapStyleDescriptorOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMapTileOutcome LocationServiceClient::GetMapTile(const GetMapTileRequest& request) const {
  AWS_OPERATION_GUARD(GetMapTile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMapTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MapNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: MapName, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MapName]", false));
  }
  if (!request.ZHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: Z, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Z]", false));
  }
  if (!request.XHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: X, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [X]", false));
  }
  if (!request.YHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMapTile", "Required field: Y, is not set");
    return GetMapTileOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Y]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMapTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMapTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMapTile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMapTileOutcome>(
      [&]() -> GetMapTileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMapTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("maps.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMapTileOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMapName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZ());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetX());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetY());
        return GetMapTileOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPlaceOutcome LocationServiceClient::GetPlace(const GetPlaceRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPlace", "Required field: IndexName, is not set");
    return GetPlaceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IndexName]", false));
  }
  if (!request.PlaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPlace", "Required field: PlaceId, is not set");
    return GetPlaceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PlaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaceId());
  };

  return GetPlaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDevicePositionsOutcome LocationServiceClient::ListDevicePositions(const ListDevicePositionsRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevicePositions", "Required field: TrackerName, is not set");
    return ListDevicePositionsOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-positions");
  };

  return ListDevicePositionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGeofenceCollectionsOutcome LocationServiceClient::ListGeofenceCollections(const ListGeofenceCollectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/list-collections");
  };

  return ListGeofenceCollectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGeofencesOutcome LocationServiceClient::ListGeofences(const ListGeofencesRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGeofences", "Required field: CollectionName, is not set");
    return ListGeofencesOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-geofences");
  };

  return ListGeofencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListKeysOutcome LocationServiceClient::ListKeys(const ListKeysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/v0/list-keys");
  };

  return ListKeysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMapsOutcome LocationServiceClient::ListMaps(const ListMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/list-maps");
  };

  return ListMapsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPlaceIndexesOutcome LocationServiceClient::ListPlaceIndexes(const ListPlaceIndexesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/list-indexes");
  };

  return ListPlaceIndexesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRouteCalculatorsOutcome LocationServiceClient::ListRouteCalculators(const ListRouteCalculatorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/list-calculators");
  };

  return ListRouteCalculatorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome LocationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrackerConsumersOutcome LocationServiceClient::ListTrackerConsumers(const ListTrackerConsumersRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrackerConsumers", "Required field: TrackerName, is not set");
    return ListTrackerConsumersOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-consumers");
  };

  return ListTrackerConsumersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrackersOutcome LocationServiceClient::ListTrackers(const ListTrackersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/list-trackers");
  };

  return ListTrackersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutGeofenceOutcome LocationServiceClient::PutGeofence(const PutGeofenceRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutGeofence", "Required field: CollectionName, is not set");
    return PutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CollectionName]", false));
  }
  if (!request.GeofenceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutGeofence", "Required field: GeofenceId, is not set");
    return PutGeofenceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GeofenceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofences/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGeofenceId());
  };

  return PutGeofenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SearchPlaceIndexForPositionOutcome LocationServiceClient::SearchPlaceIndexForPosition(
    const SearchPlaceIndexForPositionRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchPlaceIndexForPosition", "Required field: IndexName, is not set");
    return SearchPlaceIndexForPositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/position");
  };

  return SearchPlaceIndexForPositionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchPlaceIndexForSuggestionsOutcome LocationServiceClient::SearchPlaceIndexForSuggestions(
    const SearchPlaceIndexForSuggestionsRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchPlaceIndexForSuggestions", "Required field: IndexName, is not set");
    return SearchPlaceIndexForSuggestionsOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/suggestions");
  };

  return SearchPlaceIndexForSuggestionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchPlaceIndexForTextOutcome LocationServiceClient::SearchPlaceIndexForText(const SearchPlaceIndexForTextRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchPlaceIndexForText", "Required field: IndexName, is not set");
    return SearchPlaceIndexForTextOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/text");
  };

  return SearchPlaceIndexForTextOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LocationServiceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome LocationServiceClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateGeofenceCollectionOutcome LocationServiceClient::UpdateGeofenceCollection(const UpdateGeofenceCollectionRequest& request) const {
  if (!request.CollectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGeofenceCollection", "Required field: CollectionName, is not set");
    return UpdateGeofenceCollectionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectionName());
  };

  return UpdateGeofenceCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateKeyOutcome LocationServiceClient::UpdateKey(const UpdateKeyRequest& request) const {
  if (!request.KeyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKey", "Required field: KeyName, is not set");
    return UpdateKeyOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [KeyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/v0/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyName());
  };

  return UpdateKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateMapOutcome LocationServiceClient::UpdateMap(const UpdateMapRequest& request) const {
  if (!request.MapNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMap", "Required field: MapName, is not set");
    return UpdateMapOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MapName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMapName());
  };

  return UpdateMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePlaceIndexOutcome LocationServiceClient::UpdatePlaceIndex(const UpdatePlaceIndexRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePlaceIndex", "Required field: IndexName, is not set");
    return UpdatePlaceIndexOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
  };

  return UpdatePlaceIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRouteCalculatorOutcome LocationServiceClient::UpdateRouteCalculator(const UpdateRouteCalculatorRequest& request) const {
  if (!request.CalculatorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouteCalculator", "Required field: CalculatorName, is not set");
    return UpdateRouteCalculatorOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/calculators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatorName());
  };

  return UpdateRouteCalculatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateTrackerOutcome LocationServiceClient::UpdateTracker(const UpdateTrackerRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTracker", "Required field: TrackerName, is not set");
    return UpdateTrackerOutcome(Aws::Client::AWSError<LocationServiceErrors>(LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
  };

  return UpdateTrackerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

VerifyDevicePositionOutcome LocationServiceClient::VerifyDevicePosition(const VerifyDevicePositionRequest& request) const {
  if (!request.TrackerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("VerifyDevicePosition", "Required field: TrackerName, is not set");
    return VerifyDevicePositionOutcome(Aws::Client::AWSError<LocationServiceErrors>(
        LocationServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrackerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrackerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/positions/verify");
  };

  return VerifyDevicePositionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
