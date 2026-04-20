/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSClientBidirectionalStreaming.h>
#include <aws/core/client/AWSClientEventStreamingAsyncTask.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/lexv2-runtime/LexRuntimeV2Client.h>
#include <aws/lexv2-runtime/LexRuntimeV2EndpointProvider.h>
#include <aws/lexv2-runtime/LexRuntimeV2ErrorMarshaller.h>
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

namespace Aws {
namespace LexRuntimeV2 {
const char SERVICE_NAME[] = "lex";
const char ALLOCATION_TAG[] = "LexRuntimeV2Client";
}  // namespace LexRuntimeV2
}  // namespace Aws
const char* LexRuntimeV2Client::GetServiceName() { return SERVICE_NAME; }
const char* LexRuntimeV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

LexRuntimeV2Client::LexRuntimeV2Client(const LexRuntimeV2::LexRuntimeV2ClientConfiguration& clientConfiguration,
                                       std::shared_ptr<LexRuntimeV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const AWSCredentials& credentials,
                                       std::shared_ptr<LexRuntimeV2EndpointProviderBase> endpointProvider,
                                       const LexRuntimeV2::LexRuntimeV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<LexRuntimeV2EndpointProviderBase> endpointProvider,
                                       const LexRuntimeV2::LexRuntimeV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LexRuntimeV2Client::LexRuntimeV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexRuntimeV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LexRuntimeV2Client::~LexRuntimeV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LexRuntimeV2EndpointProviderBase>& LexRuntimeV2Client::accessEndpointProvider() { return m_endpointProvider; }

void LexRuntimeV2Client::init(const LexRuntimeV2::LexRuntimeV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lex Runtime V2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lex");
}

void LexRuntimeV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LexRuntimeV2Client::InvokeOperationOutcome LexRuntimeV2Client::InvokeServiceOperation(
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

DeleteSessionOutcome LexRuntimeV2Client::DeleteSession(const DeleteSessionRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotAliasId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: LocaleId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: SessionId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSessionOutcome(result.GetResultWithOwnership()) : DeleteSessionOutcome(std::move(result.GetError()));
}

GetSessionOutcome LexRuntimeV2Client::GetSession(const GetSessionRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotAliasId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: LocaleId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionOutcome(result.GetResultWithOwnership()) : GetSessionOutcome(std::move(result.GetError()));
}

PutSessionOutcome LexRuntimeV2Client::PutSession(const PutSessionRequest& request) const {
  AWS_OPERATION_GUARD(PutSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotAliasId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: LocaleId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: SessionId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutSession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutSessionOutcome>(
      [&]() -> PutSessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? PutSessionOutcome(result.GetResultWithOwnership()) : PutSessionOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RecognizeTextOutcome LexRuntimeV2Client::RecognizeText(const RecognizeTextRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: BotId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: BotAliasId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: LocaleId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeText", "Required field: SessionId, is not set");
    return RecognizeTextOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/text");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RecognizeTextOutcome(result.GetResultWithOwnership()) : RecognizeTextOutcome(std::move(result.GetError()));
}

RecognizeUtteranceOutcome LexRuntimeV2Client::RecognizeUtterance(const RecognizeUtteranceRequest& request) const {
  AWS_OPERATION_GUARD(RecognizeUtterance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RecognizeUtterance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: BotId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BotId]", false));
  }
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: BotAliasId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BotAliasId]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: LocaleId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [LocaleId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: SessionId, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SessionId]", false));
  }
  if (!request.RequestContentTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RecognizeUtterance", "Required field: RequestContentType, is not set");
    return RecognizeUtteranceOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RequestContentType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RecognizeUtterance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RecognizeUtterance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RecognizeUtterance",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RecognizeUtteranceOutcome>(
      [&]() -> RecognizeUtteranceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RecognizeUtterance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/botAliases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/botLocales/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/utterance");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? RecognizeUtteranceOutcome(result.GetResultWithOwnership())
                                  : RecognizeUtteranceOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

void LexRuntimeV2Client::StartConversationAsync(Model::StartConversationRequest& request,
                                                const StartConversationStreamReadyHandler& streamReadyHandler,
                                                const StartConversationResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(StartConversation);
  if (!m_endpointProvider) {
    handler(this, request,
            StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
                                                                               "Endpoint provider is not initialized", false)),
            handlerContext);
    return;
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: BotId, is not set");
    handler(this, request,
            StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BotId]", false)),
            handlerContext);
    return;
  }
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: BotAliasId, is not set");
    handler(this, request,
            StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BotAliasId]", false)),
            handlerContext);
    return;
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: LocaleId, is not set");
    handler(this, request,
            StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [LocaleId]", false)),
            handlerContext);
    return;
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: SessionId, is not set");
    handler(this, request,
            StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SessionId]", false)),
            handlerContext);
    return;
  }
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(
        this, request,
        StartConversationOutcome(Aws::Client::AWSError<CoreErrors>(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE",
                                                                   endpointResolutionOutcome.GetError().GetMessage(), false)),
        handlerContext);
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

#if AWS_SDK_USE_CRT_HTTP
  // Push-based WriteData path (CRT HTTP client only)
  auto writeDataStreamBuf = Aws::MakeShared<Aws::Utils::Stream::HttpWriteDataStreamBuf>(ALLOCATION_TAG, GetHttpClient());
  auto signer = GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);

  auto eventEncoderStream = Aws::MakeShared<Model::StartConversationRequestEventStream>(ALLOCATION_TAG, writeDataStreamBuf);
  eventEncoderStream->SetSigner(signer);

  auto requestCopy = Aws::MakeShared<StartConversationRequest>(ALLOCATION_TAG, request);
  request.SetRequestEventStream(eventEncoderStream);

  auto& endpoint = endpointResolutionOutcome.GetResult();
  auto httpRequest =
      CreateHttpRequest(endpoint.GetURI(), Aws::Http::HttpMethod::HTTP_POST, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  httpRequest->SetEventStreamRequest(true);
  httpRequest->SetHasEventStreamResponse(true);
  BuildHttpRequest(*requestCopy, httpRequest);

  if (!signer->SignRequest(*httpRequest, nullptr, nullptr, true)) {
    handler(this, request,
            StartConversationOutcome(
                Aws::Client::AWSError<CoreErrors>(CoreErrors::CLIENT_SIGNING_FAILURE, "", "Failed to sign request", false)),
            handlerContext);
    return;
  }
  eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(*httpRequest));

  Aws::Client::SubmitBidirectionalStreamingRequest<LexRuntimeV2Client, StartConversationOutcome, StartConversationRequest,
                                                   Model::StartConversationRequestEventStream>(
      this, request, requestCopy, eventEncoderStream, writeDataStreamBuf, httpRequest, m_clientConfiguration.executor.get(),
      streamReadyHandler, handler, handlerContext);
#else
  // Pull-based path (curl/WinHTTP)
  auto eventEncoderStream = Aws::MakeShared<Model::StartConversationRequestEventStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<StartConversationRequest>("StartConversation", request);
  requestCopy->SetRequestEventStream(eventEncoderStream);
  request.SetRequestEventStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<StartConversationOutcome>(this, endpointResolutionOutcome.GetResultWithOwnership(),
                                                                                requestCopy, handler, handlerContext, eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
#endif
}
