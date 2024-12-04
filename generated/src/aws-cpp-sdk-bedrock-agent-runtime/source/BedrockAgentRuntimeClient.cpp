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
#include <aws/bedrock-agent-runtime/model/DeleteAgentMemoryRequest.h>
#include <aws/bedrock-agent-runtime/model/GenerateQueryRequest.h>
#include <aws/bedrock-agent-runtime/model/GetAgentMemoryRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeAgentRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeFlowRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentRequest.h>
#include <aws/bedrock-agent-runtime/model/OptimizePromptRequest.h>
#include <aws/bedrock-agent-runtime/model/RerankRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateStreamRequest.h>

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
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
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
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
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
      return InvokeInlineAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
      return OptimizePromptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
      return RetrieveAndGenerateStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

