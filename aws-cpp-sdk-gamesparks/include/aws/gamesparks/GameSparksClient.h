/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamesparks/GameSparksServiceClientModel.h>
#include <aws/gamesparks/GameSparksLegacyAsyncMacros.h>

namespace Aws
{
namespace GameSparks
{
  /**
   * <p/>
   */
  class AWS_GAMESPARKS_API GameSparksClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameSparksClient(const Aws::GameSparks::GameSparksClientConfiguration& clientConfiguration = Aws::GameSparks::GameSparksClientConfiguration(),
                         std::shared_ptr<GameSparksEndpointProviderBase> endpointProvider = Aws::MakeShared<GameSparksEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameSparksClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<GameSparksEndpointProviderBase> endpointProvider = Aws::MakeShared<GameSparksEndpointProvider>(ALLOCATION_TAG),
                         const Aws::GameSparks::GameSparksClientConfiguration& clientConfiguration = Aws::GameSparks::GameSparksClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameSparksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<GameSparksEndpointProviderBase> endpointProvider = Aws::MakeShared<GameSparksEndpointProvider>(ALLOCATION_TAG),
                         const Aws::GameSparks::GameSparksClientConfiguration& clientConfiguration = Aws::GameSparks::GameSparksClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameSparksClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameSparksClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameSparksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GameSparksClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p> Creates a new game with an empty configuration. After creating your game,
         * you can update the configuration using <code>UpdateGameConfiguration</code> or
         * <code>ImportGameConfiguration</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/CreateGame">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameOutcome CreateGame(const Model::CreateGameRequest& request) const;


        /**
         * <p>Creates a snapshot of the game configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;


        /**
         * <p>Creates a new stage for stage-by-stage game development and
         * deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/CreateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request) const;


        /**
         * <p>Deletes a game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/DeleteGame">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGameOutcome DeleteGame(const Model::DeleteGameRequest& request) const;


        /**
         * <p>Deletes a stage from a game, along with the associated game
         * runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;


        /**
         * <p>Disconnects a player from the game runtime.</p> <p> If a player has multiple
         * connections, this operation attempts to close all of them. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/DisconnectPlayer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectPlayerOutcome DisconnectPlayer(const Model::DisconnectPlayerRequest& request) const;


        /**
         * <p>Exports a game configuration snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ExportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportSnapshotOutcome ExportSnapshot(const Model::ExportSnapshotRequest& request) const;


        /**
         * <p>Gets details about a specified extension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExtensionOutcome GetExtension(const Model::GetExtensionRequest& request) const;


        /**
         * <p>Gets details about a specified extension version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetExtensionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExtensionVersionOutcome GetExtensionVersion(const Model::GetExtensionVersionRequest& request) const;


        /**
         * <p>Gets details about a game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetGame">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGameOutcome GetGame(const Model::GetGameRequest& request) const;


        /**
         * <p>Gets the configuration of the game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetGameConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGameConfigurationOutcome GetGameConfiguration(const Model::GetGameConfigurationRequest& request) const;


        /**
         * <p>Gets details about a job that is generating code for a
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetGeneratedCodeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeneratedCodeJobOutcome GetGeneratedCodeJob(const Model::GetGeneratedCodeJobRequest& request) const;


        /**
         * <p>Gets the status of a player's connection to the game runtime.</p> <p> It's
         * possible for a single player to have multiple connections to the game runtime.
         * If a player is not connected, this operation returns an empty list.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetPlayerConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlayerConnectionStatusOutcome GetPlayerConnectionStatus(const Model::GetPlayerConnectionStatusRequest& request) const;


        /**
         * <p>Gets a copy of the game configuration in a snapshot.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotOutcome GetSnapshot(const Model::GetSnapshotRequest& request) const;


        /**
         * <p>Gets information about a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;


        /**
         * <p>Gets information about a stage deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetStageDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageDeploymentOutcome GetStageDeployment(const Model::GetStageDeploymentRequest& request) const;


        /**
         * <p>Imports a game configuration.</p> <p> This operation replaces the current
         * configuration of the game with the provided input. This is not a reversible
         * operation. If you want to preserve the previous configuration, use
         * <code>CreateSnapshot</code> to make a new snapshot before importing.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ImportGameConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportGameConfigurationOutcome ImportGameConfiguration(const Model::ImportGameConfigurationRequest& request) const;


        /**
         * <p>Gets a paginated list of available versions for the extension.</p> <p> Each
         * time an API change is made to an extension, the version is incremented. The list
         * retrieved by this operation shows the versions that are currently available.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListExtensionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExtensionVersionsOutcome ListExtensionVersions(const Model::ListExtensionVersionsRequest& request) const;


        /**
         * <p>Gets a paginated list of available extensions.</p> <p> Extensions provide
         * features that games can use from scripts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListExtensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExtensionsOutcome ListExtensions(const Model::ListExtensionsRequest& request) const;


        /**
         * <p>Gets a paginated list of games.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListGames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGamesOutcome ListGames(const Model::ListGamesRequest& request) const;


        /**
         * <p>Gets a paginated list of code generation jobs for a snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListGeneratedCodeJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeneratedCodeJobsOutcome ListGeneratedCodeJobs(const Model::ListGeneratedCodeJobsRequest& request) const;


        /**
         * <p>Gets a paginated list of snapshot summaries from the game.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotsOutcome ListSnapshots(const Model::ListSnapshotsRequest& request) const;


        /**
         * <p>Gets a paginated list of stage deployment summaries from the
         * game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListStageDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStageDeploymentsOutcome ListStageDeployments(const Model::ListStageDeploymentsRequest& request) const;


        /**
         * <p>Gets a paginated list of stage summaries from the game.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListStages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStagesOutcome ListStages(const Model::ListStagesRequest& request) const;


        /**
         * <p>Lists the tags associated with a GameSparks resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p> Starts an asynchronous process that generates client code for system-defined
         * and custom messages. The resulting code is collected as a .zip file and uploaded
         * to a pre-signed Amazon S3 URL. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/StartGeneratedCodeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartGeneratedCodeJobOutcome StartGeneratedCodeJob(const Model::StartGeneratedCodeJobRequest& request) const;


        /**
         * <p>Deploys a snapshot to the stage and creates a new game runtime.</p> <p> After
         * you call this operation, you can check the deployment status by using
         * <code>GetStageDeployment</code>. </p> <p> If there are any players connected to
         * the previous game runtime, then both runtimes persist. Existing connections to
         * the previous runtime are maintained. When players disconnect and reconnect, they
         * connect to the new runtime. After there are no connections to the previous game
         * runtime, it is deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/StartStageDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStageDeploymentOutcome StartStageDeployment(const Model::StartStageDeploymentRequest& request) const;


        /**
         * <p>Adds tags to a GameSparks resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a GameSparks resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates details of the game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateGame">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameOutcome UpdateGame(const Model::UpdateGameRequest& request) const;


        /**
         * <p>Updates one or more sections of the game configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateGameConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameConfigurationOutcome UpdateGameConfiguration(const Model::UpdateGameConfigurationRequest& request) const;


        /**
         * <p>Updates the metadata of a GameSparks snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotOutcome UpdateSnapshot(const Model::UpdateSnapshotRequest& request) const;


        /**
         * <p>Updates the metadata of a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GameSparksEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const GameSparksClientConfiguration& clientConfiguration);

      GameSparksClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GameSparksEndpointProviderBase> m_endpointProvider;
  };

} // namespace GameSparks
} // namespace Aws
