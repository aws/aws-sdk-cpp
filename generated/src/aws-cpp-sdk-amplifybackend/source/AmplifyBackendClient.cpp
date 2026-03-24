/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/AmplifyBackendClient.h>
#include <aws/amplifybackend/AmplifyBackendEndpointProvider.h>
#include <aws/amplifybackend/AmplifyBackendErrorMarshaller.h>
#include <aws/amplifybackend/model/CloneBackendRequest.h>
#include <aws/amplifybackend/model/CreateBackendAPIRequest.h>
#include <aws/amplifybackend/model/CreateBackendAuthRequest.h>
#include <aws/amplifybackend/model/CreateBackendConfigRequest.h>
#include <aws/amplifybackend/model/CreateBackendRequest.h>
#include <aws/amplifybackend/model/CreateBackendStorageRequest.h>
#include <aws/amplifybackend/model/CreateTokenRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAPIRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAuthRequest.h>
#include <aws/amplifybackend/model/DeleteBackendRequest.h>
#include <aws/amplifybackend/model/DeleteBackendStorageRequest.h>
#include <aws/amplifybackend/model/DeleteTokenRequest.h>
#include <aws/amplifybackend/model/GenerateBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIRequest.h>
#include <aws/amplifybackend/model/GetBackendAuthRequest.h>
#include <aws/amplifybackend/model/GetBackendJobRequest.h>
#include <aws/amplifybackend/model/GetBackendRequest.h>
#include <aws/amplifybackend/model/GetBackendStorageRequest.h>
#include <aws/amplifybackend/model/GetTokenRequest.h>
#include <aws/amplifybackend/model/ImportBackendAuthRequest.h>
#include <aws/amplifybackend/model/ImportBackendStorageRequest.h>
#include <aws/amplifybackend/model/ListBackendJobsRequest.h>
#include <aws/amplifybackend/model/ListS3BucketsRequest.h>
#include <aws/amplifybackend/model/RemoveAllBackendsRequest.h>
#include <aws/amplifybackend/model/RemoveBackendConfigRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAPIRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAuthRequest.h>
#include <aws/amplifybackend/model/UpdateBackendConfigRequest.h>
#include <aws/amplifybackend/model/UpdateBackendJobRequest.h>
#include <aws/amplifybackend/model/UpdateBackendStorageRequest.h>
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
using namespace Aws::AmplifyBackend;
using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AmplifyBackend {
const char SERVICE_NAME[] = "amplifybackend";
const char ALLOCATION_TAG[] = "AmplifyBackendClient";
}  // namespace AmplifyBackend
}  // namespace Aws
const char* AmplifyBackendClient::GetServiceName() { return SERVICE_NAME; }
const char* AmplifyBackendClient::GetAllocationTag() { return ALLOCATION_TAG; }

AmplifyBackendClient::AmplifyBackendClient(const AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration,
                                           std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const AWSCredentials& credentials,
                                           std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider,
                                           const AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider,
                                           const AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AmplifyBackendClient::AmplifyBackendClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AmplifyBackendClient::~AmplifyBackendClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AmplifyBackendEndpointProviderBase>& AmplifyBackendClient::accessEndpointProvider() { return m_endpointProvider; }

void AmplifyBackendClient::init(const AmplifyBackend::AmplifyBackendClientConfiguration& config) {
  AWSClient::SetServiceClientName("AmplifyBackend");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "amplifybackend");
}

void AmplifyBackendClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AmplifyBackendClient::InvokeOperationOutcome AmplifyBackendClient::InvokeServiceOperation(
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

CloneBackendOutcome AmplifyBackendClient::CloneBackend(const CloneBackendRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CloneBackend", "Required field: AppId, is not set");
    return CloneBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CloneBackend", "Required field: BackendEnvironmentName, is not set");
    return CloneBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CloneBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CloneBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CloneBackend",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CloneBackendOutcome>(
      [&]() -> CloneBackendOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CloneBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clone");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CloneBackendOutcome(CloneBackendResult(result.GetResultWithOwnership()))
                                  : CloneBackendOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackendOutcome AmplifyBackendClient::CreateBackend(const CreateBackendRequest& request) const {
  AWS_OPERATION_GUARD(CreateBackend);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackend",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackendOutcome>(
      [&]() -> CreateBackendOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateBackendOutcome(CreateBackendResult(result.GetResultWithOwnership()))
                                  : CreateBackendOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackendAPIOutcome AmplifyBackendClient::CreateBackendAPI(const CreateBackendAPIRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendAPI", "Required field: AppId, is not set");
    return CreateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackendAPI",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackendAPIOutcome>(
      [&]() -> CreateBackendAPIOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/api");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateBackendAPIOutcome(CreateBackendAPIResult(result.GetResultWithOwnership()))
                                  : CreateBackendAPIOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackendAuthOutcome AmplifyBackendClient::CreateBackendAuth(const CreateBackendAuthRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendAuth", "Required field: AppId, is not set");
    return CreateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackendAuth",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackendAuthOutcome>(
      [&]() -> CreateBackendAuthOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/auth");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateBackendAuthOutcome(CreateBackendAuthResult(result.GetResultWithOwnership()))
                                  : CreateBackendAuthOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackendConfigOutcome AmplifyBackendClient::CreateBackendConfig(const CreateBackendConfigRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendConfig", "Required field: AppId, is not set");
    return CreateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBackendConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackendConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackendConfig",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackendConfigOutcome>(
      [&]() -> CreateBackendConfigOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/config");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateBackendConfigOutcome(CreateBackendConfigResult(result.GetResultWithOwnership()))
                                  : CreateBackendConfigOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackendStorageOutcome AmplifyBackendClient::CreateBackendStorage(const CreateBackendStorageRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendStorage", "Required field: AppId, is not set");
    return CreateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackendStorage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackendStorageOutcome>(
      [&]() -> CreateBackendStorageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateBackendStorageOutcome(CreateBackendStorageResult(result.GetResultWithOwnership()))
                                  : CreateBackendStorageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTokenOutcome AmplifyBackendClient::CreateToken(const CreateTokenRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateToken", "Required field: AppId, is not set");
    return CreateTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateToken",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTokenOutcome>(
      [&]() -> CreateTokenOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/challenge");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateTokenOutcome(CreateTokenResult(result.GetResultWithOwnership()))
                                  : CreateTokenOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackendOutcome AmplifyBackendClient::DeleteBackend(const DeleteBackendRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackend", "Required field: AppId, is not set");
    return DeleteBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackend", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackend",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackendOutcome>(
      [&]() -> DeleteBackendOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteBackendOutcome(DeleteBackendResult(result.GetResultWithOwnership()))
                                  : DeleteBackendOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackendAPIOutcome AmplifyBackendClient::DeleteBackendAPI(const DeleteBackendAPIRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendAPI", "Required field: AppId, is not set");
    return DeleteBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackendAPI",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackendAPIOutcome>(
      [&]() -> DeleteBackendAPIOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteBackendAPIOutcome(DeleteBackendAPIResult(result.GetResultWithOwnership()))
                                  : DeleteBackendAPIOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackendAuthOutcome AmplifyBackendClient::DeleteBackendAuth(const DeleteBackendAuthRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendAuth", "Required field: AppId, is not set");
    return DeleteBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackendAuth",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackendAuthOutcome>(
      [&]() -> DeleteBackendAuthOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteBackendAuthOutcome(DeleteBackendAuthResult(result.GetResultWithOwnership()))
                                  : DeleteBackendAuthOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackendStorageOutcome AmplifyBackendClient::DeleteBackendStorage(const DeleteBackendStorageRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendStorage", "Required field: AppId, is not set");
    return DeleteBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackendStorage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackendStorageOutcome>(
      [&]() -> DeleteBackendStorageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteBackendStorageOutcome(DeleteBackendStorageResult(result.GetResultWithOwnership()))
                                  : DeleteBackendStorageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTokenOutcome AmplifyBackendClient::DeleteToken(const DeleteTokenRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteToken", "Required field: AppId, is not set");
    return DeleteTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AppId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteToken", "Required field: SessionId, is not set");
    return DeleteTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteToken",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTokenOutcome>(
      [&]() -> DeleteTokenOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/challenge/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteTokenOutcome(DeleteTokenResult(result.GetResultWithOwnership()))
                                  : DeleteTokenOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateBackendAPIModelsOutcome AmplifyBackendClient::GenerateBackendAPIModels(const GenerateBackendAPIModelsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateBackendAPIModels", "Required field: AppId, is not set");
    return GenerateBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateBackendAPIModels", "Required field: BackendEnvironmentName, is not set");
    return GenerateBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GenerateBackendAPIModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateBackendAPIModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateBackendAPIModels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateBackendAPIModelsOutcome>(
      [&]() -> GenerateBackendAPIModelsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateBackendAPIModels, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/generateModels");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GenerateBackendAPIModelsOutcome(GenerateBackendAPIModelsResult(result.GetResultWithOwnership()))
                                  : GenerateBackendAPIModelsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackendOutcome AmplifyBackendClient::GetBackend(const GetBackendRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackend", "Required field: AppId, is not set");
    return GetBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackend, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackend",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackendOutcome>(
      [&]() -> GetBackendOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/details");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBackendOutcome(GetBackendResult(result.GetResultWithOwnership()))
                                  : GetBackendOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackendAPIOutcome AmplifyBackendClient::GetBackendAPI(const GetBackendAPIRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendAPI", "Required field: AppId, is not set");
    return GetBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackendAPI",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackendAPIOutcome>(
      [&]() -> GetBackendAPIOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/details");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBackendAPIOutcome(GetBackendAPIResult(result.GetResultWithOwnership()))
                                  : GetBackendAPIOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackendAPIModelsOutcome AmplifyBackendClient::GetBackendAPIModels(const GetBackendAPIModelsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendAPIModels", "Required field: AppId, is not set");
    return GetBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendAPIModels", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBackendAPIModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackendAPIModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackendAPIModels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackendAPIModelsOutcome>(
      [&]() -> GetBackendAPIModelsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendAPIModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/getModels");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBackendAPIModelsOutcome(GetBackendAPIModelsResult(result.GetResultWithOwnership()))
                                  : GetBackendAPIModelsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackendAuthOutcome AmplifyBackendClient::GetBackendAuth(const GetBackendAuthRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendAuth", "Required field: AppId, is not set");
    return GetBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackendAuth",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackendAuthOutcome>(
      [&]() -> GetBackendAuthOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/details");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBackendAuthOutcome(GetBackendAuthResult(result.GetResultWithOwnership()))
                                  : GetBackendAuthOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackendJobOutcome AmplifyBackendClient::GetBackendJob(const GetBackendJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: AppId, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: BackendEnvironmentName, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BackendEnvironmentName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: JobId, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBackendJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackendJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackendJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackendJobOutcome>(
      [&]() -> GetBackendJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBackendJobOutcome(GetBackendJobResult(result.GetResultWithOwnership()))
                                  : GetBackendJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackendStorageOutcome AmplifyBackendClient::GetBackendStorage(const GetBackendStorageRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendStorage", "Required field: AppId, is not set");
    return GetBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return GetBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackendStorage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackendStorageOutcome>(
      [&]() -> GetBackendStorageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/details");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBackendStorageOutcome(GetBackendStorageResult(result.GetResultWithOwnership()))
                                  : GetBackendStorageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTokenOutcome AmplifyBackendClient::GetToken(const GetTokenRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetToken", "Required field: AppId, is not set");
    return GetTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AppId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetToken", "Required field: SessionId, is not set");
    return GetTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetToken",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTokenOutcome>(
      [&]() -> GetTokenOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/challenge/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTokenOutcome(GetTokenResult(result.GetResultWithOwnership())) : GetTokenOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportBackendAuthOutcome AmplifyBackendClient::ImportBackendAuth(const ImportBackendAuthRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportBackendAuth", "Required field: AppId, is not set");
    return ImportBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return ImportBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ImportBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ImportBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ImportBackendAuth",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ImportBackendAuthOutcome>(
      [&]() -> ImportBackendAuthOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/import");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ImportBackendAuthOutcome(ImportBackendAuthResult(result.GetResultWithOwnership()))
                                  : ImportBackendAuthOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportBackendStorageOutcome AmplifyBackendClient::ImportBackendStorage(const ImportBackendStorageRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportBackendStorage", "Required field: AppId, is not set");
    return ImportBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return ImportBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ImportBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ImportBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ImportBackendStorage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ImportBackendStorageOutcome>(
      [&]() -> ImportBackendStorageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/import");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ImportBackendStorageOutcome(ImportBackendStorageResult(result.GetResultWithOwnership()))
                                  : ImportBackendStorageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackendJobsOutcome AmplifyBackendClient::ListBackendJobs(const ListBackendJobsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBackendJobs", "Required field: AppId, is not set");
    return ListBackendJobsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBackendJobs", "Required field: BackendEnvironmentName, is not set");
    return ListBackendJobsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBackendJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackendJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackendJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackendJobsOutcome>(
      [&]() -> ListBackendJobsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackendJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListBackendJobsOutcome(ListBackendJobsResult(result.GetResultWithOwnership()))
                                  : ListBackendJobsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListS3BucketsOutcome AmplifyBackendClient::ListS3Buckets(const ListS3BucketsRequest& request) const {
  AWS_OPERATION_GUARD(ListS3Buckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListS3Buckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListS3Buckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListS3Buckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListS3Buckets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListS3BucketsOutcome>(
      [&]() -> ListS3BucketsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListS3Buckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/s3Buckets");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListS3BucketsOutcome(ListS3BucketsResult(result.GetResultWithOwnership()))
                                  : ListS3BucketsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveAllBackendsOutcome AmplifyBackendClient::RemoveAllBackends(const RemoveAllBackendsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAllBackends", "Required field: AppId, is not set");
    return RemoveAllBackendsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveAllBackends, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveAllBackends, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveAllBackends",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveAllBackendsOutcome>(
      [&]() -> RemoveAllBackendsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveAllBackends, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? RemoveAllBackendsOutcome(RemoveAllBackendsResult(result.GetResultWithOwnership()))
                                  : RemoveAllBackendsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveBackendConfigOutcome AmplifyBackendClient::RemoveBackendConfig(const RemoveBackendConfigRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveBackendConfig", "Required field: AppId, is not set");
    return RemoveBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveBackendConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveBackendConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveBackendConfig",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveBackendConfigOutcome>(
      [&]() -> RemoveBackendConfigOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/config/remove");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? RemoveBackendConfigOutcome(RemoveBackendConfigResult(result.GetResultWithOwnership()))
                                  : RemoveBackendConfigOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBackendAPIOutcome AmplifyBackendClient::UpdateBackendAPI(const UpdateBackendAPIRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendAPI", "Required field: AppId, is not set");
    return UpdateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBackendAPI, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBackendAPI",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBackendAPIOutcome>(
      [&]() -> UpdateBackendAPIOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateBackendAPIOutcome(UpdateBackendAPIResult(result.GetResultWithOwnership()))
                                  : UpdateBackendAPIOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBackendAuthOutcome AmplifyBackendClient::UpdateBackendAuth(const UpdateBackendAuthRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendAuth", "Required field: AppId, is not set");
    return UpdateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBackendAuth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBackendAuth",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBackendAuthOutcome>(
      [&]() -> UpdateBackendAuthOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateBackendAuthOutcome(UpdateBackendAuthResult(result.GetResultWithOwnership()))
                                  : UpdateBackendAuthOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBackendConfigOutcome AmplifyBackendClient::UpdateBackendConfig(const UpdateBackendConfigRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendConfig", "Required field: AppId, is not set");
    return UpdateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBackendConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBackendConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBackendConfig",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBackendConfigOutcome>(
      [&]() -> UpdateBackendConfigOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/config/update");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateBackendConfigOutcome(UpdateBackendConfigResult(result.GetResultWithOwnership()))
                                  : UpdateBackendConfigOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBackendJobOutcome AmplifyBackendClient::UpdateBackendJob(const UpdateBackendJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: AppId, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BackendEnvironmentName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: JobId, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBackendJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBackendJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBackendJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBackendJobOutcome>(
      [&]() -> UpdateBackendJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateBackendJobOutcome(UpdateBackendJobResult(result.GetResultWithOwnership()))
                                  : UpdateBackendJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBackendStorageOutcome AmplifyBackendClient::UpdateBackendStorage(const UpdateBackendStorageRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendStorage", "Required field: AppId, is not set");
    return UpdateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBackendStorage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBackendStorage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBackendStorageOutcome>(
      [&]() -> UpdateBackendStorageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateBackendStorageOutcome(UpdateBackendStorageResult(result.GetResultWithOwnership()))
                                  : UpdateBackendStorageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
