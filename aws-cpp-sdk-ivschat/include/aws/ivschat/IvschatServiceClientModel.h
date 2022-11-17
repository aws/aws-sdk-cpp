/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ivschat/IvschatErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ivschat/IvschatEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IvschatClient header */
#include <aws/ivschat/model/CreateChatTokenResult.h>
#include <aws/ivschat/model/CreateLoggingConfigurationResult.h>
#include <aws/ivschat/model/CreateRoomResult.h>
#include <aws/ivschat/model/DeleteMessageResult.h>
#include <aws/ivschat/model/DisconnectUserResult.h>
#include <aws/ivschat/model/GetLoggingConfigurationResult.h>
#include <aws/ivschat/model/GetRoomResult.h>
#include <aws/ivschat/model/ListLoggingConfigurationsResult.h>
#include <aws/ivschat/model/ListRoomsResult.h>
#include <aws/ivschat/model/ListTagsForResourceResult.h>
#include <aws/ivschat/model/SendEventResult.h>
#include <aws/ivschat/model/TagResourceResult.h>
#include <aws/ivschat/model/UntagResourceResult.h>
#include <aws/ivschat/model/UpdateLoggingConfigurationResult.h>
#include <aws/ivschat/model/UpdateRoomResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in IvschatClient header */

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

  namespace ivschat
  {
    using IvschatClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IvschatEndpointProviderBase = Aws::ivschat::Endpoint::IvschatEndpointProviderBase;
    using IvschatEndpointProvider = Aws::ivschat::Endpoint::IvschatEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IvschatClient header */
      class CreateChatTokenRequest;
      class CreateLoggingConfigurationRequest;
      class CreateRoomRequest;
      class DeleteLoggingConfigurationRequest;
      class DeleteMessageRequest;
      class DeleteRoomRequest;
      class DisconnectUserRequest;
      class GetLoggingConfigurationRequest;
      class GetRoomRequest;
      class ListLoggingConfigurationsRequest;
      class ListRoomsRequest;
      class ListTagsForResourceRequest;
      class SendEventRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLoggingConfigurationRequest;
      class UpdateRoomRequest;
      /* End of service model forward declarations required in IvschatClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateChatTokenResult, IvschatError> CreateChatTokenOutcome;
      typedef Aws::Utils::Outcome<CreateLoggingConfigurationResult, IvschatError> CreateLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateRoomResult, IvschatError> CreateRoomOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IvschatError> DeleteLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteMessageResult, IvschatError> DeleteMessageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IvschatError> DeleteRoomOutcome;
      typedef Aws::Utils::Outcome<DisconnectUserResult, IvschatError> DisconnectUserOutcome;
      typedef Aws::Utils::Outcome<GetLoggingConfigurationResult, IvschatError> GetLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetRoomResult, IvschatError> GetRoomOutcome;
      typedef Aws::Utils::Outcome<ListLoggingConfigurationsResult, IvschatError> ListLoggingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListRoomsResult, IvschatError> ListRoomsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IvschatError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<SendEventResult, IvschatError> SendEventOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IvschatError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IvschatError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLoggingConfigurationResult, IvschatError> UpdateLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateRoomResult, IvschatError> UpdateRoomOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateChatTokenOutcome> CreateChatTokenOutcomeCallable;
      typedef std::future<CreateLoggingConfigurationOutcome> CreateLoggingConfigurationOutcomeCallable;
      typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
      typedef std::future<DeleteLoggingConfigurationOutcome> DeleteLoggingConfigurationOutcomeCallable;
      typedef std::future<DeleteMessageOutcome> DeleteMessageOutcomeCallable;
      typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
      typedef std::future<DisconnectUserOutcome> DisconnectUserOutcomeCallable;
      typedef std::future<GetLoggingConfigurationOutcome> GetLoggingConfigurationOutcomeCallable;
      typedef std::future<GetRoomOutcome> GetRoomOutcomeCallable;
      typedef std::future<ListLoggingConfigurationsOutcome> ListLoggingConfigurationsOutcomeCallable;
      typedef std::future<ListRoomsOutcome> ListRoomsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<SendEventOutcome> SendEventOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLoggingConfigurationOutcome> UpdateLoggingConfigurationOutcomeCallable;
      typedef std::future<UpdateRoomOutcome> UpdateRoomOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IvschatClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IvschatClient*, const Model::CreateChatTokenRequest&, const Model::CreateChatTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChatTokenResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::CreateLoggingConfigurationRequest&, const Model::CreateLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::CreateRoomRequest&, const Model::CreateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::DeleteLoggingConfigurationRequest&, const Model::DeleteLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::DeleteMessageRequest&, const Model::DeleteMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::DeleteRoomRequest&, const Model::DeleteRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::DisconnectUserRequest&, const Model::DisconnectUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectUserResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::GetLoggingConfigurationRequest&, const Model::GetLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::GetRoomRequest&, const Model::GetRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::ListLoggingConfigurationsRequest&, const Model::ListLoggingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoggingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::ListRoomsRequest&, const Model::ListRoomsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomsResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::SendEventRequest&, const Model::SendEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEventResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::UpdateLoggingConfigurationRequest&, const Model::UpdateLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::UpdateRoomRequest&, const Model::UpdateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ivschat
} // namespace Aws
