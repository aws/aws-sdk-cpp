﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-messaging/model/BatchCreateChannelMembershipResult.h>
#include <aws/chime-sdk-messaging/model/ChannelFlowCallbackResult.h>
#include <aws/chime-sdk-messaging/model/CreateChannelResult.h>
#include <aws/chime-sdk-messaging/model/CreateChannelBanResult.h>
#include <aws/chime-sdk-messaging/model/CreateChannelFlowResult.h>
#include <aws/chime-sdk-messaging/model/CreateChannelMembershipResult.h>
#include <aws/chime-sdk-messaging/model/CreateChannelModeratorResult.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelResult.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelBanResult.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelFlowResult.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelMembershipResult.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelMembershipForAppInstanceUserResult.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelModeratedByAppInstanceUserResult.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelModeratorResult.h>
#include <aws/chime-sdk-messaging/model/GetChannelMembershipPreferencesResult.h>
#include <aws/chime-sdk-messaging/model/GetChannelMessageResult.h>
#include <aws/chime-sdk-messaging/model/GetChannelMessageStatusResult.h>
#include <aws/chime-sdk-messaging/model/GetMessagingSessionEndpointResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelBansResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelFlowsResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsForAppInstanceUserResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelMessagesResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelModeratorsResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelsResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowResult.h>
#include <aws/chime-sdk-messaging/model/ListChannelsModeratedByAppInstanceUserResult.h>
#include <aws/chime-sdk-messaging/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-messaging/model/PutChannelMembershipPreferencesResult.h>
#include <aws/chime-sdk-messaging/model/RedactChannelMessageResult.h>
#include <aws/chime-sdk-messaging/model/SendChannelMessageResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelFlowResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelMessageResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelReadMarkerResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ChimeSDKMessaging
{

namespace Model
{
        class AssociateChannelFlowRequest;
        class BatchCreateChannelMembershipRequest;
        class ChannelFlowCallbackRequest;
        class CreateChannelRequest;
        class CreateChannelBanRequest;
        class CreateChannelFlowRequest;
        class CreateChannelMembershipRequest;
        class CreateChannelModeratorRequest;
        class DeleteChannelRequest;
        class DeleteChannelBanRequest;
        class DeleteChannelFlowRequest;
        class DeleteChannelMembershipRequest;
        class DeleteChannelMessageRequest;
        class DeleteChannelModeratorRequest;
        class DescribeChannelRequest;
        class DescribeChannelBanRequest;
        class DescribeChannelFlowRequest;
        class DescribeChannelMembershipRequest;
        class DescribeChannelMembershipForAppInstanceUserRequest;
        class DescribeChannelModeratedByAppInstanceUserRequest;
        class DescribeChannelModeratorRequest;
        class DisassociateChannelFlowRequest;
        class GetChannelMembershipPreferencesRequest;
        class GetChannelMessageRequest;
        class GetChannelMessageStatusRequest;
        class GetMessagingSessionEndpointRequest;
        class ListChannelBansRequest;
        class ListChannelFlowsRequest;
        class ListChannelMembershipsRequest;
        class ListChannelMembershipsForAppInstanceUserRequest;
        class ListChannelMessagesRequest;
        class ListChannelModeratorsRequest;
        class ListChannelsRequest;
        class ListChannelsAssociatedWithChannelFlowRequest;
        class ListChannelsModeratedByAppInstanceUserRequest;
        class ListTagsForResourceRequest;
        class PutChannelMembershipPreferencesRequest;
        class RedactChannelMessageRequest;
        class SendChannelMessageRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateChannelRequest;
        class UpdateChannelFlowRequest;
        class UpdateChannelMessageRequest;
        class UpdateChannelReadMarkerRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> AssociateChannelFlowOutcome;
        typedef Aws::Utils::Outcome<BatchCreateChannelMembershipResult, ChimeSDKMessagingError> BatchCreateChannelMembershipOutcome;
        typedef Aws::Utils::Outcome<ChannelFlowCallbackResult, ChimeSDKMessagingError> ChannelFlowCallbackOutcome;
        typedef Aws::Utils::Outcome<CreateChannelResult, ChimeSDKMessagingError> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateChannelBanResult, ChimeSDKMessagingError> CreateChannelBanOutcome;
        typedef Aws::Utils::Outcome<CreateChannelFlowResult, ChimeSDKMessagingError> CreateChannelFlowOutcome;
        typedef Aws::Utils::Outcome<CreateChannelMembershipResult, ChimeSDKMessagingError> CreateChannelMembershipOutcome;
        typedef Aws::Utils::Outcome<CreateChannelModeratorResult, ChimeSDKMessagingError> CreateChannelModeratorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> DeleteChannelBanOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> DeleteChannelFlowOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> DeleteChannelMembershipOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> DeleteChannelMessageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> DeleteChannelModeratorOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelResult, ChimeSDKMessagingError> DescribeChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelBanResult, ChimeSDKMessagingError> DescribeChannelBanOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelFlowResult, ChimeSDKMessagingError> DescribeChannelFlowOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelMembershipResult, ChimeSDKMessagingError> DescribeChannelMembershipOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelMembershipForAppInstanceUserResult, ChimeSDKMessagingError> DescribeChannelMembershipForAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelModeratedByAppInstanceUserResult, ChimeSDKMessagingError> DescribeChannelModeratedByAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelModeratorResult, ChimeSDKMessagingError> DescribeChannelModeratorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> DisassociateChannelFlowOutcome;
        typedef Aws::Utils::Outcome<GetChannelMembershipPreferencesResult, ChimeSDKMessagingError> GetChannelMembershipPreferencesOutcome;
        typedef Aws::Utils::Outcome<GetChannelMessageResult, ChimeSDKMessagingError> GetChannelMessageOutcome;
        typedef Aws::Utils::Outcome<GetChannelMessageStatusResult, ChimeSDKMessagingError> GetChannelMessageStatusOutcome;
        typedef Aws::Utils::Outcome<GetMessagingSessionEndpointResult, ChimeSDKMessagingError> GetMessagingSessionEndpointOutcome;
        typedef Aws::Utils::Outcome<ListChannelBansResult, ChimeSDKMessagingError> ListChannelBansOutcome;
        typedef Aws::Utils::Outcome<ListChannelFlowsResult, ChimeSDKMessagingError> ListChannelFlowsOutcome;
        typedef Aws::Utils::Outcome<ListChannelMembershipsResult, ChimeSDKMessagingError> ListChannelMembershipsOutcome;
        typedef Aws::Utils::Outcome<ListChannelMembershipsForAppInstanceUserResult, ChimeSDKMessagingError> ListChannelMembershipsForAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<ListChannelMessagesResult, ChimeSDKMessagingError> ListChannelMessagesOutcome;
        typedef Aws::Utils::Outcome<ListChannelModeratorsResult, ChimeSDKMessagingError> ListChannelModeratorsOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, ChimeSDKMessagingError> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListChannelsAssociatedWithChannelFlowResult, ChimeSDKMessagingError> ListChannelsAssociatedWithChannelFlowOutcome;
        typedef Aws::Utils::Outcome<ListChannelsModeratedByAppInstanceUserResult, ChimeSDKMessagingError> ListChannelsModeratedByAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeSDKMessagingError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutChannelMembershipPreferencesResult, ChimeSDKMessagingError> PutChannelMembershipPreferencesOutcome;
        typedef Aws::Utils::Outcome<RedactChannelMessageResult, ChimeSDKMessagingError> RedactChannelMessageOutcome;
        typedef Aws::Utils::Outcome<SendChannelMessageResult, ChimeSDKMessagingError> SendChannelMessageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelResult, ChimeSDKMessagingError> UpdateChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelFlowResult, ChimeSDKMessagingError> UpdateChannelFlowOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelMessageResult, ChimeSDKMessagingError> UpdateChannelMessageOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelReadMarkerResult, ChimeSDKMessagingError> UpdateChannelReadMarkerOutcome;

        typedef std::future<AssociateChannelFlowOutcome> AssociateChannelFlowOutcomeCallable;
        typedef std::future<BatchCreateChannelMembershipOutcome> BatchCreateChannelMembershipOutcomeCallable;
        typedef std::future<ChannelFlowCallbackOutcome> ChannelFlowCallbackOutcomeCallable;
        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateChannelBanOutcome> CreateChannelBanOutcomeCallable;
        typedef std::future<CreateChannelFlowOutcome> CreateChannelFlowOutcomeCallable;
        typedef std::future<CreateChannelMembershipOutcome> CreateChannelMembershipOutcomeCallable;
        typedef std::future<CreateChannelModeratorOutcome> CreateChannelModeratorOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeleteChannelBanOutcome> DeleteChannelBanOutcomeCallable;
        typedef std::future<DeleteChannelFlowOutcome> DeleteChannelFlowOutcomeCallable;
        typedef std::future<DeleteChannelMembershipOutcome> DeleteChannelMembershipOutcomeCallable;
        typedef std::future<DeleteChannelMessageOutcome> DeleteChannelMessageOutcomeCallable;
        typedef std::future<DeleteChannelModeratorOutcome> DeleteChannelModeratorOutcomeCallable;
        typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
        typedef std::future<DescribeChannelBanOutcome> DescribeChannelBanOutcomeCallable;
        typedef std::future<DescribeChannelFlowOutcome> DescribeChannelFlowOutcomeCallable;
        typedef std::future<DescribeChannelMembershipOutcome> DescribeChannelMembershipOutcomeCallable;
        typedef std::future<DescribeChannelMembershipForAppInstanceUserOutcome> DescribeChannelMembershipForAppInstanceUserOutcomeCallable;
        typedef std::future<DescribeChannelModeratedByAppInstanceUserOutcome> DescribeChannelModeratedByAppInstanceUserOutcomeCallable;
        typedef std::future<DescribeChannelModeratorOutcome> DescribeChannelModeratorOutcomeCallable;
        typedef std::future<DisassociateChannelFlowOutcome> DisassociateChannelFlowOutcomeCallable;
        typedef std::future<GetChannelMembershipPreferencesOutcome> GetChannelMembershipPreferencesOutcomeCallable;
        typedef std::future<GetChannelMessageOutcome> GetChannelMessageOutcomeCallable;
        typedef std::future<GetChannelMessageStatusOutcome> GetChannelMessageStatusOutcomeCallable;
        typedef std::future<GetMessagingSessionEndpointOutcome> GetMessagingSessionEndpointOutcomeCallable;
        typedef std::future<ListChannelBansOutcome> ListChannelBansOutcomeCallable;
        typedef std::future<ListChannelFlowsOutcome> ListChannelFlowsOutcomeCallable;
        typedef std::future<ListChannelMembershipsOutcome> ListChannelMembershipsOutcomeCallable;
        typedef std::future<ListChannelMembershipsForAppInstanceUserOutcome> ListChannelMembershipsForAppInstanceUserOutcomeCallable;
        typedef std::future<ListChannelMessagesOutcome> ListChannelMessagesOutcomeCallable;
        typedef std::future<ListChannelModeratorsOutcome> ListChannelModeratorsOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListChannelsAssociatedWithChannelFlowOutcome> ListChannelsAssociatedWithChannelFlowOutcomeCallable;
        typedef std::future<ListChannelsModeratedByAppInstanceUserOutcome> ListChannelsModeratedByAppInstanceUserOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutChannelMembershipPreferencesOutcome> PutChannelMembershipPreferencesOutcomeCallable;
        typedef std::future<RedactChannelMessageOutcome> RedactChannelMessageOutcomeCallable;
        typedef std::future<SendChannelMessageOutcome> SendChannelMessageOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
        typedef std::future<UpdateChannelFlowOutcome> UpdateChannelFlowOutcomeCallable;
        typedef std::future<UpdateChannelMessageOutcome> UpdateChannelMessageOutcomeCallable;
        typedef std::future<UpdateChannelReadMarkerOutcome> UpdateChannelReadMarkerOutcomeCallable;
} // namespace Model

  class ChimeSDKMessagingClient;

    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::AssociateChannelFlowRequest&, const Model::AssociateChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::BatchCreateChannelMembershipRequest&, const Model::BatchCreateChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateChannelMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ChannelFlowCallbackRequest&, const Model::ChannelFlowCallbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChannelFlowCallbackResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::CreateChannelBanRequest&, const Model::CreateChannelBanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelBanResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::CreateChannelFlowRequest&, const Model::CreateChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::CreateChannelMembershipRequest&, const Model::CreateChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::CreateChannelModeratorRequest&, const Model::CreateChannelModeratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelModeratorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DeleteChannelBanRequest&, const Model::DeleteChannelBanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelBanResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DeleteChannelFlowRequest&, const Model::DeleteChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DeleteChannelMembershipRequest&, const Model::DeleteChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DeleteChannelMessageRequest&, const Model::DeleteChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DeleteChannelModeratorRequest&, const Model::DeleteChannelModeratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelModeratorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DescribeChannelBanRequest&, const Model::DescribeChannelBanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelBanResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DescribeChannelFlowRequest&, const Model::DescribeChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DescribeChannelMembershipRequest&, const Model::DescribeChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DescribeChannelMembershipForAppInstanceUserRequest&, const Model::DescribeChannelMembershipForAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DescribeChannelModeratedByAppInstanceUserRequest&, const Model::DescribeChannelModeratedByAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DescribeChannelModeratorRequest&, const Model::DescribeChannelModeratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelModeratorResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::DisassociateChannelFlowRequest&, const Model::DisassociateChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::GetChannelMembershipPreferencesRequest&, const Model::GetChannelMembershipPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelMembershipPreferencesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::GetChannelMessageRequest&, const Model::GetChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::GetChannelMessageStatusRequest&, const Model::GetChannelMessageStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelMessageStatusResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::GetMessagingSessionEndpointRequest&, const Model::GetMessagingSessionEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMessagingSessionEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelBansRequest&, const Model::ListChannelBansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelBansResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelFlowsRequest&, const Model::ListChannelFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelFlowsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelMembershipsRequest&, const Model::ListChannelMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelMembershipsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelMembershipsForAppInstanceUserRequest&, const Model::ListChannelMembershipsForAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelMembershipsForAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelMessagesRequest&, const Model::ListChannelMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelMessagesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelModeratorsRequest&, const Model::ListChannelModeratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelModeratorsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelsAssociatedWithChannelFlowRequest&, const Model::ListChannelsAssociatedWithChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsAssociatedWithChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListChannelsModeratedByAppInstanceUserRequest&, const Model::ListChannelsModeratedByAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsModeratedByAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::PutChannelMembershipPreferencesRequest&, const Model::PutChannelMembershipPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutChannelMembershipPreferencesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::RedactChannelMessageRequest&, const Model::RedactChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RedactChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::SendChannelMessageRequest&, const Model::SendChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelFlowRequest&, const Model::UpdateChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelMessageRequest&, const Model::UpdateChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelReadMarkerRequest&, const Model::UpdateChannelReadMarkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelReadMarkerResponseReceivedHandler;

  /**
   * <p>The Amazon Chime SDK Messaging APIs in this section allow software developers
   * to send and receive messages in custom messaging applications. These APIs depend
   * on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
   * information about the messaging APIs, see <a
   * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging">Amazon
   * Chime SDK messaging</a> </p>
   */
  class AWS_CHIMESDKMESSAGING_API ChimeSDKMessagingClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMessagingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ChimeSDKMessagingClient();


        /**
         * <p>Associates a channel flow with a channel. Once associated, all messages to
         * that channel go through channel flow processors. To stop processing, use the
         * <code>DisassociateChannelFlow</code> API.</p>  <p>Only administrators or
         * channel moderators can associate a channel flow. The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/AssociateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateChannelFlowOutcome AssociateChannelFlow(const Model::AssociateChannelFlowRequest& request) const;

        /**
         * <p>Associates a channel flow with a channel. Once associated, all messages to
         * that channel go through channel flow processors. To stop processing, use the
         * <code>DisassociateChannelFlow</code> API.</p>  <p>Only administrators or
         * channel moderators can associate a channel flow. The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/AssociateChannelFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateChannelFlowOutcomeCallable AssociateChannelFlowCallable(const Model::AssociateChannelFlowRequest& request) const;

        /**
         * <p>Associates a channel flow with a channel. Once associated, all messages to
         * that channel go through channel flow processors. To stop processing, use the
         * <code>DisassociateChannelFlow</code> API.</p>  <p>Only administrators or
         * channel moderators can associate a channel flow. The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/AssociateChannelFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateChannelFlowAsync(const Model::AssociateChannelFlowRequest& request, const AssociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a specified number of users to a channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/BatchCreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateChannelMembershipOutcome BatchCreateChannelMembership(const Model::BatchCreateChannelMembershipRequest& request) const;

        /**
         * <p>Adds a specified number of users to a channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/BatchCreateChannelMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateChannelMembershipOutcomeCallable BatchCreateChannelMembershipCallable(const Model::BatchCreateChannelMembershipRequest& request) const;

        /**
         * <p>Adds a specified number of users to a channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/BatchCreateChannelMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateChannelMembershipAsync(const Model::BatchCreateChannelMembershipRequest& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Calls back Chime SDK Messaging with a processing response message. This
         * should be invoked from the processor Lambda. This is a developer API.</p> <p>You
         * can return one of the following processing responses:</p> <ul> <li> <p>Update
         * message content or metadata</p> </li> <li> <p>Deny a message</p> </li> <li>
         * <p>Make no changes to the message</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelFlowCallback">AWS
         * API Reference</a></p>
         */
        virtual Model::ChannelFlowCallbackOutcome ChannelFlowCallback(const Model::ChannelFlowCallbackRequest& request) const;

        /**
         * <p>Calls back Chime SDK Messaging with a processing response message. This
         * should be invoked from the processor Lambda. This is a developer API.</p> <p>You
         * can return one of the following processing responses:</p> <ul> <li> <p>Update
         * message content or metadata</p> </li> <li> <p>Deny a message</p> </li> <li>
         * <p>Make no changes to the message</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelFlowCallback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChannelFlowCallbackOutcomeCallable ChannelFlowCallbackCallable(const Model::ChannelFlowCallbackRequest& request) const;

        /**
         * <p>Calls back Chime SDK Messaging with a processing response message. This
         * should be invoked from the processor Lambda. This is a developer API.</p> <p>You
         * can return one of the following processing responses:</p> <ul> <li> <p>Update
         * message content or metadata</p> </li> <li> <p>Deny a message</p> </li> <li>
         * <p>Make no changes to the message</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelFlowCallback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChannelFlowCallbackAsync(const Model::ChannelFlowCallbackRequest& request, const ChannelFlowCallbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels.</p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelBanOutcome CreateChannelBan(const Model::CreateChannelBanRequest& request) const;

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels.</p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelBan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelBanOutcomeCallable CreateChannelBanCallable(const Model::CreateChannelBanRequest& request) const;

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels.</p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelBan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelBanAsync(const Model::CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a channel flow, a container for processors. Processors are AWS Lambda
         * functions that perform actions on chat messages, such as stripping out
         * profanity. You can associate channel flows with channels, and the processors in
         * the channel flow then take action on all messages sent to that channel. This is
         * a developer API.</p> <p>Channel flows process the following items:</p> <ol> <li>
         * <p>New and updated messages</p> </li> <li> <p>Persistent and non-persistent
         * messages</p> </li> <li> <p>The Standard message type</p> </li> </ol> 
         * <p>Channel flows don't process Control or System messages. For more information
         * about the message types provided by Chime SDK Messaging, refer to <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/using-the-messaging-sdk.html#msg-types">Message
         * types</a> in the <i>Amazon Chime developer guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelFlowOutcome CreateChannelFlow(const Model::CreateChannelFlowRequest& request) const;

        /**
         * <p>Creates a channel flow, a container for processors. Processors are AWS Lambda
         * functions that perform actions on chat messages, such as stripping out
         * profanity. You can associate channel flows with channels, and the processors in
         * the channel flow then take action on all messages sent to that channel. This is
         * a developer API.</p> <p>Channel flows process the following items:</p> <ol> <li>
         * <p>New and updated messages</p> </li> <li> <p>Persistent and non-persistent
         * messages</p> </li> <li> <p>The Standard message type</p> </li> </ol> 
         * <p>Channel flows don't process Control or System messages. For more information
         * about the message types provided by Chime SDK Messaging, refer to <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/using-the-messaging-sdk.html#msg-types">Message
         * types</a> in the <i>Amazon Chime developer guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelFlowOutcomeCallable CreateChannelFlowCallable(const Model::CreateChannelFlowRequest& request) const;

        /**
         * <p>Creates a channel flow, a container for processors. Processors are AWS Lambda
         * functions that perform actions on chat messages, such as stripping out
         * profanity. You can associate channel flows with channels, and the processors in
         * the channel flow then take action on all messages sent to that channel. This is
         * a developer API.</p> <p>Channel flows process the following items:</p> <ol> <li>
         * <p>New and updated messages</p> </li> <li> <p>Persistent and non-persistent
         * messages</p> </li> <li> <p>The Standard message type</p> </li> </ol> 
         * <p>Channel flows don't process Control or System messages. For more information
         * about the message types provided by Chime SDK Messaging, refer to <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/using-the-messaging-sdk.html#msg-types">Message
         * types</a> in the <i>Amazon Chime developer guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelFlowAsync(const Model::CreateChannelFlowRequest& request, const CreateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a user to a channel. The <code>InvitedBy</code> field in
         * <code>ChannelMembership</code> is derived from the request header. A channel
         * member can:</p> <ul> <li> <p>List messages</p> </li> <li> <p>Send messages</p>
         * </li> <li> <p>Receive messages</p> </li> <li> <p>Edit their own messages</p>
         * </li> <li> <p>Leave the channel</p> </li> </ul> <p>Privacy settings impact this
         * action as follows:</p> <ul> <li> <p>Public Channels: You do not need to be a
         * member to list messages, but you must be a member to send messages.</p> </li>
         * <li> <p>Private Channels: You must be a member to list or send messages.</p>
         * </li> </ul>  <p>The <code>x-amz-chime-bearer</code> request header is
         * mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes the
         * API call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelMembershipOutcome CreateChannelMembership(const Model::CreateChannelMembershipRequest& request) const;

        /**
         * <p>Adds a user to a channel. The <code>InvitedBy</code> field in
         * <code>ChannelMembership</code> is derived from the request header. A channel
         * member can:</p> <ul> <li> <p>List messages</p> </li> <li> <p>Send messages</p>
         * </li> <li> <p>Receive messages</p> </li> <li> <p>Edit their own messages</p>
         * </li> <li> <p>Leave the channel</p> </li> </ul> <p>Privacy settings impact this
         * action as follows:</p> <ul> <li> <p>Public Channels: You do not need to be a
         * member to list messages, but you must be a member to send messages.</p> </li>
         * <li> <p>Private Channels: You must be a member to list or send messages.</p>
         * </li> </ul>  <p>The <code>x-amz-chime-bearer</code> request header is
         * mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes the
         * API call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelMembershipOutcomeCallable CreateChannelMembershipCallable(const Model::CreateChannelMembershipRequest& request) const;

        /**
         * <p>Adds a user to a channel. The <code>InvitedBy</code> field in
         * <code>ChannelMembership</code> is derived from the request header. A channel
         * member can:</p> <ul> <li> <p>List messages</p> </li> <li> <p>Send messages</p>
         * </li> <li> <p>Receive messages</p> </li> <li> <p>Edit their own messages</p>
         * </li> <li> <p>Leave the channel</p> </li> </ul> <p>Privacy settings impact this
         * action as follows:</p> <ul> <li> <p>Public Channels: You do not need to be a
         * member to list messages, but you must be a member to send messages.</p> </li>
         * <li> <p>Private Channels: You must be a member to list or send messages.</p>
         * </li> </ul>  <p>The <code>x-amz-chime-bearer</code> request header is
         * mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes the
         * API call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelMembershipAsync(const Model::CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelModeratorOutcome CreateChannelModerator(const Model::CreateChannelModeratorRequest& request) const;

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelModerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelModeratorOutcomeCallable CreateChannelModeratorCallable(const Model::CreateChannelModeratorRequest& request) const;

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelModerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelModeratorAsync(const Model::CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a user from a channel's ban list.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelBanOutcome DeleteChannelBan(const Model::DeleteChannelBanRequest& request) const;

        /**
         * <p>Removes a user from a channel's ban list.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelBan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelBanOutcomeCallable DeleteChannelBanCallable(const Model::DeleteChannelBanRequest& request) const;

        /**
         * <p>Removes a user from a channel's ban list.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelBan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelBanAsync(const Model::DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel flow, an irreversible process. This is a developer API.</p>
         *  <p> This API works only when the channel flow is not associated with any
         * channel. To get a list of all channels that a channel flow is associated with,
         * use the <code>ListChannelsAssociatedWithChannelFlow</code> API. Use the
         * <code>DisassociateChannelFlow</code> API to disassociate a channel flow from all
         * channels. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelFlowOutcome DeleteChannelFlow(const Model::DeleteChannelFlowRequest& request) const;

        /**
         * <p>Deletes a channel flow, an irreversible process. This is a developer API.</p>
         *  <p> This API works only when the channel flow is not associated with any
         * channel. To get a list of all channels that a channel flow is associated with,
         * use the <code>ListChannelsAssociatedWithChannelFlow</code> API. Use the
         * <code>DisassociateChannelFlow</code> API to disassociate a channel flow from all
         * channels. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelFlowOutcomeCallable DeleteChannelFlowCallable(const Model::DeleteChannelFlowRequest& request) const;

        /**
         * <p>Deletes a channel flow, an irreversible process. This is a developer API.</p>
         *  <p> This API works only when the channel flow is not associated with any
         * channel. To get a list of all channels that a channel flow is associated with,
         * use the <code>ListChannelsAssociatedWithChannelFlow</code> API. Use the
         * <code>DisassociateChannelFlow</code> API to disassociate a channel flow from all
         * channels. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelFlowAsync(const Model::DeleteChannelFlowRequest& request, const DeleteChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member from a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMembershipOutcome DeleteChannelMembership(const Model::DeleteChannelMembershipRequest& request) const;

        /**
         * <p>Removes a member from a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelMembershipOutcomeCallable DeleteChannelMembershipCallable(const Model::DeleteChannelMembershipRequest& request) const;

        /**
         * <p>Removes a member from a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelMembershipAsync(const Model::DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMessageOutcome DeleteChannelMessage(const Model::DeleteChannelMessageRequest& request) const;

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelMessageOutcomeCallable DeleteChannelMessageCallable(const Model::DeleteChannelMessageRequest& request) const;

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelMessageAsync(const Model::DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel moderator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelModeratorOutcome DeleteChannelModerator(const Model::DeleteChannelModeratorRequest& request) const;

        /**
         * <p>Deletes a channel moderator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelModerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelModeratorOutcomeCallable DeleteChannelModeratorCallable(const Model::DeleteChannelModeratorRequest& request) const;

        /**
         * <p>Deletes a channel moderator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelModerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelModeratorAsync(const Model::DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a channel in an Amazon Chime
         * <code>AppInstance</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Returns the full details of a channel in an Amazon Chime
         * <code>AppInstance</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Returns the full details of a channel in an Amazon Chime
         * <code>AppInstance</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a channel ban.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelBanOutcome DescribeChannelBan(const Model::DescribeChannelBanRequest& request) const;

        /**
         * <p>Returns the full details of a channel ban.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelBan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelBanOutcomeCallable DescribeChannelBanCallable(const Model::DescribeChannelBanRequest& request) const;

        /**
         * <p>Returns the full details of a channel ban.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelBan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelBanAsync(const Model::DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a channel flow in an Amazon Chime
         * <code>AppInstance</code>. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelFlowOutcome DescribeChannelFlow(const Model::DescribeChannelFlowRequest& request) const;

        /**
         * <p>Returns the full details of a channel flow in an Amazon Chime
         * <code>AppInstance</code>. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelFlowOutcomeCallable DescribeChannelFlowCallable(const Model::DescribeChannelFlowRequest& request) const;

        /**
         * <p>Returns the full details of a channel flow in an Amazon Chime
         * <code>AppInstance</code>. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelFlowAsync(const Model::DescribeChannelFlowRequest& request, const DescribeChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a user's channel membership.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipOutcome DescribeChannelMembership(const Model::DescribeChannelMembershipRequest& request) const;

        /**
         * <p>Returns the full details of a user's channel membership.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelMembershipOutcomeCallable DescribeChannelMembershipCallable(const Model::DescribeChannelMembershipRequest& request) const;

        /**
         * <p>Returns the full details of a user's channel membership.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelMembershipAsync(const Model::DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the details of a channel based on the membership of the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipForAppInstanceUserOutcome DescribeChannelMembershipForAppInstanceUser(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request) const;

        /**
         * <p> Returns the details of a channel based on the membership of the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelMembershipForAppInstanceUserOutcomeCallable DescribeChannelMembershipForAppInstanceUserCallable(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request) const;

        /**
         * <p> Returns the details of a channel based on the membership of the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelMembershipForAppInstanceUserAsync(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratedByAppInstanceUserOutcome DescribeChannelModeratedByAppInstanceUser(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelModeratedByAppInstanceUserOutcomeCallable DescribeChannelModeratedByAppInstanceUserCallable(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelModeratedByAppInstanceUserAsync(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a single ChannelModerator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratorOutcome DescribeChannelModerator(const Model::DescribeChannelModeratorRequest& request) const;

        /**
         * <p>Returns the full details of a single ChannelModerator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelModeratorOutcomeCallable DescribeChannelModeratorCallable(const Model::DescribeChannelModeratorRequest& request) const;

        /**
         * <p>Returns the full details of a single ChannelModerator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelModeratorAsync(const Model::DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a channel flow from all its channels. Once disassociated, all
         * messages to that channel stop going through the channel flow processor.</p>
         *  <p>Only administrators or channel moderators can disassociate a channel
         * flow. The <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DisassociateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateChannelFlowOutcome DisassociateChannelFlow(const Model::DisassociateChannelFlowRequest& request) const;

        /**
         * <p>Disassociates a channel flow from all its channels. Once disassociated, all
         * messages to that channel stop going through the channel flow processor.</p>
         *  <p>Only administrators or channel moderators can disassociate a channel
         * flow. The <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DisassociateChannelFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateChannelFlowOutcomeCallable DisassociateChannelFlowCallable(const Model::DisassociateChannelFlowRequest& request) const;

        /**
         * <p>Disassociates a channel flow from all its channels. Once disassociated, all
         * messages to that channel stop going through the channel flow processor.</p>
         *  <p>Only administrators or channel moderators can disassociate a channel
         * flow. The <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DisassociateChannelFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateChannelFlowAsync(const Model::DisassociateChannelFlowRequest& request, const DisassociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the membership preferences of an <code>AppInstanceUser</code> for the
         * specified channel. The <code>AppInstanceUser</code> must be a member of the
         * channel. Only the <code>AppInstanceUser</code> who owns the membership can
         * retrieve preferences. Users in the <code>AppInstanceAdmin</code> and channel
         * moderator roles can't retrieve preferences for other users. Banned users can't
         * retrieve membership preferences for the channel from which they are
         * banned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMembershipPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMembershipPreferencesOutcome GetChannelMembershipPreferences(const Model::GetChannelMembershipPreferencesRequest& request) const;

        /**
         * <p>Gets the membership preferences of an <code>AppInstanceUser</code> for the
         * specified channel. The <code>AppInstanceUser</code> must be a member of the
         * channel. Only the <code>AppInstanceUser</code> who owns the membership can
         * retrieve preferences. Users in the <code>AppInstanceAdmin</code> and channel
         * moderator roles can't retrieve preferences for other users. Banned users can't
         * retrieve membership preferences for the channel from which they are
         * banned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMembershipPreferences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelMembershipPreferencesOutcomeCallable GetChannelMembershipPreferencesCallable(const Model::GetChannelMembershipPreferencesRequest& request) const;

        /**
         * <p>Gets the membership preferences of an <code>AppInstanceUser</code> for the
         * specified channel. The <code>AppInstanceUser</code> must be a member of the
         * channel. Only the <code>AppInstanceUser</code> who owns the membership can
         * retrieve preferences. Users in the <code>AppInstanceAdmin</code> and channel
         * moderator roles can't retrieve preferences for other users. Banned users can't
         * retrieve membership preferences for the channel from which they are
         * banned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMembershipPreferences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelMembershipPreferencesAsync(const Model::GetChannelMembershipPreferencesRequest& request, const GetChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the full details of a channel message.</p>  <p>The
         * x-amz-chime-bearer request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMessageOutcome GetChannelMessage(const Model::GetChannelMessageRequest& request) const;

        /**
         * <p>Gets the full details of a channel message.</p>  <p>The
         * x-amz-chime-bearer request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelMessageOutcomeCallable GetChannelMessageCallable(const Model::GetChannelMessageRequest& request) const;

        /**
         * <p>Gets the full details of a channel message.</p>  <p>The
         * x-amz-chime-bearer request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelMessageAsync(const Model::GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets message status for a specified <code>messageId</code>. Use this API to
         * determine the intermediate status of messages going through channel flow
         * processing. The API provides an alternative to retrieving message status if the
         * event was not received because a client wasn't connected to a websocket. </p>
         * <p>Messages can have any one of these statuses.</p> <dl> <dt>SENT</dt> <dd>
         * <p>Message processed successfully</p> </dd> <dt>PENDING</dt> <dd> <p>Ongoing
         * processing</p> </dd> <dt>FAILED</dt> <dd> <p>Processing failed</p> </dd>
         * <dt>DENIED</dt> <dd> <p>Messasge denied by the processor</p> </dd> </dl> 
         * <ul> <li> <p>This API does not return statuses for denied messages, because we
         * don't store them once the processor denies them. </p> </li> <li> <p>Only the
         * message sender can invoke this API.</p> </li> <li> <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessageStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMessageStatusOutcome GetChannelMessageStatus(const Model::GetChannelMessageStatusRequest& request) const;

        /**
         * <p>Gets message status for a specified <code>messageId</code>. Use this API to
         * determine the intermediate status of messages going through channel flow
         * processing. The API provides an alternative to retrieving message status if the
         * event was not received because a client wasn't connected to a websocket. </p>
         * <p>Messages can have any one of these statuses.</p> <dl> <dt>SENT</dt> <dd>
         * <p>Message processed successfully</p> </dd> <dt>PENDING</dt> <dd> <p>Ongoing
         * processing</p> </dd> <dt>FAILED</dt> <dd> <p>Processing failed</p> </dd>
         * <dt>DENIED</dt> <dd> <p>Messasge denied by the processor</p> </dd> </dl> 
         * <ul> <li> <p>This API does not return statuses for denied messages, because we
         * don't store them once the processor denies them. </p> </li> <li> <p>Only the
         * message sender can invoke this API.</p> </li> <li> <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessageStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelMessageStatusOutcomeCallable GetChannelMessageStatusCallable(const Model::GetChannelMessageStatusRequest& request) const;

        /**
         * <p>Gets message status for a specified <code>messageId</code>. Use this API to
         * determine the intermediate status of messages going through channel flow
         * processing. The API provides an alternative to retrieving message status if the
         * event was not received because a client wasn't connected to a websocket. </p>
         * <p>Messages can have any one of these statuses.</p> <dl> <dt>SENT</dt> <dd>
         * <p>Message processed successfully</p> </dd> <dt>PENDING</dt> <dd> <p>Ongoing
         * processing</p> </dd> <dt>FAILED</dt> <dd> <p>Processing failed</p> </dd>
         * <dt>DENIED</dt> <dd> <p>Messasge denied by the processor</p> </dd> </dl> 
         * <ul> <li> <p>This API does not return statuses for denied messages, because we
         * don't store them once the processor denies them. </p> </li> <li> <p>Only the
         * message sender can invoke this API.</p> </li> <li> <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessageStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelMessageStatusAsync(const Model::GetChannelMessageStatusRequest& request, const GetChannelMessageStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The details of the endpoint for the messaging session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMessagingSessionEndpointOutcome GetMessagingSessionEndpoint(const Model::GetMessagingSessionEndpointRequest& request) const;

        /**
         * <p>The details of the endpoint for the messaging session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMessagingSessionEndpointOutcomeCallable GetMessagingSessionEndpointCallable(const Model::GetMessagingSessionEndpointRequest& request) const;

        /**
         * <p>The details of the endpoint for the messaging session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMessagingSessionEndpointAsync(const Model::GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the users banned from a particular channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelBans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelBansOutcome ListChannelBans(const Model::ListChannelBansRequest& request) const;

        /**
         * <p>Lists all the users banned from a particular channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelBans">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelBansOutcomeCallable ListChannelBansCallable(const Model::ListChannelBansRequest& request) const;

        /**
         * <p>Lists all the users banned from a particular channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelBans">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelBansAsync(const Model::ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated lists of all the channel flows created under a single
         * Chime. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelFlowsOutcome ListChannelFlows(const Model::ListChannelFlowsRequest& request) const;

        /**
         * <p>Returns a paginated lists of all the channel flows created under a single
         * Chime. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelFlows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelFlowsOutcomeCallable ListChannelFlowsCallable(const Model::ListChannelFlowsRequest& request) const;

        /**
         * <p>Returns a paginated lists of all the channel flows created under a single
         * Chime. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelFlows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelFlowsAsync(const Model::ListChannelFlowsRequest& request, const ListChannelFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all channel memberships in a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p>  <p>If you want to list the channels to which a
         * specific app instance user belongs, see the <a
         * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_messaging-chime_ListChannelMembershipsForAppInstanceUser.html">ListChannelMembershipsForAppInstanceUser</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsOutcome ListChannelMemberships(const Model::ListChannelMembershipsRequest& request) const;

        /**
         * <p>Lists all channel memberships in a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p>  <p>If you want to list the channels to which a
         * specific app instance user belongs, see the <a
         * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_messaging-chime_ListChannelMembershipsForAppInstanceUser.html">ListChannelMembershipsForAppInstanceUser</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMemberships">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelMembershipsOutcomeCallable ListChannelMembershipsCallable(const Model::ListChannelMembershipsRequest& request) const;

        /**
         * <p>Lists all channel memberships in a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p>  <p>If you want to list the channels to which a
         * specific app instance user belongs, see the <a
         * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_messaging-chime_ListChannelMembershipsForAppInstanceUser.html">ListChannelMembershipsForAppInstanceUser</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMemberships">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMembershipsAsync(const Model::ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists all channels that a particular <code>AppInstanceUser</code> is a part
         * of. Only an <code>AppInstanceAdmin</code> can call the API with a user ARN that
         * is not their own. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsForAppInstanceUserOutcome ListChannelMembershipsForAppInstanceUser(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) const;

        /**
         * <p> Lists all channels that a particular <code>AppInstanceUser</code> is a part
         * of. Only an <code>AppInstanceAdmin</code> can call the API with a user ARN that
         * is not their own. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelMembershipsForAppInstanceUserOutcomeCallable ListChannelMembershipsForAppInstanceUserCallable(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) const;

        /**
         * <p> Lists all channels that a particular <code>AppInstanceUser</code> is a part
         * of. Only an <code>AppInstanceAdmin</code> can call the API with a user ARN that
         * is not their own. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMembershipsForAppInstanceUserAsync(const Model::ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. By default, sorted by creation timestamp in
         * descending order.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p>Also, the x-amz-chime-bearer request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMessagesOutcome ListChannelMessages(const Model::ListChannelMessagesRequest& request) const;

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. By default, sorted by creation timestamp in
         * descending order.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p>Also, the x-amz-chime-bearer request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMessages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelMessagesOutcomeCallable ListChannelMessagesCallable(const Model::ListChannelMessagesRequest& request) const;

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. By default, sorted by creation timestamp in
         * descending order.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p>Also, the x-amz-chime-bearer request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMessages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMessagesAsync(const Model::ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the moderators for a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelModerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelModeratorsOutcome ListChannelModerators(const Model::ListChannelModeratorsRequest& request) const;

        /**
         * <p>Lists all the moderators for a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelModerators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelModeratorsOutcomeCallable ListChannelModeratorsCallable(const Model::ListChannelModeratorsRequest& request) const;

        /**
         * <p>Lists all the moderators for a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelModerators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelModeratorsAsync(const Model::ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account.</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account.</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account.</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all channels associated with a specified channel flow. You can
         * associate a channel flow with multiple channels, but you can only associate a
         * channel with one channel flow. This is a developer API.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsAssociatedWithChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsAssociatedWithChannelFlowOutcome ListChannelsAssociatedWithChannelFlow(const Model::ListChannelsAssociatedWithChannelFlowRequest& request) const;

        /**
         * <p>Lists all channels associated with a specified channel flow. You can
         * associate a channel flow with multiple channels, but you can only associate a
         * channel with one channel flow. This is a developer API.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsAssociatedWithChannelFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsAssociatedWithChannelFlowOutcomeCallable ListChannelsAssociatedWithChannelFlowCallable(const Model::ListChannelsAssociatedWithChannelFlowRequest& request) const;

        /**
         * <p>Lists all channels associated with a specified channel flow. You can
         * associate a channel flow with multiple channels, but you can only associate a
         * channel with one channel flow. This is a developer API.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsAssociatedWithChannelFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAssociatedWithChannelFlowAsync(const Model::ListChannelsAssociatedWithChannelFlowRequest& request, const ListChannelsAssociatedWithChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of the channels moderated by an <code>AppInstanceUser</code>.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsModeratedByAppInstanceUserOutcome ListChannelsModeratedByAppInstanceUser(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>A list of the channels moderated by an <code>AppInstanceUser</code>.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsModeratedByAppInstanceUserOutcomeCallable ListChannelsModeratedByAppInstanceUserCallable(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>A list of the channels moderated by an <code>AppInstanceUser</code>.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsModeratedByAppInstanceUserAsync(const Model::ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the membership preferences of an <code>AppInstanceUser</code> for the
         * specified channel. The <code>AppInstanceUser</code> must be a member of the
         * channel. Only the <code>AppInstanceUser</code> who owns the membership can set
         * preferences. Users in the <code>AppInstanceAdmin</code> and channel moderator
         * roles can't set preferences for other users. Banned users can't set membership
         * preferences for the channel from which they are banned.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PutChannelMembershipPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelMembershipPreferencesOutcome PutChannelMembershipPreferences(const Model::PutChannelMembershipPreferencesRequest& request) const;

        /**
         * <p>Sets the membership preferences of an <code>AppInstanceUser</code> for the
         * specified channel. The <code>AppInstanceUser</code> must be a member of the
         * channel. Only the <code>AppInstanceUser</code> who owns the membership can set
         * preferences. Users in the <code>AppInstanceAdmin</code> and channel moderator
         * roles can't set preferences for other users. Banned users can't set membership
         * preferences for the channel from which they are banned.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PutChannelMembershipPreferences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutChannelMembershipPreferencesOutcomeCallable PutChannelMembershipPreferencesCallable(const Model::PutChannelMembershipPreferencesRequest& request) const;

        /**
         * <p>Sets the membership preferences of an <code>AppInstanceUser</code> for the
         * specified channel. The <code>AppInstanceUser</code> must be a member of the
         * channel. Only the <code>AppInstanceUser</code> who owns the membership can set
         * preferences. Users in the <code>AppInstanceAdmin</code> and channel moderator
         * roles can't set preferences for other users. Banned users can't set membership
         * preferences for the channel from which they are banned.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PutChannelMembershipPreferences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutChannelMembershipPreferencesAsync(const Model::PutChannelMembershipPreferencesRequest& request, const PutChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as redacted.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/RedactChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactChannelMessageOutcome RedactChannelMessage(const Model::RedactChannelMessageRequest& request) const;

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as redacted.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/RedactChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RedactChannelMessageOutcomeCallable RedactChannelMessageCallable(const Model::RedactChannelMessageRequest& request) const;

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as redacted.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/RedactChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RedactChannelMessageAsync(const Model::RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p>Also, <code>STANDARD</code> messages can contain 4KB
         * of data and the 1KB of metadata. <code>CONTROL</code> messages can contain 30
         * bytes of data and no metadata.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/SendChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendChannelMessageOutcome SendChannelMessage(const Model::SendChannelMessageRequest& request) const;

        /**
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p>Also, <code>STANDARD</code> messages can contain 4KB
         * of data and the 1KB of metadata. <code>CONTROL</code> messages can contain 30
         * bytes of data and no metadata.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/SendChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendChannelMessageOutcomeCallable SendChannelMessageCallable(const Model::SendChannelMessageRequest& request) const;

        /**
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p>Also, <code>STANDARD</code> messages can contain 4KB
         * of data and the 1KB of metadata. <code>CONTROL</code> messages can contain 30
         * bytes of data and no metadata.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/SendChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendChannelMessageAsync(const Model::SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates channel flow attributes. This is a developer API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelFlowOutcome UpdateChannelFlow(const Model::UpdateChannelFlowRequest& request) const;

        /**
         * <p>Updates channel flow attributes. This is a developer API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelFlowOutcomeCallable UpdateChannelFlowCallable(const Model::UpdateChannelFlowRequest& request) const;

        /**
         * <p>Updates channel flow attributes. This is a developer API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelFlowAsync(const Model::UpdateChannelFlowRequest& request, const UpdateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the content of a message.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelMessageOutcome UpdateChannelMessage(const Model::UpdateChannelMessageRequest& request) const;

        /**
         * <p>Updates the content of a message.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelMessageOutcomeCallable UpdateChannelMessageCallable(const Model::UpdateChannelMessageRequest& request) const;

        /**
         * <p>Updates the content of a message.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelMessageAsync(const Model::UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The details of the time when a user last read messages in a channel.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelReadMarkerOutcome UpdateChannelReadMarker(const Model::UpdateChannelReadMarkerRequest& request) const;

        /**
         * <p>The details of the time when a user last read messages in a channel.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelReadMarkerOutcomeCallable UpdateChannelReadMarkerCallable(const Model::UpdateChannelReadMarkerRequest& request) const;

        /**
         * <p>The details of the time when a user last read messages in a channel.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelReadMarkerAsync(const Model::UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateChannelFlowAsyncHelper(const Model::AssociateChannelFlowRequest& request, const AssociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchCreateChannelMembershipAsyncHelper(const Model::BatchCreateChannelMembershipRequest& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChannelFlowCallbackAsyncHelper(const Model::ChannelFlowCallbackRequest& request, const ChannelFlowCallbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelBanAsyncHelper(const Model::CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelFlowAsyncHelper(const Model::CreateChannelFlowRequest& request, const CreateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelMembershipAsyncHelper(const Model::CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelModeratorAsyncHelper(const Model::CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelBanAsyncHelper(const Model::DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelFlowAsyncHelper(const Model::DeleteChannelFlowRequest& request, const DeleteChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelMembershipAsyncHelper(const Model::DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelMessageAsyncHelper(const Model::DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelModeratorAsyncHelper(const Model::DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelAsyncHelper(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelBanAsyncHelper(const Model::DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelFlowAsyncHelper(const Model::DescribeChannelFlowRequest& request, const DescribeChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelMembershipAsyncHelper(const Model::DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelMembershipForAppInstanceUserAsyncHelper(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelModeratedByAppInstanceUserAsyncHelper(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelModeratorAsyncHelper(const Model::DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateChannelFlowAsyncHelper(const Model::DisassociateChannelFlowRequest& request, const DisassociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelMembershipPreferencesAsyncHelper(const Model::GetChannelMembershipPreferencesRequest& request, const GetChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelMessageAsyncHelper(const Model::GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelMessageStatusAsyncHelper(const Model::GetChannelMessageStatusRequest& request, const GetChannelMessageStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMessagingSessionEndpointAsyncHelper(const Model::GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelBansAsyncHelper(const Model::ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelFlowsAsyncHelper(const Model::ListChannelFlowsRequest& request, const ListChannelFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelMembershipsAsyncHelper(const Model::ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelMembershipsForAppInstanceUserAsyncHelper(const Model::ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelMessagesAsyncHelper(const Model::ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelModeratorsAsyncHelper(const Model::ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAssociatedWithChannelFlowAsyncHelper(const Model::ListChannelsAssociatedWithChannelFlowRequest& request, const ListChannelsAssociatedWithChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsModeratedByAppInstanceUserAsyncHelper(const Model::ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutChannelMembershipPreferencesAsyncHelper(const Model::PutChannelMembershipPreferencesRequest& request, const PutChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RedactChannelMessageAsyncHelper(const Model::RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendChannelMessageAsyncHelper(const Model::SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelFlowAsyncHelper(const Model::UpdateChannelFlowRequest& request, const UpdateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelMessageAsyncHelper(const Model::UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelReadMarkerAsyncHelper(const Model::UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ChimeSDKMessaging
} // namespace Aws
