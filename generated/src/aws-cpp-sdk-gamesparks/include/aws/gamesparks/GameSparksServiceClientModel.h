/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/gamesparks/GameSparksErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/gamesparks/GameSparksEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GameSparksClient header */
#include <aws/gamesparks/model/CreateGameResult.h>
#include <aws/gamesparks/model/CreateSnapshotResult.h>
#include <aws/gamesparks/model/CreateStageResult.h>
#include <aws/gamesparks/model/DeleteGameResult.h>
#include <aws/gamesparks/model/DeleteStageResult.h>
#include <aws/gamesparks/model/DisconnectPlayerResult.h>
#include <aws/gamesparks/model/ExportSnapshotResult.h>
#include <aws/gamesparks/model/GetExtensionResult.h>
#include <aws/gamesparks/model/GetExtensionVersionResult.h>
#include <aws/gamesparks/model/GetGameResult.h>
#include <aws/gamesparks/model/GetGameConfigurationResult.h>
#include <aws/gamesparks/model/GetGeneratedCodeJobResult.h>
#include <aws/gamesparks/model/GetPlayerConnectionStatusResult.h>
#include <aws/gamesparks/model/GetSnapshotResult.h>
#include <aws/gamesparks/model/GetStageResult.h>
#include <aws/gamesparks/model/GetStageDeploymentResult.h>
#include <aws/gamesparks/model/ImportGameConfigurationResult.h>
#include <aws/gamesparks/model/ListExtensionVersionsResult.h>
#include <aws/gamesparks/model/ListExtensionsResult.h>
#include <aws/gamesparks/model/ListGamesResult.h>
#include <aws/gamesparks/model/ListGeneratedCodeJobsResult.h>
#include <aws/gamesparks/model/ListSnapshotsResult.h>
#include <aws/gamesparks/model/ListStageDeploymentsResult.h>
#include <aws/gamesparks/model/ListStagesResult.h>
#include <aws/gamesparks/model/ListTagsForResourceResult.h>
#include <aws/gamesparks/model/StartGeneratedCodeJobResult.h>
#include <aws/gamesparks/model/StartStageDeploymentResult.h>
#include <aws/gamesparks/model/TagResourceResult.h>
#include <aws/gamesparks/model/UntagResourceResult.h>
#include <aws/gamesparks/model/UpdateGameResult.h>
#include <aws/gamesparks/model/UpdateGameConfigurationResult.h>
#include <aws/gamesparks/model/UpdateSnapshotResult.h>
#include <aws/gamesparks/model/UpdateStageResult.h>
/* End of service model headers required in GameSparksClient header */

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

  namespace GameSparks
  {
    using GameSparksClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GameSparksEndpointProviderBase = Aws::GameSparks::Endpoint::GameSparksEndpointProviderBase;
    using GameSparksEndpointProvider = Aws::GameSparks::Endpoint::GameSparksEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GameSparksClient header */
      class CreateGameRequest;
      class CreateSnapshotRequest;
      class CreateStageRequest;
      class DeleteGameRequest;
      class DeleteStageRequest;
      class DisconnectPlayerRequest;
      class ExportSnapshotRequest;
      class GetExtensionRequest;
      class GetExtensionVersionRequest;
      class GetGameRequest;
      class GetGameConfigurationRequest;
      class GetGeneratedCodeJobRequest;
      class GetPlayerConnectionStatusRequest;
      class GetSnapshotRequest;
      class GetStageRequest;
      class GetStageDeploymentRequest;
      class ImportGameConfigurationRequest;
      class ListExtensionVersionsRequest;
      class ListExtensionsRequest;
      class ListGamesRequest;
      class ListGeneratedCodeJobsRequest;
      class ListSnapshotsRequest;
      class ListStageDeploymentsRequest;
      class ListStagesRequest;
      class ListTagsForResourceRequest;
      class StartGeneratedCodeJobRequest;
      class StartStageDeploymentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateGameRequest;
      class UpdateGameConfigurationRequest;
      class UpdateSnapshotRequest;
      class UpdateStageRequest;
      /* End of service model forward declarations required in GameSparksClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateGameResult, GameSparksError> CreateGameOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResult, GameSparksError> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateStageResult, GameSparksError> CreateStageOutcome;
      typedef Aws::Utils::Outcome<DeleteGameResult, GameSparksError> DeleteGameOutcome;
      typedef Aws::Utils::Outcome<DeleteStageResult, GameSparksError> DeleteStageOutcome;
      typedef Aws::Utils::Outcome<DisconnectPlayerResult, GameSparksError> DisconnectPlayerOutcome;
      typedef Aws::Utils::Outcome<ExportSnapshotResult, GameSparksError> ExportSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetExtensionResult, GameSparksError> GetExtensionOutcome;
      typedef Aws::Utils::Outcome<GetExtensionVersionResult, GameSparksError> GetExtensionVersionOutcome;
      typedef Aws::Utils::Outcome<GetGameResult, GameSparksError> GetGameOutcome;
      typedef Aws::Utils::Outcome<GetGameConfigurationResult, GameSparksError> GetGameConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetGeneratedCodeJobResult, GameSparksError> GetGeneratedCodeJobOutcome;
      typedef Aws::Utils::Outcome<GetPlayerConnectionStatusResult, GameSparksError> GetPlayerConnectionStatusOutcome;
      typedef Aws::Utils::Outcome<GetSnapshotResult, GameSparksError> GetSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetStageResult, GameSparksError> GetStageOutcome;
      typedef Aws::Utils::Outcome<GetStageDeploymentResult, GameSparksError> GetStageDeploymentOutcome;
      typedef Aws::Utils::Outcome<ImportGameConfigurationResult, GameSparksError> ImportGameConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListExtensionVersionsResult, GameSparksError> ListExtensionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListExtensionsResult, GameSparksError> ListExtensionsOutcome;
      typedef Aws::Utils::Outcome<ListGamesResult, GameSparksError> ListGamesOutcome;
      typedef Aws::Utils::Outcome<ListGeneratedCodeJobsResult, GameSparksError> ListGeneratedCodeJobsOutcome;
      typedef Aws::Utils::Outcome<ListSnapshotsResult, GameSparksError> ListSnapshotsOutcome;
      typedef Aws::Utils::Outcome<ListStageDeploymentsResult, GameSparksError> ListStageDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListStagesResult, GameSparksError> ListStagesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, GameSparksError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartGeneratedCodeJobResult, GameSparksError> StartGeneratedCodeJobOutcome;
      typedef Aws::Utils::Outcome<StartStageDeploymentResult, GameSparksError> StartStageDeploymentOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, GameSparksError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, GameSparksError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateGameResult, GameSparksError> UpdateGameOutcome;
      typedef Aws::Utils::Outcome<UpdateGameConfigurationResult, GameSparksError> UpdateGameConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateSnapshotResult, GameSparksError> UpdateSnapshotOutcome;
      typedef Aws::Utils::Outcome<UpdateStageResult, GameSparksError> UpdateStageOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateGameOutcome> CreateGameOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateStageOutcome> CreateStageOutcomeCallable;
      typedef std::future<DeleteGameOutcome> DeleteGameOutcomeCallable;
      typedef std::future<DeleteStageOutcome> DeleteStageOutcomeCallable;
      typedef std::future<DisconnectPlayerOutcome> DisconnectPlayerOutcomeCallable;
      typedef std::future<ExportSnapshotOutcome> ExportSnapshotOutcomeCallable;
      typedef std::future<GetExtensionOutcome> GetExtensionOutcomeCallable;
      typedef std::future<GetExtensionVersionOutcome> GetExtensionVersionOutcomeCallable;
      typedef std::future<GetGameOutcome> GetGameOutcomeCallable;
      typedef std::future<GetGameConfigurationOutcome> GetGameConfigurationOutcomeCallable;
      typedef std::future<GetGeneratedCodeJobOutcome> GetGeneratedCodeJobOutcomeCallable;
      typedef std::future<GetPlayerConnectionStatusOutcome> GetPlayerConnectionStatusOutcomeCallable;
      typedef std::future<GetSnapshotOutcome> GetSnapshotOutcomeCallable;
      typedef std::future<GetStageOutcome> GetStageOutcomeCallable;
      typedef std::future<GetStageDeploymentOutcome> GetStageDeploymentOutcomeCallable;
      typedef std::future<ImportGameConfigurationOutcome> ImportGameConfigurationOutcomeCallable;
      typedef std::future<ListExtensionVersionsOutcome> ListExtensionVersionsOutcomeCallable;
      typedef std::future<ListExtensionsOutcome> ListExtensionsOutcomeCallable;
      typedef std::future<ListGamesOutcome> ListGamesOutcomeCallable;
      typedef std::future<ListGeneratedCodeJobsOutcome> ListGeneratedCodeJobsOutcomeCallable;
      typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
      typedef std::future<ListStageDeploymentsOutcome> ListStageDeploymentsOutcomeCallable;
      typedef std::future<ListStagesOutcome> ListStagesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartGeneratedCodeJobOutcome> StartGeneratedCodeJobOutcomeCallable;
      typedef std::future<StartStageDeploymentOutcome> StartStageDeploymentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateGameOutcome> UpdateGameOutcomeCallable;
      typedef std::future<UpdateGameConfigurationOutcome> UpdateGameConfigurationOutcomeCallable;
      typedef std::future<UpdateSnapshotOutcome> UpdateSnapshotOutcomeCallable;
      typedef std::future<UpdateStageOutcome> UpdateStageOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GameSparksClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GameSparksClient*, const Model::CreateGameRequest&, const Model::CreateGameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::CreateStageRequest&, const Model::CreateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStageResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::DeleteGameRequest&, const Model::DeleteGameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGameResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::DeleteStageRequest&, const Model::DeleteStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStageResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::DisconnectPlayerRequest&, const Model::DisconnectPlayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectPlayerResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ExportSnapshotRequest&, const Model::ExportSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportSnapshotResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetExtensionRequest&, const Model::GetExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExtensionResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetExtensionVersionRequest&, const Model::GetExtensionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExtensionVersionResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetGameRequest&, const Model::GetGameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGameResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetGameConfigurationRequest&, const Model::GetGameConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGameConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetGeneratedCodeJobRequest&, const Model::GetGeneratedCodeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeneratedCodeJobResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetPlayerConnectionStatusRequest&, const Model::GetPlayerConnectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlayerConnectionStatusResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetSnapshotRequest&, const Model::GetSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetStageRequest&, const Model::GetStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::GetStageDeploymentRequest&, const Model::GetStageDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageDeploymentResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ImportGameConfigurationRequest&, const Model::ImportGameConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportGameConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListExtensionVersionsRequest&, const Model::ListExtensionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExtensionVersionsResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListExtensionsRequest&, const Model::ListExtensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExtensionsResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListGamesRequest&, const Model::ListGamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGamesResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListGeneratedCodeJobsRequest&, const Model::ListGeneratedCodeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeneratedCodeJobsResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListSnapshotsRequest&, const Model::ListSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSnapshotsResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListStageDeploymentsRequest&, const Model::ListStageDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStageDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListStagesRequest&, const Model::ListStagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStagesResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::StartGeneratedCodeJobRequest&, const Model::StartGeneratedCodeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartGeneratedCodeJobResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::StartStageDeploymentRequest&, const Model::StartStageDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStageDeploymentResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::UpdateGameRequest&, const Model::UpdateGameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::UpdateGameConfigurationRequest&, const Model::UpdateGameConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::UpdateSnapshotRequest&, const Model::UpdateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSnapshotResponseReceivedHandler;
    typedef std::function<void(const GameSparksClient*, const Model::UpdateStageRequest&, const Model::UpdateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStageResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GameSparks
} // namespace Aws
