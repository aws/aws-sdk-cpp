/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeAwsBearerTokenIdentityResolver.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeClient.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeEndpointProvider.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrorMarshaller.h>
#include <aws/bedrock-agent-runtime/model/CreateInvocationRequest.h>
#include <aws/bedrock-agent-runtime/model/CreateSessionRequest.h>
#include <aws/bedrock-agent-runtime/model/DeleteAgentMemoryRequest.h>
#include <aws/bedrock-agent-runtime/model/DeleteSessionRequest.h>
#include <aws/bedrock-agent-runtime/model/EndSessionRequest.h>
#include <aws/bedrock-agent-runtime/model/GenerateQueryRequest.h>
#include <aws/bedrock-agent-runtime/model/GetAgentMemoryRequest.h>
#include <aws/bedrock-agent-runtime/model/GetExecutionFlowSnapshotRequest.h>
#include <aws/bedrock-agent-runtime/model/GetFlowExecutionRequest.h>
#include <aws/bedrock-agent-runtime/model/GetInvocationStepRequest.h>
#include <aws/bedrock-agent-runtime/model/GetSessionRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeAgentRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeFlowRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentRequest.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionEventsRequest.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionsRequest.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationStepsRequest.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationsRequest.h>
#include <aws/bedrock-agent-runtime/model/ListSessionsRequest.h>
#include <aws/bedrock-agent-runtime/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-agent-runtime/model/OptimizePromptRequest.h>
#include <aws/bedrock-agent-runtime/model/PutInvocationStepRequest.h>
#include <aws/bedrock-agent-runtime/model/RerankRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateStreamRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveRequest.h>
#include <aws/bedrock-agent-runtime/model/StartFlowExecutionRequest.h>
#include <aws/bedrock-agent-runtime/model/StopFlowExecutionRequest.h>
#include <aws/bedrock-agent-runtime/model/TagResourceRequest.h>
#include <aws/bedrock-agent-runtime/model/UntagResourceRequest.h>
#include <aws/bedrock-agent-runtime/model/UpdateSessionRequest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockAgentRuntime;
using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BedrockAgentRuntime {
const char ALLOCATION_TAG[] = "BedrockAgentRuntimeClient";
const char SERVICE_NAME[] = "bedrock";
}  // namespace BedrockAgentRuntime
}  // namespace Aws
const char* BedrockAgentRuntimeClient::GetServiceName() { return SERVICE_NAME; }
const char* BedrockAgentRuntimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider,
                                                     const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider,
                                                     const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

/* Legacy constructors due deprecation */
BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}
/* End of legacy constructors due deprecation */

BedrockAgentRuntimeClient::~BedrockAgentRuntimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase>& BedrockAgentRuntimeClient::accessEndpointProvider() { return m_endpointProvider; }

void BedrockAgentRuntimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BedrockAgentRuntimeClient::InvokeOperationOutcome BedrockAgentRuntimeClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::AWSEndpoint&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result = MakeRequestDeserialize(&request, operationName, httpMethod,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolveUri(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
CreateInvocationOutcome BedrockAgentRuntimeClient::CreateInvocation(const CreateInvocationRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateInvocation", "Required field: SessionIdentifier, is not set");
    return CreateInvocationOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
        resolvedEndpoint.AddPathSegments("/invocations/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateInvocationOutcome(result.GetResultWithOwnership())
                            : CreateInvocationOutcome(std::move(result.GetError()));
}
CreateSessionOutcome BedrockAgentRuntimeClient::CreateSession(const CreateSessionRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/sessions/"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateSessionOutcome(result.GetResultWithOwnership()) : CreateSessionOutcome(std::move(result.GetError()));
}
DeleteAgentMemoryOutcome BedrockAgentRuntimeClient::DeleteAgentMemory(const DeleteAgentMemoryRequest& request) const {
  if (!request.AgentAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentMemory", "Required field: AgentAliasId, is not set");
    return DeleteAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentAliasId]", false));
  }
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentMemory", "Required field: AgentId, is not set");
    return DeleteAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentAliases/");
        resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
        resolvedEndpoint.AddPathSegments("/memories");
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentMemoryOutcome(result.GetResultWithOwnership())
                            : DeleteAgentMemoryOutcome(std::move(result.GetError()));
}
DeleteSessionOutcome BedrockAgentRuntimeClient::DeleteSession(const DeleteSessionRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: SessionIdentifier, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSessionOutcome(result.GetResultWithOwnership()) : DeleteSessionOutcome(std::move(result.GetError()));
}
EndSessionOutcome BedrockAgentRuntimeClient::EndSession(const EndSessionRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EndSession", "Required field: SessionIdentifier, is not set");
    return EndSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? EndSessionOutcome(result.GetResultWithOwnership()) : EndSessionOutcome(std::move(result.GetError()));
}
GenerateQueryOutcome BedrockAgentRuntimeClient::GenerateQuery(const GenerateQueryRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/generateQuery"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateQueryOutcome(result.GetResultWithOwnership()) : GenerateQueryOutcome(std::move(result.GetError()));
}
GetAgentMemoryOutcome BedrockAgentRuntimeClient::GetAgentMemory(const GetAgentMemoryRequest& request) const {
  if (!request.AgentAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: AgentAliasId, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentAliasId]", false));
  }
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: AgentId, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: MemoryId, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }
  if (!request.MemoryTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: MemoryType, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryType]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentAliases/");
        resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
        resolvedEndpoint.AddPathSegments("/memories");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentMemoryOutcome(result.GetResultWithOwnership()) : GetAgentMemoryOutcome(std::move(result.GetError()));
}
GetExecutionFlowSnapshotOutcome BedrockAgentRuntimeClient::GetExecutionFlowSnapshot(const GetExecutionFlowSnapshotRequest& request) const {
  if (!request.ExecutionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExecutionFlowSnapshot", "Required field: ExecutionIdentifier, is not set");
    return GetExecutionFlowSnapshotOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExecutionFlowSnapshot", "Required field: FlowAliasIdentifier, is not set");
    return GetExecutionFlowSnapshotOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExecutionFlowSnapshot", "Required field: FlowIdentifier, is not set");
    return GetExecutionFlowSnapshotOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetFlowAliasIdentifier());
        resolvedEndpoint.AddPathSegments("/executions/");
        resolvedEndpoint.AddPathSegment(request.GetExecutionIdentifier());
        resolvedEndpoint.AddPathSegments("/flowsnapshot");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetExecutionFlowSnapshotOutcome(result.GetResultWithOwnership())
                            : GetExecutionFlowSnapshotOutcome(std::move(result.GetError()));
}
GetFlowExecutionOutcome BedrockAgentRuntimeClient::GetFlowExecution(const GetFlowExecutionRequest& request) const {
  if (!request.ExecutionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowExecution", "Required field: ExecutionIdentifier, is not set");
    return GetFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowExecution", "Required field: FlowAliasIdentifier, is not set");
    return GetFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowExecution", "Required field: FlowIdentifier, is not set");
    return GetFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetFlowAliasIdentifier());
        resolvedEndpoint.AddPathSegments("/executions/");
        resolvedEndpoint.AddPathSegment(request.GetExecutionIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFlowExecutionOutcome(result.GetResultWithOwnership())
                            : GetFlowExecutionOutcome(std::move(result.GetError()));
}
GetInvocationStepOutcome BedrockAgentRuntimeClient::GetInvocationStep(const GetInvocationStepRequest& request) const {
  if (!request.InvocationStepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInvocationStep", "Required field: InvocationStepId, is not set");
    return GetInvocationStepOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvocationStepId]", false));
  }
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInvocationStep", "Required field: SessionIdentifier, is not set");
    return GetInvocationStepOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
        resolvedEndpoint.AddPathSegments("/invocationSteps/");
        resolvedEndpoint.AddPathSegment(request.GetInvocationStepId());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInvocationStepOutcome(result.GetResultWithOwnership())
                            : GetInvocationStepOutcome(std::move(result.GetError()));
}
GetSessionOutcome BedrockAgentRuntimeClient::GetSession(const GetSessionRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionIdentifier, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionOutcome(result.GetResultWithOwnership()) : GetSessionOutcome(std::move(result.GetError()));
}
InvokeAgentOutcome BedrockAgentRuntimeClient::InvokeAgent(InvokeAgentRequest& request) const {
  AWS_OPERATION_GUARD(InvokeAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeAgent", "Required field: AgentAliasId, is not set");
    return InvokeAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentAliasId]", false));
  }
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeAgent", "Required field: AgentId, is not set");
    return InvokeAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeAgent", "Required field: SessionId, is not set");
    return InvokeAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeAgent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeAgentOutcome>(
      [&]() -> InvokeAgentOutcome {
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeAgent", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/agents/");
                                               resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                               resolvedEndpoint.AddPathSegments("/agentAliases/");
                                               resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
                                               resolvedEndpoint.AddPathSegments("/sessions/");
                                               resolvedEndpoint.AddPathSegment(request.GetSessionId());
                                               resolvedEndpoint.AddPathSegments("/text");
                                             });
        return result.IsSuccess() ? InvokeAgentOutcome(result.GetResultWithOwnership()) : InvokeAgentOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
