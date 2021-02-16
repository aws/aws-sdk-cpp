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
#include <aws/core/utils/event/EventStream.h>

#include <aws/lexv2-runtime/LexRuntimeV2Client.h>
#include <aws/lexv2-runtime/LexRuntimeV2Endpoint.h>
#include <aws/lexv2-runtime/LexRuntimeV2ErrorMarshaller.h>
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

static const char* SERVICE_NAME = "lex";
static const char* ALLOCATION_TAG = "LexRuntimeV2Client";


LexRuntimeV2Client::LexRuntimeV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeV2Client::LexRuntimeV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexRuntimeV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeV2Client::~LexRuntimeV2Client()
{
}

void LexRuntimeV2Client::init(const ClientConfiguration& config)
{
  SetServiceClientName("Lex Runtime V2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LexRuntimeV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LexRuntimeV2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

DeleteSessionOutcome LexRuntimeV2Client::DeleteSession(const DeleteSessionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/botAliases/";
  ss << request.GetBotAliasId();
  ss << "/botLocales/";
  ss << request.GetLocaleId();
  ss << "/sessions/";
  ss << request.GetSessionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSessionAsyncHelper( request, handler, context ); } );
}

void LexRuntimeV2Client::DeleteSessionAsyncHelper(const DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSession(request), context);
}

GetSessionOutcome LexRuntimeV2Client::GetSession(const GetSessionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/botAliases/";
  ss << request.GetBotAliasId();
  ss << "/botLocales/";
  ss << request.GetLocaleId();
  ss << "/sessions/";
  ss << request.GetSessionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetSessionAsyncHelper( request, handler, context ); } );
}

void LexRuntimeV2Client::GetSessionAsyncHelper(const GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSession(request), context);
}

PutSessionOutcome LexRuntimeV2Client::PutSession(const PutSessionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/botAliases/";
  ss << request.GetBotAliasId();
  ss << "/botLocales/";
  ss << request.GetLocaleId();
  ss << "/sessions/";
  ss << request.GetSessionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return PutSessionOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutSessionAsyncHelper( request, handler, context ); } );
}

void LexRuntimeV2Client::PutSessionAsyncHelper(const PutSessionRequest& request, const PutSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSession(request), context);
}

RecognizeTextOutcome LexRuntimeV2Client::RecognizeText(const RecognizeTextRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/botAliases/";
  ss << request.GetBotAliasId();
  ss << "/botLocales/";
  ss << request.GetLocaleId();
  ss << "/sessions/";
  ss << request.GetSessionId();
  ss << "/text";
  uri.SetPath(uri.GetPath() + ss.str());
  return RecognizeTextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RecognizeTextAsyncHelper( request, handler, context ); } );
}

void LexRuntimeV2Client::RecognizeTextAsyncHelper(const RecognizeTextRequest& request, const RecognizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RecognizeText(request), context);
}

RecognizeUtteranceOutcome LexRuntimeV2Client::RecognizeUtterance(const RecognizeUtteranceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/botAliases/";
  ss << request.GetBotAliasId();
  ss << "/botLocales/";
  ss << request.GetLocaleId();
  ss << "/sessions/";
  ss << request.GetSessionId();
  ss << "/utterance";
  uri.SetPath(uri.GetPath() + ss.str());
  return RecognizeUtteranceOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context](){ this->RecognizeUtteranceAsyncHelper( request, handler, context ); } );
}

void LexRuntimeV2Client::RecognizeUtteranceAsyncHelper(const RecognizeUtteranceRequest& request, const RecognizeUtteranceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RecognizeUtterance(request), context);
}

void LexRuntimeV2Client::StartConversationAsync(Model::StartConversationRequest& request,
                const StartConversationStreamReadyHandler& streamReadyHandler,
                const StartConversationResponseReceivedHandler& responseHandler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  Aws::Http::URI uri = m_uri;
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: BotId, is not set");
    responseHandler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false)), handlerContext);
    return;
  }
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: BotAliasId, is not set");
    responseHandler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false)), handlerContext);
    return;
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: LocaleId, is not set");
    responseHandler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false)), handlerContext);
    return;
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartConversation", "Required field: SessionId, is not set");
    responseHandler(this, request, StartConversationOutcome(Aws::Client::AWSError<LexRuntimeV2Errors>(LexRuntimeV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false)), handlerContext);
    return;
  }
  Aws::StringStream ss;
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/botAliases/";
  ss << request.GetBotAliasId();
  ss << "/botLocales/";
  ss << request.GetLocaleId();
  ss << "/sessions/";
  ss << request.GetSessionId();
  ss << "/conversation";
  uri.SetPath(uri.GetPath() + ss.str());
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );

  auto eventEncoderStream = Aws::MakeShared<Model::StartConversationRequestEventStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  request.SetRequestEventStream(eventEncoderStream); // this becomes the body of the request
  auto sem = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ALLOCATION_TAG, 0, 1);
  request.SetRequestSignedHandler([eventEncoderStream, sem](const Aws::Http::HttpRequest& httpRequest) { eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); sem->ReleaseAll(); });

  m_executor->Submit([this, uri, &request, responseHandler, handlerContext] () mutable {
      JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);
      if(outcome.IsSuccess())
      {
        responseHandler(this, request, StartConversationOutcome(NoResult()), handlerContext);
      }
      else
      {
        request.GetRequestEventStream()->Close();
        responseHandler(this, request, StartConversationOutcome(outcome.GetError()), handlerContext);
      }
      return StartConversationOutcome(NoResult());
  });
  sem->WaitOne();
  streamReadyHandler(*request.GetRequestEventStream());
}
