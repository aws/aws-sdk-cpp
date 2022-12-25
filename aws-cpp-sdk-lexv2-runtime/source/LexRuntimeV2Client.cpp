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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexRuntimeV2;
using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LexRuntimeV2Client::SERVICE_NAME = "lex";
const char* LexRuntimeV2Client::ALLOCATION_TAG = "LexRuntimeV2Client";

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
  m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

DeleteSessionOutcomeCallable LexRuntimeV2Client::DeleteSessionCallable(const DeleteSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeV2Client::DeleteSessionAsync(const DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSession(request), context);
    } );
}

GetSessionOutcome LexRuntimeV2Client::GetSession(const GetSessionRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

GetSessionOutcomeCallable LexRuntimeV2Client::GetSessionCallable(const GetSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeV2Client::GetSessionAsync(const GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSession(request), context);
    } );
}

PutSessionOutcome LexRuntimeV2Client::PutSession(const PutSessionRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

PutSessionOutcomeCallable LexRuntimeV2Client::PutSessionCallable(const PutSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeV2Client::PutSessionAsync(const PutSessionRequest& request, const PutSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSession(request), context);
    } );
}

RecognizeTextOutcome LexRuntimeV2Client::RecognizeText(const RecognizeTextRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

RecognizeTextOutcomeCallable LexRuntimeV2Client::RecognizeTextCallable(const RecognizeTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecognizeTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecognizeText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeV2Client::RecognizeTextAsync(const RecognizeTextRequest& request, const RecognizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RecognizeText(request), context);
    } );
}

RecognizeUtteranceOutcome LexRuntimeV2Client::RecognizeUtterance(const RecognizeUtteranceRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

RecognizeUtteranceOutcomeCallable LexRuntimeV2Client::RecognizeUtteranceCallable(const RecognizeUtteranceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecognizeUtteranceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecognizeUtterance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeV2Client::RecognizeUtteranceAsync(const RecognizeUtteranceRequest& request, const RecognizeUtteranceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RecognizeUtterance(request), context);
    } );
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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

  m_executor->Submit([this, &endpointResolutionOutcome, &request, handler, handlerContext] () mutable {
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
