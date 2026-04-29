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
#include <aws/bedrock-agentcore-control/model/CreateConfigurationBundleRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayRuleRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateHarnessRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/CreatePolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/CreatePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateRegistryRecordRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateRegistryRequest.h>
#include <aws/bedrock-agentcore-control/model/CreateWorkloadIdentityRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteAgentRuntimeEndpointRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteApiKeyCredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteBrowserProfileRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteBrowserRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteCodeInterpreterRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteConfigurationBundleRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayRuleRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteHarnessRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/DeletePolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/DeletePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteRegistryRecordRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteRegistryRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteResourcePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/DeleteWorkloadIdentityRequest.h>
#include <aws/bedrock-agentcore-control/model/GetAgentRuntimeEndpointRequest.h>
#include <aws/bedrock-agentcore-control/model/GetAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore-control/model/GetApiKeyCredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/GetBrowserProfileRequest.h>
#include <aws/bedrock-agentcore-control/model/GetBrowserRequest.h>
#include <aws/bedrock-agentcore-control/model/GetCodeInterpreterRequest.h>
#include <aws/bedrock-agentcore-control/model/GetConfigurationBundleRequest.h>
#include <aws/bedrock-agentcore-control/model/GetConfigurationBundleVersionRequest.h>
#include <aws/bedrock-agentcore-control/model/GetEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayRuleRequest.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/GetHarnessRequest.h>
#include <aws/bedrock-agentcore-control/model/GetMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/GetOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/GetOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyGenerationRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/GetRegistryRecordRequest.h>
#include <aws/bedrock-agentcore-control/model/GetRegistryRequest.h>
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
#include <aws/bedrock-agentcore-control/model/ListConfigurationBundleVersionsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListConfigurationBundlesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListEvaluatorsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayRulesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayTargetsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListGatewaysRequest.h>
#include <aws/bedrock-agentcore-control/model/ListHarnessesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListMemoriesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPoliciesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationAssetsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListRegistriesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListRegistryRecordsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-agentcore-control/model/ListWorkloadIdentitiesRequest.h>
#include <aws/bedrock-agentcore-control/model/PutResourcePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/SetTokenVaultCMKRequest.h>
#include <aws/bedrock-agentcore-control/model/StartPolicyGenerationRequest.h>
#include <aws/bedrock-agentcore-control/model/SubmitRegistryRecordForApprovalRequest.h>
#include <aws/bedrock-agentcore-control/model/SynchronizeGatewayTargetsRequest.h>
#include <aws/bedrock-agentcore-control/model/TagResourceRequest.h>
#include <aws/bedrock-agentcore-control/model/UntagResourceRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateAgentRuntimeEndpointRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateApiKeyCredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateConfigurationBundleRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateEvaluatorRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayRuleRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayTargetRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateHarnessRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateOauth2CredentialProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateOnlineEvaluationConfigRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdatePolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdatePolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateRegistryRecordRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateRegistryRecordStatusRequest.h>
#include <aws/bedrock-agentcore-control/model/UpdateRegistryRequest.h>
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAgentRuntimeOutcome(result.GetResultWithOwnership())
                            : CreateAgentRuntimeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAgentRuntimeEndpointOutcome(result.GetResultWithOwnership())
                            : CreateAgentRuntimeEndpointOutcome(std::move(result.GetError()));
}

CreateApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::CreateApiKeyCredentialProvider(
    const CreateApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/CreateApiKeyCredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApiKeyCredentialProviderOutcome(result.GetResultWithOwnership())
                            : CreateApiKeyCredentialProviderOutcome(std::move(result.GetError()));
}

CreateBrowserOutcome BedrockAgentCoreControlClient::CreateBrowser(const CreateBrowserRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBrowserOutcome(result.GetResultWithOwnership()) : CreateBrowserOutcome(std::move(result.GetError()));
}

CreateBrowserProfileOutcome BedrockAgentCoreControlClient::CreateBrowserProfile(const CreateBrowserProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browser-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBrowserProfileOutcome(result.GetResultWithOwnership())
                            : CreateBrowserProfileOutcome(std::move(result.GetError()));
}

