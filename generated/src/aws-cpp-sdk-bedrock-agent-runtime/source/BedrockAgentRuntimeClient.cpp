/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "BedrockAgentRuntimeClient";
    const char SERVICE_NAME[] = "bedrock";
  }
}
const char* BedrockAgentRuntimeClient::GetServiceName() {return SERVICE_NAME;}
const char* BedrockAgentRuntimeClient::GetAllocationTag() {return ALLOCATION_TAG;}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration,
                           std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Agent Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const AWSCredentials& credentials,
                           std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider,
                           const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Agent Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider,
                           const BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Agent Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Bedrock Agent Runtime",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Agent Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

BedrockAgentRuntimeClient::BedrockAgentRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Agent Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockAgentRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BedrockAgentRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

BedrockAgentRuntimeClient::~BedrockAgentRuntimeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase>& BedrockAgentRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAgentMemory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAgentMemoryOutcome>(
    [&]()-> DeleteAgentMemoryOutcome {
      return DeleteAgentMemoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/agents/");
      resolvedEndpoint.AddPathSegment(request.GetAgentId());
      resolvedEndpoint.AddPathSegments("/agentAliases/");
      resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
      resolvedEndpoint.AddPathSegments("/memories");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateQueryOutcome BedrockAgentRuntimeClient::GenerateQuery(const GenerateQueryRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GenerateQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateQueryOutcome>(
    [&]()-> GenerateQueryOutcome {
      return GenerateQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/generateQuery");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgentMemory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgentMemory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentMemoryOutcome>(
    [&]()-> GetAgentMemoryOutcome {
      return GetAgentMemoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/agents/");
      resolvedEndpoint.AddPathSegment(request.GetAgentId());
      resolvedEndpoint.AddPathSegments("/agentAliases/");
      resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
      resolvedEndpoint.AddPathSegments("/memories");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeAgentOutcome>(
    [&]()-> InvokeAgentOutcome {
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
      return InvokeAgentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/agents/");
      resolvedEndpoint.AddPathSegment(request.GetAgentId());
      resolvedEndpoint.AddPathSegments("/agentAliases/");
      resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
      resolvedEndpoint.AddPathSegments("/sessions/");
      resolvedEndpoint.AddPathSegment(request.GetSessionId());
      resolvedEndpoint.AddPathSegments("/text");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeFlow",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeFlowOutcome>(
    [&]()-> InvokeFlowOutcome {
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
      return InvokeFlowOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/flows/");
      resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
      resolvedEndpoint.AddPathSegments("/aliases/");
      resolvedEndpoint.AddPathSegment(request.GetFlowAliasIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeInlineAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeInlineAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeInlineAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeInlineAgentOutcome>(
    [&]()-> InvokeInlineAgentOutcome {
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
      return InvokeInlineAgentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/agents/");
      resolvedEndpoint.AddPathSegment(request.GetSessionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

OptimizePromptOutcome BedrockAgentRuntimeClient::OptimizePrompt(OptimizePromptRequest& request) const
{
  AWS_OPERATION_GUARD(OptimizePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OptimizePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, OptimizePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, OptimizePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".OptimizePrompt",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<OptimizePromptOutcome>(
    [&]()-> OptimizePromptOutcome {
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
      return OptimizePromptOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/optimize-prompt");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RerankOutcome BedrockAgentRuntimeClient::Rerank(const RerankRequest& request) const
{
  AWS_OPERATION_GUARD(Rerank);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Rerank, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, Rerank, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Rerank, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Rerank",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RerankOutcome>(
    [&]()-> RerankOutcome {
      return RerankOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/rerank");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, Retrieve, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Retrieve, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Retrieve",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetrieveOutcome>(
    [&]()-> RetrieveOutcome {
      return RetrieveOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/knowledgebases/");
      resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
      resolvedEndpoint.AddPathSegments("/retrieve");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RetrieveAndGenerateOutcome BedrockAgentRuntimeClient::RetrieveAndGenerate(const RetrieveAndGenerateRequest& request) const
{
  AWS_OPERATION_GUARD(RetrieveAndGenerate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveAndGenerate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RetrieveAndGenerate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RetrieveAndGenerate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RetrieveAndGenerate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetrieveAndGenerateOutcome>(
    [&]()-> RetrieveAndGenerateOutcome {
      return RetrieveAndGenerateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/retrieveAndGenerate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RetrieveAndGenerateStreamOutcome BedrockAgentRuntimeClient::RetrieveAndGenerateStream(RetrieveAndGenerateStreamRequest& request) const
{
  AWS_OPERATION_GUARD(RetrieveAndGenerateStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveAndGenerateStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RetrieveAndGenerateStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RetrieveAndGenerateStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RetrieveAndGenerateStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetrieveAndGenerateStreamOutcome>(
    [&]()-> RetrieveAndGenerateStreamOutcome {
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
      return RetrieveAndGenerateStreamOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/retrieveAndGenerateStream");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


