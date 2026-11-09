/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/ContinuumClient.h>
#include <aws/continuum/ContinuumEndpointProvider.h>
#include <aws/continuum/ContinuumErrorMarshaller.h>
#include <aws/continuum/model/AssociateCollectorRequest.h>
#include <aws/continuum/model/CreateCodeFindingRequest.h>
#include <aws/continuum/model/CreateCodeScanRequest.h>
#include <aws/continuum/model/CreateCollectorRequest.h>
#include <aws/continuum/model/CreateEnvironmentRequest.h>
#include <aws/continuum/model/CreateIntegrationRequest.h>
#include <aws/continuum/model/DeleteCollectorRequest.h>
#include <aws/continuum/model/DeleteEnvironmentRequest.h>
#include <aws/continuum/model/DeleteIntegrationRequest.h>
#include <aws/continuum/model/DisassociateCollectorRequest.h>
#include <aws/continuum/model/GetCodeFindingRequest.h>
#include <aws/continuum/model/GetCodeIssueArtifactRequest.h>
#include <aws/continuum/model/GetCodeIssueRequest.h>
#include <aws/continuum/model/GetCodeScanRequest.h>
#include <aws/continuum/model/GetCollectorDataAccessAuthorizationRequest.h>
#include <aws/continuum/model/GetCollectorRequest.h>
#include <aws/continuum/model/GetEnvironmentRequest.h>
#include <aws/continuum/model/GetIntegrationRequest.h>
#include <aws/continuum/model/GetResourcePolicyRequest.h>
#include <aws/continuum/model/ListAssociatedCollectorsRequest.h>
#include <aws/continuum/model/ListAssociatedEnvironmentsRequest.h>
#include <aws/continuum/model/ListCodeFindingsRequest.h>
#include <aws/continuum/model/ListCodeIssueArtifactsRequest.h>
#include <aws/continuum/model/ListCodeIssuesRequest.h>
#include <aws/continuum/model/ListCodeScansRequest.h>
#include <aws/continuum/model/ListCollectorsRequest.h>
#include <aws/continuum/model/ListEnvironmentsRequest.h>
#include <aws/continuum/model/ListIntegrationsRequest.h>
#include <aws/continuum/model/PutResourcePolicyRequest.h>
#include <aws/continuum/model/StartIntegrationAuthorizationRequest.h>
#include <aws/continuum/model/UpdateCollectorRequest.h>
#include <aws/continuum/model/UpdateEnvironmentRequest.h>
#include <aws/continuum/model/UpdateIntegrationRequest.h>
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
using namespace Aws::Continuum;
using namespace Aws::Continuum::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Continuum {
const char SERVICE_NAME[] = "continuum";
const char ALLOCATION_TAG[] = "ContinuumClient";
}  // namespace Continuum
}  // namespace Aws
const char* ContinuumClient::GetServiceName() { return SERVICE_NAME; }
const char* ContinuumClient::GetAllocationTag() { return ALLOCATION_TAG; }