CreateCodeInterpreterOutcome BedrockAgentCoreControlClient::CreateCodeInterpreter(const CreateCodeInterpreterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateCodeInterpreterOutcome(result.GetResultWithOwnership())
                            : CreateCodeInterpreterOutcome(std::move(result.GetError()));
}

CreateConfigurationBundleOutcome BedrockAgentCoreControlClient::CreateConfigurationBundle(
    const CreateConfigurationBundleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-bundles/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfigurationBundleOutcome(result.GetResultWithOwnership())
                            : CreateConfigurationBundleOutcome(std::move(result.GetError()));
}

CreateEvaluatorOutcome BedrockAgentCoreControlClient::CreateEvaluator(const CreateEvaluatorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluators/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEvaluatorOutcome(result.GetResultWithOwnership())
                            : CreateEvaluatorOutcome(std::move(result.GetError()));
}

CreateGatewayOutcome BedrockAgentCoreControlClient::CreateGateway(const CreateGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGatewayOutcome(result.GetResultWithOwnership()) : CreateGatewayOutcome(std::move(result.GetError()));
}

CreateGatewayRuleOutcome BedrockAgentCoreControlClient::CreateGatewayRule(const CreateGatewayRuleRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGatewayRule", "Required field: GatewayIdentifier, is not set");
    return CreateGatewayRuleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGatewayRuleOutcome(result.GetResultWithOwnership())
                            : CreateGatewayRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGatewayTargetOutcome(result.GetResultWithOwnership())
                            : CreateGatewayTargetOutcome(std::move(result.GetError()));
}

CreateHarnessOutcome BedrockAgentCoreControlClient::CreateHarness(const CreateHarnessRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harnesses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHarnessOutcome(result.GetResultWithOwnership()) : CreateHarnessOutcome(std::move(result.GetError()));
}

CreateMemoryOutcome BedrockAgentCoreControlClient::CreateMemory(const CreateMemoryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMemoryOutcome(result.GetResultWithOwnership()) : CreateMemoryOutcome(std::move(result.GetError()));
}

CreateOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::CreateOauth2CredentialProvider(
    const CreateOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/CreateOauth2CredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOauth2CredentialProviderOutcome(result.GetResultWithOwnership())
                            : CreateOauth2CredentialProviderOutcome(std::move(result.GetError()));
}

CreateOnlineEvaluationConfigOutcome BedrockAgentCoreControlClient::CreateOnlineEvaluationConfig(
    const CreateOnlineEvaluationConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/online-evaluation-configs/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOnlineEvaluationConfigOutcome(result.GetResultWithOwnership())
                            : CreateOnlineEvaluationConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyOutcome(result.GetResultWithOwnership()) : CreatePolicyOutcome(std::move(result.GetError()));
}

CreatePolicyEngineOutcome BedrockAgentCoreControlClient::CreatePolicyEngine(const CreatePolicyEngineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyEngineOutcome(result.GetResultWithOwnership())
                            : CreatePolicyEngineOutcome(std::move(result.GetError()));
}

CreateRegistryOutcome BedrockAgentCoreControlClient::CreateRegistry(const CreateRegistryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistryOutcome(result.GetResultWithOwnership()) : CreateRegistryOutcome(std::move(result.GetError()));
}

CreateRegistryRecordOutcome BedrockAgentCoreControlClient::CreateRegistryRecord(const CreateRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRegistryRecord", "Required field: RegistryId, is not set");
    return CreateRegistryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistryRecordOutcome(result.GetResultWithOwnership())
                            : CreateRegistryRecordOutcome(std::move(result.GetError()));
}

CreateWorkloadIdentityOutcome BedrockAgentCoreControlClient::CreateWorkloadIdentity(const CreateWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/CreateWorkloadIdentity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkloadIdentityOutcome(result.GetResultWithOwnership())
                            : CreateWorkloadIdentityOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentRuntimeOutcome(result.GetResultWithOwnership())
                            : DeleteAgentRuntimeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentRuntimeEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteAgentRuntimeEndpointOutcome(std::move(result.GetError()));
}

DeleteApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::DeleteApiKeyCredentialProvider(
    const DeleteApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/DeleteApiKeyCredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApiKeyCredentialProviderOutcome(result.GetResultWithOwnership())
                            : DeleteApiKeyCredentialProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBrowserOutcome(result.GetResultWithOwnership()) : DeleteBrowserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBrowserProfileOutcome(result.GetResultWithOwnership())
                            : DeleteBrowserProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCodeInterpreterOutcome(result.GetResultWithOwnership())
                            : DeleteCodeInterpreterOutcome(std::move(result.GetError()));
}

DeleteConfigurationBundleOutcome BedrockAgentCoreControlClient::DeleteConfigurationBundle(
    const DeleteConfigurationBundleRequest& request) const {
  if (!request.BundleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationBundle", "Required field: BundleId, is not set");
    return DeleteConfigurationBundleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BundleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-bundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBundleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfigurationBundleOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationBundleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEvaluatorOutcome(result.GetResultWithOwnership())
                            : DeleteEvaluatorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGatewayOutcome(result.GetResultWithOwnership()) : DeleteGatewayOutcome(std::move(result.GetError()));
}

DeleteGatewayRuleOutcome BedrockAgentCoreControlClient::DeleteGatewayRule(const DeleteGatewayRuleRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRule", "Required field: GatewayIdentifier, is not set");
    return DeleteGatewayRuleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }
  if (!request.RuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRule", "Required field: RuleId, is not set");
    return DeleteGatewayRuleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGatewayRuleOutcome(result.GetResultWithOwnership())
                            : DeleteGatewayRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGatewayTargetOutcome(result.GetResultWithOwnership())
                            : DeleteGatewayTargetOutcome(std::move(result.GetError()));
}

DeleteHarnessOutcome BedrockAgentCoreControlClient::DeleteHarness(const DeleteHarnessRequest& request) const {
  if (!request.HarnessIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHarness", "Required field: HarnessId, is not set");
    return DeleteHarnessOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HarnessId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harnesses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHarnessId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteHarnessOutcome(result.GetResultWithOwnership()) : DeleteHarnessOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMemoryOutcome(result.GetResultWithOwnership()) : DeleteMemoryOutcome(std::move(result.GetError()));
}

DeleteOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::DeleteOauth2CredentialProvider(
    const DeleteOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/DeleteOauth2CredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOauth2CredentialProviderOutcome(result.GetResultWithOwnership())
                            : DeleteOauth2CredentialProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOnlineEvaluationConfigOutcome(result.GetResultWithOwnership())
                            : DeleteOnlineEvaluationConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePolicyOutcome(result.GetResultWithOwnership()) : DeletePolicyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePolicyEngineOutcome(result.GetResultWithOwnership())
                            : DeletePolicyEngineOutcome(std::move(result.GetError()));
}

DeleteRegistryOutcome BedrockAgentCoreControlClient::DeleteRegistry(const DeleteRegistryRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRegistry", "Required field: RegistryId, is not set");
    return DeleteRegistryOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRegistryOutcome(result.GetResultWithOwnership()) : DeleteRegistryOutcome(std::move(result.GetError()));
}

DeleteRegistryRecordOutcome BedrockAgentCoreControlClient::DeleteRegistryRecord(const DeleteRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRegistryRecord", "Required field: RegistryId, is not set");
    return DeleteRegistryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRegistryRecord", "Required field: RecordId, is not set");
    return DeleteRegistryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRegistryRecordOutcome(result.GetResultWithOwnership())
                            : DeleteRegistryRecordOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteWorkloadIdentityOutcome BedrockAgentCoreControlClient::DeleteWorkloadIdentity(const DeleteWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/DeleteWorkloadIdentity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkloadIdentityOutcome(result.GetResultWithOwnership())
                            : DeleteWorkloadIdentityOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentRuntimeOutcome(result.GetResultWithOwnership())
                            : GetAgentRuntimeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentRuntimeEndpointOutcome(result.GetResultWithOwnership())
                            : GetAgentRuntimeEndpointOutcome(std::move(result.GetError()));
}

GetApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::GetApiKeyCredentialProvider(
    const GetApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetApiKeyCredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetApiKeyCredentialProviderOutcome(result.GetResultWithOwnership())
                            : GetApiKeyCredentialProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBrowserOutcome(result.GetResultWithOwnership()) : GetBrowserOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBrowserProfileOutcome(result.GetResultWithOwnership())
                            : GetBrowserProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCodeInterpreterOutcome(result.GetResultWithOwnership())
                            : GetCodeInterpreterOutcome(std::move(result.GetError()));
}

GetConfigurationBundleOutcome BedrockAgentCoreControlClient::GetConfigurationBundle(const GetConfigurationBundleRequest& request) const {
  if (!request.BundleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationBundle", "Required field: BundleId, is not set");
    return GetConfigurationBundleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BundleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-bundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBundleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigurationBundleOutcome(result.GetResultWithOwnership())
                            : GetConfigurationBundleOutcome(std::move(result.GetError()));
}

GetConfigurationBundleVersionOutcome BedrockAgentCoreControlClient::GetConfigurationBundleVersion(
    const GetConfigurationBundleVersionRequest& request) const {
  if (!request.BundleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationBundleVersion", "Required field: BundleId, is not set");
    return GetConfigurationBundleVersionOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BundleId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationBundleVersion", "Required field: VersionId, is not set");
    return GetConfigurationBundleVersionOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-bundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBundleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigurationBundleVersionOutcome(result.GetResultWithOwnership())
                            : GetConfigurationBundleVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEvaluatorOutcome(result.GetResultWithOwnership()) : GetEvaluatorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGatewayOutcome(result.GetResultWithOwnership()) : GetGatewayOutcome(std::move(result.GetError()));
}

GetGatewayRuleOutcome BedrockAgentCoreControlClient::GetGatewayRule(const GetGatewayRuleRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGatewayRule", "Required field: GatewayIdentifier, is not set");
    return GetGatewayRuleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }
  if (!request.RuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGatewayRule", "Required field: RuleId, is not set");
    return GetGatewayRuleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGatewayRuleOutcome(result.GetResultWithOwnership()) : GetGatewayRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGatewayTargetOutcome(result.GetResultWithOwnership())
                            : GetGatewayTargetOutcome(std::move(result.GetError()));
}

GetHarnessOutcome BedrockAgentCoreControlClient::GetHarness(const GetHarnessRequest& request) const {
  if (!request.HarnessIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHarness", "Required field: HarnessId, is not set");
    return GetHarnessOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HarnessId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harnesses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHarnessId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetHarnessOutcome(result.GetResultWithOwnership()) : GetHarnessOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMemoryOutcome(result.GetResultWithOwnership()) : GetMemoryOutcome(std::move(result.GetError()));
}

GetOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::GetOauth2CredentialProvider(
    const GetOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetOauth2CredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOauth2CredentialProviderOutcome(result.GetResultWithOwnership())
                            : GetOauth2CredentialProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOnlineEvaluationConfigOutcome(result.GetResultWithOwnership())
                            : GetOnlineEvaluationConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyEngineOutcome(result.GetResultWithOwnership())
                            : GetPolicyEngineOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyGenerationOutcome(result.GetResultWithOwnership())
                            : GetPolicyGenerationOutcome(std::move(result.GetError()));
}

GetRegistryOutcome BedrockAgentCoreControlClient::GetRegistry(const GetRegistryRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRegistry", "Required field: RegistryId, is not set");
    return GetRegistryOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRegistryOutcome(result.GetResultWithOwnership()) : GetRegistryOutcome(std::move(result.GetError()));
}

GetRegistryRecordOutcome BedrockAgentCoreControlClient::GetRegistryRecord(const GetRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRegistryRecord", "Required field: RegistryId, is not set");
    return GetRegistryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRegistryRecord", "Required field: RecordId, is not set");
    return GetRegistryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRegistryRecordOutcome(result.GetResultWithOwnership())
                            : GetRegistryRecordOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

GetTokenVaultOutcome BedrockAgentCoreControlClient::GetTokenVault(const GetTokenVaultRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/get-token-vault");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTokenVaultOutcome(result.GetResultWithOwnership()) : GetTokenVaultOutcome(std::move(result.GetError()));
}

GetWorkloadIdentityOutcome BedrockAgentCoreControlClient::GetWorkloadIdentity(const GetWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetWorkloadIdentity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkloadIdentityOutcome(result.GetResultWithOwnership())
                            : GetWorkloadIdentityOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentRuntimeEndpointsOutcome(result.GetResultWithOwnership())
                            : ListAgentRuntimeEndpointsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentRuntimeVersionsOutcome(result.GetResultWithOwnership())
                            : ListAgentRuntimeVersionsOutcome(std::move(result.GetError()));
}

ListAgentRuntimesOutcome BedrockAgentCoreControlClient::ListAgentRuntimes(const ListAgentRuntimesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentRuntimesOutcome(result.GetResultWithOwnership())
                            : ListAgentRuntimesOutcome(std::move(result.GetError()));
}

ListApiKeyCredentialProvidersOutcome BedrockAgentCoreControlClient::ListApiKeyCredentialProviders(
    const ListApiKeyCredentialProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/ListApiKeyCredentialProviders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApiKeyCredentialProvidersOutcome(result.GetResultWithOwnership())
                            : ListApiKeyCredentialProvidersOutcome(std::move(result.GetError()));
}

ListBrowserProfilesOutcome BedrockAgentCoreControlClient::ListBrowserProfiles(const ListBrowserProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browser-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBrowserProfilesOutcome(result.GetResultWithOwnership())
                            : ListBrowserProfilesOutcome(std::move(result.GetError()));
}

ListBrowsersOutcome BedrockAgentCoreControlClient::ListBrowsers(const ListBrowsersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBrowsersOutcome(result.GetResultWithOwnership()) : ListBrowsersOutcome(std::move(result.GetError()));
}

ListCodeInterpretersOutcome BedrockAgentCoreControlClient::ListCodeInterpreters(const ListCodeInterpretersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCodeInterpretersOutcome(result.GetResultWithOwnership())
                            : ListCodeInterpretersOutcome(std::move(result.GetError()));
}

ListConfigurationBundleVersionsOutcome BedrockAgentCoreControlClient::ListConfigurationBundleVersions(
    const ListConfigurationBundleVersionsRequest& request) const {
  if (!request.BundleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConfigurationBundleVersions", "Required field: BundleId, is not set");
    return ListConfigurationBundleVersionsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BundleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-bundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBundleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConfigurationBundleVersionsOutcome(result.GetResultWithOwnership())
                            : ListConfigurationBundleVersionsOutcome(std::move(result.GetError()));
}

ListConfigurationBundlesOutcome BedrockAgentCoreControlClient::ListConfigurationBundles(
    const ListConfigurationBundlesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-bundles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConfigurationBundlesOutcome(result.GetResultWithOwnership())
                            : ListConfigurationBundlesOutcome(std::move(result.GetError()));
}

ListEvaluatorsOutcome BedrockAgentCoreControlClient::ListEvaluators(const ListEvaluatorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluators");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEvaluatorsOutcome(result.GetResultWithOwnership()) : ListEvaluatorsOutcome(std::move(result.GetError()));
}

ListGatewayRulesOutcome BedrockAgentCoreControlClient::ListGatewayRules(const ListGatewayRulesRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGatewayRules", "Required field: GatewayIdentifier, is not set");
    return ListGatewayRulesOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGatewayRulesOutcome(result.GetResultWithOwnership())
                            : ListGatewayRulesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGatewayTargetsOutcome(result.GetResultWithOwnership())
                            : ListGatewayTargetsOutcome(std::move(result.GetError()));
}

ListGatewaysOutcome BedrockAgentCoreControlClient::ListGateways(const ListGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGatewaysOutcome(result.GetResultWithOwnership()) : ListGatewaysOutcome(std::move(result.GetError()));
}

ListHarnessesOutcome BedrockAgentCoreControlClient::ListHarnesses(const ListHarnessesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harnesses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListHarnessesOutcome(result.GetResultWithOwnership()) : ListHarnessesOutcome(std::move(result.GetError()));
}

ListMemoriesOutcome BedrockAgentCoreControlClient::ListMemories(const ListMemoriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMemoriesOutcome(result.GetResultWithOwnership()) : ListMemoriesOutcome(std::move(result.GetError()));
}

ListOauth2CredentialProvidersOutcome BedrockAgentCoreControlClient::ListOauth2CredentialProviders(
    const ListOauth2CredentialProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/ListOauth2CredentialProviders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOauth2CredentialProvidersOutcome(result.GetResultWithOwnership())
                            : ListOauth2CredentialProvidersOutcome(std::move(result.GetError()));
}

ListOnlineEvaluationConfigsOutcome BedrockAgentCoreControlClient::ListOnlineEvaluationConfigs(
    const ListOnlineEvaluationConfigsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/online-evaluation-configs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOnlineEvaluationConfigsOutcome(result.GetResultWithOwnership())
                            : ListOnlineEvaluationConfigsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPoliciesOutcome(result.GetResultWithOwnership()) : ListPoliciesOutcome(std::move(result.GetError()));
}

ListPolicyEnginesOutcome BedrockAgentCoreControlClient::ListPolicyEngines(const ListPolicyEnginesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-engines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPolicyEnginesOutcome(result.GetResultWithOwnership())
                            : ListPolicyEnginesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPolicyGenerationAssetsOutcome(result.GetResultWithOwnership())
                            : ListPolicyGenerationAssetsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPolicyGenerationsOutcome(result.GetResultWithOwnership())
                            : ListPolicyGenerationsOutcome(std::move(result.GetError()));
}

ListRegistriesOutcome BedrockAgentCoreControlClient::ListRegistries(const ListRegistriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRegistriesOutcome(result.GetResultWithOwnership()) : ListRegistriesOutcome(std::move(result.GetError()));
}

ListRegistryRecordsOutcome BedrockAgentCoreControlClient::ListRegistryRecords(const ListRegistryRecordsRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRegistryRecords", "Required field: RegistryId, is not set");
    return ListRegistryRecordsOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRegistryRecordsOutcome(result.GetResultWithOwnership())
                            : ListRegistryRecordsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListWorkloadIdentitiesOutcome BedrockAgentCoreControlClient::ListWorkloadIdentities(const ListWorkloadIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/ListWorkloadIdentities");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkloadIdentitiesOutcome(result.GetResultWithOwnership())
                            : ListWorkloadIdentitiesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

SetTokenVaultCMKOutcome BedrockAgentCoreControlClient::SetTokenVaultCMK(const SetTokenVaultCMKRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/set-token-vault-cmk");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetTokenVaultCMKOutcome(result.GetResultWithOwnership())
                            : SetTokenVaultCMKOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartPolicyGenerationOutcome(result.GetResultWithOwnership())
                            : StartPolicyGenerationOutcome(std::move(result.GetError()));
}

SubmitRegistryRecordForApprovalOutcome BedrockAgentCoreControlClient::SubmitRegistryRecordForApproval(
    const SubmitRegistryRecordForApprovalRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitRegistryRecordForApproval", "Required field: RegistryId, is not set");
    return SubmitRegistryRecordForApprovalOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitRegistryRecordForApproval", "Required field: RecordId, is not set");
    return SubmitRegistryRecordForApprovalOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/submit-for-approval");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SubmitRegistryRecordForApprovalOutcome(result.GetResultWithOwnership())
                            : SubmitRegistryRecordForApprovalOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? SynchronizeGatewayTargetsOutcome(result.GetResultWithOwnership())
                            : SynchronizeGatewayTargetsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentRuntimeOutcome(result.GetResultWithOwnership())
                            : UpdateAgentRuntimeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentRuntimeEndpointOutcome(result.GetResultWithOwnership())
                            : UpdateAgentRuntimeEndpointOutcome(std::move(result.GetError()));
}

UpdateApiKeyCredentialProviderOutcome BedrockAgentCoreControlClient::UpdateApiKeyCredentialProvider(
    const UpdateApiKeyCredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/UpdateApiKeyCredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateApiKeyCredentialProviderOutcome(result.GetResultWithOwnership())
                            : UpdateApiKeyCredentialProviderOutcome(std::move(result.GetError()));
}

UpdateConfigurationBundleOutcome BedrockAgentCoreControlClient::UpdateConfigurationBundle(
    const UpdateConfigurationBundleRequest& request) const {
  if (!request.BundleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationBundle", "Required field: BundleId, is not set");
    return UpdateConfigurationBundleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BundleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-bundles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBundleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConfigurationBundleOutcome(result.GetResultWithOwnership())
                            : UpdateConfigurationBundleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateEvaluatorOutcome(result.GetResultWithOwnership())
                            : UpdateEvaluatorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateGatewayOutcome(result.GetResultWithOwnership()) : UpdateGatewayOutcome(std::move(result.GetError()));
}

UpdateGatewayRuleOutcome BedrockAgentCoreControlClient::UpdateGatewayRule(const UpdateGatewayRuleRequest& request) const {
  if (!request.GatewayIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRule", "Required field: GatewayIdentifier, is not set");
    return UpdateGatewayRuleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayIdentifier]", false));
  }
  if (!request.RuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRule", "Required field: RuleId, is not set");
    return UpdateGatewayRuleOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGatewayRuleOutcome(result.GetResultWithOwnership())
                            : UpdateGatewayRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateGatewayTargetOutcome(result.GetResultWithOwnership())
                            : UpdateGatewayTargetOutcome(std::move(result.GetError()));
}

UpdateHarnessOutcome BedrockAgentCoreControlClient::UpdateHarness(const UpdateHarnessRequest& request) const {
  if (!request.HarnessIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateHarness", "Required field: HarnessId, is not set");
    return UpdateHarnessOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HarnessId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harnesses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHarnessId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateHarnessOutcome(result.GetResultWithOwnership()) : UpdateHarnessOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMemoryOutcome(result.GetResultWithOwnership()) : UpdateMemoryOutcome(std::move(result.GetError()));
}

UpdateOauth2CredentialProviderOutcome BedrockAgentCoreControlClient::UpdateOauth2CredentialProvider(
    const UpdateOauth2CredentialProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/UpdateOauth2CredentialProvider");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOauth2CredentialProviderOutcome(result.GetResultWithOwnership())
                            : UpdateOauth2CredentialProviderOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateOnlineEvaluationConfigOutcome(result.GetResultWithOwnership())
                            : UpdateOnlineEvaluationConfigOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdatePolicyOutcome(result.GetResultWithOwnership()) : UpdatePolicyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdatePolicyEngineOutcome(result.GetResultWithOwnership())
                            : UpdatePolicyEngineOutcome(std::move(result.GetError()));
}

UpdateRegistryOutcome BedrockAgentCoreControlClient::UpdateRegistry(const UpdateRegistryRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistry", "Required field: RegistryId, is not set");
    return UpdateRegistryOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRegistryOutcome(result.GetResultWithOwnership()) : UpdateRegistryOutcome(std::move(result.GetError()));
}

UpdateRegistryRecordOutcome BedrockAgentCoreControlClient::UpdateRegistryRecord(const UpdateRegistryRecordRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecord", "Required field: RegistryId, is not set");
    return UpdateRegistryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecord", "Required field: RecordId, is not set");
    return UpdateRegistryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRegistryRecordOutcome(result.GetResultWithOwnership())
                            : UpdateRegistryRecordOutcome(std::move(result.GetError()));
}

UpdateRegistryRecordStatusOutcome BedrockAgentCoreControlClient::UpdateRegistryRecordStatus(
    const UpdateRegistryRecordStatusRequest& request) const {
  if (!request.RegistryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecordStatus", "Required field: RegistryId, is not set");
    return UpdateRegistryRecordStatusOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryId]", false));
  }
  if (!request.RecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistryRecordStatus", "Required field: RecordId, is not set");
    return UpdateRegistryRecordStatusOutcome(Aws::Client::AWSError<BedrockAgentCoreControlErrors>(
        BedrockAgentCoreControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecordId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRegistryRecordStatusOutcome(result.GetResultWithOwnership())
                            : UpdateRegistryRecordStatusOutcome(std::move(result.GetError()));
}

UpdateWorkloadIdentityOutcome BedrockAgentCoreControlClient::UpdateWorkloadIdentity(const UpdateWorkloadIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/UpdateWorkloadIdentity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkloadIdentityOutcome(result.GetResultWithOwnership())
                            : UpdateWorkloadIdentityOutcome(std::move(result.GetError()));
}
