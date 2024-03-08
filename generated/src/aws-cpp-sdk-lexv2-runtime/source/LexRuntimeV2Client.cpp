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

#include <aws/lexv2-runtime/LexRuntimeV2Client.h>
#include <aws/lexv2-runtime/LexRuntimeV2ErrorMarshaller.h>
#include <aws/lexv2-runtime/LexRuntimeV2EndpointProvider.h>
#include <aws/lexv2-runtime/model/DeleteSessionRequest.h>
#include <aws/lexv2-runtime/model/GetSessionRequest.h>
#include <aws/lexv2-runtime/model/PutSessionRequest.h>
#include <aws/lexv2-runtime/model/RecognizeTextRequest.h>
#include <aws/lexv2-runtime/model/RecognizeUtteranceRequest.h>
#include <aws/lexv2-runtime/model/StartConversationRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexRuntimeV2;
using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace LexRuntimeV2
  {
    const char SERVICE_NAME[] = "lex";
    const char ALLOCATION_TAG[] = "LexRuntimeV2Client";
  }
}
const char* LexRuntimeV2Client::GetServiceName() {return SERVICE_NAME;}
const char* LexRuntimeV2Client::GetAllocationTag() {return ALLOCATION_TAG;}

LexRuntimeV2Client::LexRuntimeV2Client(const LexRuntimeV2::LexRuntimeV2ClientConfiguration& clientConfiguration,
                                       std::shared_ptr<LexRuntimeV2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const AWSCredentials& credentials,
                                       std::shared_ptr<LexRuntimeV2EndpointProviderBase> endpointProvider,
                                       const LexRuntimeV2::LexRuntimeV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<LexRuntimeV2EndpointProviderBase> endpointProvider,
                                       const LexRuntimeV2::LexRuntimeV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LexRuntimeV2Client::LexRuntimeV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LexRuntimeV2Client::~LexRuntimeV2Client()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<LexRuntimeV2EndpointProviderBase>& LexRuntimeV2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LexRuntimeV2Client::init(const LexRuntimeV2::LexRuntimeV2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Lex Runtime V2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LexRuntimeV2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteSessionOutcome LexRuntimeV2Client::DeleteSession(const DeleteSessionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotAliasId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: LocaleId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: SessionId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
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
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      return DeleteSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionOutcome LexRuntimeV2Client::GetSession(const GetSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotAliasId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: LocaleId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
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
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      return GetSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutSessionOutcome LexRuntimeV2Client::PutSession(const PutSessionRequest& request) const
{
  AWS_OPERATION_GUARD(PutSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotAliasId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: LocaleId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: SessionId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutSessionOutcome>(
    [&]()-> PutSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      return PutSessionOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RecognizeTextOutcome LexRuntimeV2Client::RecognizeText(const RecognizeTextRequest& request) const
{
  AWS_OPERATION_GUARD(RecognizeText);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RecognizeText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: BotId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: BotAliasId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: LocaleId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: SessionId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RecognizeText, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RecognizeText, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RecognizeText",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RecognizeTextOutcome>(
    [&]()-> RecognizeTextOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RecognizeText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/text");
      return RecognizeTextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RecognizeUtteranceOutcome LexRuntimeV2Client::RecognizeUtterance(const RecognizeUtteranceRequest& request) const
{
  AWS_OPERATION_GUARD(RecognizeUtterance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RecognizeUtterance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: BotId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: BotAliasId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: LocaleId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: SessionId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.RequestContentTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: RequestContentType, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestContentType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RecognizeUtterance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RecognizeUtterance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RecognizeUtterance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RecognizeUtteranceOutcome>(
    [&]()-> RecognizeUtteranceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RecognizeUtterance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/utterance");
      return RecognizeUtteranceOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

void LexRuntimeV2Client::StartConversationAsync(Model::StartConversationRequest& request,
                const StartConversationStreamReadyHandler& streamReadyHandler,
                const StartConversationResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  if (!m_endpointProvider) {
    handler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
    return;
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: BotId, is not set");
    handler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false)), handlerContext);
    return;
  }
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: BotAliasId, is not set");
    handler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false)), handlerContext);
    return;
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: LocaleId, is not set");
    handler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false)), handlerContext);
    return;
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: SessionId, is not set");
    handler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false)), handlerContext);
    return;
  }
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
      *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
      handler(this, request, StartConversationOutcome(Aws::Client::AWSError<CoreErrors>(
          CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE", endpointResolutionOutcome.GetError().GetMessage(), false)), handlerContext);
      return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/conversation");
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );

  auto eventEncoderStream = Aws::MakeShared<Model::StartConversationRequestEventStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  request.SetRequestEventStream(eventEncoderStream); // this becomes the body of the request
  auto sem = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, sem](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); sem->ReleaseAll(); });

  m_executor->Submit([this, endpointResolutionOutcome, &request, handler, handlerContext] () mutable {
      JsonOutcome outcome = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);
      if(outcome.IsSuccess())
      {
        handler(this, request, StartConversationOutcome(NoResult()), handlerContext);
      }
      else
      {
        request.GetRequestEventStream()->Close();
        handler(this, request, StartConversationOutcome(outcome.GetError()), handlerContext);
      }
      return StartConversationOutcome(NoResult());
  });
  sem->WaitOne();
  streamReadyHandler(*request.GetRequestEventStream());
}
