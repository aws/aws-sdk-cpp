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
#include <aws/core/client/AWSClientEventStreamingAsyncTask.h>
#include <aws/core/utils/event/EventStream.h>

#include <aws/bedrock-runtime/BedrockRuntimeClient.h>
#include <aws/bedrock-runtime/BedrockRuntimeErrorMarshaller.h>
#include <aws/bedrock-runtime/BedrockRuntimeEndpointProvider.h>
#include <aws/bedrock-runtime/model/ApplyGuardrailRequest.h>
#include <aws/bedrock-runtime/model/ConverseRequest.h>
#include <aws/bedrock-runtime/model/ConverseStreamRequest.h>
#include <aws/bedrock-runtime/model/CountTokensRequest.h>
#include <aws/bedrock-runtime/model/GetAsyncInvokeRequest.h>
#include <aws/bedrock-runtime/model/InvokeModelRequest.h>
#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamRequest.h>
#include <aws/bedrock-runtime/model/InvokeModelWithResponseStreamRequest.h>
#include <aws/bedrock-runtime/model/ListAsyncInvokesRequest.h>
#include <aws/bedrock-runtime/model/StartAsyncInvokeRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockRuntime;
using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace BedrockRuntime
  {
    const char SERVICE_NAME[] = "bedrock";
    const char ALLOCATION_TAG[] = "BedrockRuntimeClient";
  }
}
const char* BedrockRuntimeClient::GetServiceName() {return SERVICE_NAME;}
const char* BedrockRuntimeClient::GetAllocationTag() {return ALLOCATION_TAG;}

