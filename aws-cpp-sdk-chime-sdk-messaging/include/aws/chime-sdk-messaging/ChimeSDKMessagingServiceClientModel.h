/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chime-sdk-messaging/ChimeSDKMessagingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChimeSDKMessagingClient header */
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
#include <aws/chime-sdk-messaging/model/ListSubChannelsResult.h>
#include <aws/chime-sdk-messaging/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-messaging/model/PutChannelMembershipPreferencesResult.h>
#include <aws/chime-sdk-messaging/model/RedactChannelMessageResult.h>
#include <aws/chime-sdk-messaging/model/SearchChannelsResult.h>
#include <aws/chime-sdk-messaging/model/SendChannelMessageResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelFlowResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelMessageResult.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelReadMarkerResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ChimeSDKMessagingClient header */

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
    using ChimeSDKMessagingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ChimeSDKMessagingEndpointProviderBase = Aws::ChimeSDKMessaging::Endpoint::ChimeSDKMessagingEndpointProviderBase;
    using ChimeSDKMessagingEndpointProvider = Aws::ChimeSDKMessaging::Endpoint::ChimeSDKMessagingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChimeSDKMessagingClient header */
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
      class ListSubChannelsRequest;
      class ListTagsForResourceRequest;
      class PutChannelMembershipPreferencesRequest;
      class RedactChannelMessageRequest;
      class SearchChannelsRequest;
      class SendChannelMessageRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateChannelRequest;
      class UpdateChannelFlowRequest;
      class UpdateChannelMessageRequest;
      class UpdateChannelReadMarkerRequest;
      /* End of service model forward declarations required in ChimeSDKMessagingClient header */

      /* Service model Outcome class definitions */
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
      typedef Aws::Utils::Outcome<ListSubChannelsResult, ChimeSDKMessagingError> ListSubChannelsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeSDKMessagingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutChannelMembershipPreferencesResult, ChimeSDKMessagingError> PutChannelMembershipPreferencesOutcome;
      typedef Aws::Utils::Outcome<RedactChannelMessageResult, ChimeSDKMessagingError> RedactChannelMessageOutcome;
      typedef Aws::Utils::Outcome<SearchChannelsResult, ChimeSDKMessagingError> SearchChannelsOutcome;
      typedef Aws::Utils::Outcome<SendChannelMessageResult, ChimeSDKMessagingError> SendChannelMessageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMessagingError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, ChimeSDKMessagingError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelFlowResult, ChimeSDKMessagingError> UpdateChannelFlowOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelMessageResult, ChimeSDKMessagingError> UpdateChannelMessageOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelReadMarkerResult, ChimeSDKMessagingError> UpdateChannelReadMarkerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<ListSubChannelsOutcome> ListSubChannelsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutChannelMembershipPreferencesOutcome> PutChannelMembershipPreferencesOutcomeCallable;
      typedef std::future<RedactChannelMessageOutcome> RedactChannelMessageOutcomeCallable;
      typedef std::future<SearchChannelsOutcome> SearchChannelsOutcomeCallable;
      typedef std::future<SendChannelMessageOutcome> SendChannelMessageOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateChannelFlowOutcome> UpdateChannelFlowOutcomeCallable;
      typedef std::future<UpdateChannelMessageOutcome> UpdateChannelMessageOutcomeCallable;
      typedef std::future<UpdateChannelReadMarkerOutcome> UpdateChannelReadMarkerOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChimeSDKMessagingClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListSubChannelsRequest&, const Model::ListSubChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubChannelsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::PutChannelMembershipPreferencesRequest&, const Model::PutChannelMembershipPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutChannelMembershipPreferencesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::RedactChannelMessageRequest&, const Model::RedactChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RedactChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::SearchChannelsRequest&, const Model::SearchChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchChannelsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::SendChannelMessageRequest&, const Model::SendChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelFlowRequest&, const Model::UpdateChannelFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelFlowResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelMessageRequest&, const Model::UpdateChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMessagingClient*, const Model::UpdateChannelReadMarkerRequest&, const Model::UpdateChannelReadMarkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelReadMarkerResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ChimeSDKMessaging
} // namespace Aws
