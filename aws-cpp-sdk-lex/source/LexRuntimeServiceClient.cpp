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

#include <aws/lex/LexRuntimeServiceClient.h>
#include <aws/lex/LexRuntimeServiceErrorMarshaller.h>
#include <aws/lex/LexRuntimeServiceEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LexRuntimeServiceClient::SERVICE_NAME = "lex";
const char* LexRuntimeServiceClient::ALLOCATION_TAG = "LexRuntimeServiceClient";

LexRuntimeServiceClient::LexRuntimeServiceClient(const LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider,
                                                 const LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider,
                                                 const LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LexRuntimeServiceClient::LexRuntimeServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexRuntimeServiceClient::LexRuntimeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LexRuntimeServiceClient::~LexRuntimeServiceClient()
{
}

std::shared_ptr<LexRuntimeServiceEndpointProviderBase>& LexRuntimeServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LexRuntimeServiceClient::init(const LexRuntimeService::LexRuntimeServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Lex Runtime Service");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LexRuntimeServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteSessionOutcome LexRuntimeServiceClient::DeleteSession(const DeleteSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  return DeleteSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSession(request), context);
    } );
}

GetSessionOutcome LexRuntimeServiceClient::GetSession(const GetSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session/");
  return GetSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSession(request), context);
    } );
}

PostContentOutcome LexRuntimeServiceClient::PostContent(const PostContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/content");
  return PostContentOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PostContent(request), context);
    } );
}

PostTextOutcome LexRuntimeServiceClient::PostText(const PostTextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/text");
  return PostTextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PostText(request), context);
    } );
}

PutSessionOutcome LexRuntimeServiceClient::PutSession(const PutSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  return PutSessionOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSession(request), context);
    } );
}

