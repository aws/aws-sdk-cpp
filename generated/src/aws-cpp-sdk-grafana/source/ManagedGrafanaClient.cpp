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
#include <aws/grafana/ManagedGrafanaClient.h>
#include <aws/grafana/ManagedGrafanaEndpointProvider.h>
#include <aws/grafana/ManagedGrafanaErrorMarshaller.h>
#include <aws/grafana/model/AssociateLicenseRequest.h>
#include <aws/grafana/model/CreateWorkspaceApiKeyRequest.h>
#include <aws/grafana/model/CreateWorkspaceRequest.h>
#include <aws/grafana/model/CreateWorkspaceServiceAccountRequest.h>
#include <aws/grafana/model/CreateWorkspaceServiceAccountTokenRequest.h>
#include <aws/grafana/model/DeleteWorkspaceApiKeyRequest.h>
#include <aws/grafana/model/DeleteWorkspaceRequest.h>
#include <aws/grafana/model/DeleteWorkspaceServiceAccountRequest.h>
#include <aws/grafana/model/DeleteWorkspaceServiceAccountTokenRequest.h>
#include <aws/grafana/model/DescribeWorkspaceAuthenticationRequest.h>
#include <aws/grafana/model/DescribeWorkspaceConfigurationRequest.h>
#include <aws/grafana/model/DescribeWorkspaceRequest.h>
#include <aws/grafana/model/DisassociateLicenseRequest.h>
#include <aws/grafana/model/ListPermissionsRequest.h>
#include <aws/grafana/model/ListTagsForResourceRequest.h>
#include <aws/grafana/model/ListVersionsRequest.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensRequest.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsRequest.h>
#include <aws/grafana/model/ListWorkspacesRequest.h>
#include <aws/grafana/model/TagResourceRequest.h>
#include <aws/grafana/model/UntagResourceRequest.h>
#include <aws/grafana/model/UpdatePermissionsRequest.h>
#include <aws/grafana/model/UpdateWorkspaceAuthenticationRequest.h>
#include <aws/grafana/model/UpdateWorkspaceConfigurationRequest.h>
#include <aws/grafana/model/UpdateWorkspaceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ManagedGrafana;
using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ManagedGrafana {
const char SERVICE_NAME[] = "grafana";
const char ALLOCATION_TAG[] = "ManagedGrafanaClient";
}  // namespace ManagedGrafana
}  // namespace Aws
const char* ManagedGrafanaClient::GetServiceName() { return SERVICE_NAME; }
const char* ManagedGrafanaClient::GetAllocationTag() { return ALLOCATION_TAG; }

ManagedGrafanaClient::ManagedGrafanaClient(const ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration,
                                           std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const AWSCredentials& credentials,
                                           std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider,
                                           const ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider,
                                           const ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ManagedGrafanaClient::ManagedGrafanaClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ManagedGrafanaClient::~ManagedGrafanaClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ManagedGrafanaEndpointProviderBase>& ManagedGrafanaClient::accessEndpointProvider() { return m_endpointProvider; }

void ManagedGrafanaClient::init(const ManagedGrafana::ManagedGrafanaClientConfiguration& config) {
  AWSClient::SetServiceClientName("grafana");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "grafana");
}

void ManagedGrafanaClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ManagedGrafanaClient::InvokeOperationOutcome ManagedGrafanaClient::InvokeServiceOperation(
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

AssociateLicenseOutcome ManagedGrafanaClient::AssociateLicense(const AssociateLicenseRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLicense", "Required field: WorkspaceId, is not set");
    return AssociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [WorkspaceId]", false));
  }
  if (!request.LicenseTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLicense", "Required field: LicenseType, is not set");
    return AssociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [LicenseType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/licenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(LicenseTypeMapper::GetNameForLicenseType(request.GetLicenseType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateLicenseOutcome(result.GetResultWithOwnership())
                            : AssociateLicenseOutcome(std::move(result.GetError()));
}

CreateWorkspaceOutcome ManagedGrafanaClient::CreateWorkspace(const CreateWorkspaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspaceOutcome(result.GetResultWithOwnership())
                            : CreateWorkspaceOutcome(std::move(result.GetError()));
}

CreateWorkspaceApiKeyOutcome ManagedGrafanaClient::CreateWorkspaceApiKey(const CreateWorkspaceApiKeyRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspaceApiKey", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceApiKeyOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspaceApiKeyOutcome(result.GetResultWithOwnership())
                            : CreateWorkspaceApiKeyOutcome(std::move(result.GetError()));
}

CreateWorkspaceServiceAccountOutcome ManagedGrafanaClient::CreateWorkspaceServiceAccount(
    const CreateWorkspaceServiceAccountRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspaceServiceAccount", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceServiceAccountOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspaceServiceAccountOutcome(result.GetResultWithOwnership())
                            : CreateWorkspaceServiceAccountOutcome(std::move(result.GetError()));
}

CreateWorkspaceServiceAccountTokenOutcome ManagedGrafanaClient::CreateWorkspaceServiceAccountToken(
    const CreateWorkspaceServiceAccountTokenRequest& request) const {
  if (!request.ServiceAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspaceServiceAccountToken", "Required field: ServiceAccountId, is not set");
    return CreateWorkspaceServiceAccountTokenOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceAccountId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspaceServiceAccountToken", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceServiceAccountTokenOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspaceServiceAccountTokenOutcome(result.GetResultWithOwnership())
                            : CreateWorkspaceServiceAccountTokenOutcome(std::move(result.GetError()));
}

DeleteWorkspaceOutcome ManagedGrafanaClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkspaceOutcome(result.GetResultWithOwnership())
                            : DeleteWorkspaceOutcome(std::move(result.GetError()));
}

DeleteWorkspaceApiKeyOutcome ManagedGrafanaClient::DeleteWorkspaceApiKey(const DeleteWorkspaceApiKeyRequest& request) const {
  if (!request.KeyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceApiKey", "Required field: KeyName, is not set");
    return DeleteWorkspaceApiKeyOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyName]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceApiKey", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceApiKeyOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkspaceApiKeyOutcome(result.GetResultWithOwnership())
                            : DeleteWorkspaceApiKeyOutcome(std::move(result.GetError()));
}

DeleteWorkspaceServiceAccountOutcome ManagedGrafanaClient::DeleteWorkspaceServiceAccount(
    const DeleteWorkspaceServiceAccountRequest& request) const {
  if (!request.ServiceAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceServiceAccount", "Required field: ServiceAccountId, is not set");
    return DeleteWorkspaceServiceAccountOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceAccountId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceServiceAccount", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceServiceAccountOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkspaceServiceAccountOutcome(result.GetResultWithOwnership())
                            : DeleteWorkspaceServiceAccountOutcome(std::move(result.GetError()));
}

DeleteWorkspaceServiceAccountTokenOutcome ManagedGrafanaClient::DeleteWorkspaceServiceAccountToken(
    const DeleteWorkspaceServiceAccountTokenRequest& request) const {
  if (!request.TokenIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceServiceAccountToken", "Required field: TokenId, is not set");
    return DeleteWorkspaceServiceAccountTokenOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TokenId]", false));
  }
  if (!request.ServiceAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceServiceAccountToken", "Required field: ServiceAccountId, is not set");
    return DeleteWorkspaceServiceAccountTokenOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceAccountId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceServiceAccountToken", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceServiceAccountTokenOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTokenId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkspaceServiceAccountTokenOutcome(result.GetResultWithOwnership())
                            : DeleteWorkspaceServiceAccountTokenOutcome(std::move(result.GetError()));
}

DescribeWorkspaceOutcome ManagedGrafanaClient::DescribeWorkspace(const DescribeWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeWorkspaceOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceOutcome(std::move(result.GetError()));
}

DescribeWorkspaceAuthenticationOutcome ManagedGrafanaClient::DescribeWorkspaceAuthentication(
    const DescribeWorkspaceAuthenticationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspaceAuthentication", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceAuthenticationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authentication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeWorkspaceAuthenticationOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceAuthenticationOutcome(std::move(result.GetError()));
}

DescribeWorkspaceConfigurationOutcome ManagedGrafanaClient::DescribeWorkspaceConfiguration(
    const DescribeWorkspaceConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceConfigurationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeWorkspaceConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeWorkspaceConfigurationOutcome(std::move(result.GetError()));
}

DisassociateLicenseOutcome ManagedGrafanaClient::DisassociateLicense(const DisassociateLicenseRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLicense", "Required field: WorkspaceId, is not set");
    return DisassociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.LicenseTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLicense", "Required field: LicenseType, is not set");
    return DisassociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/licenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(LicenseTypeMapper::GetNameForLicenseType(request.GetLicenseType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateLicenseOutcome(result.GetResultWithOwnership())
                            : DisassociateLicenseOutcome(std::move(result.GetError()));
}

ListPermissionsOutcome ManagedGrafanaClient::ListPermissions(const ListPermissionsRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPermissions", "Required field: WorkspaceId, is not set");
    return ListPermissionsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPermissionsOutcome(result.GetResultWithOwnership())
                            : ListPermissionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ManagedGrafanaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

ListVersionsOutcome ManagedGrafanaClient::ListVersions(const ListVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVersionsOutcome(result.GetResultWithOwnership()) : ListVersionsOutcome(std::move(result.GetError()));
}

ListWorkspaceServiceAccountTokensOutcome ManagedGrafanaClient::ListWorkspaceServiceAccountTokens(
    const ListWorkspaceServiceAccountTokensRequest& request) const {
  if (!request.ServiceAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaceServiceAccountTokens", "Required field: ServiceAccountId, is not set");
    return ListWorkspaceServiceAccountTokensOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceAccountId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaceServiceAccountTokens", "Required field: WorkspaceId, is not set");
    return ListWorkspaceServiceAccountTokensOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWorkspaceServiceAccountTokensOutcome(result.GetResultWithOwnership())
                            : ListWorkspaceServiceAccountTokensOutcome(std::move(result.GetError()));
}

ListWorkspaceServiceAccountsOutcome ManagedGrafanaClient::ListWorkspaceServiceAccounts(
    const ListWorkspaceServiceAccountsRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaceServiceAccounts", "Required field: WorkspaceId, is not set");
    return ListWorkspaceServiceAccountsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWorkspaceServiceAccountsOutcome(result.GetResultWithOwnership())
                            : ListWorkspaceServiceAccountsOutcome(std::move(result.GetError()));
}

ListWorkspacesOutcome ManagedGrafanaClient::ListWorkspaces(const ListWorkspacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWorkspacesOutcome(result.GetResultWithOwnership()) : ListWorkspacesOutcome(std::move(result.GetError()));
}

TagResourceOutcome ManagedGrafanaClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome ManagedGrafanaClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdatePermissionsOutcome ManagedGrafanaClient::UpdatePermissions(const UpdatePermissionsRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePermissions", "Required field: WorkspaceId, is not set");
    return UpdatePermissionsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdatePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdatePermissionsOutcome(std::move(result.GetError()));
}

UpdateWorkspaceOutcome ManagedGrafanaClient::UpdateWorkspace(const UpdateWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspace", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateWorkspaceOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceOutcome(std::move(result.GetError()));
}

UpdateWorkspaceAuthenticationOutcome ManagedGrafanaClient::UpdateWorkspaceAuthentication(
    const UpdateWorkspaceAuthenticationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceAuthentication", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceAuthenticationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authentication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspaceAuthenticationOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceAuthenticationOutcome(std::move(result.GetError()));
}

UpdateWorkspaceConfigurationOutcome ManagedGrafanaClient::UpdateWorkspaceConfiguration(
    const UpdateWorkspaceConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceConfigurationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateWorkspaceConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceConfigurationOutcome(std::move(result.GetError()));
}