ContinuumClient::ContinuumClient(const Continuum::ContinuumClientConfiguration& clientConfiguration,
                                 std::shared_ptr<ContinuumEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ContinuumErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ContinuumEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ContinuumClient::ContinuumClient(const AWSCredentials& credentials, std::shared_ptr<ContinuumEndpointProviderBase> endpointProvider,
                                 const Continuum::ContinuumClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ContinuumErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ContinuumEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ContinuumClient::ContinuumClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ContinuumEndpointProviderBase> endpointProvider,
                                 const Continuum::ContinuumClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ContinuumErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ContinuumEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ContinuumClient::ContinuumClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ContinuumErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ContinuumEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ContinuumClient::ContinuumClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ContinuumErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ContinuumEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ContinuumClient::ContinuumClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ContinuumErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ContinuumEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ContinuumClient::~ContinuumClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ContinuumEndpointProviderBase>& ContinuumClient::accessEndpointProvider() { return m_endpointProvider; }

void ContinuumClient::init(const Continuum::ContinuumClientConfiguration& config) {
  AWSClient::SetServiceClientName("Continuum");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "continuum");
}

void ContinuumClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ContinuumClient::InvokeOperationOutcome ContinuumClient::InvokeServiceOperation(
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

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
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
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateCollectorOutcome ContinuumClient::AssociateCollector(const AssociateCollectorRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateCollector", "Required field: EnvironmentId, is not set");
    return AssociateCollectorOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateCollectorOutcome(result.GetResultWithOwnership())
                            : AssociateCollectorOutcome(std::move(result.GetError()));
}

CreateCodeFindingOutcome ContinuumClient::CreateCodeFinding(const CreateCodeFindingRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCodeFinding", "Required field: EnvironmentId, is not set");
    return CreateCodeFindingOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-findings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCodeFindingOutcome(result.GetResultWithOwnership())
                            : CreateCodeFindingOutcome(std::move(result.GetError()));
}

CreateCodeScanOutcome ContinuumClient::CreateCodeScan(const CreateCodeScanRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCodeScan", "Required field: EnvironmentId, is not set");
    return CreateCodeScanOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-scans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCodeScanOutcome(result.GetResultWithOwnership()) : CreateCodeScanOutcome(std::move(result.GetError()));
}

CreateCollectorOutcome ContinuumClient::CreateCollector(const CreateCollectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCollectorOutcome(result.GetResultWithOwnership())
                            : CreateCollectorOutcome(std::move(result.GetError()));
}

CreateEnvironmentOutcome ContinuumClient::CreateEnvironment(const CreateEnvironmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEnvironmentOutcome(result.GetResultWithOwnership())
                            : CreateEnvironmentOutcome(std::move(result.GetError()));
}

CreateIntegrationOutcome ContinuumClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationOutcome(std::move(result.GetError()));
}

DeleteCollectorOutcome ContinuumClient::DeleteCollector(const DeleteCollectorRequest& request) const {
  if (!request.CollectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCollector", "Required field: CollectorId, is not set");
    return DeleteCollectorOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [CollectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCollectorOutcome(result.GetResultWithOwnership())
                            : DeleteCollectorOutcome(std::move(result.GetError()));
}

DeleteEnvironmentOutcome ContinuumClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnvironmentOutcome(result.GetResultWithOwnership())
                            : DeleteEnvironmentOutcome(std::move(result.GetError()));
}

DeleteIntegrationOutcome ContinuumClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: IntegrationId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationOutcome(std::move(result.GetError()));
}

DisassociateCollectorOutcome ContinuumClient::DisassociateCollector(const DisassociateCollectorRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateCollector", "Required field: EnvironmentId, is not set");
    return DisassociateCollectorOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateCollectorOutcome(result.GetResultWithOwnership())
                            : DisassociateCollectorOutcome(std::move(result.GetError()));
}

GetCodeFindingOutcome ContinuumClient::GetCodeFinding(const GetCodeFindingRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeFinding", "Required field: EnvironmentId, is not set");
    return GetCodeFindingOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }
  if (!request.FindingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeFinding", "Required field: FindingId, is not set");
    return GetCodeFindingOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FindingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-findings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFindingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCodeFindingOutcome(result.GetResultWithOwnership()) : GetCodeFindingOutcome(std::move(result.GetError()));
}

GetCodeIssueOutcome ContinuumClient::GetCodeIssue(const GetCodeIssueRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeIssue", "Required field: EnvironmentId, is not set");
    return GetCodeIssueOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [EnvironmentId]", false));
  }
  if (!request.IssueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeIssue", "Required field: IssueId, is not set");
    return GetCodeIssueOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [IssueId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-issues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIssueId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCodeIssueOutcome(result.GetResultWithOwnership()) : GetCodeIssueOutcome(std::move(result.GetError()));
}

GetCodeIssueArtifactOutcome ContinuumClient::GetCodeIssueArtifact(const GetCodeIssueArtifactRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeIssueArtifact", "Required field: EnvironmentId, is not set");
    return GetCodeIssueArtifactOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EnvironmentId]", false));
  }
  if (!request.IssueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeIssueArtifact", "Required field: IssueId, is not set");
    return GetCodeIssueArtifactOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IssueId]", false));
  }
  if (!request.ArtifactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeIssueArtifact", "Required field: ArtifactId, is not set");
    return GetCodeIssueArtifactOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ArtifactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-issues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIssueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/artifacts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArtifactId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCodeIssueArtifactOutcome(result.GetResultWithOwnership())
                            : GetCodeIssueArtifactOutcome(std::move(result.GetError()));
}

GetCodeScanOutcome ContinuumClient::GetCodeScan(const GetCodeScanRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeScan", "Required field: EnvironmentId, is not set");
    return GetCodeScanOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [EnvironmentId]", false));
  }
  if (!request.ScanRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeScan", "Required field: ScanRunId, is not set");
    return GetCodeScanOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ScanRunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-scans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScanRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCodeScanOutcome(result.GetResultWithOwnership()) : GetCodeScanOutcome(std::move(result.GetError()));
}

