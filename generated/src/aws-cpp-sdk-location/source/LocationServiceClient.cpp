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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateTrackerConsumerOutcome(result.GetResultWithOwnership())
                            : AssociateTrackerConsumerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteDevicePositionHistoryOutcome(result.GetResultWithOwnership())
                            : BatchDeleteDevicePositionHistoryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteGeofenceOutcome(result.GetResultWithOwnership())
                            : BatchDeleteGeofenceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchEvaluateGeofencesOutcome(result.GetResultWithOwnership())
                            : BatchEvaluateGeofencesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetDevicePositionOutcome(result.GetResultWithOwnership())
                            : BatchGetDevicePositionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchPutGeofenceOutcome(result.GetResultWithOwnership())
                            : BatchPutGeofenceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateDevicePositionOutcome(result.GetResultWithOwnership())
                            : BatchUpdateDevicePositionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CalculateRouteOutcome(result.GetResultWithOwnership()) : CalculateRouteOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CalculateRouteMatrixOutcome(result.GetResultWithOwnership())
                            : CalculateRouteMatrixOutcome(std::move(result.GetError()));
}

CreateGeofenceCollectionOutcome LocationServiceClient::CreateGeofenceCollection(const CreateGeofenceCollectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/collections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGeofenceCollectionOutcome(result.GetResultWithOwnership())
                            : CreateGeofenceCollectionOutcome(std::move(result.GetError()));
}

CreateKeyOutcome LocationServiceClient::CreateKey(const CreateKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/v0/keys");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKeyOutcome(result.GetResultWithOwnership()) : CreateKeyOutcome(std::move(result.GetError()));
}

CreateMapOutcome LocationServiceClient::CreateMap(const CreateMapRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/maps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMapOutcome(result.GetResultWithOwnership()) : CreateMapOutcome(std::move(result.GetError()));
}

CreatePlaceIndexOutcome LocationServiceClient::CreatePlaceIndex(const CreatePlaceIndexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/indexes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePlaceIndexOutcome(result.GetResultWithOwnership())
                            : CreatePlaceIndexOutcome(std::move(result.GetError()));
}

CreateRouteCalculatorOutcome LocationServiceClient::CreateRouteCalculator(const CreateRouteCalculatorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/calculators");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouteCalculatorOutcome(result.GetResultWithOwnership())
                            : CreateRouteCalculatorOutcome(std::move(result.GetError()));
}

CreateTrackerOutcome LocationServiceClient::CreateTracker(const CreateTrackerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/trackers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrackerOutcome(result.GetResultWithOwnership()) : CreateTrackerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGeofenceCollectionOutcome(result.GetResultWithOwnership())
                            : DeleteGeofenceCollectionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteKeyOutcome(result.GetResultWithOwnership()) : DeleteKeyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMapOutcome(result.GetResultWithOwnership()) : DeleteMapOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePlaceIndexOutcome(result.GetResultWithOwnership())
                            : DeletePlaceIndexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRouteCalculatorOutcome(result.GetResultWithOwnership())
                            : DeleteRouteCalculatorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTrackerOutcome(result.GetResultWithOwnership()) : DeleteTrackerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeGeofenceCollectionOutcome(result.GetResultWithOwnership())
                            : DescribeGeofenceCollectionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeKeyOutcome(result.GetResultWithOwnership()) : DescribeKeyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeMapOutcome(result.GetResultWithOwnership()) : DescribeMapOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribePlaceIndexOutcome(result.GetResultWithOwnership())
                            : DescribePlaceIndexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeRouteCalculatorOutcome(result.GetResultWithOwnership())
                            : DescribeRouteCalculatorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeTrackerOutcome(result.GetResultWithOwnership())
                            : DescribeTrackerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateTrackerConsumerOutcome(result.GetResultWithOwnership())
                            : DisassociateTrackerConsumerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ForecastGeofenceEventsOutcome(result.GetResultWithOwnership())
                            : ForecastGeofenceEventsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDevicePositionOutcome(result.GetResultWithOwnership())
                            : GetDevicePositionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDevicePositionHistoryOutcome(result.GetResultWithOwnership())
                            : GetDevicePositionHistoryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGeofenceOutcome(result.GetResultWithOwnership()) : GetGeofenceOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetMapGlyphsOutcome(result.GetResultWithOwnership())
                                  : GetMapGlyphsOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetMapSpritesOutcome(result.GetResultWithOwnership())
                                  : GetMapSpritesOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetMapStyleDescriptorOutcome(result.GetResultWithOwnership())
                                  : GetMapStyleDescriptorOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetMapTileOutcome(result.GetResultWithOwnership()) : GetMapTileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPlaceOutcome(result.GetResultWithOwnership()) : GetPlaceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDevicePositionsOutcome(result.GetResultWithOwnership())
                            : ListDevicePositionsOutcome(std::move(result.GetError()));
}

