/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamesparks/GameSparksServiceClientModel.h>

namespace Aws
{
namespace GameSparks
{
  /**
   * <p/>
   */
  class AWS_GAMESPARKS_API GameSparksClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GameSparksClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef GameSparksClientConfiguration ClientConfigurationType;
      typedef GameSparksEndpointProvider EndpointProviderType;

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

        /**
         * <p> Creates a new game with an empty configuration. After creating your game,
         * you can update the configuration using <code>UpdateGameConfiguration</code> or
         * <code>ImportGameConfiguration</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/CreateGame">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameOutcome CreateGame(const Model::CreateGameRequest& request) const;

        /**
         * A Callable wrapper for CreateGame that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGameRequestT = Model::CreateGameRequest>
        Model::CreateGameOutcomeCallable CreateGameCallable(const CreateGameRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::CreateGame, request);
        }

        /**
         * An Async wrapper for CreateGame that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGameRequestT = Model::CreateGameRequest>
        void CreateGameAsync(const CreateGameRequestT& request, const CreateGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::CreateGame, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of the game configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const CreateSnapshotRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::CreateSnapshot, request);
        }

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        void CreateSnapshotAsync(const CreateSnapshotRequestT& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::CreateSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a new stage for stage-by-stage game development and
         * deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/CreateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request) const;

        /**
         * A Callable wrapper for CreateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        Model::CreateStageOutcomeCallable CreateStageCallable(const CreateStageRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::CreateStage, request);
        }

        /**
         * An Async wrapper for CreateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        void CreateStageAsync(const CreateStageRequestT& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::CreateStage, request, handler, context);
        }

        /**
         * <p>Deletes a game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/DeleteGame">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGameOutcome DeleteGame(const Model::DeleteGameRequest& request) const;

        /**
         * A Callable wrapper for DeleteGame that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGameRequestT = Model::DeleteGameRequest>
        Model::DeleteGameOutcomeCallable DeleteGameCallable(const DeleteGameRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::DeleteGame, request);
        }

        /**
         * An Async wrapper for DeleteGame that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGameRequestT = Model::DeleteGameRequest>
        void DeleteGameAsync(const DeleteGameRequestT& request, const DeleteGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::DeleteGame, request, handler, context);
        }

        /**
         * <p>Deletes a stage from a game, along with the associated game
         * runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;

        /**
         * A Callable wrapper for DeleteStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        Model::DeleteStageOutcomeCallable DeleteStageCallable(const DeleteStageRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::DeleteStage, request);
        }

        /**
         * An Async wrapper for DeleteStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        void DeleteStageAsync(const DeleteStageRequestT& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::DeleteStage, request, handler, context);
        }

        /**
         * <p>Disconnects a player from the game runtime.</p> <p> If a player has multiple
         * connections, this operation attempts to close all of them. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/DisconnectPlayer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectPlayerOutcome DisconnectPlayer(const Model::DisconnectPlayerRequest& request) const;

        /**
         * A Callable wrapper for DisconnectPlayer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisconnectPlayerRequestT = Model::DisconnectPlayerRequest>
        Model::DisconnectPlayerOutcomeCallable DisconnectPlayerCallable(const DisconnectPlayerRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::DisconnectPlayer, request);
        }

        /**
         * An Async wrapper for DisconnectPlayer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisconnectPlayerRequestT = Model::DisconnectPlayerRequest>
        void DisconnectPlayerAsync(const DisconnectPlayerRequestT& request, const DisconnectPlayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::DisconnectPlayer, request, handler, context);
        }

        /**
         * <p>Exports a game configuration snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ExportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportSnapshotOutcome ExportSnapshot(const Model::ExportSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ExportSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportSnapshotRequestT = Model::ExportSnapshotRequest>
        Model::ExportSnapshotOutcomeCallable ExportSnapshotCallable(const ExportSnapshotRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ExportSnapshot, request);
        }

        /**
         * An Async wrapper for ExportSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportSnapshotRequestT = Model::ExportSnapshotRequest>
        void ExportSnapshotAsync(const ExportSnapshotRequestT& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ExportSnapshot, request, handler, context);
        }

        /**
         * <p>Gets details about a specified extension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExtensionOutcome GetExtension(const Model::GetExtensionRequest& request) const;

        /**
         * A Callable wrapper for GetExtension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExtensionRequestT = Model::GetExtensionRequest>
        Model::GetExtensionOutcomeCallable GetExtensionCallable(const GetExtensionRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetExtension, request);
        }

        /**
         * An Async wrapper for GetExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExtensionRequestT = Model::GetExtensionRequest>
        void GetExtensionAsync(const GetExtensionRequestT& request, const GetExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetExtension, request, handler, context);
        }

        /**
         * <p>Gets details about a specified extension version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetExtensionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExtensionVersionOutcome GetExtensionVersion(const Model::GetExtensionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetExtensionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExtensionVersionRequestT = Model::GetExtensionVersionRequest>
        Model::GetExtensionVersionOutcomeCallable GetExtensionVersionCallable(const GetExtensionVersionRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetExtensionVersion, request);
        }

        /**
         * An Async wrapper for GetExtensionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExtensionVersionRequestT = Model::GetExtensionVersionRequest>
        void GetExtensionVersionAsync(const GetExtensionVersionRequestT& request, const GetExtensionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetExtensionVersion, request, handler, context);
        }

        /**
         * <p>Gets details about a game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetGame">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGameOutcome GetGame(const Model::GetGameRequest& request) const;

        /**
         * A Callable wrapper for GetGame that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGameRequestT = Model::GetGameRequest>
        Model::GetGameOutcomeCallable GetGameCallable(const GetGameRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetGame, request);
        }

        /**
         * An Async wrapper for GetGame that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGameRequestT = Model::GetGameRequest>
        void GetGameAsync(const GetGameRequestT& request, const GetGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetGame, request, handler, context);
        }

        /**
         * <p>Gets the configuration of the game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetGameConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGameConfigurationOutcome GetGameConfiguration(const Model::GetGameConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetGameConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGameConfigurationRequestT = Model::GetGameConfigurationRequest>
        Model::GetGameConfigurationOutcomeCallable GetGameConfigurationCallable(const GetGameConfigurationRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetGameConfiguration, request);
        }

        /**
         * An Async wrapper for GetGameConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGameConfigurationRequestT = Model::GetGameConfigurationRequest>
        void GetGameConfigurationAsync(const GetGameConfigurationRequestT& request, const GetGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetGameConfiguration, request, handler, context);
        }

        /**
         * <p>Gets details about a job that is generating code for a
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetGeneratedCodeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeneratedCodeJobOutcome GetGeneratedCodeJob(const Model::GetGeneratedCodeJobRequest& request) const;

        /**
         * A Callable wrapper for GetGeneratedCodeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGeneratedCodeJobRequestT = Model::GetGeneratedCodeJobRequest>
        Model::GetGeneratedCodeJobOutcomeCallable GetGeneratedCodeJobCallable(const GetGeneratedCodeJobRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetGeneratedCodeJob, request);
        }

        /**
         * An Async wrapper for GetGeneratedCodeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGeneratedCodeJobRequestT = Model::GetGeneratedCodeJobRequest>
        void GetGeneratedCodeJobAsync(const GetGeneratedCodeJobRequestT& request, const GetGeneratedCodeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetGeneratedCodeJob, request, handler, context);
        }

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
         * A Callable wrapper for GetPlayerConnectionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPlayerConnectionStatusRequestT = Model::GetPlayerConnectionStatusRequest>
        Model::GetPlayerConnectionStatusOutcomeCallable GetPlayerConnectionStatusCallable(const GetPlayerConnectionStatusRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetPlayerConnectionStatus, request);
        }

        /**
         * An Async wrapper for GetPlayerConnectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPlayerConnectionStatusRequestT = Model::GetPlayerConnectionStatusRequest>
        void GetPlayerConnectionStatusAsync(const GetPlayerConnectionStatusRequestT& request, const GetPlayerConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetPlayerConnectionStatus, request, handler, context);
        }

        /**
         * <p>Gets a copy of the game configuration in a snapshot.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotOutcome GetSnapshot(const Model::GetSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSnapshotRequestT = Model::GetSnapshotRequest>
        Model::GetSnapshotOutcomeCallable GetSnapshotCallable(const GetSnapshotRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetSnapshot, request);
        }

        /**
         * An Async wrapper for GetSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSnapshotRequestT = Model::GetSnapshotRequest>
        void GetSnapshotAsync(const GetSnapshotRequestT& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetSnapshot, request, handler, context);
        }

        /**
         * <p>Gets information about a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;

        /**
         * A Callable wrapper for GetStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        Model::GetStageOutcomeCallable GetStageCallable(const GetStageRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetStage, request);
        }

        /**
         * An Async wrapper for GetStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        void GetStageAsync(const GetStageRequestT& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetStage, request, handler, context);
        }

        /**
         * <p>Gets information about a stage deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GetStageDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageDeploymentOutcome GetStageDeployment(const Model::GetStageDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetStageDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStageDeploymentRequestT = Model::GetStageDeploymentRequest>
        Model::GetStageDeploymentOutcomeCallable GetStageDeploymentCallable(const GetStageDeploymentRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::GetStageDeployment, request);
        }

        /**
         * An Async wrapper for GetStageDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStageDeploymentRequestT = Model::GetStageDeploymentRequest>
        void GetStageDeploymentAsync(const GetStageDeploymentRequestT& request, const GetStageDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::GetStageDeployment, request, handler, context);
        }

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
         * A Callable wrapper for ImportGameConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportGameConfigurationRequestT = Model::ImportGameConfigurationRequest>
        Model::ImportGameConfigurationOutcomeCallable ImportGameConfigurationCallable(const ImportGameConfigurationRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ImportGameConfiguration, request);
        }

        /**
         * An Async wrapper for ImportGameConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportGameConfigurationRequestT = Model::ImportGameConfigurationRequest>
        void ImportGameConfigurationAsync(const ImportGameConfigurationRequestT& request, const ImportGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ImportGameConfiguration, request, handler, context);
        }

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
         * A Callable wrapper for ListExtensionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExtensionVersionsRequestT = Model::ListExtensionVersionsRequest>
        Model::ListExtensionVersionsOutcomeCallable ListExtensionVersionsCallable(const ListExtensionVersionsRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListExtensionVersions, request);
        }

        /**
         * An Async wrapper for ListExtensionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExtensionVersionsRequestT = Model::ListExtensionVersionsRequest>
        void ListExtensionVersionsAsync(const ListExtensionVersionsRequestT& request, const ListExtensionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListExtensionVersions, request, handler, context);
        }

        /**
         * <p>Gets a paginated list of available extensions.</p> <p> Extensions provide
         * features that games can use from scripts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListExtensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExtensionsOutcome ListExtensions(const Model::ListExtensionsRequest& request) const;

        /**
         * A Callable wrapper for ListExtensions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExtensionsRequestT = Model::ListExtensionsRequest>
        Model::ListExtensionsOutcomeCallable ListExtensionsCallable(const ListExtensionsRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListExtensions, request);
        }

        /**
         * An Async wrapper for ListExtensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExtensionsRequestT = Model::ListExtensionsRequest>
        void ListExtensionsAsync(const ListExtensionsRequestT& request, const ListExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListExtensions, request, handler, context);
        }

        /**
         * <p>Gets a paginated list of games.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListGames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGamesOutcome ListGames(const Model::ListGamesRequest& request) const;

        /**
         * A Callable wrapper for ListGames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGamesRequestT = Model::ListGamesRequest>
        Model::ListGamesOutcomeCallable ListGamesCallable(const ListGamesRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListGames, request);
        }

        /**
         * An Async wrapper for ListGames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGamesRequestT = Model::ListGamesRequest>
        void ListGamesAsync(const ListGamesRequestT& request, const ListGamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListGames, request, handler, context);
        }

        /**
         * <p>Gets a paginated list of code generation jobs for a snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListGeneratedCodeJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeneratedCodeJobsOutcome ListGeneratedCodeJobs(const Model::ListGeneratedCodeJobsRequest& request) const;

        /**
         * A Callable wrapper for ListGeneratedCodeJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGeneratedCodeJobsRequestT = Model::ListGeneratedCodeJobsRequest>
        Model::ListGeneratedCodeJobsOutcomeCallable ListGeneratedCodeJobsCallable(const ListGeneratedCodeJobsRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListGeneratedCodeJobs, request);
        }

        /**
         * An Async wrapper for ListGeneratedCodeJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGeneratedCodeJobsRequestT = Model::ListGeneratedCodeJobsRequest>
        void ListGeneratedCodeJobsAsync(const ListGeneratedCodeJobsRequestT& request, const ListGeneratedCodeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListGeneratedCodeJobs, request, handler, context);
        }

        /**
         * <p>Gets a paginated list of snapshot summaries from the game.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotsOutcome ListSnapshots(const Model::ListSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for ListSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSnapshotsRequestT = Model::ListSnapshotsRequest>
        Model::ListSnapshotsOutcomeCallable ListSnapshotsCallable(const ListSnapshotsRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListSnapshots, request);
        }

        /**
         * An Async wrapper for ListSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSnapshotsRequestT = Model::ListSnapshotsRequest>
        void ListSnapshotsAsync(const ListSnapshotsRequestT& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListSnapshots, request, handler, context);
        }

        /**
         * <p>Gets a paginated list of stage deployment summaries from the
         * game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListStageDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStageDeploymentsOutcome ListStageDeployments(const Model::ListStageDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListStageDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStageDeploymentsRequestT = Model::ListStageDeploymentsRequest>
        Model::ListStageDeploymentsOutcomeCallable ListStageDeploymentsCallable(const ListStageDeploymentsRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListStageDeployments, request);
        }

        /**
         * An Async wrapper for ListStageDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStageDeploymentsRequestT = Model::ListStageDeploymentsRequest>
        void ListStageDeploymentsAsync(const ListStageDeploymentsRequestT& request, const ListStageDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListStageDeployments, request, handler, context);
        }

        /**
         * <p>Gets a paginated list of stage summaries from the game.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListStages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStagesOutcome ListStages(const Model::ListStagesRequest& request) const;

        /**
         * A Callable wrapper for ListStages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStagesRequestT = Model::ListStagesRequest>
        Model::ListStagesOutcomeCallable ListStagesCallable(const ListStagesRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListStages, request);
        }

        /**
         * An Async wrapper for ListStages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStagesRequestT = Model::ListStagesRequest>
        void ListStagesAsync(const ListStagesRequestT& request, const ListStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListStages, request, handler, context);
        }

        /**
         * <p>Lists the tags associated with a GameSparks resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Starts an asynchronous process that generates client code for system-defined
         * and custom messages. The resulting code is collected as a .zip file and uploaded
         * to a pre-signed Amazon S3 URL. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/StartGeneratedCodeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartGeneratedCodeJobOutcome StartGeneratedCodeJob(const Model::StartGeneratedCodeJobRequest& request) const;

        /**
         * A Callable wrapper for StartGeneratedCodeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartGeneratedCodeJobRequestT = Model::StartGeneratedCodeJobRequest>
        Model::StartGeneratedCodeJobOutcomeCallable StartGeneratedCodeJobCallable(const StartGeneratedCodeJobRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::StartGeneratedCodeJob, request);
        }

        /**
         * An Async wrapper for StartGeneratedCodeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartGeneratedCodeJobRequestT = Model::StartGeneratedCodeJobRequest>
        void StartGeneratedCodeJobAsync(const StartGeneratedCodeJobRequestT& request, const StartGeneratedCodeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::StartGeneratedCodeJob, request, handler, context);
        }

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
         * A Callable wrapper for StartStageDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartStageDeploymentRequestT = Model::StartStageDeploymentRequest>
        Model::StartStageDeploymentOutcomeCallable StartStageDeploymentCallable(const StartStageDeploymentRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::StartStageDeployment, request);
        }

        /**
         * An Async wrapper for StartStageDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartStageDeploymentRequestT = Model::StartStageDeploymentRequest>
        void StartStageDeploymentAsync(const StartStageDeploymentRequestT& request, const StartStageDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::StartStageDeployment, request, handler, context);
        }

        /**
         * <p>Adds tags to a GameSparks resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a GameSparks resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates details of the game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateGame">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameOutcome UpdateGame(const Model::UpdateGameRequest& request) const;

        /**
         * A Callable wrapper for UpdateGame that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGameRequestT = Model::UpdateGameRequest>
        Model::UpdateGameOutcomeCallable UpdateGameCallable(const UpdateGameRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::UpdateGame, request);
        }

        /**
         * An Async wrapper for UpdateGame that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGameRequestT = Model::UpdateGameRequest>
        void UpdateGameAsync(const UpdateGameRequestT& request, const UpdateGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::UpdateGame, request, handler, context);
        }

        /**
         * <p>Updates one or more sections of the game configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateGameConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameConfigurationOutcome UpdateGameConfiguration(const Model::UpdateGameConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateGameConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGameConfigurationRequestT = Model::UpdateGameConfigurationRequest>
        Model::UpdateGameConfigurationOutcomeCallable UpdateGameConfigurationCallable(const UpdateGameConfigurationRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::UpdateGameConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateGameConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGameConfigurationRequestT = Model::UpdateGameConfigurationRequest>
        void UpdateGameConfigurationAsync(const UpdateGameConfigurationRequestT& request, const UpdateGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::UpdateGameConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the metadata of a GameSparks snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotOutcome UpdateSnapshot(const Model::UpdateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for UpdateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSnapshotRequestT = Model::UpdateSnapshotRequest>
        Model::UpdateSnapshotOutcomeCallable UpdateSnapshotCallable(const UpdateSnapshotRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::UpdateSnapshot, request);
        }

        /**
         * An Async wrapper for UpdateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSnapshotRequestT = Model::UpdateSnapshotRequest>
        void UpdateSnapshotAsync(const UpdateSnapshotRequestT& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::UpdateSnapshot, request, handler, context);
        }

        /**
         * <p>Updates the metadata of a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        Model::UpdateStageOutcomeCallable UpdateStageCallable(const UpdateStageRequestT& request) const
        {
            return SubmitCallable(&GameSparksClient::UpdateStage, request);
        }

        /**
         * An Async wrapper for UpdateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        void UpdateStageAsync(const UpdateStageRequestT& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameSparksClient::UpdateStage, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GameSparksEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GameSparksClient>;
      void init(const GameSparksClientConfiguration& clientConfiguration);

      GameSparksClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GameSparksEndpointProviderBase> m_endpointProvider;
  };

} // namespace GameSparks
} // namespace Aws