BedrockRuntimeClient::BedrockRuntimeClient(const BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration,
                                           std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BedrockRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockRuntimeClient::BedrockRuntimeClient(const AWSCredentials& credentials,
                                           std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider,
                                           const BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BedrockRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockRuntimeClient::BedrockRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider,
                                           const BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BedrockRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  BedrockRuntimeClient::BedrockRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(Aws::MakeShared<BedrockRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockRuntimeClient::BedrockRuntimeClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<BedrockRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BedrockRuntimeClient::BedrockRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BedrockRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<BedrockRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
BedrockRuntimeClient::~BedrockRuntimeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BedrockRuntimeEndpointProviderBase>& BedrockRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BedrockRuntimeClient::init(const BedrockRuntime::BedrockRuntimeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Bedrock Runtime");
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

void BedrockRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ApplyGuardrailOutcome BedrockRuntimeClient::ApplyGuardrail(const ApplyGuardrailRequest& request) const
{
  AWS_OPERATION_GUARD(ApplyGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplyGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GuardrailIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ApplyGuardrail", "Required field: GuardrailIdentifier, is not set");
    return ApplyGuardrailOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GuardrailIdentifier]", false));
  }
  if (!request.GuardrailVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ApplyGuardrail", "Required field: GuardrailVersion, is not set");
    return ApplyGuardrailOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GuardrailVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ApplyGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ApplyGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ApplyGuardrail",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ApplyGuardrailOutcome>(
    [&]()-> ApplyGuardrailOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplyGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/guardrail/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGuardrailIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGuardrailVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/apply");
      return ApplyGuardrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ConverseOutcome BedrockRuntimeClient::Converse(const ConverseRequest& request) const
{
  AWS_OPERATION_GUARD(Converse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Converse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Converse", "Required field: ModelId, is not set");
    return ConverseOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Converse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Converse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Converse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ConverseOutcome>(
    [&]()-> ConverseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Converse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/model/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/converse");
      return ConverseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ConverseStreamOutcome BedrockRuntimeClient::ConverseStream(ConverseStreamRequest& request) const
{
  AWS_OPERATION_GUARD(ConverseStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConverseStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ConverseStream", "Required field: ModelId, is not set");
    return ConverseStreamOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ConverseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ConverseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ConverseStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ConverseStreamOutcome>(
    [&]()-> ConverseStreamOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConverseStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/model/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/converse-stream");
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      if (!request.GetHeadersReceivedEventHandler()) {
        request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
          AWS_CHECK_PTR("ConverseStream", response);
          if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
            initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });
      }
      return ConverseStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CountTokensOutcome BedrockRuntimeClient::CountTokens(const CountTokensRequest& request) const
{
  AWS_OPERATION_GUARD(CountTokens);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CountTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CountTokens", "Required field: ModelId, is not set");
    return CountTokensOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CountTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CountTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CountTokens",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CountTokensOutcome>(
    [&]()-> CountTokensOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CountTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/model/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/count-tokens");
      return CountTokensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAsyncInvokeOutcome BedrockRuntimeClient::GetAsyncInvoke(const GetAsyncInvokeRequest& request) const
{
  AWS_OPERATION_GUARD(GetAsyncInvoke);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAsyncInvoke, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InvocationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAsyncInvoke", "Required field: InvocationArn, is not set");
    return GetAsyncInvokeOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvocationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAsyncInvoke, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAsyncInvoke, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAsyncInvoke",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAsyncInvokeOutcome>(
    [&]()-> GetAsyncInvokeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAsyncInvoke, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/async-invoke/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInvocationArn());
      return GetAsyncInvokeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeModelOutcome BedrockRuntimeClient::InvokeModel(const InvokeModelRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeModel", "Required field: ModelId, is not set");
    return InvokeModelOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeModelOutcome>(
    [&]()-> InvokeModelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/model/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/invoke");
      return InvokeModelOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

void BedrockRuntimeClient::InvokeModelWithBidirectionalStreamAsync(Model::InvokeModelWithBidirectionalStreamRequest& request,
                const InvokeModelWithBidirectionalStreamStreamReadyHandler& streamReadyHandler,
                const InvokeModelWithBidirectionalStreamResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  AWS_ASYNC_OPERATION_GUARD(InvokeModelWithBidirectionalStream);
  if (!m_endpointProvider) {
    handler(this, request, InvokeModelWithBidirectionalStreamOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
    return;
  }
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeModelWithBidirectionalStream", "Required field: ModelId, is not set");
    handler(this, request, InvokeModelWithBidirectionalStreamOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false)), handlerContext);
    return;
  }
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, InvokeModelWithBidirectionalStreamOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/model/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invoke-with-bidirectional-stream");

  auto eventEncoderStream = Aws::MakeShared<Model::InvokeModelWithBidirectionalStreamInput>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<InvokeModelWithBidirectionalStreamRequest>("InvokeModelWithBidirectionalStream", request);
  requestCopy->SetBody(eventEncoderStream); // this becomes the body of the request
  request.SetBody(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<InvokeModelWithBidirectionalStreamOutcome>(this,
                                         endpointResolutionOutcome.GetResultWithOwnership(),
                                         requestCopy,
                                         handler,
                                         handlerContext,
                                         eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
}
InvokeModelWithResponseStreamOutcome BedrockRuntimeClient::InvokeModelWithResponseStream(InvokeModelWithResponseStreamRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeModelWithResponseStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeModelWithResponseStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeModelWithResponseStream", "Required field: ModelId, is not set");
    return InvokeModelWithResponseStreamOutcome(Aws::Client::AWSError<BedrockRuntimeErrors>(BedrockRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeModelWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeModelWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeModelWithResponseStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeModelWithResponseStreamOutcome>(
    [&]()-> InvokeModelWithResponseStreamOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeModelWithResponseStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/model/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/invoke-with-response-stream");
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      if (!request.GetHeadersReceivedEventHandler()) {
        request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
          AWS_CHECK_PTR("InvokeModelWithResponseStream", response);
          if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
            initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });
      }
      return InvokeModelWithResponseStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAsyncInvokesOutcome BedrockRuntimeClient::ListAsyncInvokes(const ListAsyncInvokesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAsyncInvokes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAsyncInvokes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAsyncInvokes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAsyncInvokes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAsyncInvokes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAsyncInvokesOutcome>(
    [&]()-> ListAsyncInvokesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAsyncInvokes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/async-invoke");
      return ListAsyncInvokesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAsyncInvokeOutcome BedrockRuntimeClient::StartAsyncInvoke(const StartAsyncInvokeRequest& request) const
{
  AWS_OPERATION_GUARD(StartAsyncInvoke);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAsyncInvoke, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartAsyncInvoke, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAsyncInvoke, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAsyncInvoke",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAsyncInvokeOutcome>(
    [&]()-> StartAsyncInvokeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAsyncInvoke, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/async-invoke");
      return StartAsyncInvokeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

