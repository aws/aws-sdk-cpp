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

#include <aws/lex/LexRuntimeServiceClient.h>
#include <aws/lex/LexRuntimeServiceEndpoint.h>
#include <aws/lex/LexRuntimeServiceErrorMarshaller.h>
#include <aws/lex/model/DeleteSessionRequest.h>
#include <aws/lex/model/GetSessionRequest.h>
#include <aws/lex/model/PostContentRequest.h>
#include <aws/lex/model/PostTextRequest.h>
#include <aws/lex/model/PutSessionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexRuntimeService;
using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "lex";
static const char* ALLOCATION_TAG = "LexRuntimeServiceClient";


LexRuntimeServiceClient::LexRuntimeServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeServiceClient::~LexRuntimeServiceClient()
{
}

void LexRuntimeServiceClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Lex Runtime Service");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LexRuntimeServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LexRuntimeServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteSessionOutcome LexRuntimeServiceClient::DeleteSession(const DeleteSessionRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotName, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotAlias, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: UserId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bot/";
  ss << request.GetBotName();
  ss << "/alias/";
  ss << request.GetBotAlias();
  ss << "/user/";
  ss << request.GetUserId();
  ss << "/session";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSessionOutcomeCallable LexRuntimeServiceClient::DeleteSessionCallable(const DeleteSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeServiceClient::DeleteSessionAsync(const DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSessionAsyncHelper( request, handler, context ); } );
}

void LexRuntimeServiceClient::DeleteSessionAsyncHelper(const DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSession(request), context);
}

GetSessionOutcome LexRuntimeServiceClient::GetSession(const GetSessionRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotName, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotAlias, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: UserId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bot/";
  ss << request.GetBotName();
  ss << "/alias/";
  ss << request.GetBotAlias();
  ss << "/user/";
  ss << request.GetUserId();
  ss << "/session/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSessionOutcomeCallable LexRuntimeServiceClient::GetSessionCallable(const GetSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeServiceClient::GetSessionAsync(const GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSessionAsyncHelper( request, handler, context ); } );
}

void LexRuntimeServiceClient::GetSessionAsyncHelper(const GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSession(request), context);
}

PostContentOutcome LexRuntimeServiceClient::PostContent(const PostContentRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostContent", "Required field: BotName, is not set");
    return PostContentOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostContent", "Required field: BotAlias, is not set");
    return PostContentOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostContent", "Required field: UserId, is not set");
    return PostContentOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bot/";
  ss << request.GetBotName();
  ss << "/alias/";
  ss << request.GetBotAlias();
  ss << "/user/";
  ss << request.GetUserId();
  ss << "/content";
  uri.SetPath(uri.GetPath() + ss.str());
  return PostContentOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PostContentOutcomeCallable LexRuntimeServiceClient::PostContentCallable(const PostContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeServiceClient::PostContentAsync(const PostContentRequest& request, const PostContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PostContentAsyncHelper( request, handler, context ); } );
}

void LexRuntimeServiceClient::PostContentAsyncHelper(const PostContentRequest& request, const PostContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PostContent(request), context);
}

PostTextOutcome LexRuntimeServiceClient::PostText(const PostTextRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostText", "Required field: BotName, is not set");
    return PostTextOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostText", "Required field: BotAlias, is not set");
    return PostTextOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostText", "Required field: UserId, is not set");
    return PostTextOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bot/";
  ss << request.GetBotName();
  ss << "/alias/";
  ss << request.GetBotAlias();
  ss << "/user/";
  ss << request.GetUserId();
  ss << "/text";
  uri.SetPath(uri.GetPath() + ss.str());
  return PostTextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostTextOutcomeCallable LexRuntimeServiceClient::PostTextCallable(const PostTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeServiceClient::PostTextAsync(const PostTextRequest& request, const PostTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PostTextAsyncHelper( request, handler, context ); } );
}

void LexRuntimeServiceClient::PostTextAsyncHelper(const PostTextRequest& request, const PostTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PostText(request), context);
}

PutSessionOutcome LexRuntimeServiceClient::PutSession(const PutSessionRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotName, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotAlias, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: UserId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/bot/";
  ss << request.GetBotName();
  ss << "/alias/";
  ss << request.GetBotAlias();
  ss << "/user/";
  ss << request.GetUserId();
  ss << "/session";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutSessionOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutSessionOutcomeCallable LexRuntimeServiceClient::PutSessionCallable(const PutSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexRuntimeServiceClient::PutSessionAsync(const PutSessionRequest& request, const PutSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSessionAsyncHelper( request, handler, context ); } );
}

void LexRuntimeServiceClient::PutSessionAsyncHelper(const PutSessionRequest& request, const PutSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSession(request), context);
}

