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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clone");
  };

  return CloneBackendOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBackendOutcome AmplifyBackendClient::CreateBackend(const CreateBackendRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend");
  };

  return CreateBackendOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBackendAPIOutcome AmplifyBackendClient::CreateBackendAPI(const CreateBackendAPIRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendAPI", "Required field: AppId, is not set");
    return CreateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/api");
  };

  return CreateBackendAPIOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBackendAuthOutcome AmplifyBackendClient::CreateBackendAuth(const CreateBackendAuthRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendAuth", "Required field: AppId, is not set");
    return CreateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/auth");
  };

  return CreateBackendAuthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBackendConfigOutcome AmplifyBackendClient::CreateBackendConfig(const CreateBackendConfigRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendConfig", "Required field: AppId, is not set");
    return CreateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  return CreateBackendConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBackendStorageOutcome AmplifyBackendClient::CreateBackendStorage(const CreateBackendStorageRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendStorage", "Required field: AppId, is not set");
    return CreateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage");
  };

  return CreateBackendStorageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTokenOutcome AmplifyBackendClient::CreateToken(const CreateTokenRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateToken", "Required field: AppId, is not set");
    return CreateTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/challenge");
  };

  return CreateTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  };

  return DeleteBackendOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  };

  return DeleteBackendAPIOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  };

  return DeleteBackendAuthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  };

  return DeleteBackendStorageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/challenge/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  };

  return DeleteTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/generateModels");
  };

  return GenerateBackendAPIModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBackendOutcome AmplifyBackendClient::GetBackend(const GetBackendRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackend", "Required field: AppId, is not set");
    return GetBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  };

  return GetBackendOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  };

  return GetBackendAPIOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/getModels");
  };

  return GetBackendAPIModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  };

  return GetBackendAuthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetBackendJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  };

  return GetBackendStorageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/challenge/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  return GetTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/import");
  };

  return ImportBackendAuthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/import");
  };

  return ImportBackendStorageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  };

  return ListBackendJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListS3BucketsOutcome AmplifyBackendClient::ListS3Buckets(const ListS3BucketsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/s3Buckets");
  };

  return ListS3BucketsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAllBackendsOutcome AmplifyBackendClient::RemoveAllBackends(const RemoveAllBackendsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAllBackends", "Required field: AppId, is not set");
    return RemoveAllBackendsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  };

  return RemoveAllBackendsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveBackendConfigOutcome AmplifyBackendClient::RemoveBackendConfig(const RemoveBackendConfigRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveBackendConfig", "Required field: AppId, is not set");
    return RemoveBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config/remove");
  };

  return RemoveBackendConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  };

  return UpdateBackendAPIOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  };

  return UpdateBackendAuthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBackendConfigOutcome AmplifyBackendClient::UpdateBackendConfig(const UpdateBackendConfigRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackendConfig", "Required field: AppId, is not set");
    return UpdateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(
        AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config/update");
  };

  return UpdateBackendConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return UpdateBackendJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  };

  return UpdateBackendStorageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