InvokeFlowOutcome BedrockAgentRuntimeClient::InvokeFlow(InvokeFlowRequest& request) const {
  AWS_OPERATION_GUARD(InvokeFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowAliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeFlow", "Required field: FlowAliasIdentifier, is not set");
    return InvokeFlowOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeFlow", "Required field: FlowIdentifier, is not set");
    return InvokeFlowOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeFlowOutcome>(
      [&]() -> InvokeFlowOutcome {
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeFlow", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/flows/");
                                               resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                               resolvedEndpoint.AddPathSegments("/aliases/");
                                               resolvedEndpoint.AddPathSegment(request.GetFlowAliasIdentifier());
                                             });
        return result.IsSuccess() ? InvokeFlowOutcome(result.GetResultWithOwnership()) : InvokeFlowOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
InvokeInlineAgentOutcome BedrockAgentRuntimeClient::InvokeInlineAgent(InvokeInlineAgentRequest& request) const {
  AWS_OPERATION_GUARD(InvokeInlineAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeInlineAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeInlineAgent", "Required field: SessionId, is not set");
    return InvokeInlineAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeInlineAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeInlineAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeInlineAgent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeInlineAgentOutcome>(
      [&]() -> InvokeInlineAgentOutcome {
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeInlineAgent", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/agents/");
                                               resolvedEndpoint.AddPathSegment(request.GetSessionId());
                                             });
        return result.IsSuccess() ? InvokeInlineAgentOutcome(result.GetResultWithOwnership())
                                  : InvokeInlineAgentOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
ListFlowExecutionEventsOutcome BedrockAgentRuntimeClient::ListFlowExecutionEvents(const ListFlowExecutionEventsRequest& request) const {
  if (!request.EventTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: EventType, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventType]", false));
  }
  if (!request.ExecutionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: ExecutionIdentifier, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: FlowAliasIdentifier, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: FlowIdentifier, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetFlowAliasIdentifier());
        resolvedEndpoint.AddPathSegments("/executions/");
        resolvedEndpoint.AddPathSegment(request.GetExecutionIdentifier());
        resolvedEndpoint.AddPathSegments("/events");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFlowExecutionEventsOutcome(result.GetResultWithOwnership())
                            : ListFlowExecutionEventsOutcome(std::move(result.GetError()));
}
ListFlowExecutionsOutcome BedrockAgentRuntimeClient::ListFlowExecutions(const ListFlowExecutionsRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowExecutions", "Required field: FlowIdentifier, is not set");
    return ListFlowExecutionsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/executions");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFlowExecutionsOutcome(result.GetResultWithOwnership())
                            : ListFlowExecutionsOutcome(std::move(result.GetError()));
}
ListInvocationStepsOutcome BedrockAgentRuntimeClient::ListInvocationSteps(const ListInvocationStepsRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInvocationSteps", "Required field: SessionIdentifier, is not set");
    return ListInvocationStepsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
        resolvedEndpoint.AddPathSegments("/invocationSteps/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInvocationStepsOutcome(result.GetResultWithOwnership())
                            : ListInvocationStepsOutcome(std::move(result.GetError()));
}
ListInvocationsOutcome BedrockAgentRuntimeClient::ListInvocations(const ListInvocationsRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInvocations", "Required field: SessionIdentifier, is not set");
    return ListInvocationsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
        resolvedEndpoint.AddPathSegments("/invocations/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInvocationsOutcome(result.GetResultWithOwnership())
                            : ListInvocationsOutcome(std::move(result.GetError()));
}
ListSessionsOutcome BedrockAgentRuntimeClient::ListSessions(const ListSessionsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/sessions/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSessionsOutcome(result.GetResultWithOwnership()) : ListSessionsOutcome(std::move(result.GetError()));
}
ListTagsForResourceOutcome BedrockAgentRuntimeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/tags/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}
OptimizePromptOutcome BedrockAgentRuntimeClient::OptimizePrompt(OptimizePromptRequest& request) const {
  AWS_OPERATION_GUARD(OptimizePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OptimizePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, OptimizePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, OptimizePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".OptimizePrompt",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<OptimizePromptOutcome>(
      [&]() -> OptimizePromptOutcome {
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("OptimizePrompt", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/optimize-prompt"); });
        return result.IsSuccess() ? OptimizePromptOutcome(result.GetResultWithOwnership())
                                  : OptimizePromptOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
PutInvocationStepOutcome BedrockAgentRuntimeClient::PutInvocationStep(const PutInvocationStepRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutInvocationStep", "Required field: SessionIdentifier, is not set");
    return PutInvocationStepOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
        resolvedEndpoint.AddPathSegments("/invocationSteps/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutInvocationStepOutcome(result.GetResultWithOwnership())
                            : PutInvocationStepOutcome(std::move(result.GetError()));
}
RerankOutcome BedrockAgentRuntimeClient::Rerank(const RerankRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/rerank"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RerankOutcome(result.GetResultWithOwnership()) : RerankOutcome(std::move(result.GetError()));
}
RetrieveOutcome BedrockAgentRuntimeClient::Retrieve(const RetrieveRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Retrieve", "Required field: KnowledgeBaseId, is not set");
    return RetrieveOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/retrieve");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RetrieveOutcome(result.GetResultWithOwnership()) : RetrieveOutcome(std::move(result.GetError()));
}
RetrieveAndGenerateOutcome BedrockAgentRuntimeClient::RetrieveAndGenerate(const RetrieveAndGenerateRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/retrieveAndGenerate"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RetrieveAndGenerateOutcome(result.GetResultWithOwnership())
                            : RetrieveAndGenerateOutcome(std::move(result.GetError()));
}
RetrieveAndGenerateStreamOutcome BedrockAgentRuntimeClient::RetrieveAndGenerateStream(RetrieveAndGenerateStreamRequest& request) const {
  AWS_OPERATION_GUARD(RetrieveAndGenerateStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveAndGenerateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RetrieveAndGenerateStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RetrieveAndGenerateStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RetrieveAndGenerateStream",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetrieveAndGenerateStreamOutcome>(
      [&]() -> RetrieveAndGenerateStreamOutcome {
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("RetrieveAndGenerateStream", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/retrieveAndGenerateStream"); });
        return result.IsSuccess() ? RetrieveAndGenerateStreamOutcome(result.GetResultWithOwnership())
                                  : RetrieveAndGenerateStreamOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
StartFlowExecutionOutcome BedrockAgentRuntimeClient::StartFlowExecution(const StartFlowExecutionRequest& request) const {
  if (!request.FlowAliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartFlowExecution", "Required field: FlowAliasIdentifier, is not set");
    return StartFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartFlowExecution", "Required field: FlowIdentifier, is not set");
    return StartFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetFlowAliasIdentifier());
        resolvedEndpoint.AddPathSegments("/executions");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFlowExecutionOutcome(result.GetResultWithOwnership())
                            : StartFlowExecutionOutcome(std::move(result.GetError()));
}
StopFlowExecutionOutcome BedrockAgentRuntimeClient::StopFlowExecution(const StopFlowExecutionRequest& request) const {
  if (!request.ExecutionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopFlowExecution", "Required field: ExecutionIdentifier, is not set");
    return StopFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopFlowExecution", "Required field: FlowAliasIdentifier, is not set");
    return StopFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopFlowExecution", "Required field: FlowIdentifier, is not set");
    return StopFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetFlowAliasIdentifier());
        resolvedEndpoint.AddPathSegments("/executions/");
        resolvedEndpoint.AddPathSegment(request.GetExecutionIdentifier());
        resolvedEndpoint.AddPathSegments("/stop");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopFlowExecutionOutcome(result.GetResultWithOwnership())
                            : StopFlowExecutionOutcome(std::move(result.GetError()));
}
TagResourceOutcome BedrockAgentRuntimeClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/tags/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}
UntagResourceOutcome BedrockAgentRuntimeClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/tags/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
UpdateSessionOutcome BedrockAgentRuntimeClient::UpdateSession(const UpdateSessionRequest& request) const {
  if (!request.SessionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: SessionIdentifier, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(
        BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/sessions/");
        resolvedEndpoint.AddPathSegment(request.GetSessionIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSessionOutcome(result.GetResultWithOwnership()) : UpdateSessionOutcome(std::move(result.GetError()));
}
