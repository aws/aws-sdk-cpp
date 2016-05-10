/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/CreateAliasResult.h>
#include <aws/gamelift/model/CreateBuildResult.h>
#include <aws/gamelift/model/CreateFleetResult.h>
#include <aws/gamelift/model/CreateGameSessionResult.h>
#include <aws/gamelift/model/CreatePlayerSessionResult.h>
#include <aws/gamelift/model/CreatePlayerSessionsResult.h>
#include <aws/gamelift/model/DescribeAliasResult.h>
#include <aws/gamelift/model/DescribeBuildResult.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsResult.h>
#include <aws/gamelift/model/DescribeFleetAttributesResult.h>
#include <aws/gamelift/model/DescribeFleetCapacityResult.h>
#include <aws/gamelift/model/DescribeFleetEventsResult.h>
#include <aws/gamelift/model/DescribeFleetPortSettingsResult.h>
#include <aws/gamelift/model/DescribeFleetUtilizationResult.h>
#include <aws/gamelift/model/DescribeGameSessionsResult.h>
#include <aws/gamelift/model/DescribePlayerSessionsResult.h>
#include <aws/gamelift/model/GetGameSessionLogUrlResult.h>
#include <aws/gamelift/model/ListAliasesResult.h>
#include <aws/gamelift/model/ListBuildsResult.h>
#include <aws/gamelift/model/ListFleetsResult.h>
#include <aws/gamelift/model/RequestUploadCredentialsResult.h>
#include <aws/gamelift/model/ResolveAliasResult.h>
#include <aws/gamelift/model/UpdateAliasResult.h>
#include <aws/gamelift/model/UpdateBuildResult.h>
#include <aws/gamelift/model/UpdateFleetAttributesResult.h>
#include <aws/gamelift/model/UpdateFleetCapacityResult.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsResult.h>
#include <aws/gamelift/model/UpdateGameSessionResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace GameLift
{

namespace Model
{
        class CreateAliasRequest;
        class CreateBuildRequest;
        class CreateFleetRequest;
        class CreateGameSessionRequest;
        class CreatePlayerSessionRequest;
        class CreatePlayerSessionsRequest;
        class DeleteAliasRequest;
        class DeleteBuildRequest;
        class DeleteFleetRequest;
        class DescribeAliasRequest;
        class DescribeBuildRequest;
        class DescribeEC2InstanceLimitsRequest;
        class DescribeFleetAttributesRequest;
        class DescribeFleetCapacityRequest;
        class DescribeFleetEventsRequest;
        class DescribeFleetPortSettingsRequest;
        class DescribeFleetUtilizationRequest;
        class DescribeGameSessionsRequest;
        class DescribePlayerSessionsRequest;
        class GetGameSessionLogUrlRequest;
        class ListAliasesRequest;
        class ListBuildsRequest;
        class ListFleetsRequest;
        class RequestUploadCredentialsRequest;
        class ResolveAliasRequest;
        class UpdateAliasRequest;
        class UpdateBuildRequest;
        class UpdateFleetAttributesRequest;
        class UpdateFleetCapacityRequest;
        class UpdateFleetPortSettingsRequest;
        class UpdateGameSessionRequest;

        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<GameLiftErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateBuildResult, Aws::Client::AWSError<GameLiftErrors>> CreateBuildOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, Aws::Client::AWSError<GameLiftErrors>> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<CreateGameSessionResult, Aws::Client::AWSError<GameLiftErrors>> CreateGameSessionOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionResult, Aws::Client::AWSError<GameLiftErrors>> CreatePlayerSessionOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionsResult, Aws::Client::AWSError<GameLiftErrors>> CreatePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteBuildOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<DescribeAliasResult, Aws::Client::AWSError<GameLiftErrors>> DescribeAliasOutcome;
        typedef Aws::Utils::Outcome<DescribeBuildResult, Aws::Client::AWSError<GameLiftErrors>> DescribeBuildOutcome;
        typedef Aws::Utils::Outcome<DescribeEC2InstanceLimitsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeEC2InstanceLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetAttributesResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetCapacityResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetCapacityOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetEventsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetPortSettingsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetPortSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetUtilizationResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetUtilizationOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeGameSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribePlayerSessionsResult, Aws::Client::AWSError<GameLiftErrors>> DescribePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<GetGameSessionLogUrlResult, Aws::Client::AWSError<GameLiftErrors>> GetGameSessionLogUrlOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<GameLiftErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListBuildsResult, Aws::Client::AWSError<GameLiftErrors>> ListBuildsOutcome;
        typedef Aws::Utils::Outcome<ListFleetsResult, Aws::Client::AWSError<GameLiftErrors>> ListFleetsOutcome;
        typedef Aws::Utils::Outcome<RequestUploadCredentialsResult, Aws::Client::AWSError<GameLiftErrors>> RequestUploadCredentialsOutcome;
        typedef Aws::Utils::Outcome<ResolveAliasResult, Aws::Client::AWSError<GameLiftErrors>> ResolveAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, Aws::Client::AWSError<GameLiftErrors>> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateBuildResult, Aws::Client::AWSError<GameLiftErrors>> UpdateBuildOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetAttributesResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetCapacityResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetCapacityOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetPortSettingsResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetPortSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateGameSessionResult, Aws::Client::AWSError<GameLiftErrors>> UpdateGameSessionOutcome;

        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateBuildOutcome> CreateBuildOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<CreateGameSessionOutcome> CreateGameSessionOutcomeCallable;
        typedef std::future<CreatePlayerSessionOutcome> CreatePlayerSessionOutcomeCallable;
        typedef std::future<CreatePlayerSessionsOutcome> CreatePlayerSessionsOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteBuildOutcome> DeleteBuildOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DescribeAliasOutcome> DescribeAliasOutcomeCallable;
        typedef std::future<DescribeBuildOutcome> DescribeBuildOutcomeCallable;
        typedef std::future<DescribeEC2InstanceLimitsOutcome> DescribeEC2InstanceLimitsOutcomeCallable;
        typedef std::future<DescribeFleetAttributesOutcome> DescribeFleetAttributesOutcomeCallable;
        typedef std::future<DescribeFleetCapacityOutcome> DescribeFleetCapacityOutcomeCallable;
        typedef std::future<DescribeFleetEventsOutcome> DescribeFleetEventsOutcomeCallable;
        typedef std::future<DescribeFleetPortSettingsOutcome> DescribeFleetPortSettingsOutcomeCallable;
        typedef std::future<DescribeFleetUtilizationOutcome> DescribeFleetUtilizationOutcomeCallable;
        typedef std::future<DescribeGameSessionsOutcome> DescribeGameSessionsOutcomeCallable;
        typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
        typedef std::future<GetGameSessionLogUrlOutcome> GetGameSessionLogUrlOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListBuildsOutcome> ListBuildsOutcomeCallable;
        typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
        typedef std::future<RequestUploadCredentialsOutcome> RequestUploadCredentialsOutcomeCallable;
        typedef std::future<ResolveAliasOutcome> ResolveAliasOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateBuildOutcome> UpdateBuildOutcomeCallable;
        typedef std::future<UpdateFleetAttributesOutcome> UpdateFleetAttributesOutcomeCallable;
        typedef std::future<UpdateFleetCapacityOutcome> UpdateFleetCapacityOutcomeCallable;
        typedef std::future<UpdateFleetPortSettingsOutcome> UpdateFleetPortSettingsOutcomeCallable;
        typedef std::future<UpdateGameSessionOutcome> UpdateGameSessionOutcomeCallable;
} // namespace Model

  class GameLiftClient;

    typedef std::function<void(const GameLiftClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateBuildRequest&, const Model::CreateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameSessionRequest&, const Model::CreateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreatePlayerSessionRequest&, const Model::CreatePlayerSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlayerSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreatePlayerSessionsRequest&, const Model::CreatePlayerSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlayerSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteBuildRequest&, const Model::DeleteBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeAliasRequest&, const Model::DescribeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeBuildRequest&, const Model::DescribeBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeEC2InstanceLimitsRequest&, const Model::DescribeEC2InstanceLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEC2InstanceLimitsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetAttributesRequest&, const Model::DescribeFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetCapacityRequest&, const Model::DescribeFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetEventsRequest&, const Model::DescribeFleetEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetEventsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetPortSettingsRequest&, const Model::DescribeFleetPortSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetPortSettingsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetUtilizationRequest&, const Model::DescribeFleetUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetUtilizationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionsRequest&, const Model::DescribeGameSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribePlayerSessionsRequest&, const Model::DescribePlayerSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlayerSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetGameSessionLogUrlRequest&, const Model::GetGameSessionLogUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGameSessionLogUrlResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListBuildsRequest&, const Model::ListBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::RequestUploadCredentialsRequest&, const Model::RequestUploadCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestUploadCredentialsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ResolveAliasRequest&, const Model::ResolveAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateBuildRequest&, const Model::UpdateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetAttributesRequest&, const Model::UpdateFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetCapacityRequest&, const Model::UpdateFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetPortSettingsRequest&, const Model::UpdateFleetPortSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetPortSettingsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameSessionRequest&, const Model::UpdateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameSessionResponseReceivedHandler;

  /**
   * <fullname>Amazon GameLift Service</fullname> <p>Welcome to the <i>Amazon
   * GameLift API Reference</i>. Amazon GameLift is a managed Amazon Web Services
   * (AWS) service for developers who need a scalable, server-based solution for
   * multiplayer games. Amazon GameLift provides setup and deployment of game
   * servers, and handles infrastructure scaling and session management. For more
   * information about the GameLift service, including a feature overview, getting
   * started guide, and tutorial, see the accompanying <a
   * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon
   * GameLift Developer Guide</a>.</p> <p>This reference describes the low-level
   * service API for GameLift. You can call this API directly or use the <a
   * href="https://aws.amazon.com/tools/">AWS SDK</a> for your preferred language.
   * The AWS SDK includes a set of high-level GameLift actions multiplayer game
   * sessions. Alternatively, you can use the <a
   * href="https://aws.amazon.com/cli/">AWS command-line interface</a> (CLI) tool,
   * which includes commands for GameLift. For administrative actions, you can use
   * the Amazon GameLift console. </p> <p><b>Setting Up Your Game Servers</b></p>
   * <p>Use these administrative actions to configure GameLift to host your game
   * servers. When configuring GameLift, you'll need to (1) configure a build for
   * your game and provide build files, and (2) set up one or more fleets to host
   * game sessions.</p> <ul> <li> <b>Build actions:</b> <ul>
   * <li><a>ListBuilds</a></li> <li><a>CreateBuild</a></li>
   * <li><a>DescribeBuild</a></li> <li><a>UpdateBuild</a></li>
   * <li><a>DeleteBuild</a></li> <li><a>RequestUploadCredentials</a></li> </ul> </li>
   * <li> <b>Fleet actions:</b> <ul> <li><a>ListFleets</a></li>
   * <li><a>CreateFleet</a></li> <li>Describe fleet actions: <ul>
   * <li><a>DescribeFleetAttributes</a></li> <li><a>DescribeFleetCapacity</a></li>
   * <li><a>DescribeFleetPortSettings</a></li>
   * <li><a>DescribeFleetUtilization</a></li>
   * <li><a>DescribeEC2InstanceLimits</a></li> <li><a>DescribeFleetEvents</a></li>
   * </ul> </li> <li>Update fleet actions: <ul> <li><a>UpdateFleetAttributes</a></li>
   * <li><a>UpdateFleetCapacity</a></li> <li><a>UpdateFleetPortSettings</a></li>
   * </ul> </li> <li><a>DeleteFleet</a></li> </ul> </li> <li> <b>Alias actions:</b>
   * <ul> <li><a>ListAliases</a></li> <li><a>CreateAlias</a></li>
   * <li><a>DescribeAlias</a></li> <li><a>UpdateAlias</a></li>
   * <li><a>DeleteAlias</a></li> <li><a>ResolveAlias</a></li> </ul> </li> </ul>
   * <p><b>Managing Game and Player Sessions Through GameLift</b></p> <p>Call these
   * actions from your game clients and/or services to create and manage multiplayer
   * game sessions.</p> <ul> <li> <b>Game sessions</b> <ul>
   * <li><a>CreateGameSession</a></li> <li><a>DescribeGameSessions</a></li>
   * <li><a>UpdateGameSession</a></li> </ul> </li> <li> <b>Player sessions</b> <ul>
   * <li><a>CreatePlayerSession</a></li> <li><a>CreatePlayerSessions</a></li>
   * <li><a>DescribePlayerSessions</a></li> </ul> </li> <li> <b>Other actions:</b>
   * <ul> <li><a>GetGameSessionLogUrl</a></li> </ul> </li> </ul>
   */
  class AWS_GAMELIFT_API GameLiftClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameLiftClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        virtual ~GameLiftClient();

        /**
         * <p>Creates an alias for a fleet. You can use an alias to anonymize your fleet by
         * referencing an alias instead of a specific fleet when you create game sessions.
         * Amazon GameLift supports two types of routing strategies for aliases: simple and
         * terminal. Use a simple alias to point to an active fleet. Use a terminal alias
         * to display a message to incoming traffic instead of routing players to an active
         * fleet. This option is useful when a game server is no longer supported but you
         * want to provide better messaging than a standard 404 error.</p> <p>To create a
         * fleet alias, specify an alias name, routing strategy, and optional description.
         * If successful, a new alias record is returned, including an alias ID, which you
         * can reference when creating a game session. To reassign the alias to another
         * fleet ID, call <a>UpdateAlias</a>.</p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a fleet. You can use an alias to anonymize your fleet by
         * referencing an alias instead of a specific fleet when you create game sessions.
         * Amazon GameLift supports two types of routing strategies for aliases: simple and
         * terminal. Use a simple alias to point to an active fleet. Use a terminal alias
         * to display a message to incoming traffic instead of routing players to an active
         * fleet. This option is useful when a game server is no longer supported but you
         * want to provide better messaging than a standard 404 error.</p> <p>To create a
         * fleet alias, specify an alias name, routing strategy, and optional description.
         * If successful, a new alias record is returned, including an alias ID, which you
         * can reference when creating a game session. To reassign the alias to another
         * fleet ID, call <a>UpdateAlias</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a fleet. You can use an alias to anonymize your fleet by
         * referencing an alias instead of a specific fleet when you create game sessions.
         * Amazon GameLift supports two types of routing strategies for aliases: simple and
         * terminal. Use a simple alias to point to an active fleet. Use a terminal alias
         * to display a message to incoming traffic instead of routing players to an active
         * fleet. This option is useful when a game server is no longer supported but you
         * want to provide better messaging than a standard 404 error.</p> <p>To create a
         * fleet alias, specify an alias name, routing strategy, and optional description.
         * If successful, a new alias record is returned, including an alias ID, which you
         * can reference when creating a game session. To reassign the alias to another
         * fleet ID, call <a>UpdateAlias</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initializes a new build record and generates information required to upload a
         * game build to Amazon GameLift. Once the build record has been created and is in
         * an INITIALIZED state, you can upload your game build.</p> <important><p>To
         * create a build, use the CLI command <code>upload-build</code>, which creates a
         * new build record and uploads the build files in one step. (See the <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon
         * GameLift Developer Guide</a> for more details on the CLI and the upload
         * process.) Call the <code>CreateBuild</code> action only if you have your own
         * Amazon Simple Storage Service (Amazon S3) client and need to manually upload
         * your build files.</p></important> <p>To create a new build, optionally specify a
         * build name and version. This metadata is stored with other properties in the
         * build record and is displayed in the GameLift console (but not visible to
         * players). If successful, this action returns the newly created build record
         * along with an Amazon S3 storage location and AWS account credentials. Use the
         * location and credentials to upload your game build.</p>
         */
        virtual Model::CreateBuildOutcome CreateBuild(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Initializes a new build record and generates information required to upload a
         * game build to Amazon GameLift. Once the build record has been created and is in
         * an INITIALIZED state, you can upload your game build.</p> <important><p>To
         * create a build, use the CLI command <code>upload-build</code>, which creates a
         * new build record and uploads the build files in one step. (See the <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon
         * GameLift Developer Guide</a> for more details on the CLI and the upload
         * process.) Call the <code>CreateBuild</code> action only if you have your own
         * Amazon Simple Storage Service (Amazon S3) client and need to manually upload
         * your build files.</p></important> <p>To create a new build, optionally specify a
         * build name and version. This metadata is stored with other properties in the
         * build record and is displayed in the GameLift console (but not visible to
         * players). If successful, this action returns the newly created build record
         * along with an Amazon S3 storage location and AWS account credentials. Use the
         * location and credentials to upload your game build.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBuildOutcomeCallable CreateBuildCallable(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Initializes a new build record and generates information required to upload a
         * game build to Amazon GameLift. Once the build record has been created and is in
         * an INITIALIZED state, you can upload your game build.</p> <important><p>To
         * create a build, use the CLI command <code>upload-build</code>, which creates a
         * new build record and uploads the build files in one step. (See the <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon
         * GameLift Developer Guide</a> for more details on the CLI and the upload
         * process.) Call the <code>CreateBuild</code> action only if you have your own
         * Amazon Simple Storage Service (Amazon S3) client and need to manually upload
         * your build files.</p></important> <p>To create a new build, optionally specify a
         * build name and version. This metadata is stored with other properties in the
         * build record and is displayed in the GameLift console (but not visible to
         * players). If successful, this action returns the newly created build record
         * along with an Amazon S3 storage location and AWS account credentials. Use the
         * location and credentials to upload your game build.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBuildAsync(const Model::CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new fleet to host game servers. A fleet consists of a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances of a certain type, which defines
         * the CPU, memory, storage, and networking capacity of each host in the fleet. See
         * <a href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
         * Types</a> for more information. Each instance in the fleet hosts a game server
         * created from the specified game build. Once a fleet is in an ACTIVE state, it
         * can begin hosting game sessions.</p> <p>To create a new fleet, provide a name
         * and the EC2 instance type for the new fleet, and specify the build and server
         * launch path. Builds must be in a READY state before they can be used to build
         * fleets. When configuring the new fleet, you can optionally (1) provide a set of
         * launch parameters to be passed to a game server when activated; (2) limit
         * incoming traffic to a specified range of IP addresses and port numbers; and (3)
         * configure Amazon GameLift to store game session logs by specifying the path to
         * the logs stored in your game server files. If the call is successful, Amazon
         * GameLift performs the following tasks:</p> <ul> <li>Creates a fleet record and
         * sets the state to NEW.</li> <li>Sets the fleet's capacity to 1 "desired" and 1
         * "active" EC2 instance count.</li> <li>Creates an EC2 instance and begins the
         * process of initializing the fleet and activating a game server on the
         * instance.</li> <li>Begins writing events to the fleet event log, which can be
         * accessed in the GameLift console.</li> </ul> <p>Once a fleet is created, use the
         * following actions to change certain fleet properties (server launch parameters
         * and log paths cannot be changed):</p> <ul> <li> <a>UpdateFleetAttributes</a> --
         * Update fleet metadata, including name and description.</li> <li>
         * <a>UpdateFleetCapacity</a> -- Increase or decrease the number of instances you
         * want the fleet to maintain.</li> <li> <a>UpdateFleetPortSettings</a> -- Change
         * the IP addresses and ports that allow access to incoming traffic.</li> </ul>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a new fleet to host game servers. A fleet consists of a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances of a certain type, which defines
         * the CPU, memory, storage, and networking capacity of each host in the fleet. See
         * <a href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
         * Types</a> for more information. Each instance in the fleet hosts a game server
         * created from the specified game build. Once a fleet is in an ACTIVE state, it
         * can begin hosting game sessions.</p> <p>To create a new fleet, provide a name
         * and the EC2 instance type for the new fleet, and specify the build and server
         * launch path. Builds must be in a READY state before they can be used to build
         * fleets. When configuring the new fleet, you can optionally (1) provide a set of
         * launch parameters to be passed to a game server when activated; (2) limit
         * incoming traffic to a specified range of IP addresses and port numbers; and (3)
         * configure Amazon GameLift to store game session logs by specifying the path to
         * the logs stored in your game server files. If the call is successful, Amazon
         * GameLift performs the following tasks:</p> <ul> <li>Creates a fleet record and
         * sets the state to NEW.</li> <li>Sets the fleet's capacity to 1 "desired" and 1
         * "active" EC2 instance count.</li> <li>Creates an EC2 instance and begins the
         * process of initializing the fleet and activating a game server on the
         * instance.</li> <li>Begins writing events to the fleet event log, which can be
         * accessed in the GameLift console.</li> </ul> <p>Once a fleet is created, use the
         * following actions to change certain fleet properties (server launch parameters
         * and log paths cannot be changed):</p> <ul> <li> <a>UpdateFleetAttributes</a> --
         * Update fleet metadata, including name and description.</li> <li>
         * <a>UpdateFleetCapacity</a> -- Increase or decrease the number of instances you
         * want the fleet to maintain.</li> <li> <a>UpdateFleetPortSettings</a> -- Change
         * the IP addresses and ports that allow access to incoming traffic.</li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a new fleet to host game servers. A fleet consists of a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances of a certain type, which defines
         * the CPU, memory, storage, and networking capacity of each host in the fleet. See
         * <a href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
         * Types</a> for more information. Each instance in the fleet hosts a game server
         * created from the specified game build. Once a fleet is in an ACTIVE state, it
         * can begin hosting game sessions.</p> <p>To create a new fleet, provide a name
         * and the EC2 instance type for the new fleet, and specify the build and server
         * launch path. Builds must be in a READY state before they can be used to build
         * fleets. When configuring the new fleet, you can optionally (1) provide a set of
         * launch parameters to be passed to a game server when activated; (2) limit
         * incoming traffic to a specified range of IP addresses and port numbers; and (3)
         * configure Amazon GameLift to store game session logs by specifying the path to
         * the logs stored in your game server files. If the call is successful, Amazon
         * GameLift performs the following tasks:</p> <ul> <li>Creates a fleet record and
         * sets the state to NEW.</li> <li>Sets the fleet's capacity to 1 "desired" and 1
         * "active" EC2 instance count.</li> <li>Creates an EC2 instance and begins the
         * process of initializing the fleet and activating a game server on the
         * instance.</li> <li>Begins writing events to the fleet event log, which can be
         * accessed in the GameLift console.</li> </ul> <p>Once a fleet is created, use the
         * following actions to change certain fleet properties (server launch parameters
         * and log paths cannot be changed):</p> <ul> <li> <a>UpdateFleetAttributes</a> --
         * Update fleet metadata, including name and description.</li> <li>
         * <a>UpdateFleetCapacity</a> -- Increase or decrease the number of instances you
         * want the fleet to maintain.</li> <li> <a>UpdateFleetPortSettings</a> -- Change
         * the IP addresses and ports that allow access to incoming traffic.</li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a multiplayer game session for players. This action creates a game
         * session record and assigns the new session to an instance in the specified
         * fleet, which activates the server initialization process in your game server. A
         * fleet must be in an ACTIVE state before a game session can be created for
         * it.</p> <p>To create a game session, specify either a fleet ID or an alias ID
         * and indicate the maximum number of players the game session allows. You can also
         * provide a name and a set of properties for your game (optional). If successful,
         * a <a>GameSession</a> object is returned containing session properties, including
         * an IP address. By default, newly created game sessions are set to accept adding
         * any new players to the game session. Use <a>UpdateGameSession</a> to change the
         * creation policy.</p>
         */
        virtual Model::CreateGameSessionOutcome CreateGameSession(const Model::CreateGameSessionRequest& request) const;

        /**
         * <p>Creates a multiplayer game session for players. This action creates a game
         * session record and assigns the new session to an instance in the specified
         * fleet, which activates the server initialization process in your game server. A
         * fleet must be in an ACTIVE state before a game session can be created for
         * it.</p> <p>To create a game session, specify either a fleet ID or an alias ID
         * and indicate the maximum number of players the game session allows. You can also
         * provide a name and a set of properties for your game (optional). If successful,
         * a <a>GameSession</a> object is returned containing session properties, including
         * an IP address. By default, newly created game sessions are set to accept adding
         * any new players to the game session. Use <a>UpdateGameSession</a> to change the
         * creation policy.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameSessionOutcomeCallable CreateGameSessionCallable(const Model::CreateGameSessionRequest& request) const;

        /**
         * <p>Creates a multiplayer game session for players. This action creates a game
         * session record and assigns the new session to an instance in the specified
         * fleet, which activates the server initialization process in your game server. A
         * fleet must be in an ACTIVE state before a game session can be created for
         * it.</p> <p>To create a game session, specify either a fleet ID or an alias ID
         * and indicate the maximum number of players the game session allows. You can also
         * provide a name and a set of properties for your game (optional). If successful,
         * a <a>GameSession</a> object is returned containing session properties, including
         * an IP address. By default, newly created game sessions are set to accept adding
         * any new players to the game session. Use <a>UpdateGameSession</a> to change the
         * creation policy.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameSessionAsync(const Model::CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. A game
         * session must be in an ACTIVE state, have a creation policy of ALLOW_ALL, and
         * have an open player slot before players can be added to the session.</p> <p>To
         * create a player session, specify a game session ID and player ID. If successful,
         * the player is added to the game session and a new <a>PlayerSession</a> object is
         * returned. </p>
         */
        virtual Model::CreatePlayerSessionOutcome CreatePlayerSession(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. A game
         * session must be in an ACTIVE state, have a creation policy of ALLOW_ALL, and
         * have an open player slot before players can be added to the session.</p> <p>To
         * create a player session, specify a game session ID and player ID. If successful,
         * the player is added to the game session and a new <a>PlayerSession</a> object is
         * returned. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionOutcomeCallable CreatePlayerSessionCallable(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. A game
         * session must be in an ACTIVE state, have a creation policy of ALLOW_ALL, and
         * have an open player slot before players can be added to the session.</p> <p>To
         * create a player session, specify a game session ID and player ID. If successful,
         * the player is added to the game session and a new <a>PlayerSession</a> object is
         * returned. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionAsync(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a group of players to a game session. Similar to
         * <a>CreatePlayerSession</a>, this action allows you to add multiple players in a
         * single call, which is useful for games that provide party and/or matchmaking
         * features. A game session must be in an ACTIVE state, have a creation policy of
         * ALLOW_ALL, and have an open player slot before players can be added to the
         * session.</p> <p>To create player sessions, specify a game session ID and a list
         * of player IDs. If successful, the players are added to the game session and a
         * set of new <a>PlayerSession</a> objects is returned. </p>
         */
        virtual Model::CreatePlayerSessionsOutcome CreatePlayerSessions(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Adds a group of players to a game session. Similar to
         * <a>CreatePlayerSession</a>, this action allows you to add multiple players in a
         * single call, which is useful for games that provide party and/or matchmaking
         * features. A game session must be in an ACTIVE state, have a creation policy of
         * ALLOW_ALL, and have an open player slot before players can be added to the
         * session.</p> <p>To create player sessions, specify a game session ID and a list
         * of player IDs. If successful, the players are added to the game session and a
         * set of new <a>PlayerSession</a> objects is returned. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionsOutcomeCallable CreatePlayerSessionsCallable(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Adds a group of players to a game session. Similar to
         * <a>CreatePlayerSession</a>, this action allows you to add multiple players in a
         * single call, which is useful for games that provide party and/or matchmaking
         * features. A game session must be in an ACTIVE state, have a creation policy of
         * ALLOW_ALL, and have an open player slot before players can be added to the
         * session.</p> <p>To create player sessions, specify a game session ID and a list
         * of player IDs. If successful, the players are added to the game session and a
         * set of new <a>PlayerSession</a> objects is returned. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionsAsync(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alias. This action removes all record of the alias; game clients
         * attempting to access a game server using the deleted alias receive an error. To
         * delete an alias, specify the alias ID to be deleted.</p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes an alias. This action removes all record of the alias; game clients
         * attempting to access a game server using the deleted alias receive an error. To
         * delete an alias, specify the alias ID to be deleted.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes an alias. This action removes all record of the alias; game clients
         * attempting to access a game server using the deleted alias receive an error. To
         * delete an alias, specify the alias ID to be deleted.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets, but you can no longer create
         * new fleets for the deleted build.</p>
         */
        virtual Model::DeleteBuildOutcome DeleteBuild(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets, but you can no longer create
         * new fleets for the deleted build.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBuildOutcomeCallable DeleteBuildCallable(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets, but you can no longer create
         * new fleets for the deleted build.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBuildAsync(const Model::DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p>
         * <p>This action removes the fleet's resources and the fleet record. Once a fleet
         * is deleted, you can no longer use that fleet.</p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p>
         * <p>This action removes the fleet's resources and the fleet record. Once a fleet
         * is deleted, you can no longer use that fleet.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p>
         * <p>This action removes the fleet's resources and the fleet record. Once a fleet
         * is deleted, you can no longer use that fleet.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a specified alias. To get the alias, specify an
         * alias ID. If successful, an <a>Alias</a> object is returned.</p>
         */
        virtual Model::DescribeAliasOutcome DescribeAlias(const Model::DescribeAliasRequest& request) const;

        /**
         * <p>Retrieves properties for a specified alias. To get the alias, specify an
         * alias ID. If successful, an <a>Alias</a> object is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAliasOutcomeCallable DescribeAliasCallable(const Model::DescribeAliasRequest& request) const;

        /**
         * <p>Retrieves properties for a specified alias. To get the alias, specify an
         * alias ID. If successful, an <a>Alias</a> object is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAliasAsync(const Model::DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a build. To get a build record, specify a build ID.
         * If successful, an object containing the build properties is returned.</p>
         */
        virtual Model::DescribeBuildOutcome DescribeBuild(const Model::DescribeBuildRequest& request) const;

        /**
         * <p>Retrieves properties for a build. To get a build record, specify a build ID.
         * If successful, an object containing the build properties is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBuildOutcomeCallable DescribeBuildCallable(const Model::DescribeBuildRequest& request) const;

        /**
         * <p>Retrieves properties for a build. To get a build record, specify a build ID.
         * If successful, an object containing the build properties is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBuildAsync(const Model::DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the maximum number of instances allowed, per AWS account, for each
         * specified EC2 instance type. The current usage level for the AWS account is also
         * retrieved.</p>
         */
        virtual Model::DescribeEC2InstanceLimitsOutcome DescribeEC2InstanceLimits(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the maximum number of instances allowed, per AWS account, for each
         * specified EC2 instance type. The current usage level for the AWS account is also
         * retrieved.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEC2InstanceLimitsOutcomeCallable DescribeEC2InstanceLimitsCallable(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the maximum number of instances allowed, per AWS account, for each
         * specified EC2 instance type. The current usage level for the AWS account is also
         * retrieved.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEC2InstanceLimitsAsync(const Model::DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves fleet properties, including metadata, status, and configuration,
         * for one or more fleets. You can request attributes for all fleets, or specify a
         * list of one or more fleet IDs. When requesting all fleets, use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>FleetAttributes</a> object is returned for each requested fleet ID. When
         * specifying a list of fleet IDs, attribute objects are returned only for fleets
         * that currently exist. </p> <note><p>Some API actions may limit the number of
         * fleet IDs allowed in one request. If a request exceeds this limit, the request
         * fails and the error message includes the maximum allowed.</p></note>
         */
        virtual Model::DescribeFleetAttributesOutcome DescribeFleetAttributes(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * <p>Retrieves fleet properties, including metadata, status, and configuration,
         * for one or more fleets. You can request attributes for all fleets, or specify a
         * list of one or more fleet IDs. When requesting all fleets, use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>FleetAttributes</a> object is returned for each requested fleet ID. When
         * specifying a list of fleet IDs, attribute objects are returned only for fleets
         * that currently exist. </p> <note><p>Some API actions may limit the number of
         * fleet IDs allowed in one request. If a request exceeds this limit, the request
         * fails and the error message includes the maximum allowed.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAttributesOutcomeCallable DescribeFleetAttributesCallable(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * <p>Retrieves fleet properties, including metadata, status, and configuration,
         * for one or more fleets. You can request attributes for all fleets, or specify a
         * list of one or more fleet IDs. When requesting all fleets, use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>FleetAttributes</a> object is returned for each requested fleet ID. When
         * specifying a list of fleet IDs, attribute objects are returned only for fleets
         * that currently exist. </p> <note><p>Some API actions may limit the number of
         * fleet IDs allowed in one request. If a request exceeds this limit, the request
         * fails and the error message includes the maximum allowed.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAttributesAsync(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current status of fleet capacity for one or more fleets. This
         * information includes the number of instances that have been requested for the
         * fleet and the number currently active. You can request capacity for all fleets,
         * or specify a list of one or more fleet IDs. When requesting all fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetCapacity</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note><p>Some API actions may limit the number
         * of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p></note>
         */
        virtual Model::DescribeFleetCapacityOutcome DescribeFleetCapacity(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * <p>Retrieves the current status of fleet capacity for one or more fleets. This
         * information includes the number of instances that have been requested for the
         * fleet and the number currently active. You can request capacity for all fleets,
         * or specify a list of one or more fleet IDs. When requesting all fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetCapacity</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note><p>Some API actions may limit the number
         * of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetCapacityOutcomeCallable DescribeFleetCapacityCallable(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * <p>Retrieves the current status of fleet capacity for one or more fleets. This
         * information includes the number of instances that have been requested for the
         * fleet and the number currently active. You can request capacity for all fleets,
         * or specify a list of one or more fleet IDs. When requesting all fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetCapacity</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note><p>Some API actions may limit the number
         * of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetCapacityAsync(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves entries from the fleet event log. You can specify a time range to
         * limit the result set. Use the pagination parameters to retrieve results as a set
         * of sequential pages. If successful, a collection of event log entries matching
         * the request are returned.</p>
         */
        virtual Model::DescribeFleetEventsOutcome DescribeFleetEvents(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * <p>Retrieves entries from the fleet event log. You can specify a time range to
         * limit the result set. Use the pagination parameters to retrieve results as a set
         * of sequential pages. If successful, a collection of event log entries matching
         * the request are returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetEventsOutcomeCallable DescribeFleetEventsCallable(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * <p>Retrieves entries from the fleet event log. You can specify a time range to
         * limit the result set. Use the pagination parameters to retrieve results as a set
         * of sequential pages. If successful, a collection of event log entries matching
         * the request are returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetEventsAsync(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the port settings for a fleet. Port settings are used to limit
         * incoming traffic access to game servers in the fleet. To get a fleet's port
         * settings, specify a fleet ID. If successful, an <a>IpPermission</a> object is
         * returned for the requested fleet ID. If the requested fleet has been deleted,
         * the result set will be empty.</p>
         */
        virtual Model::DescribeFleetPortSettingsOutcome DescribeFleetPortSettings(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * <p>Retrieves the port settings for a fleet. Port settings are used to limit
         * incoming traffic access to game servers in the fleet. To get a fleet's port
         * settings, specify a fleet ID. If successful, an <a>IpPermission</a> object is
         * returned for the requested fleet ID. If the requested fleet has been deleted,
         * the result set will be empty.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetPortSettingsOutcomeCallable DescribeFleetPortSettingsCallable(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * <p>Retrieves the port settings for a fleet. Port settings are used to limit
         * incoming traffic access to game servers in the fleet. To get a fleet's port
         * settings, specify a fleet ID. If successful, an <a>IpPermission</a> object is
         * returned for the requested fleet ID. If the requested fleet has been deleted,
         * the result set will be empty.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetPortSettingsAsync(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. You can request
         * utilization data for all fleets, or specify a list of one or more fleet IDs.
         * When requesting all fleets, use the pagination parameters to retrieve results as
         * a set of sequential pages. If successful, a <a>FleetUtilization</a> object is
         * returned for each requested fleet ID. When specifying a list of fleet IDs,
         * utilization objects are returned only for fleets that currently exist. </p>
         * <note><p>Some API actions may limit the number of fleet IDs allowed in one
         * request. If a request exceeds this limit, the request fails and the error
         * message includes the maximum allowed.</p></note>
         */
        virtual Model::DescribeFleetUtilizationOutcome DescribeFleetUtilization(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. You can request
         * utilization data for all fleets, or specify a list of one or more fleet IDs.
         * When requesting all fleets, use the pagination parameters to retrieve results as
         * a set of sequential pages. If successful, a <a>FleetUtilization</a> object is
         * returned for each requested fleet ID. When specifying a list of fleet IDs,
         * utilization objects are returned only for fleets that currently exist. </p>
         * <note><p>Some API actions may limit the number of fleet IDs allowed in one
         * request. If a request exceeds this limit, the request fails and the error
         * message includes the maximum allowed.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetUtilizationOutcomeCallable DescribeFleetUtilizationCallable(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. You can request
         * utilization data for all fleets, or specify a list of one or more fleet IDs.
         * When requesting all fleets, use the pagination parameters to retrieve results as
         * a set of sequential pages. If successful, a <a>FleetUtilization</a> object is
         * returned for each requested fleet ID. When specifying a list of fleet IDs,
         * utilization objects are returned only for fleets that currently exist. </p>
         * <note><p>Some API actions may limit the number of fleet IDs allowed in one
         * request. If a request exceeds this limit, the request fails and the error
         * message includes the maximum allowed.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetUtilizationAsync(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for one or more game sessions. This action can be used
         * in several ways: (1) provide a <i>GameSessionId</i> parameter to request
         * properties for a specific game session; (2) provide a <i>FleetId</i> or
         * <i>AliasId</i> parameter to request properties for all game sessions running on
         * a fleet. </p> <p>To get game session record(s), specify only one of the
         * following: game session ID, fleet ID, or alias ID. You can filter this request
         * by game session status. Use the pagination parameters to retrieve results as a
         * set of sequential pages. If successful, a <a>GameSession</a> object is returned
         * for each session matching the request.</p>
         */
        virtual Model::DescribeGameSessionsOutcome DescribeGameSessions(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more game sessions. This action can be used
         * in several ways: (1) provide a <i>GameSessionId</i> parameter to request
         * properties for a specific game session; (2) provide a <i>FleetId</i> or
         * <i>AliasId</i> parameter to request properties for all game sessions running on
         * a fleet. </p> <p>To get game session record(s), specify only one of the
         * following: game session ID, fleet ID, or alias ID. You can filter this request
         * by game session status. Use the pagination parameters to retrieve results as a
         * set of sequential pages. If successful, a <a>GameSession</a> object is returned
         * for each session matching the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionsOutcomeCallable DescribeGameSessionsCallable(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more game sessions. This action can be used
         * in several ways: (1) provide a <i>GameSessionId</i> parameter to request
         * properties for a specific game session; (2) provide a <i>FleetId</i> or
         * <i>AliasId</i> parameter to request properties for all game sessions running on
         * a fleet. </p> <p>To get game session record(s), specify only one of the
         * following: game session ID, fleet ID, or alias ID. You can filter this request
         * by game session status. Use the pagination parameters to retrieve results as a
         * set of sequential pages. If successful, a <a>GameSession</a> object is returned
         * for each session matching the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionsAsync(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <i>PlayerSessionId</i> parameter to request
         * properties for a specific player session; (2) provide a <i>GameSessionId</i>
         * parameter to request properties for all player sessions in the specified game
         * session; (3) provide a <i>PlayerId</i> parameter to request properties for all
         * player sessions of a specified player. </p> <p>To get game session record(s),
         * specify only one of the following: a player session ID, a game session ID, or a
         * player ID. You can filter this request by player session status. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>PlayerSession</a> object is returned for each session matching
         * the request.</p>
         */
        virtual Model::DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <i>PlayerSessionId</i> parameter to request
         * properties for a specific player session; (2) provide a <i>GameSessionId</i>
         * parameter to request properties for all player sessions in the specified game
         * session; (3) provide a <i>PlayerId</i> parameter to request properties for all
         * player sessions of a specified player. </p> <p>To get game session record(s),
         * specify only one of the following: a player session ID, a game session ID, or a
         * player ID. You can filter this request by player session status. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>PlayerSession</a> object is returned for each session matching
         * the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <i>PlayerSessionId</i> parameter to request
         * properties for a specific player session; (2) provide a <i>GameSessionId</i>
         * parameter to request properties for all player sessions in the specified game
         * session; (3) provide a <i>PlayerId</i> parameter to request properties for all
         * player sessions of a specified player. </p> <p>To get game session record(s),
         * specify only one of the following: a player session ID, a game session ID, or a
         * player ID. You can filter this request by player session status. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>PlayerSession</a> object is returned for each session matching
         * the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3. Use this URL to download the logs.</p> <note><p>See the
         * <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p></note>
         */
        virtual Model::GetGameSessionLogUrlOutcome GetGameSessionLogUrl(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3. Use this URL to download the logs.</p> <note><p>See the
         * <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGameSessionLogUrlOutcomeCallable GetGameSessionLogUrlCallable(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3. Use this URL to download the logs.</p> <note><p>See the
         * <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGameSessionLogUrlAsync(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages. </p> <note><p>Aliases are
         * not listed in any particular order.</p></note>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages. </p> <note><p>Aliases are
         * not listed in any particular order.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages. </p> <note><p>Aliases are
         * not listed in any particular order.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves build records for all builds associated with an AWS account. You
         * can filter the result set by build status. Use the pagination parameters to
         * retrieve results in a set of sequential pages. </p> <note><p>Build records are
         * not listed in any particular order.</p></note>
         */
        virtual Model::ListBuildsOutcome ListBuilds(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build records for all builds associated with an AWS account. You
         * can filter the result set by build status. Use the pagination parameters to
         * retrieve results in a set of sequential pages. </p> <note><p>Build records are
         * not listed in any particular order.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsOutcomeCallable ListBuildsCallable(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build records for all builds associated with an AWS account. You
         * can filter the result set by build status. Use the pagination parameters to
         * retrieve results in a set of sequential pages. </p> <note><p>Build records are
         * not listed in any particular order.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsAsync(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages. </p> <note><p>Fleet records are not listed in any particular
         * order.</p></note>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages. </p> <note><p>Fleet records are not listed in any particular
         * order.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages. </p> <note><p>Fleet records are not listed in any particular
         * order.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fresh set of upload credentials and the assigned Amazon S3
         * storage location for a specific build. Valid credentials are required to upload
         * your game build files to Amazon S3.</p> <important><p>Call this action only if
         * you need credentials for a build created with <a>CreateBuild</a>. This is a rare
         * situation; in most cases, builds are created using the CLI command
         * <code>upload-build</code>, which creates a build record and also uploads build
         * files. </p></important> <p>Upload credentials are returned when you create the
         * build, but they have a limited lifespan. You can get fresh credentials and use
         * them to re-upload game files until the state of that build changes to READY.
         * Once this happens, you must create a brand new build.</p>
         */
        virtual Model::RequestUploadCredentialsOutcome RequestUploadCredentials(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p>Retrieves a fresh set of upload credentials and the assigned Amazon S3
         * storage location for a specific build. Valid credentials are required to upload
         * your game build files to Amazon S3.</p> <important><p>Call this action only if
         * you need credentials for a build created with <a>CreateBuild</a>. This is a rare
         * situation; in most cases, builds are created using the CLI command
         * <code>upload-build</code>, which creates a build record and also uploads build
         * files. </p></important> <p>Upload credentials are returned when you create the
         * build, but they have a limited lifespan. You can get fresh credentials and use
         * them to re-upload game files until the state of that build changes to READY.
         * Once this happens, you must create a brand new build.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestUploadCredentialsOutcomeCallable RequestUploadCredentialsCallable(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p>Retrieves a fresh set of upload credentials and the assigned Amazon S3
         * storage location for a specific build. Valid credentials are required to upload
         * your game build files to Amazon S3.</p> <important><p>Call this action only if
         * you need credentials for a build created with <a>CreateBuild</a>. This is a rare
         * situation; in most cases, builds are created using the CLI command
         * <code>upload-build</code>, which creates a build record and also uploads build
         * files. </p></important> <p>Upload credentials are returned when you create the
         * build, but they have a limited lifespan. You can get fresh credentials and use
         * them to re-upload game files until the state of that build changes to READY.
         * Once this happens, you must create a brand new build.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestUploadCredentialsAsync(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing to. </p>
         */
        virtual Model::ResolveAliasOutcome ResolveAlias(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing to. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveAliasOutcomeCallable ResolveAliasCallable(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing to. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveAliasAsync(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties for an alias. To update properties, specify the alias ID
         * to be updated and provide the information to be changed. To reassign an alias to
         * another fleet, provide an updated routing strategy. If successful, the updated
         * alias record is returned.</p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates properties for an alias. To update properties, specify the alias ID
         * to be updated and provide the information to be changed. To reassign an alias to
         * another fleet, provide an updated routing strategy. If successful, the updated
         * alias record is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates properties for an alias. To update properties, specify the alias ID
         * to be updated and provide the information to be changed. To reassign an alias to
         * another fleet, provide an updated routing strategy. If successful, the updated
         * alias record is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is returned. </p>
         */
        virtual Model::UpdateBuildOutcome UpdateBuild(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is returned. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBuildOutcomeCallable UpdateBuildCallable(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is returned. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBuildAsync(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values you want to
         * change. If successful, the fleet ID for the updated fleet is returned.</p>
         */
        virtual Model::UpdateFleetAttributesOutcome UpdateFleetAttributes(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values you want to
         * change. If successful, the fleet ID for the updated fleet is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetAttributesOutcomeCallable UpdateFleetAttributesCallable(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values you want to
         * change. If successful, the fleet ID for the updated fleet is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetAttributesAsync(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this action to specify the number
         * of EC2 instances (hosts) you want this fleet to contain. Before calling this
         * action, you may want to call <a>DescribeEC2InstanceLimits</a> to get the maximum
         * capacity based on the fleet's EC2 instance type.</p> <p>To update fleet
         * capacity, specify the fleet ID and the desired number of instances. If
         * successful, Amazon GameLift starts or terminates instances so that the fleet's
         * active instance count matches the desired instance count. You can view a fleet's
         * current capacity information by calling <a>DescribeFleetCapacity</a>. If the
         * desired instance count is higher than the instance type's limit, the "Limit
         * Exceeded" exception will occur.</p>
         */
        virtual Model::UpdateFleetCapacityOutcome UpdateFleetCapacity(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this action to specify the number
         * of EC2 instances (hosts) you want this fleet to contain. Before calling this
         * action, you may want to call <a>DescribeEC2InstanceLimits</a> to get the maximum
         * capacity based on the fleet's EC2 instance type.</p> <p>To update fleet
         * capacity, specify the fleet ID and the desired number of instances. If
         * successful, Amazon GameLift starts or terminates instances so that the fleet's
         * active instance count matches the desired instance count. You can view a fleet's
         * current capacity information by calling <a>DescribeFleetCapacity</a>. If the
         * desired instance count is higher than the instance type's limit, the "Limit
         * Exceeded" exception will occur.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetCapacityOutcomeCallable UpdateFleetCapacityCallable(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this action to specify the number
         * of EC2 instances (hosts) you want this fleet to contain. Before calling this
         * action, you may want to call <a>DescribeEC2InstanceLimits</a> to get the maximum
         * capacity based on the fleet's EC2 instance type.</p> <p>To update fleet
         * capacity, specify the fleet ID and the desired number of instances. If
         * successful, Amazon GameLift starts or terminates instances so that the fleet's
         * active instance count matches the desired instance count. You can view a fleet's
         * current capacity information by calling <a>DescribeFleetCapacity</a>. If the
         * desired instance count is higher than the instance type's limit, the "Limit
         * Exceeded" exception will occur.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetCapacityAsync(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates port settings for a fleet. To update settings, specify the fleet ID
         * to be updated and list the permissions you want to update. List the permissions
         * you want to add in <i>InboundPermissionAuthorizations</i>, and permissions you
         * want to remove in <i>InboundPermissionRevocations</i>. Permissions to be removed
         * must match existing fleet permissions. If successful, the fleet ID for the
         * updated fleet is returned.</p>
         */
        virtual Model::UpdateFleetPortSettingsOutcome UpdateFleetPortSettings(const Model::UpdateFleetPortSettingsRequest& request) const;

        /**
         * <p>Updates port settings for a fleet. To update settings, specify the fleet ID
         * to be updated and list the permissions you want to update. List the permissions
         * you want to add in <i>InboundPermissionAuthorizations</i>, and permissions you
         * want to remove in <i>InboundPermissionRevocations</i>. Permissions to be removed
         * must match existing fleet permissions. If successful, the fleet ID for the
         * updated fleet is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetPortSettingsOutcomeCallable UpdateFleetPortSettingsCallable(const Model::UpdateFleetPortSettingsRequest& request) const;

        /**
         * <p>Updates port settings for a fleet. To update settings, specify the fleet ID
         * to be updated and list the permissions you want to update. List the permissions
         * you want to add in <i>InboundPermissionAuthorizations</i>, and permissions you
         * want to remove in <i>InboundPermissionRevocations</i>. Permissions to be removed
         * must match existing fleet permissions. If successful, the fleet ID for the
         * updated fleet is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetPortSettingsAsync(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count and the player session creation policy, which either allows or
         * denies new players from joining the session. To update a game session, specify
         * the game session ID and the values you want to change. If successful, an updated
         * <a>GameSession</a> object is returned. </p>
         */
        virtual Model::UpdateGameSessionOutcome UpdateGameSession(const Model::UpdateGameSessionRequest& request) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count and the player session creation policy, which either allows or
         * denies new players from joining the session. To update a game session, specify
         * the game session ID and the values you want to change. If successful, an updated
         * <a>GameSession</a> object is returned. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameSessionOutcomeCallable UpdateGameSessionCallable(const Model::UpdateGameSessionRequest& request) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count and the player session creation policy, which either allows or
         * denies new players from joining the session. To update a game session, specify
         * the game session ID and the values you want to change. If successful, an updated
         * <a>GameSession</a> object is returned. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameSessionAsync(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBuildAsyncHelper(const Model::CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFleetAsyncHelper(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGameSessionAsyncHelper(const Model::CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlayerSessionAsyncHelper(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlayerSessionsAsyncHelper(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBuildAsyncHelper(const Model::DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFleetAsyncHelper(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAliasAsyncHelper(const Model::DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBuildAsyncHelper(const Model::DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEC2InstanceLimitsAsyncHelper(const Model::DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetAttributesAsyncHelper(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetCapacityAsyncHelper(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetEventsAsyncHelper(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetPortSettingsAsyncHelper(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetUtilizationAsyncHelper(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionsAsyncHelper(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlayerSessionsAsyncHelper(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGameSessionLogUrlAsyncHelper(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsAsyncHelper(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFleetsAsyncHelper(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestUploadCredentialsAsyncHelper(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveAliasAsyncHelper(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBuildAsyncHelper(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetAttributesAsyncHelper(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetCapacityAsyncHelper(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetPortSettingsAsyncHelper(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameSessionAsyncHelper(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace GameLift
} // namespace Aws
