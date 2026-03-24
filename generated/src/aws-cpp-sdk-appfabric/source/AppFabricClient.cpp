/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/AppFabricClient.h>
#include <aws/appfabric/AppFabricEndpointProvider.h>
#include <aws/appfabric/AppFabricErrorMarshaller.h>
#include <aws/appfabric/model/BatchGetUserAccessTasksRequest.h>
#include <aws/appfabric/model/ConnectAppAuthorizationRequest.h>
#include <aws/appfabric/model/CreateAppAuthorizationRequest.h>
#include <aws/appfabric/model/CreateAppBundleRequest.h>
#include <aws/appfabric/model/CreateIngestionDestinationRequest.h>
#include <aws/appfabric/model/CreateIngestionRequest.h>
#include <aws/appfabric/model/DeleteAppAuthorizationRequest.h>
#include <aws/appfabric/model/DeleteAppBundleRequest.h>
#include <aws/appfabric/model/DeleteIngestionDestinationRequest.h>
#include <aws/appfabric/model/DeleteIngestionRequest.h>
#include <aws/appfabric/model/GetAppAuthorizationRequest.h>
#include <aws/appfabric/model/GetAppBundleRequest.h>
#include <aws/appfabric/model/GetIngestionDestinationRequest.h>
#include <aws/appfabric/model/GetIngestionRequest.h>
#include <aws/appfabric/model/ListAppAuthorizationsRequest.h>
#include <aws/appfabric/model/ListAppBundlesRequest.h>
#include <aws/appfabric/model/ListIngestionDestinationsRequest.h>
#include <aws/appfabric/model/ListIngestionsRequest.h>
#include <aws/appfabric/model/ListTagsForResourceRequest.h>
#include <aws/appfabric/model/StartIngestionRequest.h>
#include <aws/appfabric/model/StartUserAccessTasksRequest.h>
#include <aws/appfabric/model/StopIngestionRequest.h>
#include <aws/appfabric/model/TagResourceRequest.h>
#include <aws/appfabric/model/UntagResourceRequest.h>
#include <aws/appfabric/model/UpdateAppAuthorizationRequest.h>
#include <aws/appfabric/model/UpdateIngestionDestinationRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppFabric;
using namespace Aws::AppFabric::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppFabric {
const char SERVICE_NAME[] = "appfabric";
const char ALLOCATION_TAG[] = "AppFabricClient";
}  // namespace AppFabric
}  // namespace Aws
const char* AppFabricClient::GetServiceName() { return SERVICE_NAME; }
const char* AppFabricClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppFabricClient::AppFabricClient(const AppFabric::AppFabricClientConfiguration& clientConfiguration,
                                 std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppFabricClient::AppFabricClient(const AWSCredentials& credentials, std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider,
                                 const AppFabric::AppFabricClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppFabricClient::AppFabricClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider,
                                 const AppFabric::AppFabricClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppFabricClient::AppFabricClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppFabricClient::AppFabricClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppFabricClient::AppFabricClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppFabricClient::~AppFabricClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppFabricEndpointProviderBase>& AppFabricClient::accessEndpointProvider() { return m_endpointProvider; }

void AppFabricClient::init(const AppFabric::AppFabricClientConfiguration& config) {
  AWSClient::SetServiceClientName("AppFabric");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "appfabric");
}

void AppFabricClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppFabricClient::InvokeOperationOutcome AppFabricClient::InvokeServiceOperation(
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
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetUserAccessTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/useraccess/batchget");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? BatchGetUserAccessTasksOutcome(BatchGetUserAccessTasksResult(result.GetResultWithOwnership()))
                                  : BatchGetUserAccessTasksOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchGetUserAccessTasksOutcome AppFabricClient::BatchGetUserAccessTasks(const BatchGetUserAccessTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/useraccess/batchget");
  };

  return BatchGetUserAccessTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ConnectAppAuthorizationOutcome AppFabricClient::ConnectAppAuthorization(const ConnectAppAuthorizationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConnectAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return ConnectAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConnectAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return ConnectAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(
        AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ConnectAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ConnectAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ConnectAppAuthorization",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ConnectAppAuthorizationOutcome>(
      [&]() -> ConnectAppAuthorizationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConnectAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/connect");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ConnectAppAuthorizationOutcome(ConnectAppAuthorizationResult(result.GetResultWithOwnership()))
                                  : ConnectAppAuthorizationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAppAuthorizationOutcome AppFabricClient::CreateAppAuthorization(const CreateAppAuthorizationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return CreateAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAppAuthorization",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAppAuthorizationOutcome>(
      [&]() -> CreateAppAuthorizationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateAppAuthorizationOutcome(CreateAppAuthorizationResult(result.GetResultWithOwnership()))
                                  : CreateAppAuthorizationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAppBundleOutcome AppFabricClient::CreateAppBundle(const CreateAppBundleRequest& request) const {
  AWS_OPERATION_GUARD(CreateAppBundle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAppBundle",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAppBundleOutcome>(
      [&]() -> CreateAppBundleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateAppBundleOutcome(CreateAppBundleResult(result.GetResultWithOwnership()))
                                  : CreateAppBundleOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIngestionOutcome AppFabricClient::CreateIngestion(const CreateIngestionRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: AppBundleIdentifier, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIngestion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIngestionOutcome>(
      [&]() -> CreateIngestionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateIngestionOutcome(CreateIngestionResult(result.GetResultWithOwnership()))
                                  : CreateIngestionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIngestionDestinationOutcome AppFabricClient::CreateIngestionDestination(const CreateIngestionDestinationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return CreateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return CreateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIngestionDestination",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIngestionDestinationOutcome>(
      [&]() -> CreateIngestionDestinationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIngestionDestination, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateIngestionDestinationOutcome(CreateIngestionDestinationResult(result.GetResultWithOwnership()))
                                  : CreateIngestionDestinationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAppAuthorizationOutcome AppFabricClient::DeleteAppAuthorization(const DeleteAppAuthorizationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return DeleteAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return DeleteAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(
        AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAppAuthorization",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAppAuthorizationOutcome>(
      [&]() -> DeleteAppAuthorizationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteAppAuthorizationOutcome(DeleteAppAuthorizationResult(result.GetResultWithOwnership()))
                                  : DeleteAppAuthorizationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAppBundleOutcome AppFabricClient::DeleteAppBundle(const DeleteAppBundleRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAppBundle", "Required field: AppBundleIdentifier, is not set");
    return DeleteAppBundleOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAppBundle",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAppBundleOutcome>(
      [&]() -> DeleteAppBundleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteAppBundleOutcome(DeleteAppBundleResult(result.GetResultWithOwnership()))
                                  : DeleteAppBundleOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIngestionOutcome AppFabricClient::DeleteIngestion(const DeleteIngestionRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIngestion", "Required field: AppBundleIdentifier, is not set");
    return DeleteIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIngestion", "Required field: IngestionIdentifier, is not set");
    return DeleteIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIngestion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIngestionOutcome>(
      [&]() -> DeleteIngestionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteIngestionOutcome(DeleteIngestionResult(result.GetResultWithOwnership()))
                                  : DeleteIngestionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIngestionDestinationOutcome AppFabricClient::DeleteIngestionDestination(const DeleteIngestionDestinationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return DeleteIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return DeleteIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.IngestionDestinationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIngestionDestination", "Required field: IngestionDestinationIdentifier, is not set");
    return DeleteIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(
        AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionDestinationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIngestionDestination",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIngestionDestinationOutcome>(
      [&]() -> DeleteIngestionDestinationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIngestionDestination, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionDestinationIdentifier());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteIngestionDestinationOutcome(DeleteIngestionDestinationResult(result.GetResultWithOwnership()))
                                  : DeleteIngestionDestinationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAppAuthorizationOutcome AppFabricClient::GetAppAuthorization(const GetAppAuthorizationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return GetAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return GetAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAppAuthorization",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAppAuthorizationOutcome>(
      [&]() -> GetAppAuthorizationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetAppAuthorizationOutcome(GetAppAuthorizationResult(result.GetResultWithOwnership()))
                                  : GetAppAuthorizationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAppBundleOutcome AppFabricClient::GetAppBundle(const GetAppBundleRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAppBundle", "Required field: AppBundleIdentifier, is not set");
    return GetAppBundleOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAppBundle",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAppBundleOutcome>(
      [&]() -> GetAppBundleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetAppBundleOutcome(GetAppBundleResult(result.GetResultWithOwnership()))
                                  : GetAppBundleOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIngestionOutcome AppFabricClient::GetIngestion(const GetIngestionRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestion", "Required field: AppBundleIdentifier, is not set");
    return GetIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestion", "Required field: IngestionIdentifier, is not set");
    return GetIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIngestion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIngestionOutcome>(
      [&]() -> GetIngestionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetIngestionOutcome(GetIngestionResult(result.GetResultWithOwnership()))
                                  : GetIngestionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIngestionDestinationOutcome AppFabricClient::GetIngestionDestination(const GetIngestionDestinationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return GetIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return GetIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.IngestionDestinationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestionDestination", "Required field: IngestionDestinationIdentifier, is not set");
    return GetIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(
        AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionDestinationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIngestionDestination",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIngestionDestinationOutcome>(
      [&]() -> GetIngestionDestinationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIngestionDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionDestinationIdentifier());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetIngestionDestinationOutcome(GetIngestionDestinationResult(result.GetResultWithOwnership()))
                                  : GetIngestionDestinationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAppAuthorizationsOutcome AppFabricClient::ListAppAuthorizations(const ListAppAuthorizationsRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAppAuthorizations", "Required field: AppBundleIdentifier, is not set");
    return ListAppAuthorizationsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAppAuthorizations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAppAuthorizations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAppAuthorizations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAppAuthorizationsOutcome>(
      [&]() -> ListAppAuthorizationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAppAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListAppAuthorizationsOutcome(ListAppAuthorizationsResult(result.GetResultWithOwnership()))
                                  : ListAppAuthorizationsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAppBundlesOutcome AppFabricClient::ListAppBundles(const ListAppBundlesRequest& request) const {
  AWS_OPERATION_GUARD(ListAppBundles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAppBundles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAppBundles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAppBundles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAppBundlesOutcome>(
      [&]() -> ListAppBundlesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAppBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListAppBundlesOutcome(ListAppBundlesResult(result.GetResultWithOwnership()))
                                  : ListAppBundlesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIngestionDestinationsOutcome AppFabricClient::ListIngestionDestinations(const ListIngestionDestinationsRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestionDestinations", "Required field: AppBundleIdentifier, is not set");
    return ListIngestionDestinationsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestionDestinations", "Required field: IngestionIdentifier, is not set");
    return ListIngestionDestinationsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIngestionDestinations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIngestionDestinations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIngestionDestinations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIngestionDestinationsOutcome>(
      [&]() -> ListIngestionDestinationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIngestionDestinations, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListIngestionDestinationsOutcome(ListIngestionDestinationsResult(result.GetResultWithOwnership()))
                                  : ListIngestionDestinationsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIngestionsOutcome AppFabricClient::ListIngestions(const ListIngestionsRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: AppBundleIdentifier, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIngestions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIngestions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIngestions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIngestionsOutcome>(
      [&]() -> ListIngestionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListIngestionsOutcome(ListIngestionsResult(result.GetResultWithOwnership()))
                                  : ListIngestionsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome AppFabricClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTagsForResourceOutcome(ListTagsForResourceResult(result.GetResultWithOwnership()))
                                  : ListTagsForResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartIngestionOutcome AppFabricClient::StartIngestion(const StartIngestionRequest& request) const {
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartIngestion", "Required field: IngestionIdentifier, is not set");
    return StartIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartIngestion", "Required field: AppBundleIdentifier, is not set");
    return StartIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartIngestion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartIngestionOutcome>(
      [&]() -> StartIngestionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/start");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? StartIngestionOutcome(StartIngestionResult(result.GetResultWithOwnership()))
                                  : StartIngestionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartUserAccessTasksOutcome AppFabricClient::StartUserAccessTasks(const StartUserAccessTasksRequest& request) const {
  AWS_OPERATION_GUARD(StartUserAccessTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartUserAccessTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartUserAccessTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartUserAccessTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartUserAccessTasks",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartUserAccessTasksOutcome>(
      [&]() -> StartUserAccessTasksOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartUserAccessTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/useraccess/start");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? StartUserAccessTasksOutcome(StartUserAccessTasksResult(result.GetResultWithOwnership()))
                                  : StartUserAccessTasksOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopIngestionOutcome AppFabricClient::StopIngestion(const StopIngestionRequest& request) const {
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopIngestion", "Required field: IngestionIdentifier, is not set");
    return StopIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopIngestion", "Required field: AppBundleIdentifier, is not set");
    return StopIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopIngestion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopIngestionOutcome>(
      [&]() -> StopIngestionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? StopIngestionOutcome(StopIngestionResult(result.GetResultWithOwnership()))
                                  : StopIngestionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome AppFabricClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? TagResourceOutcome(TagResourceResult(result.GetResultWithOwnership()))
                                  : TagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome AppFabricClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UntagResourceOutcome(UntagResourceResult(result.GetResultWithOwnership()))
                                  : UntagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAppAuthorizationOutcome AppFabricClient::UpdateAppAuthorization(const UpdateAppAuthorizationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return UpdateAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return UpdateAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(
        AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAppAuthorization",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAppAuthorizationOutcome>(
      [&]() -> UpdateAppAuthorizationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateAppAuthorizationOutcome(UpdateAppAuthorizationResult(result.GetResultWithOwnership()))
                                  : UpdateAppAuthorizationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIngestionDestinationOutcome AppFabricClient::UpdateIngestionDestination(const UpdateIngestionDestinationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return UpdateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return UpdateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.IngestionDestinationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIngestionDestination", "Required field: IngestionDestinationIdentifier, is not set");
    return UpdateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(
        AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionDestinationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIngestionDestination",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIngestionDestinationOutcome>(
      [&]() -> UpdateIngestionDestinationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIngestionDestination, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionDestinationIdentifier());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateIngestionDestinationOutcome(UpdateIngestionDestinationResult(result.GetResultWithOwnership()))
                                  : UpdateIngestionDestinationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
