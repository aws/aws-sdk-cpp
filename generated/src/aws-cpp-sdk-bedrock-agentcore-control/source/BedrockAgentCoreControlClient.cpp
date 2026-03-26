/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlClient.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlEndpointProvider.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlErrorMarshaller.h>
#include <aws/bedrock-agentcore-control/model/CreateAgentRuntimeEndpointRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateApiKeyCredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateBrowserProfileRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateBrowserRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateCodeInterpreterRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/CreatePolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/CreatePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateWorkloadIdentityRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteAgentRuntimeEndpointRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteApiKeyCredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteBrowserProfileRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteBrowserRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteCodeInterpreterRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/DeletePolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/DeletePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteResourcePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteWorkloadIdentityRequest.h>
#include <aws/bedrock-agentcore-control/model/GetAgentRuntimeEndpointRequest.h>
#include <aws/bedrock-agentcore-control/model/GetAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore-control/model/GetApiKeyCredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/GetBrowserProfileRequest.h>
#include <aws/bedrock-agentcore-control/model/GetBrowserRequest.h>
#include <aws/bedrock-agentcore-control/model/GetCodeInterpreterRequest.h>
#include <aws/bedrock-agentcore-control/model/GetEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/GetMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/GetOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/GetOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyGenerationRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/GetResourcePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/GetTokenVaultRequest.h>
#include <aws/bedrock-agentcore-control/model/GetWorkloadIdentityRequest.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeEndpointsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeVersionsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListBrowserProfilesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListBrowsersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListCodeInterpretersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListEvaluatorsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayTargetsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListGatewaysRequest.h>
#include <aws/bedrock-agentcore-control/model/ListMemoriesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPoliciesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationAssetsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-agentcore-control/model/ListWorkloadIdentitiesRequest.h>
#include <aws/bedrock-agentcore-control/model/PutResourcePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/SetTokenVaultCMKRequest.h>
#include <aws/bedrock-agentcore-control/model/StartPolicyGenerationRequest.h>
#include <aws/bedrock-agentcore-control/model/SynchronizeGatewayTargetsRequest.h>
#include <aws/bedrock-agentcore-control/model/TagResourceRequest.h>
#include <aws/bedrock-agentcore-control/model/UntagResourceRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateAgentRuntimeEndpointRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateApiKeyCredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdatePolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdatePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateWorkloadIdentityRequest.h>
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
using namespace Aws::BedrockAgentCoreControl;
using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BedrockAgentCoreControl {
const char SERVICE_NAME[] = "bedrock-agentcore";
const char ALLOCATION_TAG[] = "BedrockAgentCoreControlClient";
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
const char* BedrockAgentCoreControlClient::GetServiceName() { return SERVICE_NAME; }
const char* BedrockAgentCoreControlClient::GetAllocationTag() { return ALLOCATION_TAG; }

BedrockAgentCoreControlClient::BedrockAgentCoreControlClient(
    const BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration,
    std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BedrockAgentCoreControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreControlClient::BedrockAgentCoreControlClient(
    const AWSCredentials& credentials, std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider,
    const BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BedrockAgentCoreControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreControlClient::BedrockAgentCoreControlClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider,
    const BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BedrockAgentCoreControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BedrockAgentCoreControlClient::BedrockAgentCoreControlClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BedrockAgentCoreControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreControlClient::BedrockAgentCoreControlClient(const AWSCredentials& credentials,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BedrockAgentCoreControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreControlClient::BedrockAgentCoreControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BedrockAgentCoreControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BedrockAgentCoreControlClient::~BedrockAgentCoreControlClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase>& BedrockAgentCoreControlClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void BedrockAgentCoreControlClient::init(const BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& config) {
  AWSClient::SetServiceClientName("Bedrock AgentCore Control");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "bedrock-agentcore");
}

void BedrockAgentCoreControlClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BedrockAgentCoreControlClient::InvokeOperationOutcome BedrockAgentCoreControlClient::InvokeServiceOperation(
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

CreateAgentRuntimeOutcome BedrockAgentCoreControlClient::CreateAgentRuntime(const CreateAgentRuntimeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
  };

  return CreateAgentRuntimeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateAgentRuntimeEndpointOutcome BedrockAgentCoreControlClient::CreateAgentRuntimeEndpoint(
    const CreateAgentRuntimeEndpointRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAgentRuntimeEndpoint", "Required field: AgentRuntimeId, is not set");
    return CreateAgentRuntimeEndpointOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-endpoints/");
  };

  return CreateAgentRuntimeEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::CreateApiKeyCredentialProvider(
    const CreateApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/CreateApiKeyCredentialProvider");
  };

  return CreateApiKeyCredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBrowserOutcome BedrockAgentCoreControlClient::CreateBrowser(const CreateBrowserRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers");
  };

  return CreateBrowserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateBrowserProfileOutcome BedrockAgentCoreControlClient::CreateBrowserProfile(const CreateBrowserProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browser-profiles");
  };

  return CreateBrowserProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateCodeInterpreterOutcome BedrockAgentCoreControlClient::CreateCodeInterpreter(const CreateCodeInterpreterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters");
  };

  return CreateCodeInterpreterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateEvaluatorOutcome BedrockAgentCoreControlClient::CreateEvaluator(const CreateEvaluatorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluators/create");
  };

  return CreateEvaluatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGatewayOutcome BedrockAgentCoreControlClient::CreateGateway(const CreateGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
  };

  return CreateGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGatewayTargetOutcome BedrockAgentCoreControlClient::CreateGatewayTarget(const CreateGatewayTargetRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGatewayTarget", "Required field: GatewayIdentifier, is not set");
    return CreateGatewayTargetOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets/");
  };

  return CreateGatewayTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMemoryOutcome BedrockAgentCoreControlClient::CreateMemory(const CreateMemoryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/create");
  };

  return CreateMemoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::CreateOauth2CredentialProvider(
    const CreateOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/CreateOauth2CredentialProvider");
  };

  return CreateOauth2CredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOnlineEvaluationConfigOutcome BedrockAgentCoreControlClient::CreateOnlineEvaluationConfig(
    const CreateOnlineEvaluationConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/online-evaluation-configs/create");
  };

  return CreateOnlineEvaluationConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePolicyOutcome BedrockAgentCoreControlClient::CreatePolicy(const CreatePolicyRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePolicy", "Required field: PolicyEngineId, is not set");
    return CreatePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies");
  };

  return CreatePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePolicyEngineOutcome BedrockAgentCoreControlClient::CreatePolicyEngine(const CreatePolicyEngineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines");
  };

  return CreatePolicyEngineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkloadIdentityOutcome BedrockAgentCoreControlClient::CreateWorkloadIdentity(const CreateWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/CreateWorkloadIdentity");
  };

  return CreateWorkloadIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAgentRuntimeOutcome BedrockAgentCoreControlClient::DeleteAgentRuntime(const DeleteAgentRuntimeRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentRuntime", "Required field: AgentRuntimeId, is not set");
    return DeleteAgentRuntimeOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
  };

  return DeleteAgentRuntimeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAgentRuntimeEndpointOutcome BedrockAgentCoreControlClient::DeleteAgentRuntimeEndpoint(
    const DeleteAgentRuntimeEndpointRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentRuntimeEndpoint", "Required field: AgentRuntimeId, is not set");
    return DeleteAgentRuntimeEndpointOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentRuntimeEndpoint", "Required field: EndpointName, is not set");
    return DeleteAgentRuntimeEndpointOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  return DeleteAgentRuntimeEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::DeleteApiKeyCredentialProvider(
    const DeleteApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/DeleteApiKeyCredentialProvider");
  };

  return DeleteApiKeyCredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBrowserOutcome BedrockAgentCoreControlClient::DeleteBrowser(const DeleteBrowserRequest& request) const {
  if (!request.BrowserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrowser", "Required field: BrowserId, is not set");
    return DeleteBrowserOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserId());
  };

  return DeleteBrowserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBrowserProfileOutcome BedrockAgentCoreControlClient::DeleteBrowserProfile(const DeleteBrowserProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrowserProfile", "Required field: ProfileId, is not set");
    return DeleteBrowserProfileOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browser-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  };

  return DeleteBrowserProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCodeInterpreterOutcome BedrockAgentCoreControlClient::DeleteCodeInterpreter(const DeleteCodeInterpreterRequest& request) const {
  if (!request.CodeInterpreterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCodeInterpreter", "Required field: CodeInterpreterId, is not set");
    return DeleteCodeInterpreterOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeInterpreterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeInterpreterId());
  };

  return DeleteCodeInterpreterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEvaluatorOutcome BedrockAgentCoreControlClient::DeleteEvaluator(const DeleteEvaluatorRequest& request) const {
  if (!request.EvaluatorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEvaluator", "Required field: EvaluatorId, is not set");
    return DeleteEvaluatorOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluatorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluatorId());
  };

  return DeleteEvaluatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGatewayOutcome BedrockAgentCoreControlClient::DeleteGateway(const DeleteGatewayRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGateway", "Required field: GatewayIdentifier, is not set");
    return DeleteGatewayOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
  };

  return DeleteGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGatewayTargetOutcome BedrockAgentCoreControlClient::DeleteGatewayTarget(const DeleteGatewayTargetRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayTarget", "Required field: GatewayIdentifier, is not set");
    return DeleteGatewayTargetOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }
  if (!request.TargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayTarget", "Required field: TargetId, is not set");
    return DeleteGatewayTargetOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetId());
  };

  return DeleteGatewayTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMemoryOutcome BedrockAgentCoreControlClient::DeleteMemory(const DeleteMemoryRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMemory", "Required field: MemoryId, is not set");
    return DeleteMemoryOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete");
  };

  return DeleteMemoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::DeleteOauth2CredentialProvider(
    const DeleteOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/DeleteOauth2CredentialProvider");
  };

  return DeleteOauth2CredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOnlineEvaluationConfigOutcome BedrockAgentCoreControlClient::DeleteOnlineEvaluationConfig(
    const DeleteOnlineEvaluationConfigRequest& request) const {
  if (!request.OnlineEvaluationConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOnlineEvaluationConfig", "Required field: OnlineEvaluationConfigId, is not set");
    return DeleteOnlineEvaluationConfigOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OnlineEvaluationConfigId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/online-evaluation-configs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOnlineEvaluationConfigId());
  };

  return DeleteOnlineEvaluationConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePolicyOutcome BedrockAgentCoreControlClient::DeletePolicy(const DeletePolicyRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicy", "Required field: PolicyEngineId, is not set");
    return DeletePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }
  if (!request.PolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicy", "Required field: PolicyId, is not set");
    return DeletePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyId());
  };

  return DeletePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePolicyEngineOutcome BedrockAgentCoreControlClient::DeletePolicyEngine(const DeletePolicyEngineRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicyEngine", "Required field: PolicyEngineId, is not set");
    return DeletePolicyEngineOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
  };

  return DeletePolicyEngineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourcePolicyOutcome BedrockAgentCoreControlClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkloadIdentityOutcome BedrockAgentCoreControlClient::DeleteWorkloadIdentity(const DeleteWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/DeleteWorkloadIdentity");
  };

  return DeleteWorkloadIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAgentRuntimeOutcome BedrockAgentCoreControlClient::GetAgentRuntime(const GetAgentRuntimeRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentRuntime", "Required field: AgentRuntimeId, is not set");
    return GetAgentRuntimeOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
  };

  return GetAgentRuntimeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAgentRuntimeEndpointOutcome BedrockAgentCoreControlClient::GetAgentRuntimeEndpoint(const GetAgentRuntimeEndpointRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentRuntimeEndpoint", "Required field: AgentRuntimeId, is not set");
    return GetAgentRuntimeEndpointOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentRuntimeEndpoint", "Required field: EndpointName, is not set");
    return GetAgentRuntimeEndpointOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  return GetAgentRuntimeEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::GetApiKeyCredentialProvider(
    const GetApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetApiKeyCredentialProvider");
  };

  return GetApiKeyCredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBrowserOutcome BedrockAgentCoreControlClient::GetBrowser(const GetBrowserRequest& request) const {
  if (!request.BrowserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrowser", "Required field: BrowserId, is not set");
    return GetBrowserOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserId());
  };

  return GetBrowserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBrowserProfileOutcome BedrockAgentCoreControlClient::GetBrowserProfile(const GetBrowserProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrowserProfile", "Required field: ProfileId, is not set");
    return GetBrowserProfileOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browser-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  };

  return GetBrowserProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCodeInterpreterOutcome BedrockAgentCoreControlClient::GetCodeInterpreter(const GetCodeInterpreterRequest& request) const {
  if (!request.CodeInterpreterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeInterpreter", "Required field: CodeInterpreterId, is not set");
    return GetCodeInterpreterOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeInterpreterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeInterpreterId());
  };

  return GetCodeInterpreterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEvaluatorOutcome BedrockAgentCoreControlClient::GetEvaluator(const GetEvaluatorRequest& request) const {
  if (!request.EvaluatorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvaluator", "Required field: EvaluatorId, is not set");
    return GetEvaluatorOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluatorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluatorId());
  };

  return GetEvaluatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGatewayOutcome BedrockAgentCoreControlClient::GetGateway(const GetGatewayRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGateway", "Required field: GatewayIdentifier, is not set");
    return GetGatewayOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
  };

  return GetGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGatewayTargetOutcome BedrockAgentCoreControlClient::GetGatewayTarget(const GetGatewayTargetRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGatewayTarget", "Required field: GatewayIdentifier, is not set");
    return GetGatewayTargetOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }
  if (!request.TargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGatewayTarget", "Required field: TargetId, is not set");
    return GetGatewayTargetOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetId());
  };

  return GetGatewayTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMemoryOutcome BedrockAgentCoreControlClient::GetMemory(const GetMemoryRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMemory", "Required field: MemoryId, is not set");
    return GetMemoryOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  };

  return GetMemoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::GetOauth2CredentialProvider(
    const GetOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetOauth2CredentialProvider");
  };

  return GetOauth2CredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOnlineEvaluationConfigOutcome BedrockAgentCoreControlClient::GetOnlineEvaluationConfig(
    const GetOnlineEvaluationConfigRequest& request) const {
  if (!request.OnlineEvaluationConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOnlineEvaluationConfig", "Required field: OnlineEvaluationConfigId, is not set");
    return GetOnlineEvaluationConfigOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OnlineEvaluationConfigId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/online-evaluation-configs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOnlineEvaluationConfigId());
  };

  return GetOnlineEvaluationConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPolicyOutcome BedrockAgentCoreControlClient::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: PolicyEngineId, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }
  if (!request.PolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: PolicyId, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyId());
  };

  return GetPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPolicyEngineOutcome BedrockAgentCoreControlClient::GetPolicyEngine(const GetPolicyEngineRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicyEngine", "Required field: PolicyEngineId, is not set");
    return GetPolicyEngineOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
  };

  return GetPolicyEngineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPolicyGenerationOutcome BedrockAgentCoreControlClient::GetPolicyGeneration(const GetPolicyGenerationRequest& request) const {
  if (!request.PolicyGenerationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicyGeneration", "Required field: PolicyGenerationId, is not set");
    return GetPolicyGenerationOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyGenerationId]", false));
  }
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicyGeneration", "Required field: PolicyEngineId, is not set");
    return GetPolicyGenerationOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-generations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyGenerationId());
  };

  return GetPolicyGenerationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcePolicyOutcome BedrockAgentCoreControlClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return GetResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTokenVaultOutcome BedrockAgentCoreControlClient::GetTokenVault(const GetTokenVaultRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/get-token-vault");
  };

  return GetTokenVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkloadIdentityOutcome BedrockAgentCoreControlClient::GetWorkloadIdentity(const GetWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetWorkloadIdentity");
  };

  return GetWorkloadIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAgentRuntimeEndpointsOutcome BedrockAgentCoreControlClient::ListAgentRuntimeEndpoints(
    const ListAgentRuntimeEndpointsRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentRuntimeEndpoints", "Required field: AgentRuntimeId, is not set");
    return ListAgentRuntimeEndpointsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-endpoints/");
  };

  return ListAgentRuntimeEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAgentRuntimeVersionsOutcome BedrockAgentCoreControlClient::ListAgentRuntimeVersions(
    const ListAgentRuntimeVersionsRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentRuntimeVersions", "Required field: AgentRuntimeId, is not set");
    return ListAgentRuntimeVersionsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  };

  return ListAgentRuntimeVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAgentRuntimesOutcome BedrockAgentCoreControlClient::ListAgentRuntimes(const ListAgentRuntimesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
  };

  return ListAgentRuntimesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApiKeyCredentialProvidersOutcome BedrockAgentCoreControlClient::ListApiKeyCredentialProviders(
    const ListApiKeyCredentialProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/ListApiKeyCredentialProviders");
  };

  return ListApiKeyCredentialProvidersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBrowserProfilesOutcome BedrockAgentCoreControlClient::ListBrowserProfiles(const ListBrowserProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browser-profiles");
  };

  return ListBrowserProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBrowsersOutcome BedrockAgentCoreControlClient::ListBrowsers(const ListBrowsersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers");
  };

  return ListBrowsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCodeInterpretersOutcome BedrockAgentCoreControlClient::ListCodeInterpreters(const ListCodeInterpretersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters");
  };

  return ListCodeInterpretersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEvaluatorsOutcome BedrockAgentCoreControlClient::ListEvaluators(const ListEvaluatorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluators");
  };

  return ListEvaluatorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGatewayTargetsOutcome BedrockAgentCoreControlClient::ListGatewayTargets(const ListGatewayTargetsRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGatewayTargets", "Required field: GatewayIdentifier, is not set");
    return ListGatewayTargetsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets/");
  };

  return ListGatewayTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGatewaysOutcome BedrockAgentCoreControlClient::ListGateways(const ListGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
  };

  return ListGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMemoriesOutcome BedrockAgentCoreControlClient::ListMemories(const ListMemoriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
  };

  return ListMemoriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOauth2CredentialProvidersOutcome BedrockAgentCoreControlClient::ListOauth2CredentialProviders(
    const ListOauth2CredentialProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/ListOauth2CredentialProviders");
  };

  return ListOauth2CredentialProvidersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOnlineEvaluationConfigsOutcome BedrockAgentCoreControlClient::ListOnlineEvaluationConfigs(
    const ListOnlineEvaluationConfigsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/online-evaluation-configs");
  };

  return ListOnlineEvaluationConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPoliciesOutcome BedrockAgentCoreControlClient::ListPolicies(const ListPoliciesRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicies", "Required field: PolicyEngineId, is not set");
    return ListPoliciesOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies");
  };

  return ListPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPolicyEnginesOutcome BedrockAgentCoreControlClient::ListPolicyEngines(const ListPolicyEnginesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines");
  };

  return ListPolicyEnginesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPolicyGenerationAssetsOutcome BedrockAgentCoreControlClient::ListPolicyGenerationAssets(
    const ListPolicyGenerationAssetsRequest& request) const {
  if (!request.PolicyGenerationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyGenerationAssets", "Required field: PolicyGenerationId, is not set");
    return ListPolicyGenerationAssetsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyGenerationId]", false));
  }
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyGenerationAssets", "Required field: PolicyEngineId, is not set");
    return ListPolicyGenerationAssetsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-generations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyGenerationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  };

  return ListPolicyGenerationAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPolicyGenerationsOutcome BedrockAgentCoreControlClient::ListPolicyGenerations(const ListPolicyGenerationsRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyGenerations", "Required field: PolicyEngineId, is not set");
    return ListPolicyGenerationsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-generations");
  };

  return ListPolicyGenerationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome BedrockAgentCoreControlClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkloadIdentitiesOutcome BedrockAgentCoreControlClient::ListWorkloadIdentities(const ListWorkloadIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/ListWorkloadIdentities");
  };

  return ListWorkloadIdentitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome BedrockAgentCoreControlClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: ResourceArn, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SetTokenVaultCMKOutcome BedrockAgentCoreControlClient::SetTokenVaultCMK(const SetTokenVaultCMKRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/set-token-vault-cmk");
  };

  return SetTokenVaultCMKOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartPolicyGenerationOutcome BedrockAgentCoreControlClient::StartPolicyGeneration(const StartPolicyGenerationRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartPolicyGeneration", "Required field: PolicyEngineId, is not set");
    return StartPolicyGenerationOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-generations");
  };

  return StartPolicyGenerationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SynchronizeGatewayTargetsOutcome BedrockAgentCoreControlClient::SynchronizeGatewayTargets(
    const SynchronizeGatewayTargetsRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SynchronizeGatewayTargets", "Required field: GatewayIdentifier, is not set");
    return SynchronizeGatewayTargetsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/synchronizeTargets");
  };

  return SynchronizeGatewayTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome BedrockAgentCoreControlClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome BedrockAgentCoreControlClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAgentRuntimeOutcome BedrockAgentCoreControlClient::UpdateAgentRuntime(const UpdateAgentRuntimeRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentRuntime", "Required field: AgentRuntimeId, is not set");
    return UpdateAgentRuntimeOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
  };

  return UpdateAgentRuntimeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAgentRuntimeEndpointOutcome BedrockAgentCoreControlClient::UpdateAgentRuntimeEndpoint(
    const UpdateAgentRuntimeEndpointRequest& request) const {
  if (!request.AgentRuntimeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentRuntimeEndpoint", "Required field: AgentRuntimeId, is not set");
    return UpdateAgentRuntimeEndpointOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeId]", false));
  }
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentRuntimeEndpoint", "Required field: EndpointName, is not set");
    return UpdateAgentRuntimeEndpointOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  return UpdateAgentRuntimeEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::UpdateApiKeyCredentialProvider(
    const UpdateApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/UpdateApiKeyCredentialProvider");
  };

  return UpdateApiKeyCredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEvaluatorOutcome BedrockAgentCoreControlClient::UpdateEvaluator(const UpdateEvaluatorRequest& request) const {
  if (!request.EvaluatorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEvaluator", "Required field: EvaluatorId, is not set");
    return UpdateEvaluatorOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvaluatorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluatorId());
  };

  return UpdateEvaluatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGatewayOutcome BedrockAgentCoreControlClient::UpdateGateway(const UpdateGatewayRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGateway", "Required field: GatewayIdentifier, is not set");
    return UpdateGatewayOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
  };

  return UpdateGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGatewayTargetOutcome BedrockAgentCoreControlClient::UpdateGatewayTarget(const UpdateGatewayTargetRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayTarget", "Required field: GatewayIdentifier, is not set");
    return UpdateGatewayTargetOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }
  if (!request.TargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayTarget", "Required field: TargetId, is not set");
    return UpdateGatewayTargetOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetId());
  };

  return UpdateGatewayTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateMemoryOutcome BedrockAgentCoreControlClient::UpdateMemory(const UpdateMemoryRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMemory", "Required field: MemoryId, is not set");
    return UpdateMemoryOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update");
  };

  return UpdateMemoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::UpdateOauth2CredentialProvider(
    const UpdateOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/UpdateOauth2CredentialProvider");
  };

  return UpdateOauth2CredentialProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOnlineEvaluationConfigOutcome BedrockAgentCoreControlClient::UpdateOnlineEvaluationConfig(
    const UpdateOnlineEvaluationConfigRequest& request) const {
  if (!request.OnlineEvaluationConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOnlineEvaluationConfig", "Required field: OnlineEvaluationConfigId, is not set");
    return UpdateOnlineEvaluationConfigOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OnlineEvaluationConfigId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/online-evaluation-configs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOnlineEvaluationConfigId());
  };

  return UpdateOnlineEvaluationConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePolicyOutcome BedrockAgentCoreControlClient::UpdatePolicy(const UpdatePolicyRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePolicy", "Required field: PolicyEngineId, is not set");
    return UpdatePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }
  if (!request.PolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePolicy", "Required field: PolicyId, is not set");
    return UpdatePolicyOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyId());
  };

  return UpdatePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePolicyEngineOutcome BedrockAgentCoreControlClient::UpdatePolicyEngine(const UpdatePolicyEngineRequest& request) const {
  if (!request.PolicyEngineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePolicyEngine", "Required field: PolicyEngineId, is not set");
    return UpdatePolicyEngineOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyEngineId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyEngineId());
  };

  return UpdatePolicyEngineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateWorkloadIdentityOutcome BedrockAgentCoreControlClient::UpdateWorkloadIdentity(const UpdateWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/UpdateWorkloadIdentity");
  };

  return UpdateWorkloadIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
