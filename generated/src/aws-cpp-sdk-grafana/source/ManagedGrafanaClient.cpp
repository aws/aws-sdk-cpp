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
ManagedGrafanaClient::ManagedGrafanaClient(const Client::ClientConfiguration& clientConfiguration)
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

ManagedGrafanaClient::ManagedGrafanaClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration)
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

AssociateLicenseOutcome ManagedGrafanaClient::AssociateLicense(const AssociateLicenseRequest& request) const {
  AWS_OPERATION_GUARD(AssociateLicense);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateLicense, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateLicense, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateLicense",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateLicenseOutcome>(
      [&]() -> AssociateLicenseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/licenses/");
        endpointResolutionOutcome.GetResult().AddPathSegment(LicenseTypeMapper::GetNameForLicenseType(request.GetLicenseType()));
        return AssociateLicenseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkspaceOutcome ManagedGrafanaClient::CreateWorkspace(const CreateWorkspaceRequest& request) const {
  AWS_OPERATION_GUARD(CreateWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkspace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkspaceOutcome>(
      [&]() -> CreateWorkspaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
        return CreateWorkspaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkspaceApiKeyOutcome ManagedGrafanaClient::CreateWorkspaceApiKey(const CreateWorkspaceApiKeyRequest& request) const {
  AWS_OPERATION_GUARD(CreateWorkspaceApiKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspaceApiKey", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceApiKeyOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkspaceApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkspaceApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkspaceApiKey",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkspaceApiKeyOutcome>(
      [&]() -> CreateWorkspaceApiKeyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
        return CreateWorkspaceApiKeyOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkspaceServiceAccountOutcome ManagedGrafanaClient::CreateWorkspaceServiceAccount(
    const CreateWorkspaceServiceAccountRequest& request) const {
  AWS_OPERATION_GUARD(CreateWorkspaceServiceAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspaceServiceAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspaceServiceAccount", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceServiceAccountOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkspaceServiceAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkspaceServiceAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkspaceServiceAccount",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkspaceServiceAccountOutcome>(
      [&]() -> CreateWorkspaceServiceAccountOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspaceServiceAccount, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts");
        return CreateWorkspaceServiceAccountOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkspaceServiceAccountTokenOutcome ManagedGrafanaClient::CreateWorkspaceServiceAccountToken(
    const CreateWorkspaceServiceAccountTokenRequest& request) const {
  AWS_OPERATION_GUARD(CreateWorkspaceServiceAccountToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspaceServiceAccountToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkspaceServiceAccountToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkspaceServiceAccountToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkspaceServiceAccountToken",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkspaceServiceAccountTokenOutcome>(
      [&]() -> CreateWorkspaceServiceAccountTokenOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspaceServiceAccountToken, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tokens");
        return CreateWorkspaceServiceAccountTokenOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkspaceOutcome ManagedGrafanaClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const {
  AWS_OPERATION_GUARD(DeleteWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorkspace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkspaceOutcome>(
      [&]() -> DeleteWorkspaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        return DeleteWorkspaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkspaceApiKeyOutcome ManagedGrafanaClient::DeleteWorkspaceApiKey(const DeleteWorkspaceApiKeyRequest& request) const {
  AWS_OPERATION_GUARD(DeleteWorkspaceApiKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteWorkspaceApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorkspaceApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorkspaceApiKey",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkspaceApiKeyOutcome>(
      [&]() -> DeleteWorkspaceApiKeyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyName());
        return DeleteWorkspaceApiKeyOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkspaceServiceAccountOutcome ManagedGrafanaClient::DeleteWorkspaceServiceAccount(
    const DeleteWorkspaceServiceAccountRequest& request) const {
  AWS_OPERATION_GUARD(DeleteWorkspaceServiceAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspaceServiceAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteWorkspaceServiceAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorkspaceServiceAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorkspaceServiceAccount",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkspaceServiceAccountOutcome>(
      [&]() -> DeleteWorkspaceServiceAccountOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspaceServiceAccount, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
        return DeleteWorkspaceServiceAccountOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkspaceServiceAccountTokenOutcome ManagedGrafanaClient::DeleteWorkspaceServiceAccountToken(
    const DeleteWorkspaceServiceAccountTokenRequest& request) const {
  AWS_OPERATION_GUARD(DeleteWorkspaceServiceAccountToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspaceServiceAccountToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteWorkspaceServiceAccountToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorkspaceServiceAccountToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorkspaceServiceAccountToken",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkspaceServiceAccountTokenOutcome>(
      [&]() -> DeleteWorkspaceServiceAccountTokenOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspaceServiceAccountToken, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTokenId());
        return DeleteWorkspaceServiceAccountTokenOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeWorkspaceOutcome ManagedGrafanaClient::DescribeWorkspace(const DescribeWorkspaceRequest& request) const {
  AWS_OPERATION_GUARD(DescribeWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeWorkspace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeWorkspaceOutcome>(
      [&]() -> DescribeWorkspaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        return DescribeWorkspaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeWorkspaceAuthenticationOutcome ManagedGrafanaClient::DescribeWorkspaceAuthentication(
    const DescribeWorkspaceAuthenticationRequest& request) const {
  AWS_OPERATION_GUARD(DescribeWorkspaceAuthentication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceAuthentication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspaceAuthentication", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceAuthenticationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeWorkspaceAuthentication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeWorkspaceAuthentication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeWorkspaceAuthentication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeWorkspaceAuthenticationOutcome>(
      [&]() -> DescribeWorkspaceAuthenticationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceAuthentication, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/authentication");
        return DescribeWorkspaceAuthenticationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeWorkspaceConfigurationOutcome ManagedGrafanaClient::DescribeWorkspaceConfiguration(
    const DescribeWorkspaceConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(DescribeWorkspaceConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceConfigurationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeWorkspaceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeWorkspaceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeWorkspaceConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeWorkspaceConfigurationOutcome>(
      [&]() -> DescribeWorkspaceConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
        return DescribeWorkspaceConfigurationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateLicenseOutcome ManagedGrafanaClient::DisassociateLicense(const DisassociateLicenseRequest& request) const {
  AWS_OPERATION_GUARD(DisassociateLicense);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DisassociateLicense, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateLicense, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateLicense",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateLicenseOutcome>(
      [&]() -> DisassociateLicenseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/licenses/");
        endpointResolutionOutcome.GetResult().AddPathSegment(LicenseTypeMapper::GetNameForLicenseType(request.GetLicenseType()));
        return DisassociateLicenseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPermissionsOutcome ManagedGrafanaClient::ListPermissions(const ListPermissionsRequest& request) const {
  AWS_OPERATION_GUARD(ListPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPermissions", "Required field: WorkspaceId, is not set");
    return ListPermissionsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPermissions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPermissionsOutcome>(
      [&]() -> ListPermissionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
        return ListPermissionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome ManagedGrafanaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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
        return ListTagsForResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVersionsOutcome ManagedGrafanaClient::ListVersions(const ListVersionsRequest& request) const {
  AWS_OPERATION_GUARD(ListVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVersions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVersionsOutcome>(
      [&]() -> ListVersionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
        return ListVersionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkspaceServiceAccountTokensOutcome ManagedGrafanaClient::ListWorkspaceServiceAccountTokens(
    const ListWorkspaceServiceAccountTokensRequest& request) const {
  AWS_OPERATION_GUARD(ListWorkspaceServiceAccountTokens);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaceServiceAccountTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkspaceServiceAccountTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkspaceServiceAccountTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkspaceServiceAccountTokens",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkspaceServiceAccountTokensOutcome>(
      [&]() -> ListWorkspaceServiceAccountTokensOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspaceServiceAccountTokens, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceAccountId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tokens");
        return ListWorkspaceServiceAccountTokensOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkspaceServiceAccountsOutcome ManagedGrafanaClient::ListWorkspaceServiceAccounts(
    const ListWorkspaceServiceAccountsRequest& request) const {
  AWS_OPERATION_GUARD(ListWorkspaceServiceAccounts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaceServiceAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaceServiceAccounts", "Required field: WorkspaceId, is not set");
    return ListWorkspaceServiceAccountsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkspaceServiceAccounts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkspaceServiceAccounts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkspaceServiceAccounts",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkspaceServiceAccountsOutcome>(
      [&]() -> ListWorkspaceServiceAccountsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspaceServiceAccounts, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/serviceaccounts");
        return ListWorkspaceServiceAccountsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkspacesOutcome ManagedGrafanaClient::ListWorkspaces(const ListWorkspacesRequest& request) const {
  AWS_OPERATION_GUARD(ListWorkspaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkspaces",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkspacesOutcome>(
      [&]() -> ListWorkspacesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
        return ListWorkspacesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome ManagedGrafanaClient::TagResource(const TagResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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
        return TagResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome ManagedGrafanaClient::UntagResource(const UntagResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
        return UntagResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePermissionsOutcome ManagedGrafanaClient::UpdatePermissions(const UpdatePermissionsRequest& request) const {
  AWS_OPERATION_GUARD(UpdatePermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePermissions", "Required field: WorkspaceId, is not set");
    return UpdatePermissionsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdatePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePermissions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePermissionsOutcome>(
      [&]() -> UpdatePermissionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
        return UpdatePermissionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkspaceOutcome ManagedGrafanaClient::UpdateWorkspace(const UpdateWorkspaceRequest& request) const {
  AWS_OPERATION_GUARD(UpdateWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspace", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorkspace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkspaceOutcome>(
      [&]() -> UpdateWorkspaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        return UpdateWorkspaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkspaceAuthenticationOutcome ManagedGrafanaClient::UpdateWorkspaceAuthentication(
    const UpdateWorkspaceAuthenticationRequest& request) const {
  AWS_OPERATION_GUARD(UpdateWorkspaceAuthentication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspaceAuthentication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceAuthentication", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceAuthenticationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateWorkspaceAuthentication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorkspaceAuthentication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorkspaceAuthentication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkspaceAuthenticationOutcome>(
      [&]() -> UpdateWorkspaceAuthenticationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspaceAuthentication, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/authentication");
        return UpdateWorkspaceAuthenticationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkspaceConfigurationOutcome ManagedGrafanaClient::UpdateWorkspaceConfiguration(
    const UpdateWorkspaceConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(UpdateWorkspaceConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceConfigurationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(
        ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateWorkspaceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorkspaceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorkspaceConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkspaceConfigurationOutcome>(
      [&]() -> UpdateWorkspaceConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspaceConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
        return UpdateWorkspaceConfigurationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
