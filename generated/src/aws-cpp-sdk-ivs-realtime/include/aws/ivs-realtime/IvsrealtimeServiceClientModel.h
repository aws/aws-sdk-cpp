/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ivs-realtime/IvsrealtimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ivs-realtime/IvsrealtimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IvsrealtimeClient header */
#include <aws/ivs-realtime/model/CreateEncoderConfigurationResult.h>
#include <aws/ivs-realtime/model/CreateParticipantTokenResult.h>
#include <aws/ivs-realtime/model/CreateStageResult.h>
#include <aws/ivs-realtime/model/CreateStorageConfigurationResult.h>
#include <aws/ivs-realtime/model/DeleteEncoderConfigurationResult.h>
#include <aws/ivs-realtime/model/DeleteStageResult.h>
#include <aws/ivs-realtime/model/DeleteStorageConfigurationResult.h>
#include <aws/ivs-realtime/model/DisconnectParticipantResult.h>
#include <aws/ivs-realtime/model/GetCompositionResult.h>
#include <aws/ivs-realtime/model/GetEncoderConfigurationResult.h>
#include <aws/ivs-realtime/model/GetParticipantResult.h>
#include <aws/ivs-realtime/model/GetStageResult.h>
#include <aws/ivs-realtime/model/GetStageSessionResult.h>
#include <aws/ivs-realtime/model/GetStorageConfigurationResult.h>
#include <aws/ivs-realtime/model/ListCompositionsResult.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsResult.h>
#include <aws/ivs-realtime/model/ListParticipantEventsResult.h>
#include <aws/ivs-realtime/model/ListParticipantsResult.h>
#include <aws/ivs-realtime/model/ListStageSessionsResult.h>
#include <aws/ivs-realtime/model/ListStagesResult.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsResult.h>
#include <aws/ivs-realtime/model/ListTagsForResourceResult.h>
#include <aws/ivs-realtime/model/StartCompositionResult.h>
#include <aws/ivs-realtime/model/StopCompositionResult.h>
#include <aws/ivs-realtime/model/TagResourceResult.h>
#include <aws/ivs-realtime/model/UntagResourceResult.h>
#include <aws/ivs-realtime/model/UpdateStageResult.h>
/* End of service model headers required in IvsrealtimeClient header */

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

  namespace ivsrealtime
  {
    using IvsrealtimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IvsrealtimeEndpointProviderBase = Aws::ivsrealtime::Endpoint::IvsrealtimeEndpointProviderBase;
    using IvsrealtimeEndpointProvider = Aws::ivsrealtime::Endpoint::IvsrealtimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IvsrealtimeClient header */
      class CreateEncoderConfigurationRequest;
      class CreateParticipantTokenRequest;
      class CreateStageRequest;
      class CreateStorageConfigurationRequest;
      class DeleteEncoderConfigurationRequest;
      class DeleteStageRequest;
      class DeleteStorageConfigurationRequest;
      class DisconnectParticipantRequest;
      class GetCompositionRequest;
      class GetEncoderConfigurationRequest;
      class GetParticipantRequest;
      class GetStageRequest;
      class GetStageSessionRequest;
      class GetStorageConfigurationRequest;
      class ListCompositionsRequest;
      class ListEncoderConfigurationsRequest;
      class ListParticipantEventsRequest;
      class ListParticipantsRequest;
      class ListStageSessionsRequest;
      class ListStagesRequest;
      class ListStorageConfigurationsRequest;
      class ListTagsForResourceRequest;
      class StartCompositionRequest;
      class StopCompositionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateStageRequest;
      /* End of service model forward declarations required in IvsrealtimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateEncoderConfigurationResult, IvsrealtimeError> CreateEncoderConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateParticipantTokenResult, IvsrealtimeError> CreateParticipantTokenOutcome;
      typedef Aws::Utils::Outcome<CreateStageResult, IvsrealtimeError> CreateStageOutcome;
      typedef Aws::Utils::Outcome<CreateStorageConfigurationResult, IvsrealtimeError> CreateStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteEncoderConfigurationResult, IvsrealtimeError> DeleteEncoderConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteStageResult, IvsrealtimeError> DeleteStageOutcome;
      typedef Aws::Utils::Outcome<DeleteStorageConfigurationResult, IvsrealtimeError> DeleteStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<DisconnectParticipantResult, IvsrealtimeError> DisconnectParticipantOutcome;
      typedef Aws::Utils::Outcome<GetCompositionResult, IvsrealtimeError> GetCompositionOutcome;
      typedef Aws::Utils::Outcome<GetEncoderConfigurationResult, IvsrealtimeError> GetEncoderConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetParticipantResult, IvsrealtimeError> GetParticipantOutcome;
      typedef Aws::Utils::Outcome<GetStageResult, IvsrealtimeError> GetStageOutcome;
      typedef Aws::Utils::Outcome<GetStageSessionResult, IvsrealtimeError> GetStageSessionOutcome;
      typedef Aws::Utils::Outcome<GetStorageConfigurationResult, IvsrealtimeError> GetStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListCompositionsResult, IvsrealtimeError> ListCompositionsOutcome;
      typedef Aws::Utils::Outcome<ListEncoderConfigurationsResult, IvsrealtimeError> ListEncoderConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListParticipantEventsResult, IvsrealtimeError> ListParticipantEventsOutcome;
      typedef Aws::Utils::Outcome<ListParticipantsResult, IvsrealtimeError> ListParticipantsOutcome;
      typedef Aws::Utils::Outcome<ListStageSessionsResult, IvsrealtimeError> ListStageSessionsOutcome;
      typedef Aws::Utils::Outcome<ListStagesResult, IvsrealtimeError> ListStagesOutcome;
      typedef Aws::Utils::Outcome<ListStorageConfigurationsResult, IvsrealtimeError> ListStorageConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IvsrealtimeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartCompositionResult, IvsrealtimeError> StartCompositionOutcome;
      typedef Aws::Utils::Outcome<StopCompositionResult, IvsrealtimeError> StopCompositionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IvsrealtimeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IvsrealtimeError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateStageResult, IvsrealtimeError> UpdateStageOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateEncoderConfigurationOutcome> CreateEncoderConfigurationOutcomeCallable;
      typedef std::future<CreateParticipantTokenOutcome> CreateParticipantTokenOutcomeCallable;
      typedef std::future<CreateStageOutcome> CreateStageOutcomeCallable;
      typedef std::future<CreateStorageConfigurationOutcome> CreateStorageConfigurationOutcomeCallable;
      typedef std::future<DeleteEncoderConfigurationOutcome> DeleteEncoderConfigurationOutcomeCallable;
      typedef std::future<DeleteStageOutcome> DeleteStageOutcomeCallable;
      typedef std::future<DeleteStorageConfigurationOutcome> DeleteStorageConfigurationOutcomeCallable;
      typedef std::future<DisconnectParticipantOutcome> DisconnectParticipantOutcomeCallable;
      typedef std::future<GetCompositionOutcome> GetCompositionOutcomeCallable;
      typedef std::future<GetEncoderConfigurationOutcome> GetEncoderConfigurationOutcomeCallable;
      typedef std::future<GetParticipantOutcome> GetParticipantOutcomeCallable;
      typedef std::future<GetStageOutcome> GetStageOutcomeCallable;
      typedef std::future<GetStageSessionOutcome> GetStageSessionOutcomeCallable;
      typedef std::future<GetStorageConfigurationOutcome> GetStorageConfigurationOutcomeCallable;
      typedef std::future<ListCompositionsOutcome> ListCompositionsOutcomeCallable;
      typedef std::future<ListEncoderConfigurationsOutcome> ListEncoderConfigurationsOutcomeCallable;
      typedef std::future<ListParticipantEventsOutcome> ListParticipantEventsOutcomeCallable;
      typedef std::future<ListParticipantsOutcome> ListParticipantsOutcomeCallable;
      typedef std::future<ListStageSessionsOutcome> ListStageSessionsOutcomeCallable;
      typedef std::future<ListStagesOutcome> ListStagesOutcomeCallable;
      typedef std::future<ListStorageConfigurationsOutcome> ListStorageConfigurationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartCompositionOutcome> StartCompositionOutcomeCallable;
      typedef std::future<StopCompositionOutcome> StopCompositionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateStageOutcome> UpdateStageOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IvsrealtimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateEncoderConfigurationRequest&, const Model::CreateEncoderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEncoderConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateParticipantTokenRequest&, const Model::CreateParticipantTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParticipantTokenResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateStageRequest&, const Model::CreateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStageResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateStorageConfigurationRequest&, const Model::CreateStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeleteEncoderConfigurationRequest&, const Model::DeleteEncoderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEncoderConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeleteStageRequest&, const Model::DeleteStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStageResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeleteStorageConfigurationRequest&, const Model::DeleteStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DisconnectParticipantRequest&, const Model::DisconnectParticipantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectParticipantResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetCompositionRequest&, const Model::GetCompositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCompositionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetEncoderConfigurationRequest&, const Model::GetEncoderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEncoderConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetParticipantRequest&, const Model::GetParticipantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParticipantResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetStageRequest&, const Model::GetStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetStageSessionRequest&, const Model::GetStageSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageSessionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetStorageConfigurationRequest&, const Model::GetStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListCompositionsRequest&, const Model::ListCompositionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCompositionsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListEncoderConfigurationsRequest&, const Model::ListEncoderConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEncoderConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListParticipantEventsRequest&, const Model::ListParticipantEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParticipantEventsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListParticipantsRequest&, const Model::ListParticipantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParticipantsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListStageSessionsRequest&, const Model::ListStageSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStageSessionsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListStagesRequest&, const Model::ListStagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStagesResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListStorageConfigurationsRequest&, const Model::ListStorageConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::StartCompositionRequest&, const Model::StartCompositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCompositionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::StopCompositionRequest&, const Model::StopCompositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCompositionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::UpdateStageRequest&, const Model::UpdateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStageResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ivsrealtime
} // namespace Aws
