/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/event/EventStream.h>

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeClient.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrorMarshaller.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeEndpointProvider.h>
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
#include <aws/bedrock-agent-runtime/model/RetrieveRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateStreamRequest.h>
#include <aws/bedrock-agent-runtime/model/StartFlowExecutionRequest.h>
#include <aws/bedrock-agent-runtime/model/StopFlowExecutionRequest.h>
#include <aws/bedrock-agent-runtime/model/TagResourceRequest.h>
#include <aws/bedrock-agent-runtime/model/UntagResourceRequest.h>
#include <aws/bedrock-agent-runtime/model/UpdateSessionRequest.h>

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

namespace Aws
{
  namespace BedrockAgentRuntime
  {
    const char SERVICE_NAME[] = "bedrock";
    const char ALLOCATION_TAG[] = "BedrockAgentRuntimeClient";
  }
}
const char* BedrockAgentRuntimeClient::GetServiceName() {return SERVICE_NAME;}
const char* BedrockAgentRuntimeClient::GetAllocationTag() {return ALLOCATION_TAG;}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider,
                                                     const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider,
                                                     const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const AWSCredentials& credentials,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
BedrockAgentRuntimeClient::~BedrockAgentRuntimeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase>& BedrockAgentRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BedrockAgentRuntimeClient::init(const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Bedrock Agent Runtime");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void BedrockAgentRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateInvocationOutcome BedrockAgentRuntimeClient::CreateInvocation(const CreateInvocationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateInvocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInvocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateInvocation", "Required field: SessionIdentifier, is not set");
    return CreateInvocationOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateInvocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateInvocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateInvocation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateInvocationOutcome>(
    [&]()-> CreateInvocationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInvocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/invocations/");
      return CreateInvocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSessionOutcome BedrockAgentRuntimeClient::CreateSession(const CreateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSessionOutcome>(
    [&]()-> CreateSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      return CreateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAgentMemoryOutcome BedrockAgentRuntimeClient::DeleteAgentMemory(const DeleteAgentMemoryRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAgentMemory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAgentMemory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAgentMemory", "Required field: AgentAliasId, is not set");
    return DeleteAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentAliasId]", false));
  }
  if (!request.AgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAgentMemory", "Required field: AgentId, is not set");
    return DeleteAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAgentMemory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAgentMemoryOutcome>(
    [&]()-> DeleteAgentMemoryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAgentMemory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/agents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/agentAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memories");
      return DeleteAgentMemoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSessionOutcome BedrockAgentRuntimeClient::DeleteSession(const DeleteSessionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: SessionIdentifier, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSessionOutcome>(
    [&]()-> DeleteSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      return DeleteSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EndSessionOutcome BedrockAgentRuntimeClient::EndSession(const EndSessionRequest& request) const
{
  AWS_OPERATION_GUARD(EndSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EndSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EndSession", "Required field: SessionIdentifier, is not set");
    return EndSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, EndSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EndSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EndSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EndSessionOutcome>(
    [&]()-> EndSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EndSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      return EndSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateQueryOutcome BedrockAgentRuntimeClient::GenerateQuery(const GenerateQueryRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GenerateQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateQueryOutcome>(
    [&]()-> GenerateQueryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/generateQuery");
      return GenerateQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAgentMemoryOutcome BedrockAgentRuntimeClient::GetAgentMemory(const GetAgentMemoryRequest& request) const
{
  AWS_OPERATION_GUARD(GetAgentMemory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAgentMemory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: AgentAliasId, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentAliasId]", false));
  }
  if (!request.AgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: AgentId, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.MemoryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: MemoryId, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }
  if (!request.MemoryTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAgentMemory", "Required field: MemoryType, is not set");
    return GetAgentMemoryOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgentMemory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentMemoryOutcome>(
    [&]()-> GetAgentMemoryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAgentMemory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/agents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/agentAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memories");
      return GetAgentMemoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetExecutionFlowSnapshotOutcome BedrockAgentRuntimeClient::GetExecutionFlowSnapshot(const GetExecutionFlowSnapshotRequest& request) const
{
  AWS_OPERATION_GUARD(GetExecutionFlowSnapshot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExecutionFlowSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExecutionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExecutionFlowSnapshot", "Required field: ExecutionIdentifier, is not set");
    return GetExecutionFlowSnapshotOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExecutionFlowSnapshot", "Required field: FlowAliasIdentifier, is not set");
    return GetExecutionFlowSnapshotOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExecutionFlowSnapshot", "Required field: FlowIdentifier, is not set");
    return GetExecutionFlowSnapshotOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetExecutionFlowSnapshot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetExecutionFlowSnapshot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetExecutionFlowSnapshot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetExecutionFlowSnapshotOutcome>(
    [&]()-> GetExecutionFlowSnapshotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExecutionFlowSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowAliasIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/executions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flowsnapshot");
      return GetExecutionFlowSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFlowExecutionOutcome BedrockAgentRuntimeClient::GetFlowExecution(const GetFlowExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(GetFlowExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFlowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExecutionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFlowExecution", "Required field: ExecutionIdentifier, is not set");
    return GetFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFlowExecution", "Required field: FlowAliasIdentifier, is not set");
    return GetFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFlowExecution", "Required field: FlowIdentifier, is not set");
    return GetFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetFlowExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFlowExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFlowExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFlowExecutionOutcome>(
    [&]()-> GetFlowExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFlowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowAliasIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/executions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionIdentifier());
      return GetFlowExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInvocationStepOutcome BedrockAgentRuntimeClient::GetInvocationStep(const GetInvocationStepRequest& request) const
{
  AWS_OPERATION_GUARD(GetInvocationStep);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInvocationStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InvocationStepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInvocationStep", "Required field: InvocationStepId, is not set");
    return GetInvocationStepOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvocationStepId]", false));
  }
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInvocationStep", "Required field: SessionIdentifier, is not set");
    return GetInvocationStepOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetInvocationStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetInvocationStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetInvocationStep",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetInvocationStepOutcome>(
    [&]()-> GetInvocationStepOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInvocationStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/invocationSteps/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInvocationStepId());
      return GetInvocationStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionOutcome BedrockAgentRuntimeClient::GetSession(const GetSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionIdentifier, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionOutcome>(
    [&]()-> GetSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      return GetSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeAgentOutcome BedrockAgentRuntimeClient::InvokeAgent(InvokeAgentRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeAgent", "Required field: AgentAliasId, is not set");
    return InvokeAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentAliasId]", false));
  }
  if (!request.AgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeAgent", "Required field: AgentId, is not set");
    return InvokeAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeAgent", "Required field: SessionId, is not set");
    return InvokeAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeAgentOutcome>(
    [&]()-> InvokeAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/agents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/agentAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/text");
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      if (!request.GetHeadersReceivedEventHandler()) {
        request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
          AWS_CHECK_PTR("InvokeAgent", response);
          if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
            initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });
      }
      return InvokeAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeFlowOutcome BedrockAgentRuntimeClient::InvokeFlow(InvokeFlowRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowAliasIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeFlow", "Required field: FlowAliasIdentifier, is not set");
    return InvokeFlowOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeFlow", "Required field: FlowIdentifier, is not set");
    return InvokeFlowOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeFlow",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeFlowOutcome>(
    [&]()-> InvokeFlowOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowAliasIdentifier());
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      if (!request.GetHeadersReceivedEventHandler()) {
        request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
          AWS_CHECK_PTR("InvokeFlow", response);
          if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
            initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });
      }
      return InvokeFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeInlineAgentOutcome BedrockAgentRuntimeClient::InvokeInlineAgent(InvokeInlineAgentRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeInlineAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeInlineAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeInlineAgent", "Required field: SessionId, is not set");
    return InvokeInlineAgentOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeInlineAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeInlineAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeInlineAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeInlineAgentOutcome>(
    [&]()-> InvokeInlineAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeInlineAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/agents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      if (!request.GetHeadersReceivedEventHandler()) {
        request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
          AWS_CHECK_PTR("InvokeInlineAgent", response);
          if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
            initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });
      }
      return InvokeInlineAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFlowExecutionEventsOutcome BedrockAgentRuntimeClient::ListFlowExecutionEvents(const ListFlowExecutionEventsRequest& request) const
{
  AWS_OPERATION_GUARD(ListFlowExecutionEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlowExecutionEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EventTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: EventType, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventType]", false));
  }
  if (!request.ExecutionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: ExecutionIdentifier, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: FlowAliasIdentifier, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFlowExecutionEvents", "Required field: FlowIdentifier, is not set");
    return ListFlowExecutionEventsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFlowExecutionEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFlowExecutionEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFlowExecutionEvents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFlowExecutionEventsOutcome>(
    [&]()-> ListFlowExecutionEventsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFlowExecutionEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowAliasIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/executions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/events");
      return ListFlowExecutionEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFlowExecutionsOutcome BedrockAgentRuntimeClient::ListFlowExecutions(const ListFlowExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListFlowExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlowExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFlowExecutions", "Required field: FlowIdentifier, is not set");
    return ListFlowExecutionsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFlowExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFlowExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFlowExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFlowExecutionsOutcome>(
    [&]()-> ListFlowExecutionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFlowExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/executions");
      return ListFlowExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInvocationStepsOutcome BedrockAgentRuntimeClient::ListInvocationSteps(const ListInvocationStepsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInvocationSteps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInvocationSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInvocationSteps", "Required field: SessionIdentifier, is not set");
    return ListInvocationStepsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListInvocationSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInvocationSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInvocationSteps",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInvocationStepsOutcome>(
    [&]()-> ListInvocationStepsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInvocationSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/invocationSteps/");
      return ListInvocationStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInvocationsOutcome BedrockAgentRuntimeClient::ListInvocations(const ListInvocationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInvocations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInvocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInvocations", "Required field: SessionIdentifier, is not set");
    return ListInvocationsOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListInvocations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInvocations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInvocations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInvocationsOutcome>(
    [&]()-> ListInvocationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInvocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/invocations/");
      return ListInvocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionsOutcome BedrockAgentRuntimeClient::ListSessions(const ListSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionsOutcome>(
    [&]()-> ListSessionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      return ListSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome BedrockAgentRuntimeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

OptimizePromptOutcome BedrockAgentRuntimeClient::OptimizePrompt(OptimizePromptRequest& request) const
{
  AWS_OPERATION_GUARD(OptimizePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OptimizePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, OptimizePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, OptimizePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".OptimizePrompt",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<OptimizePromptOutcome>(
    [&]()-> OptimizePromptOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OptimizePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/optimize-prompt");
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      if (!request.GetHeadersReceivedEventHandler()) {
        request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
          AWS_CHECK_PTR("OptimizePrompt", response);
          if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
            initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });
      }
      return OptimizePromptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutInvocationStepOutcome BedrockAgentRuntimeClient::PutInvocationStep(const PutInvocationStepRequest& request) const
{
  AWS_OPERATION_GUARD(PutInvocationStep);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInvocationStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutInvocationStep", "Required field: SessionIdentifier, is not set");
    return PutInvocationStepOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutInvocationStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutInvocationStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutInvocationStep",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutInvocationStepOutcome>(
    [&]()-> PutInvocationStepOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInvocationStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/invocationSteps/");
      return PutInvocationStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RerankOutcome BedrockAgentRuntimeClient::Rerank(const RerankRequest& request) const
{
  AWS_OPERATION_GUARD(Rerank);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Rerank, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Rerank, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Rerank, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Rerank",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RerankOutcome>(
    [&]()-> RerankOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Rerank, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rerank");
      return RerankOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RetrieveOutcome BedrockAgentRuntimeClient::Retrieve(const RetrieveRequest& request) const
{
  AWS_OPERATION_GUARD(Retrieve);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Retrieve, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Retrieve", "Required field: KnowledgeBaseId, is not set");
    return RetrieveOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Retrieve, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Retrieve, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Retrieve",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetrieveOutcome>(
    [&]()-> RetrieveOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Retrieve, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgebases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/retrieve");
      return RetrieveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RetrieveAndGenerateOutcome BedrockAgentRuntimeClient::RetrieveAndGenerate(const RetrieveAndGenerateRequest& request) const
{
  AWS_OPERATION_GUARD(RetrieveAndGenerate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveAndGenerate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RetrieveAndGenerate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RetrieveAndGenerate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RetrieveAndGenerate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetrieveAndGenerateOutcome>(
    [&]()-> RetrieveAndGenerateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetrieveAndGenerate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/retrieveAndGenerate");
      return RetrieveAndGenerateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RetrieveAndGenerateStreamOutcome BedrockAgentRuntimeClient::RetrieveAndGenerateStream(RetrieveAndGenerateStreamRequest& request) const
{
  AWS_OPERATION_GUARD(RetrieveAndGenerateStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveAndGenerateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RetrieveAndGenerateStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RetrieveAndGenerateStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RetrieveAndGenerateStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetrieveAndGenerateStreamOutcome>(
    [&]()-> RetrieveAndGenerateStreamOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetrieveAndGenerateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/retrieveAndGenerateStream");
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      if (!request.GetHeadersReceivedEventHandler()) {
        request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
          AWS_CHECK_PTR("RetrieveAndGenerateStream", response);
          if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
            initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });
      }
      return RetrieveAndGenerateStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartFlowExecutionOutcome BedrockAgentRuntimeClient::StartFlowExecution(const StartFlowExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(StartFlowExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFlowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowAliasIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFlowExecution", "Required field: FlowAliasIdentifier, is not set");
    return StartFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFlowExecution", "Required field: FlowIdentifier, is not set");
    return StartFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartFlowExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartFlowExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartFlowExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartFlowExecutionOutcome>(
    [&]()-> StartFlowExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFlowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowAliasIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/executions");
      return StartFlowExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopFlowExecutionOutcome BedrockAgentRuntimeClient::StopFlowExecution(const StopFlowExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(StopFlowExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopFlowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExecutionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopFlowExecution", "Required field: ExecutionIdentifier, is not set");
    return StopFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionIdentifier]", false));
  }
  if (!request.FlowAliasIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopFlowExecution", "Required field: FlowAliasIdentifier, is not set");
    return StopFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowAliasIdentifier]", false));
  }
  if (!request.FlowIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopFlowExecution", "Required field: FlowIdentifier, is not set");
    return StopFlowExecutionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopFlowExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopFlowExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopFlowExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopFlowExecutionOutcome>(
    [&]()-> StopFlowExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopFlowExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowAliasIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/executions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
      return StopFlowExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome BedrockAgentRuntimeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome BedrockAgentRuntimeClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSessionOutcome BedrockAgentRuntimeClient::UpdateSession(const UpdateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: SessionIdentifier, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<BedrockAgentRuntimeErrors>(BedrockAgentRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSessionOutcome>(
    [&]()-> UpdateSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionIdentifier());
      return UpdateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

