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
#include <aws/ivs-realtime/model/CreateIngestConfigurationResult.h>
#include <aws/ivs-realtime/model/CreateParticipantTokenResult.h>
#include <aws/ivs-realtime/model/CreateStageResult.h>
#include <aws/ivs-realtime/model/CreateStorageConfigurationResult.h>
#include <aws/ivs-realtime/model/DeleteEncoderConfigurationResult.h>
#include <aws/ivs-realtime/model/DeleteIngestConfigurationResult.h>
#include <aws/ivs-realtime/model/DeletePublicKeyResult.h>
#include <aws/ivs-realtime/model/DeleteStageResult.h>
#include <aws/ivs-realtime/model/DeleteStorageConfigurationResult.h>
#include <aws/ivs-realtime/model/DisconnectParticipantResult.h>
#include <aws/ivs-realtime/model/GetCompositionResult.h>
#include <aws/ivs-realtime/model/GetEncoderConfigurationResult.h>
#include <aws/ivs-realtime/model/GetIngestConfigurationResult.h>
#include <aws/ivs-realtime/model/GetParticipantResult.h>
#include <aws/ivs-realtime/model/GetPublicKeyResult.h>
#include <aws/ivs-realtime/model/GetStageResult.h>
#include <aws/ivs-realtime/model/GetStageSessionResult.h>
#include <aws/ivs-realtime/model/GetStorageConfigurationResult.h>
#include <aws/ivs-realtime/model/ImportPublicKeyResult.h>
#include <aws/ivs-realtime/model/ListCompositionsResult.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsResult.h>
#include <aws/ivs-realtime/model/ListIngestConfigurationsResult.h>
#include <aws/ivs-realtime/model/ListParticipantEventsResult.h>
#include <aws/ivs-realtime/model/ListParticipantReplicasResult.h>
#include <aws/ivs-realtime/model/ListParticipantsResult.h>
#include <aws/ivs-realtime/model/ListPublicKeysResult.h>
#include <aws/ivs-realtime/model/ListStageSessionsResult.h>
#include <aws/ivs-realtime/model/ListStagesResult.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsResult.h>
#include <aws/ivs-realtime/model/ListTagsForResourceResult.h>
#include <aws/ivs-realtime/model/StartCompositionResult.h>
#include <aws/ivs-realtime/model/StartParticipantReplicationResult.h>
#include <aws/ivs-realtime/model/StopCompositionResult.h>
#include <aws/ivs-realtime/model/StopParticipantReplicationResult.h>
#include <aws/ivs-realtime/model/TagResourceResult.h>
#include <aws/ivs-realtime/model/UntagResourceResult.h>
#include <aws/ivs-realtime/model/UpdateIngestConfigurationResult.h>
#include <aws/ivs-realtime/model/UpdateStageResult.h>
#include <aws/ivs-realtime/model/CreateEncoderConfigurationRequest.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsRequest.h>
#include <aws/ivs-realtime/model/CreateStageRequest.h>
#include <aws/ivs-realtime/model/ListIngestConfigurationsRequest.h>
#include <aws/ivs-realtime/model/ListStagesRequest.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsRequest.h>
#include <aws/ivs-realtime/model/ListCompositionsRequest.h>
#include <aws/ivs-realtime/model/ListPublicKeysRequest.h>
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
    using IvsrealtimeClientConfiguration = Aws::Client::GenericClientConfiguration;
    using IvsrealtimeEndpointProviderBase = Aws::ivsrealtime::Endpoint::IvsrealtimeEndpointProviderBase;
    using IvsrealtimeEndpointProvider = Aws::ivsrealtime::Endpoint::IvsrealtimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IvsrealtimeClient header */
      class CreateEncoderConfigurationRequest;
      class CreateIngestConfigurationRequest;
      class CreateParticipantTokenRequest;
      class CreateStageRequest;
      class CreateStorageConfigurationRequest;
      class DeleteEncoderConfigurationRequest;
      class DeleteIngestConfigurationRequest;
      class DeletePublicKeyRequest;
      class DeleteStageRequest;
      class DeleteStorageConfigurationRequest;
      class DisconnectParticipantRequest;
      class GetCompositionRequest;
      class GetEncoderConfigurationRequest;
      class GetIngestConfigurationRequest;
      class GetParticipantRequest;
      class GetPublicKeyRequest;
      class GetStageRequest;
      class GetStageSessionRequest;
      class GetStorageConfigurationRequest;
      class ImportPublicKeyRequest;
      class ListCompositionsRequest;
      class ListEncoderConfigurationsRequest;
      class ListIngestConfigurationsRequest;
      class ListParticipantEventsRequest;
      class ListParticipantReplicasRequest;
      class ListParticipantsRequest;
      class ListPublicKeysRequest;
      class ListStageSessionsRequest;
      class ListStagesRequest;
      class ListStorageConfigurationsRequest;
      class ListTagsForResourceRequest;
      class StartCompositionRequest;
      class StartParticipantReplicationRequest;
      class StopCompositionRequest;
      class StopParticipantReplicationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateIngestConfigurationRequest;
      class UpdateStageRequest;
      /* End of service model forward declarations required in IvsrealtimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateEncoderConfigurationResult, IvsrealtimeError> CreateEncoderConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateIngestConfigurationResult, IvsrealtimeError> CreateIngestConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateParticipantTokenResult, IvsrealtimeError> CreateParticipantTokenOutcome;
      typedef Aws::Utils::Outcome<CreateStageResult, IvsrealtimeError> CreateStageOutcome;
      typedef Aws::Utils::Outcome<CreateStorageConfigurationResult, IvsrealtimeError> CreateStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteEncoderConfigurationResult, IvsrealtimeError> DeleteEncoderConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteIngestConfigurationResult, IvsrealtimeError> DeleteIngestConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePublicKeyResult, IvsrealtimeError> DeletePublicKeyOutcome;
      typedef Aws::Utils::Outcome<DeleteStageResult, IvsrealtimeError> DeleteStageOutcome;
      typedef Aws::Utils::Outcome<DeleteStorageConfigurationResult, IvsrealtimeError> DeleteStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<DisconnectParticipantResult, IvsrealtimeError> DisconnectParticipantOutcome;
      typedef Aws::Utils::Outcome<GetCompositionResult, IvsrealtimeError> GetCompositionOutcome;
      typedef Aws::Utils::Outcome<GetEncoderConfigurationResult, IvsrealtimeError> GetEncoderConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetIngestConfigurationResult, IvsrealtimeError> GetIngestConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetParticipantResult, IvsrealtimeError> GetParticipantOutcome;
      typedef Aws::Utils::Outcome<GetPublicKeyResult, IvsrealtimeError> GetPublicKeyOutcome;
      typedef Aws::Utils::Outcome<GetStageResult, IvsrealtimeError> GetStageOutcome;
      typedef Aws::Utils::Outcome<GetStageSessionResult, IvsrealtimeError> GetStageSessionOutcome;
      typedef Aws::Utils::Outcome<GetStorageConfigurationResult, IvsrealtimeError> GetStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<ImportPublicKeyResult, IvsrealtimeError> ImportPublicKeyOutcome;
      typedef Aws::Utils::Outcome<ListCompositionsResult, IvsrealtimeError> ListCompositionsOutcome;
      typedef Aws::Utils::Outcome<ListEncoderConfigurationsResult, IvsrealtimeError> ListEncoderConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListIngestConfigurationsResult, IvsrealtimeError> ListIngestConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListParticipantEventsResult, IvsrealtimeError> ListParticipantEventsOutcome;
      typedef Aws::Utils::Outcome<ListParticipantReplicasResult, IvsrealtimeError> ListParticipantReplicasOutcome;
      typedef Aws::Utils::Outcome<ListParticipantsResult, IvsrealtimeError> ListParticipantsOutcome;
      typedef Aws::Utils::Outcome<ListPublicKeysResult, IvsrealtimeError> ListPublicKeysOutcome;
      typedef Aws::Utils::Outcome<ListStageSessionsResult, IvsrealtimeError> ListStageSessionsOutcome;
      typedef Aws::Utils::Outcome<ListStagesResult, IvsrealtimeError> ListStagesOutcome;
      typedef Aws::Utils::Outcome<ListStorageConfigurationsResult, IvsrealtimeError> ListStorageConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IvsrealtimeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartCompositionResult, IvsrealtimeError> StartCompositionOutcome;
      typedef Aws::Utils::Outcome<StartParticipantReplicationResult, IvsrealtimeError> StartParticipantReplicationOutcome;
      typedef Aws::Utils::Outcome<StopCompositionResult, IvsrealtimeError> StopCompositionOutcome;
      typedef Aws::Utils::Outcome<StopParticipantReplicationResult, IvsrealtimeError> StopParticipantReplicationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IvsrealtimeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IvsrealtimeError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateIngestConfigurationResult, IvsrealtimeError> UpdateIngestConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateStageResult, IvsrealtimeError> UpdateStageOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateEncoderConfigurationOutcome> CreateEncoderConfigurationOutcomeCallable;
      typedef std::future<CreateIngestConfigurationOutcome> CreateIngestConfigurationOutcomeCallable;
      typedef std::future<CreateParticipantTokenOutcome> CreateParticipantTokenOutcomeCallable;
      typedef std::future<CreateStageOutcome> CreateStageOutcomeCallable;
      typedef std::future<CreateStorageConfigurationOutcome> CreateStorageConfigurationOutcomeCallable;
      typedef std::future<DeleteEncoderConfigurationOutcome> DeleteEncoderConfigurationOutcomeCallable;
      typedef std::future<DeleteIngestConfigurationOutcome> DeleteIngestConfigurationOutcomeCallable;
      typedef std::future<DeletePublicKeyOutcome> DeletePublicKeyOutcomeCallable;
      typedef std::future<DeleteStageOutcome> DeleteStageOutcomeCallable;
      typedef std::future<DeleteStorageConfigurationOutcome> DeleteStorageConfigurationOutcomeCallable;
      typedef std::future<DisconnectParticipantOutcome> DisconnectParticipantOutcomeCallable;
      typedef std::future<GetCompositionOutcome> GetCompositionOutcomeCallable;
      typedef std::future<GetEncoderConfigurationOutcome> GetEncoderConfigurationOutcomeCallable;
      typedef std::future<GetIngestConfigurationOutcome> GetIngestConfigurationOutcomeCallable;
      typedef std::future<GetParticipantOutcome> GetParticipantOutcomeCallable;
      typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
      typedef std::future<GetStageOutcome> GetStageOutcomeCallable;
      typedef std::future<GetStageSessionOutcome> GetStageSessionOutcomeCallable;
      typedef std::future<GetStorageConfigurationOutcome> GetStorageConfigurationOutcomeCallable;
      typedef std::future<ImportPublicKeyOutcome> ImportPublicKeyOutcomeCallable;
      typedef std::future<ListCompositionsOutcome> ListCompositionsOutcomeCallable;
      typedef std::future<ListEncoderConfigurationsOutcome> ListEncoderConfigurationsOutcomeCallable;
      typedef std::future<ListIngestConfigurationsOutcome> ListIngestConfigurationsOutcomeCallable;
      typedef std::future<ListParticipantEventsOutcome> ListParticipantEventsOutcomeCallable;
      typedef std::future<ListParticipantReplicasOutcome> ListParticipantReplicasOutcomeCallable;
      typedef std::future<ListParticipantsOutcome> ListParticipantsOutcomeCallable;
      typedef std::future<ListPublicKeysOutcome> ListPublicKeysOutcomeCallable;
      typedef std::future<ListStageSessionsOutcome> ListStageSessionsOutcomeCallable;
      typedef std::future<ListStagesOutcome> ListStagesOutcomeCallable;
      typedef std::future<ListStorageConfigurationsOutcome> ListStorageConfigurationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartCompositionOutcome> StartCompositionOutcomeCallable;
      typedef std::future<StartParticipantReplicationOutcome> StartParticipantReplicationOutcomeCallable;
      typedef std::future<StopCompositionOutcome> StopCompositionOutcomeCallable;
      typedef std::future<StopParticipantReplicationOutcome> StopParticipantReplicationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateIngestConfigurationOutcome> UpdateIngestConfigurationOutcomeCallable;
      typedef std::future<UpdateStageOutcome> UpdateStageOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IvsrealtimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateEncoderConfigurationRequest&, const Model::CreateEncoderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEncoderConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateIngestConfigurationRequest&, const Model::CreateIngestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIngestConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateParticipantTokenRequest&, const Model::CreateParticipantTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParticipantTokenResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateStageRequest&, const Model::CreateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStageResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::CreateStorageConfigurationRequest&, const Model::CreateStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeleteEncoderConfigurationRequest&, const Model::DeleteEncoderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEncoderConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeleteIngestConfigurationRequest&, const Model::DeleteIngestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIngestConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeletePublicKeyRequest&, const Model::DeletePublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicKeyResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeleteStageRequest&, const Model::DeleteStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStageResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DeleteStorageConfigurationRequest&, const Model::DeleteStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::DisconnectParticipantRequest&, const Model::DisconnectParticipantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectParticipantResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetCompositionRequest&, const Model::GetCompositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCompositionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetEncoderConfigurationRequest&, const Model::GetEncoderConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEncoderConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetIngestConfigurationRequest&, const Model::GetIngestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIngestConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetParticipantRequest&, const Model::GetParticipantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParticipantResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetPublicKeyRequest&, const Model::GetPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetStageRequest&, const Model::GetStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetStageSessionRequest&, const Model::GetStageSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageSessionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::GetStorageConfigurationRequest&, const Model::GetStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ImportPublicKeyRequest&, const Model::ImportPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListCompositionsRequest&, const Model::ListCompositionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCompositionsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListEncoderConfigurationsRequest&, const Model::ListEncoderConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEncoderConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListIngestConfigurationsRequest&, const Model::ListIngestConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngestConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListParticipantEventsRequest&, const Model::ListParticipantEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParticipantEventsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListParticipantReplicasRequest&, const Model::ListParticipantReplicasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParticipantReplicasResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListParticipantsRequest&, const Model::ListParticipantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParticipantsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListPublicKeysRequest&, const Model::ListPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeysResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListStageSessionsRequest&, const Model::ListStageSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStageSessionsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListStagesRequest&, const Model::ListStagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStagesResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListStorageConfigurationsRequest&, const Model::ListStorageConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::StartCompositionRequest&, const Model::StartCompositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCompositionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::StartParticipantReplicationRequest&, const Model::StartParticipantReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartParticipantReplicationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::StopCompositionRequest&, const Model::StopCompositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCompositionResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::StopParticipantReplicationRequest&, const Model::StopParticipantReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopParticipantReplicationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::UpdateIngestConfigurationRequest&, const Model::UpdateIngestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIngestConfigurationResponseReceivedHandler;
    typedef std::function<void(const IvsrealtimeClient*, const Model::UpdateStageRequest&, const Model::UpdateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStageResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ivsrealtime
} // namespace Aws