GetCollectorOutcome ContinuumClient::GetCollector(const GetCollectorRequest& request) const {
  if (!request.CollectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollector", "Required field: CollectorId, is not set");
    return GetCollectorOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CollectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollectorOutcome(result.GetResultWithOwnership()) : GetCollectorOutcome(std::move(result.GetError()));
}

GetCollectorDataAccessAuthorizationOutcome ContinuumClient::GetCollectorDataAccessAuthorization(
    const GetCollectorDataAccessAuthorizationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollectorDataAccessAuthorization", "Required field: AccountId, is not set");
    return GetCollectorDataAccessAuthorizationOutcome(Aws::Client::AWSError<ContinuumErrors>(
        ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.CollectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollectorDataAccessAuthorization", "Required field: CollectorId, is not set");
    return GetCollectorDataAccessAuthorizationOutcome(Aws::Client::AWSError<ContinuumErrors>(
        ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-access-authorization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollectorDataAccessAuthorizationOutcome(result.GetResultWithOwnership())
                            : GetCollectorDataAccessAuthorizationOutcome(std::move(result.GetError()));
}

GetEnvironmentOutcome ContinuumClient::GetEnvironment(const GetEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentId, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentOutcome(result.GetResultWithOwnership()) : GetEnvironmentOutcome(std::move(result.GetError()));
}

GetIntegrationOutcome ContinuumClient::GetIntegration(const GetIntegrationRequest& request) const {
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: IntegrationId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIntegrationOutcome(result.GetResultWithOwnership()) : GetIntegrationOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome ContinuumClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: Arn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

ListAssociatedCollectorsOutcome ContinuumClient::ListAssociatedCollectors(const ListAssociatedCollectorsRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedCollectors", "Required field: EnvironmentId, is not set");
    return ListAssociatedCollectorsOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssociatedCollectorsOutcome(result.GetResultWithOwnership())
                            : ListAssociatedCollectorsOutcome(std::move(result.GetError()));
}

ListAssociatedEnvironmentsOutcome ContinuumClient::ListAssociatedEnvironments(const ListAssociatedEnvironmentsRequest& request) const {
  if (!request.CollectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedEnvironments", "Required field: CollectorId, is not set");
    return ListAssociatedEnvironmentsOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [CollectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssociatedEnvironmentsOutcome(result.GetResultWithOwnership())
                            : ListAssociatedEnvironmentsOutcome(std::move(result.GetError()));
}

ListCodeFindingsOutcome ContinuumClient::ListCodeFindings(const ListCodeFindingsRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodeFindings", "Required field: EnvironmentId, is not set");
    return ListCodeFindingsOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-findings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCodeFindingsOutcome(result.GetResultWithOwnership())
                            : ListCodeFindingsOutcome(std::move(result.GetError()));
}

ListCodeIssueArtifactsOutcome ContinuumClient::ListCodeIssueArtifacts(const ListCodeIssueArtifactsRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodeIssueArtifacts", "Required field: EnvironmentId, is not set");
    return ListCodeIssueArtifactsOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EnvironmentId]", false));
  }
  if (!request.IssueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodeIssueArtifacts", "Required field: IssueId, is not set");
    return ListCodeIssueArtifactsOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [IssueId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-issues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIssueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/artifacts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCodeIssueArtifactsOutcome(result.GetResultWithOwnership())
                            : ListCodeIssueArtifactsOutcome(std::move(result.GetError()));
}

ListCodeIssuesOutcome ContinuumClient::ListCodeIssues(const ListCodeIssuesRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodeIssues", "Required field: EnvironmentId, is not set");
    return ListCodeIssuesOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-issues");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCodeIssuesOutcome(result.GetResultWithOwnership()) : ListCodeIssuesOutcome(std::move(result.GetError()));
}

ListCodeScansOutcome ContinuumClient::ListCodeScans(const ListCodeScansRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodeScans", "Required field: EnvironmentId, is not set");
    return ListCodeScansOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-scans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCodeScansOutcome(result.GetResultWithOwnership()) : ListCodeScansOutcome(std::move(result.GetError()));
}

ListCollectorsOutcome ContinuumClient::ListCollectors(const ListCollectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollectorsOutcome(result.GetResultWithOwnership()) : ListCollectorsOutcome(std::move(result.GetError()));
}

ListEnvironmentsOutcome ContinuumClient::ListEnvironments(const ListEnvironmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnvironmentsOutcome(result.GetResultWithOwnership())
                            : ListEnvironmentsOutcome(std::move(result.GetError()));
}

ListIntegrationsOutcome ContinuumClient::ListIntegrations(const ListIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIntegrationsOutcome(result.GetResultWithOwnership())
                            : ListIntegrationsOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome ContinuumClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

StartIntegrationAuthorizationOutcome ContinuumClient::StartIntegrationAuthorization(
    const StartIntegrationAuthorizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration-authorizations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartIntegrationAuthorizationOutcome(result.GetResultWithOwnership())
                            : StartIntegrationAuthorizationOutcome(std::move(result.GetError()));
}

UpdateCollectorOutcome ContinuumClient::UpdateCollector(const UpdateCollectorRequest& request) const {
  if (!request.CollectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCollector", "Required field: CollectorId, is not set");
    return UpdateCollectorOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [CollectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollectorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateCollectorOutcome(result.GetResultWithOwnership())
                            : UpdateCollectorOutcome(std::move(result.GetError()));
}

UpdateEnvironmentOutcome ContinuumClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEnvironmentOutcome(result.GetResultWithOwnership())
                            : UpdateEnvironmentOutcome(std::move(result.GetError()));
}

UpdateIntegrationOutcome ContinuumClient::UpdateIntegration(const UpdateIntegrationRequest& request) const {
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: IntegrationId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<ContinuumErrors>(ContinuumErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateIntegrationOutcome(result.GetResultWithOwnership())
                            : UpdateIntegrationOutcome(std::move(result.GetError()));
}
