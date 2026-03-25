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
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect");
  };

  return ConnectAppAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppAuthorizationOutcome AppFabricClient::CreateAppAuthorization(const CreateAppAuthorizationRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return CreateAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AppBundleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations");
  };

  return CreateAppAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppBundleOutcome AppFabricClient::CreateAppBundle(const CreateAppBundleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles");
  };

  return CreateAppBundleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIngestionOutcome AppFabricClient::CreateIngestion(const CreateIngestionRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: AppBundleIdentifier, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppBundleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
  };

  return CreateIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations");
  };

  return CreateIngestionDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
  };

  return DeleteAppAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAppBundleOutcome AppFabricClient::DeleteAppBundle(const DeleteAppBundleRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAppBundle", "Required field: AppBundleIdentifier, is not set");
    return DeleteAppBundleOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppBundleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
  };

  return DeleteAppBundleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
  };

  return DeleteIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionDestinationIdentifier());
  };

  return DeleteIngestionDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
  };

  return GetAppAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAppBundleOutcome AppFabricClient::GetAppBundle(const GetAppBundleRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAppBundle", "Required field: AppBundleIdentifier, is not set");
    return GetAppBundleOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AppBundleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
  };

  return GetAppBundleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
  };

  return GetIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionDestinationIdentifier());
  };

  return GetIngestionDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAppAuthorizationsOutcome AppFabricClient::ListAppAuthorizations(const ListAppAuthorizationsRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAppAuthorizations", "Required field: AppBundleIdentifier, is not set");
    return ListAppAuthorizationsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppBundleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations");
  };

  return ListAppAuthorizationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAppBundlesOutcome AppFabricClient::ListAppBundles(const ListAppBundlesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles");
  };

  return ListAppBundlesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations");
  };

  return ListIngestionDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIngestionsOutcome AppFabricClient::ListIngestions(const ListIngestionsRequest& request) const {
  if (!request.AppBundleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: AppBundleIdentifier, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AppBundleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
  };

  return ListIngestionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AppFabricClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartUserAccessTasksOutcome AppFabricClient::StartUserAccessTasks(const StartUserAccessTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/useraccess/start");
  };

  return StartUserAccessTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AppFabricClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/appauthorizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppAuthorizationIdentifier());
  };

  return UpdateAppAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appbundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppBundleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestiondestinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionDestinationIdentifier());
  };

  return UpdateIngestionDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
