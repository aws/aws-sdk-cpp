/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/lex/model/PostContentRequest.h>
#include <aws/lex/model/PostTextRequest.h>

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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PostContentOutcome(PostContentResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return PostContentOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PostTextOutcome(PostTextResult(outcome.GetResult()));
  }
  else
  {
    return PostTextOutcome(outcome.GetError());
  }
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