ListGeofenceCollectionsOutcome LocationServiceClient::ListGeofenceCollections(const ListGeofenceCollectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/geofencing/v0/list-collections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGeofenceCollectionsOutcome(result.GetResultWithOwnership())
                            : ListGeofenceCollectionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGeofencesOutcome(result.GetResultWithOwnership()) : ListGeofencesOutcome(std::move(result.GetError()));
}

ListKeysOutcome LocationServiceClient::ListKeys(const ListKeysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/v0/list-keys");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListKeysOutcome(result.GetResultWithOwnership()) : ListKeysOutcome(std::move(result.GetError()));
}

ListMapsOutcome LocationServiceClient::ListMaps(const ListMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/maps/v0/list-maps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMapsOutcome(result.GetResultWithOwnership()) : ListMapsOutcome(std::move(result.GetError()));
}

ListPlaceIndexesOutcome LocationServiceClient::ListPlaceIndexes(const ListPlaceIndexesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/places/v0/list-indexes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPlaceIndexesOutcome(result.GetResultWithOwnership())
                            : ListPlaceIndexesOutcome(std::move(result.GetError()));
}

ListRouteCalculatorsOutcome LocationServiceClient::ListRouteCalculators(const ListRouteCalculatorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/v0/list-calculators");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRouteCalculatorsOutcome(result.GetResultWithOwnership())
                            : ListRouteCalculatorsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTrackerConsumersOutcome(result.GetResultWithOwnership())
                            : ListTrackerConsumersOutcome(std::move(result.GetError()));
}

ListTrackersOutcome LocationServiceClient::ListTrackers(const ListTrackersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking/v0/list-trackers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTrackersOutcome(result.GetResultWithOwnership()) : ListTrackersOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutGeofenceOutcome(result.GetResultWithOwnership()) : PutGeofenceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchPlaceIndexForPositionOutcome(result.GetResultWithOwnership())
                            : SearchPlaceIndexForPositionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchPlaceIndexForSuggestionsOutcome(result.GetResultWithOwnership())
                            : SearchPlaceIndexForSuggestionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchPlaceIndexForTextOutcome(result.GetResultWithOwnership())
                            : SearchPlaceIndexForTextOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGeofenceCollectionOutcome(result.GetResultWithOwnership())
                            : UpdateGeofenceCollectionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateKeyOutcome(result.GetResultWithOwnership()) : UpdateKeyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMapOutcome(result.GetResultWithOwnership()) : UpdateMapOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdatePlaceIndexOutcome(result.GetResultWithOwnership())
                            : UpdatePlaceIndexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRouteCalculatorOutcome(result.GetResultWithOwnership())
                            : UpdateRouteCalculatorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateTrackerOutcome(result.GetResultWithOwnership()) : UpdateTrackerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VerifyDevicePositionOutcome(result.GetResultWithOwnership())
                            : VerifyDevicePositionOutcome(std::move(result.GetError()));
}
