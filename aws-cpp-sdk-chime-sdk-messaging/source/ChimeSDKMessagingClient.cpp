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

#include <aws/chime-sdk-messaging/ChimeSDKMessagingClient.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingEndpoint.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingErrorMarshaller.h>
#include <aws/chime-sdk-messaging/model/AssociateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/BatchCreateChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/ChannelFlowCallbackRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelBanRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelModeratorRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelBanRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelModeratorRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelBanRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelMembershipForAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelModeratedByAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelModeratorRequest.h>
#include <aws/chime-sdk-messaging/model/DisassociateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/GetChannelMembershipPreferencesRequest.h>
#include <aws/chime-sdk-messaging/model/GetChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/GetChannelMessageStatusRequest.h>
#include <aws/chime-sdk-messaging/model/GetMessagingSessionEndpointRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelBansRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelFlowsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsForAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelMessagesRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelModeratorsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelsModeratedByAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-messaging/model/PutChannelMembershipPreferencesRequest.h>
#include <aws/chime-sdk-messaging/model/RedactChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/SearchChannelsRequest.h>
#include <aws/chime-sdk-messaging/model/SendChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/TagResourceRequest.h>
#include <aws/chime-sdk-messaging/model/UntagResourceRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelReadMarkerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKMessaging;
using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "chime";
static const char* ALLOCATION_TAG = "ChimeSDKMessagingClient";


ChimeSDKMessagingClient::ChimeSDKMessagingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMessagingClient::ChimeSDKMessagingClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMessagingClient::ChimeSDKMessagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMessagingClient::~ChimeSDKMessagingClient()
{
}

void ChimeSDKMessagingClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Chime SDK Messaging");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ChimeSDKMessagingEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ChimeSDKMessagingClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateChannelFlowOutcome ChimeSDKMessagingClient::AssociateChannelFlow(const AssociateChannelFlowRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateChannelFlow", "Required field: ChannelArn, is not set");
    return AssociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateChannelFlow", "Required field: ChimeBearer, is not set");
    return AssociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/channel-flow");
  return AssociateChannelFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateChannelFlowOutcomeCallable ChimeSDKMessagingClient::AssociateChannelFlowCallable(const AssociateChannelFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateChannelFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateChannelFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::AssociateChannelFlowAsync(const AssociateChannelFlowRequest& request, const AssociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateChannelFlowAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::AssociateChannelFlowAsyncHelper(const AssociateChannelFlowRequest& request, const AssociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateChannelFlow(request), context);
}

BatchCreateChannelMembershipOutcome ChimeSDKMessagingClient::BatchCreateChannelMembership(const BatchCreateChannelMembershipRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateChannelMembership", "Required field: ChannelArn, is not set");
    return BatchCreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateChannelMembership", "Required field: ChimeBearer, is not set");
    return BatchCreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/memberships");
  ss.str("?operation=batch-create");
  uri.SetQueryString(ss.str());
  return BatchCreateChannelMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateChannelMembershipOutcomeCallable ChimeSDKMessagingClient::BatchCreateChannelMembershipCallable(const BatchCreateChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::BatchCreateChannelMembershipAsync(const BatchCreateChannelMembershipRequest& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreateChannelMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::BatchCreateChannelMembershipAsyncHelper(const BatchCreateChannelMembershipRequest& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreateChannelMembership(request), context);
}

ChannelFlowCallbackOutcome ChimeSDKMessagingClient::ChannelFlowCallback(const ChannelFlowCallbackRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChannelFlowCallback", "Required field: ChannelArn, is not set");
    return ChannelFlowCallbackOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  ss.str("?operation=channel-flow-callback");
  uri.SetQueryString(ss.str());
  return ChannelFlowCallbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ChannelFlowCallbackOutcomeCallable ChimeSDKMessagingClient::ChannelFlowCallbackCallable(const ChannelFlowCallbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChannelFlowCallbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChannelFlowCallback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ChannelFlowCallbackAsync(const ChannelFlowCallbackRequest& request, const ChannelFlowCallbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChannelFlowCallbackAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ChannelFlowCallbackAsyncHelper(const ChannelFlowCallbackRequest& request, const ChannelFlowCallbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChannelFlowCallback(request), context);
}

CreateChannelOutcome ChimeSDKMessagingClient::CreateChannel(const CreateChannelRequest& request) const
{
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChimeBearer, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable ChimeSDKMessagingClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::CreateChannelAsyncHelper(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannel(request), context);
}

CreateChannelBanOutcome ChimeSDKMessagingClient::CreateChannelBan(const CreateChannelBanRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelBan", "Required field: ChannelArn, is not set");
    return CreateChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelBan", "Required field: ChimeBearer, is not set");
    return CreateChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/bans");
  return CreateChannelBanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelBanOutcomeCallable ChimeSDKMessagingClient::CreateChannelBanCallable(const CreateChannelBanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelBanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannelBan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::CreateChannelBanAsync(const CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelBanAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::CreateChannelBanAsyncHelper(const CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannelBan(request), context);
}

CreateChannelFlowOutcome ChimeSDKMessagingClient::CreateChannelFlow(const CreateChannelFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel-flows");
  return CreateChannelFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelFlowOutcomeCallable ChimeSDKMessagingClient::CreateChannelFlowCallable(const CreateChannelFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannelFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::CreateChannelFlowAsync(const CreateChannelFlowRequest& request, const CreateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelFlowAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::CreateChannelFlowAsyncHelper(const CreateChannelFlowRequest& request, const CreateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannelFlow(request), context);
}

CreateChannelMembershipOutcome ChimeSDKMessagingClient::CreateChannelMembership(const CreateChannelMembershipRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelMembership", "Required field: ChannelArn, is not set");
    return CreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelMembership", "Required field: ChimeBearer, is not set");
    return CreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/memberships");
  return CreateChannelMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelMembershipOutcomeCallable ChimeSDKMessagingClient::CreateChannelMembershipCallable(const CreateChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::CreateChannelMembershipAsync(const CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::CreateChannelMembershipAsyncHelper(const CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannelMembership(request), context);
}

CreateChannelModeratorOutcome ChimeSDKMessagingClient::CreateChannelModerator(const CreateChannelModeratorRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelModerator", "Required field: ChannelArn, is not set");
    return CreateChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelModerator", "Required field: ChimeBearer, is not set");
    return CreateChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/moderators");
  return CreateChannelModeratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelModeratorOutcomeCallable ChimeSDKMessagingClient::CreateChannelModeratorCallable(const CreateChannelModeratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelModeratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannelModerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::CreateChannelModeratorAsync(const CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelModeratorAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::CreateChannelModeratorAsyncHelper(const CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannelModerator(request), context);
}

DeleteChannelOutcome ChimeSDKMessagingClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelArn, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChimeBearer, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable ChimeSDKMessagingClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DeleteChannelAsyncHelper(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannel(request), context);
}

DeleteChannelBanOutcome ChimeSDKMessagingClient::DeleteChannelBan(const DeleteChannelBanRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: ChannelArn, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: MemberArn, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: ChimeBearer, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/bans/");
  uri.AddPathSegment(request.GetMemberArn());
  return DeleteChannelBanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelBanOutcomeCallable ChimeSDKMessagingClient::DeleteChannelBanCallable(const DeleteChannelBanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelBanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelBan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DeleteChannelBanAsync(const DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelBanAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DeleteChannelBanAsyncHelper(const DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelBan(request), context);
}

DeleteChannelFlowOutcome ChimeSDKMessagingClient::DeleteChannelFlow(const DeleteChannelFlowRequest& request) const
{
  if (!request.ChannelFlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelFlow", "Required field: ChannelFlowArn, is not set");
    return DeleteChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel-flows/");
  uri.AddPathSegment(request.GetChannelFlowArn());
  return DeleteChannelFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelFlowOutcomeCallable ChimeSDKMessagingClient::DeleteChannelFlowCallable(const DeleteChannelFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DeleteChannelFlowAsync(const DeleteChannelFlowRequest& request, const DeleteChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelFlowAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DeleteChannelFlowAsyncHelper(const DeleteChannelFlowRequest& request, const DeleteChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelFlow(request), context);
}

DeleteChannelMembershipOutcome ChimeSDKMessagingClient::DeleteChannelMembership(const DeleteChannelMembershipRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: ChannelArn, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: MemberArn, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: ChimeBearer, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/memberships/");
  uri.AddPathSegment(request.GetMemberArn());
  return DeleteChannelMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelMembershipOutcomeCallable ChimeSDKMessagingClient::DeleteChannelMembershipCallable(const DeleteChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DeleteChannelMembershipAsync(const DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DeleteChannelMembershipAsyncHelper(const DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelMembership(request), context);
}

DeleteChannelMessageOutcome ChimeSDKMessagingClient::DeleteChannelMessage(const DeleteChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: ChannelArn, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: MessageId, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: ChimeBearer, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/messages/");
  uri.AddPathSegment(request.GetMessageId());
  return DeleteChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelMessageOutcomeCallable ChimeSDKMessagingClient::DeleteChannelMessageCallable(const DeleteChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DeleteChannelMessageAsync(const DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DeleteChannelMessageAsyncHelper(const DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelMessage(request), context);
}

DeleteChannelModeratorOutcome ChimeSDKMessagingClient::DeleteChannelModerator(const DeleteChannelModeratorRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChannelArn, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelModeratorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChannelModeratorArn, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelModeratorArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChimeBearer, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/moderators/");
  uri.AddPathSegment(request.GetChannelModeratorArn());
  return DeleteChannelModeratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelModeratorOutcomeCallable ChimeSDKMessagingClient::DeleteChannelModeratorCallable(const DeleteChannelModeratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelModeratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelModerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DeleteChannelModeratorAsync(const DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelModeratorAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DeleteChannelModeratorAsyncHelper(const DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelModerator(request), context);
}

DescribeChannelOutcome ChimeSDKMessagingClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelArn, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChimeBearer, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  return DescribeChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable ChimeSDKMessagingClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DescribeChannelAsyncHelper(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannel(request), context);
}

DescribeChannelBanOutcome ChimeSDKMessagingClient::DescribeChannelBan(const DescribeChannelBanRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: ChannelArn, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: MemberArn, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: ChimeBearer, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/bans/");
  uri.AddPathSegment(request.GetMemberArn());
  return DescribeChannelBanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelBanOutcomeCallable ChimeSDKMessagingClient::DescribeChannelBanCallable(const DescribeChannelBanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelBanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelBan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DescribeChannelBanAsync(const DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelBanAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DescribeChannelBanAsyncHelper(const DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelBan(request), context);
}

DescribeChannelFlowOutcome ChimeSDKMessagingClient::DescribeChannelFlow(const DescribeChannelFlowRequest& request) const
{
  if (!request.ChannelFlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelFlow", "Required field: ChannelFlowArn, is not set");
    return DescribeChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel-flows/");
  uri.AddPathSegment(request.GetChannelFlowArn());
  return DescribeChannelFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelFlowOutcomeCallable ChimeSDKMessagingClient::DescribeChannelFlowCallable(const DescribeChannelFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DescribeChannelFlowAsync(const DescribeChannelFlowRequest& request, const DescribeChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelFlowAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DescribeChannelFlowAsyncHelper(const DescribeChannelFlowRequest& request, const DescribeChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelFlow(request), context);
}

DescribeChannelMembershipOutcome ChimeSDKMessagingClient::DescribeChannelMembership(const DescribeChannelMembershipRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: ChannelArn, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: MemberArn, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: ChimeBearer, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/memberships/");
  uri.AddPathSegment(request.GetMemberArn());
  return DescribeChannelMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelMembershipOutcomeCallable ChimeSDKMessagingClient::DescribeChannelMembershipCallable(const DescribeChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DescribeChannelMembershipAsync(const DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DescribeChannelMembershipAsyncHelper(const DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelMembership(request), context);
}

DescribeChannelMembershipForAppInstanceUserOutcome ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUser(const DescribeChannelMembershipForAppInstanceUserRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: ChannelArn, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: ChimeBearer, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  ss.str("?scope=app-instance-user-membership");
  uri.SetQueryString(ss.str());
  return DescribeChannelMembershipForAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelMembershipForAppInstanceUserOutcomeCallable ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUserCallable(const DescribeChannelMembershipForAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelMembershipForAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelMembershipForAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUserAsync(const DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelMembershipForAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUserAsyncHelper(const DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelMembershipForAppInstanceUser(request), context);
}

DescribeChannelModeratedByAppInstanceUserOutcome ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUser(const DescribeChannelModeratedByAppInstanceUserRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: ChannelArn, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: ChimeBearer, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  ss.str("?scope=app-instance-user-moderated-channel");
  uri.SetQueryString(ss.str());
  return DescribeChannelModeratedByAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelModeratedByAppInstanceUserOutcomeCallable ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUserCallable(const DescribeChannelModeratedByAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelModeratedByAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelModeratedByAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUserAsync(const DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelModeratedByAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUserAsyncHelper(const DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelModeratedByAppInstanceUser(request), context);
}

DescribeChannelModeratorOutcome ChimeSDKMessagingClient::DescribeChannelModerator(const DescribeChannelModeratorRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChannelArn, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelModeratorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChannelModeratorArn, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelModeratorArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChimeBearer, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/moderators/");
  uri.AddPathSegment(request.GetChannelModeratorArn());
  return DescribeChannelModeratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelModeratorOutcomeCallable ChimeSDKMessagingClient::DescribeChannelModeratorCallable(const DescribeChannelModeratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelModeratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelModerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DescribeChannelModeratorAsync(const DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelModeratorAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DescribeChannelModeratorAsyncHelper(const DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelModerator(request), context);
}

DisassociateChannelFlowOutcome ChimeSDKMessagingClient::DisassociateChannelFlow(const DisassociateChannelFlowRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateChannelFlow", "Required field: ChannelArn, is not set");
    return DisassociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelFlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateChannelFlow", "Required field: ChannelFlowArn, is not set");
    return DisassociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateChannelFlow", "Required field: ChimeBearer, is not set");
    return DisassociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/channel-flow/");
  uri.AddPathSegment(request.GetChannelFlowArn());
  return DisassociateChannelFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateChannelFlowOutcomeCallable ChimeSDKMessagingClient::DisassociateChannelFlowCallable(const DisassociateChannelFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateChannelFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateChannelFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::DisassociateChannelFlowAsync(const DisassociateChannelFlowRequest& request, const DisassociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateChannelFlowAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::DisassociateChannelFlowAsyncHelper(const DisassociateChannelFlowRequest& request, const DisassociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateChannelFlow(request), context);
}

GetChannelMembershipPreferencesOutcome ChimeSDKMessagingClient::GetChannelMembershipPreferences(const GetChannelMembershipPreferencesRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMembershipPreferences", "Required field: ChannelArn, is not set");
    return GetChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMembershipPreferences", "Required field: MemberArn, is not set");
    return GetChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMembershipPreferences", "Required field: ChimeBearer, is not set");
    return GetChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/memberships/");
  uri.AddPathSegment(request.GetMemberArn());
  uri.AddPathSegments("/preferences");
  return GetChannelMembershipPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelMembershipPreferencesOutcomeCallable ChimeSDKMessagingClient::GetChannelMembershipPreferencesCallable(const GetChannelMembershipPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelMembershipPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelMembershipPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::GetChannelMembershipPreferencesAsync(const GetChannelMembershipPreferencesRequest& request, const GetChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelMembershipPreferencesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::GetChannelMembershipPreferencesAsyncHelper(const GetChannelMembershipPreferencesRequest& request, const GetChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannelMembershipPreferences(request), context);
}

GetChannelMessageOutcome ChimeSDKMessagingClient::GetChannelMessage(const GetChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: ChannelArn, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: MessageId, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: ChimeBearer, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/messages/");
  uri.AddPathSegment(request.GetMessageId());
  return GetChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelMessageOutcomeCallable ChimeSDKMessagingClient::GetChannelMessageCallable(const GetChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::GetChannelMessageAsync(const GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::GetChannelMessageAsyncHelper(const GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannelMessage(request), context);
}

GetChannelMessageStatusOutcome ChimeSDKMessagingClient::GetChannelMessageStatus(const GetChannelMessageStatusRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessageStatus", "Required field: ChannelArn, is not set");
    return GetChannelMessageStatusOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessageStatus", "Required field: MessageId, is not set");
    return GetChannelMessageStatusOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessageStatus", "Required field: ChimeBearer, is not set");
    return GetChannelMessageStatusOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/messages/");
  uri.AddPathSegment(request.GetMessageId());
  ss.str("?scope=message-status");
  uri.SetQueryString(ss.str());
  return GetChannelMessageStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelMessageStatusOutcomeCallable ChimeSDKMessagingClient::GetChannelMessageStatusCallable(const GetChannelMessageStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelMessageStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelMessageStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::GetChannelMessageStatusAsync(const GetChannelMessageStatusRequest& request, const GetChannelMessageStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelMessageStatusAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::GetChannelMessageStatusAsyncHelper(const GetChannelMessageStatusRequest& request, const GetChannelMessageStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannelMessageStatus(request), context);
}

GetMessagingSessionEndpointOutcome ChimeSDKMessagingClient::GetMessagingSessionEndpoint(const GetMessagingSessionEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/endpoints/messaging-session");
  return GetMessagingSessionEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMessagingSessionEndpointOutcomeCallable ChimeSDKMessagingClient::GetMessagingSessionEndpointCallable(const GetMessagingSessionEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMessagingSessionEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMessagingSessionEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::GetMessagingSessionEndpointAsync(const GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMessagingSessionEndpointAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::GetMessagingSessionEndpointAsyncHelper(const GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMessagingSessionEndpoint(request), context);
}

ListChannelBansOutcome ChimeSDKMessagingClient::ListChannelBans(const ListChannelBansRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelBans", "Required field: ChannelArn, is not set");
    return ListChannelBansOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelBans", "Required field: ChimeBearer, is not set");
    return ListChannelBansOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/bans");
  return ListChannelBansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelBansOutcomeCallable ChimeSDKMessagingClient::ListChannelBansCallable(const ListChannelBansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelBansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelBans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelBansAsync(const ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelBansAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelBansAsyncHelper(const ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelBans(request), context);
}

ListChannelFlowsOutcome ChimeSDKMessagingClient::ListChannelFlows(const ListChannelFlowsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelFlows", "Required field: AppInstanceArn, is not set");
    return ListChannelFlowsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel-flows");
  return ListChannelFlowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelFlowsOutcomeCallable ChimeSDKMessagingClient::ListChannelFlowsCallable(const ListChannelFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelFlowsAsync(const ListChannelFlowsRequest& request, const ListChannelFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelFlowsAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelFlowsAsyncHelper(const ListChannelFlowsRequest& request, const ListChannelFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelFlows(request), context);
}

ListChannelMembershipsOutcome ChimeSDKMessagingClient::ListChannelMemberships(const ListChannelMembershipsRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMemberships", "Required field: ChannelArn, is not set");
    return ListChannelMembershipsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMemberships", "Required field: ChimeBearer, is not set");
    return ListChannelMembershipsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/memberships");
  return ListChannelMembershipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelMembershipsOutcomeCallable ChimeSDKMessagingClient::ListChannelMembershipsCallable(const ListChannelMembershipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelMembershipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelMemberships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelMembershipsAsync(const ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelMembershipsAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelMembershipsAsyncHelper(const ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelMemberships(request), context);
}

ListChannelMembershipsForAppInstanceUserOutcome ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUser(const ListChannelMembershipsForAppInstanceUserRequest& request) const
{
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMembershipsForAppInstanceUser", "Required field: ChimeBearer, is not set");
    return ListChannelMembershipsForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels");
  ss.str("?scope=app-instance-user-memberships");
  uri.SetQueryString(ss.str());
  return ListChannelMembershipsForAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelMembershipsForAppInstanceUserOutcomeCallable ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUserCallable(const ListChannelMembershipsForAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelMembershipsForAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelMembershipsForAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUserAsync(const ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelMembershipsForAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUserAsyncHelper(const ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelMembershipsForAppInstanceUser(request), context);
}

ListChannelMessagesOutcome ChimeSDKMessagingClient::ListChannelMessages(const ListChannelMessagesRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMessages", "Required field: ChannelArn, is not set");
    return ListChannelMessagesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMessages", "Required field: ChimeBearer, is not set");
    return ListChannelMessagesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/messages");
  return ListChannelMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelMessagesOutcomeCallable ChimeSDKMessagingClient::ListChannelMessagesCallable(const ListChannelMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelMessagesAsync(const ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelMessagesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelMessagesAsyncHelper(const ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelMessages(request), context);
}

ListChannelModeratorsOutcome ChimeSDKMessagingClient::ListChannelModerators(const ListChannelModeratorsRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelModerators", "Required field: ChannelArn, is not set");
    return ListChannelModeratorsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelModerators", "Required field: ChimeBearer, is not set");
    return ListChannelModeratorsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/moderators");
  return ListChannelModeratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelModeratorsOutcomeCallable ChimeSDKMessagingClient::ListChannelModeratorsCallable(const ListChannelModeratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelModeratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelModerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelModeratorsAsync(const ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelModeratorsAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelModeratorsAsyncHelper(const ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelModerators(request), context);
}

ListChannelsOutcome ChimeSDKMessagingClient::ListChannels(const ListChannelsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: AppInstanceArn, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: ChimeBearer, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable ChimeSDKMessagingClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelsAsyncHelper(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannels(request), context);
}

ListChannelsAssociatedWithChannelFlowOutcome ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlow(const ListChannelsAssociatedWithChannelFlowRequest& request) const
{
  if (!request.ChannelFlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelsAssociatedWithChannelFlow", "Required field: ChannelFlowArn, is not set");
    return ListChannelsAssociatedWithChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels");
  ss.str("?scope=channel-flow-associations");
  uri.SetQueryString(ss.str());
  return ListChannelsAssociatedWithChannelFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsAssociatedWithChannelFlowOutcomeCallable ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlowCallable(const ListChannelsAssociatedWithChannelFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsAssociatedWithChannelFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelsAssociatedWithChannelFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlowAsync(const ListChannelsAssociatedWithChannelFlowRequest& request, const ListChannelsAssociatedWithChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAssociatedWithChannelFlowAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlowAsyncHelper(const ListChannelsAssociatedWithChannelFlowRequest& request, const ListChannelsAssociatedWithChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelsAssociatedWithChannelFlow(request), context);
}

ListChannelsModeratedByAppInstanceUserOutcome ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUser(const ListChannelsModeratedByAppInstanceUserRequest& request) const
{
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelsModeratedByAppInstanceUser", "Required field: ChimeBearer, is not set");
    return ListChannelsModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels");
  ss.str("?scope=app-instance-user-moderated-channels");
  uri.SetQueryString(ss.str());
  return ListChannelsModeratedByAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsModeratedByAppInstanceUserOutcomeCallable ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUserCallable(const ListChannelsModeratedByAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsModeratedByAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelsModeratedByAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUserAsync(const ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsModeratedByAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUserAsyncHelper(const ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelsModeratedByAppInstanceUser(request), context);
}

ListTagsForResourceOutcome ChimeSDKMessagingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ChimeSDKMessagingClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutChannelMembershipPreferencesOutcome ChimeSDKMessagingClient::PutChannelMembershipPreferences(const PutChannelMembershipPreferencesRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelMembershipPreferences", "Required field: ChannelArn, is not set");
    return PutChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelMembershipPreferences", "Required field: MemberArn, is not set");
    return PutChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelMembershipPreferences", "Required field: ChimeBearer, is not set");
    return PutChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/memberships/");
  uri.AddPathSegment(request.GetMemberArn());
  uri.AddPathSegments("/preferences");
  return PutChannelMembershipPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutChannelMembershipPreferencesOutcomeCallable ChimeSDKMessagingClient::PutChannelMembershipPreferencesCallable(const PutChannelMembershipPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutChannelMembershipPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutChannelMembershipPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::PutChannelMembershipPreferencesAsync(const PutChannelMembershipPreferencesRequest& request, const PutChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutChannelMembershipPreferencesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::PutChannelMembershipPreferencesAsyncHelper(const PutChannelMembershipPreferencesRequest& request, const PutChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutChannelMembershipPreferences(request), context);
}

RedactChannelMessageOutcome ChimeSDKMessagingClient::RedactChannelMessage(const RedactChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: ChannelArn, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: MessageId, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: ChimeBearer, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/messages/");
  uri.AddPathSegment(request.GetMessageId());
  ss.str("?operation=redact");
  uri.SetQueryString(ss.str());
  return RedactChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RedactChannelMessageOutcomeCallable ChimeSDKMessagingClient::RedactChannelMessageCallable(const RedactChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RedactChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RedactChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::RedactChannelMessageAsync(const RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RedactChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::RedactChannelMessageAsyncHelper(const RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RedactChannelMessage(request), context);
}

SearchChannelsOutcome ChimeSDKMessagingClient::SearchChannels(const SearchChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/channels");
  ss.str("?operation=search");
  uri.SetQueryString(ss.str());
  return SearchChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchChannelsOutcomeCallable ChimeSDKMessagingClient::SearchChannelsCallable(const SearchChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::SearchChannelsAsync(const SearchChannelsRequest& request, const SearchChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchChannelsAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::SearchChannelsAsyncHelper(const SearchChannelsRequest& request, const SearchChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchChannels(request), context);
}

SendChannelMessageOutcome ChimeSDKMessagingClient::SendChannelMessage(const SendChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendChannelMessage", "Required field: ChannelArn, is not set");
    return SendChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendChannelMessage", "Required field: ChimeBearer, is not set");
    return SendChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/messages");
  return SendChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendChannelMessageOutcomeCallable ChimeSDKMessagingClient::SendChannelMessageCallable(const SendChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::SendChannelMessageAsync(const SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::SendChannelMessageAsyncHelper(const SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendChannelMessage(request), context);
}

TagResourceOutcome ChimeSDKMessagingClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=tag-resource");
  uri.SetQueryString(ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ChimeSDKMessagingClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ChimeSDKMessagingClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=untag-resource");
  uri.SetQueryString(ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ChimeSDKMessagingClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateChannelOutcome ChimeSDKMessagingClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelArn, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChimeBearer, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable ChimeSDKMessagingClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::UpdateChannelAsyncHelper(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannel(request), context);
}

UpdateChannelFlowOutcome ChimeSDKMessagingClient::UpdateChannelFlow(const UpdateChannelFlowRequest& request) const
{
  if (!request.ChannelFlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelFlow", "Required field: ChannelFlowArn, is not set");
    return UpdateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel-flows/");
  uri.AddPathSegment(request.GetChannelFlowArn());
  return UpdateChannelFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelFlowOutcomeCallable ChimeSDKMessagingClient::UpdateChannelFlowCallable(const UpdateChannelFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannelFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::UpdateChannelFlowAsync(const UpdateChannelFlowRequest& request, const UpdateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelFlowAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::UpdateChannelFlowAsyncHelper(const UpdateChannelFlowRequest& request, const UpdateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannelFlow(request), context);
}

UpdateChannelMessageOutcome ChimeSDKMessagingClient::UpdateChannelMessage(const UpdateChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: ChannelArn, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: MessageId, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: ChimeBearer, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/messages/");
  uri.AddPathSegment(request.GetMessageId());
  return UpdateChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelMessageOutcomeCallable ChimeSDKMessagingClient::UpdateChannelMessageCallable(const UpdateChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::UpdateChannelMessageAsync(const UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::UpdateChannelMessageAsyncHelper(const UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannelMessage(request), context);
}

UpdateChannelReadMarkerOutcome ChimeSDKMessagingClient::UpdateChannelReadMarker(const UpdateChannelReadMarkerRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelReadMarker", "Required field: ChannelArn, is not set");
    return UpdateChannelReadMarkerOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelReadMarker", "Required field: ChimeBearer, is not set");
    return UpdateChannelReadMarkerOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelArn());
  uri.AddPathSegments("/readMarker");
  return UpdateChannelReadMarkerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelReadMarkerOutcomeCallable ChimeSDKMessagingClient::UpdateChannelReadMarkerCallable(const UpdateChannelReadMarkerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelReadMarkerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannelReadMarker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMessagingClient::UpdateChannelReadMarkerAsync(const UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelReadMarkerAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMessagingClient::UpdateChannelReadMarkerAsyncHelper(const UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannelReadMarker(request), context);
}

