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
#include <aws/gamelift/model/DescribeGameSessionDetailsResult.h>
#include <aws/gamelift/model/DescribeGameSessionsResult.h>
#include <aws/gamelift/model/DescribeInstancesResult.h>
#include <aws/gamelift/model/DescribePlayerSessionsResult.h>
#include <aws/gamelift/model/DescribeRuntimeConfigurationResult.h>
#include <aws/gamelift/model/DescribeScalingPoliciesResult.h>
#include <aws/gamelift/model/GetGameSessionLogUrlResult.h>
#include <aws/gamelift/model/ListAliasesResult.h>
#include <aws/gamelift/model/ListBuildsResult.h>
#include <aws/gamelift/model/ListFleetsResult.h>
#include <aws/gamelift/model/PutScalingPolicyResult.h>
#include <aws/gamelift/model/RequestUploadCredentialsResult.h>
#include <aws/gamelift/model/ResolveAliasResult.h>
#include <aws/gamelift/model/SearchGameSessionsResult.h>
#include <aws/gamelift/model/UpdateAliasResult.h>
#include <aws/gamelift/model/UpdateBuildResult.h>
#include <aws/gamelift/model/UpdateFleetAttributesResult.h>
#include <aws/gamelift/model/UpdateFleetCapacityResult.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsResult.h>
#include <aws/gamelift/model/UpdateGameSessionResult.h>
#include <aws/gamelift/model/UpdateRuntimeConfigurationResult.h>
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
        class DeleteScalingPolicyRequest;
        class DescribeAliasRequest;
        class DescribeBuildRequest;
        class DescribeEC2InstanceLimitsRequest;
        class DescribeFleetAttributesRequest;
        class DescribeFleetCapacityRequest;
        class DescribeFleetEventsRequest;
        class DescribeFleetPortSettingsRequest;
        class DescribeFleetUtilizationRequest;
        class DescribeGameSessionDetailsRequest;
        class DescribeGameSessionsRequest;
        class DescribeInstancesRequest;
        class DescribePlayerSessionsRequest;
        class DescribeRuntimeConfigurationRequest;
        class DescribeScalingPoliciesRequest;
        class GetGameSessionLogUrlRequest;
        class ListAliasesRequest;
        class ListBuildsRequest;
        class ListFleetsRequest;
        class PutScalingPolicyRequest;
        class RequestUploadCredentialsRequest;
        class ResolveAliasRequest;
        class SearchGameSessionsRequest;
        class UpdateAliasRequest;
        class UpdateBuildRequest;
        class UpdateFleetAttributesRequest;
        class UpdateFleetCapacityRequest;
        class UpdateFleetPortSettingsRequest;
        class UpdateGameSessionRequest;
        class UpdateRuntimeConfigurationRequest;

        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<GameLiftErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateBuildResult, Aws::Client::AWSError<GameLiftErrors>> CreateBuildOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, Aws::Client::AWSError<GameLiftErrors>> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<CreateGameSessionResult, Aws::Client::AWSError<GameLiftErrors>> CreateGameSessionOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionResult, Aws::Client::AWSError<GameLiftErrors>> CreatePlayerSessionOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionsResult, Aws::Client::AWSError<GameLiftErrors>> CreatePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteBuildOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeAliasResult, Aws::Client::AWSError<GameLiftErrors>> DescribeAliasOutcome;
        typedef Aws::Utils::Outcome<DescribeBuildResult, Aws::Client::AWSError<GameLiftErrors>> DescribeBuildOutcome;
        typedef Aws::Utils::Outcome<DescribeEC2InstanceLimitsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeEC2InstanceLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetAttributesResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetCapacityResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetCapacityOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetEventsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetPortSettingsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetPortSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetUtilizationResult, Aws::Client::AWSError<GameLiftErrors>> DescribeFleetUtilizationOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionDetailsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeGameSessionDetailsOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeGameSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancesResult, Aws::Client::AWSError<GameLiftErrors>> DescribeInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribePlayerSessionsResult, Aws::Client::AWSError<GameLiftErrors>> DescribePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribeRuntimeConfigurationResult, Aws::Client::AWSError<GameLiftErrors>> DescribeRuntimeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingPoliciesResult, Aws::Client::AWSError<GameLiftErrors>> DescribeScalingPoliciesOutcome;
        typedef Aws::Utils::Outcome<GetGameSessionLogUrlResult, Aws::Client::AWSError<GameLiftErrors>> GetGameSessionLogUrlOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<GameLiftErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListBuildsResult, Aws::Client::AWSError<GameLiftErrors>> ListBuildsOutcome;
        typedef Aws::Utils::Outcome<ListFleetsResult, Aws::Client::AWSError<GameLiftErrors>> ListFleetsOutcome;
        typedef Aws::Utils::Outcome<PutScalingPolicyResult, Aws::Client::AWSError<GameLiftErrors>> PutScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RequestUploadCredentialsResult, Aws::Client::AWSError<GameLiftErrors>> RequestUploadCredentialsOutcome;
        typedef Aws::Utils::Outcome<ResolveAliasResult, Aws::Client::AWSError<GameLiftErrors>> ResolveAliasOutcome;
        typedef Aws::Utils::Outcome<SearchGameSessionsResult, Aws::Client::AWSError<GameLiftErrors>> SearchGameSessionsOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, Aws::Client::AWSError<GameLiftErrors>> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateBuildResult, Aws::Client::AWSError<GameLiftErrors>> UpdateBuildOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetAttributesResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetCapacityResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetCapacityOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetPortSettingsResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetPortSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateGameSessionResult, Aws::Client::AWSError<GameLiftErrors>> UpdateGameSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateRuntimeConfigurationResult, Aws::Client::AWSError<GameLiftErrors>> UpdateRuntimeConfigurationOutcome;

        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateBuildOutcome> CreateBuildOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<CreateGameSessionOutcome> CreateGameSessionOutcomeCallable;
        typedef std::future<CreatePlayerSessionOutcome> CreatePlayerSessionOutcomeCallable;
        typedef std::future<CreatePlayerSessionsOutcome> CreatePlayerSessionsOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteBuildOutcome> DeleteBuildOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
        typedef std::future<DescribeAliasOutcome> DescribeAliasOutcomeCallable;
        typedef std::future<DescribeBuildOutcome> DescribeBuildOutcomeCallable;
        typedef std::future<DescribeEC2InstanceLimitsOutcome> DescribeEC2InstanceLimitsOutcomeCallable;
        typedef std::future<DescribeFleetAttributesOutcome> DescribeFleetAttributesOutcomeCallable;
        typedef std::future<DescribeFleetCapacityOutcome> DescribeFleetCapacityOutcomeCallable;
        typedef std::future<DescribeFleetEventsOutcome> DescribeFleetEventsOutcomeCallable;
        typedef std::future<DescribeFleetPortSettingsOutcome> DescribeFleetPortSettingsOutcomeCallable;
        typedef std::future<DescribeFleetUtilizationOutcome> DescribeFleetUtilizationOutcomeCallable;
        typedef std::future<DescribeGameSessionDetailsOutcome> DescribeGameSessionDetailsOutcomeCallable;
        typedef std::future<DescribeGameSessionsOutcome> DescribeGameSessionsOutcomeCallable;
        typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
        typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
        typedef std::future<DescribeRuntimeConfigurationOutcome> DescribeRuntimeConfigurationOutcomeCallable;
        typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
        typedef std::future<GetGameSessionLogUrlOutcome> GetGameSessionLogUrlOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListBuildsOutcome> ListBuildsOutcomeCallable;
        typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
        typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
        typedef std::future<RequestUploadCredentialsOutcome> RequestUploadCredentialsOutcomeCallable;
        typedef std::future<ResolveAliasOutcome> ResolveAliasOutcomeCallable;
        typedef std::future<SearchGameSessionsOutcome> SearchGameSessionsOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateBuildOutcome> UpdateBuildOutcomeCallable;
        typedef std::future<UpdateFleetAttributesOutcome> UpdateFleetAttributesOutcomeCallable;
        typedef std::future<UpdateFleetCapacityOutcome> UpdateFleetCapacityOutcomeCallable;
        typedef std::future<UpdateFleetPortSettingsOutcome> UpdateFleetPortSettingsOutcomeCallable;
        typedef std::future<UpdateGameSessionOutcome> UpdateGameSessionOutcomeCallable;
        typedef std::future<UpdateRuntimeConfigurationOutcome> UpdateRuntimeConfigurationOutcomeCallable;
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
    typedef std::function<void(const GameLiftClient*, const Model::DeleteScalingPolicyRequest&, const Model::DeleteScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeAliasRequest&, const Model::DescribeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeBuildRequest&, const Model::DescribeBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeEC2InstanceLimitsRequest&, const Model::DescribeEC2InstanceLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEC2InstanceLimitsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetAttributesRequest&, const Model::DescribeFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetCapacityRequest&, const Model::DescribeFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetEventsRequest&, const Model::DescribeFleetEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetEventsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetPortSettingsRequest&, const Model::DescribeFleetPortSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetPortSettingsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetUtilizationRequest&, const Model::DescribeFleetUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetUtilizationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionDetailsRequest&, const Model::DescribeGameSessionDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionDetailsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionsRequest&, const Model::DescribeGameSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribePlayerSessionsRequest&, const Model::DescribePlayerSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlayerSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeRuntimeConfigurationRequest&, const Model::DescribeRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuntimeConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeScalingPoliciesRequest&, const Model::DescribeScalingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPoliciesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetGameSessionLogUrlRequest&, const Model::GetGameSessionLogUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGameSessionLogUrlResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListBuildsRequest&, const Model::ListBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::RequestUploadCredentialsRequest&, const Model::RequestUploadCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestUploadCredentialsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ResolveAliasRequest&, const Model::ResolveAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::SearchGameSessionsRequest&, const Model::SearchGameSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGameSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateBuildRequest&, const Model::UpdateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetAttributesRequest&, const Model::UpdateFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetCapacityRequest&, const Model::UpdateFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetPortSettingsRequest&, const Model::UpdateFleetPortSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetPortSettingsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameSessionRequest&, const Model::UpdateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateRuntimeConfigurationRequest&, const Model::UpdateRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuntimeConfigurationResponseReceivedHandler;

  /**
   * <fullname>Amazon GameLift Service</fullname> <p>Welcome to the <i>Amazon
   * GameLift API Reference</i>. Amazon GameLift is a managed Amazon Web Services
   * (AWS) service for developers who need a scalable, server-based solution for
   * multiplayer games. Amazon GameLift provides setup and deployment of game
   * servers, and handles infrastructure scaling and session management.</p> <p>This
   * reference describes the low-level service API for GameLift. You can call this
   * API directly or use the <a href="http://aws.amazon.com/tools/#sdk">AWS SDK</a>
   * for your preferred language. The AWS SDK includes a set of high-level GameLift
   * actions multiplayer game sessions. Alternatively, you can use the <a
   * href="http://aws.amazon.com/cli/">AWS command-line interface</a> (CLI) tool,
   * which includes commands for GameLift. For administrative actions, you can also
   * use the Amazon GameLift console. </p> <p> <b>More Resources</b> </p> <ul> <li>
   * <p> <a href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon
   * GameLift Developer Guide</a>: Learn more about GameLift features and how to use
   * them </p> </li> <li> <p> <a
   * href="https://gamedev.amazon.com/forums/tutorials">Lumberyard and GameLift
   * Tutorials</a>: Get started fast with walkthroughs and sample projects</p> </li>
   * <li> <p> <a href="http://aws.amazon.com/blogs/gamedev/">GameDev Blog</a>: Stay
   * up to date with new features and techniques</p> </li> <li> <p> <a
   * href="https://gamedev.amazon.com/forums/spaces/123/gamelift-discussion.html">GameDev
   * Forums</a>: Connect with the GameDev community</p> </li> </ul> <p> <b>Manage
   * Games and Players Through GameLift</b> </p> <p>Call these actions from your game
   * clients and/or services to create and manage multiplayer game sessions and
   * player sessions.</p> <ul> <li> <p> <b>Game sessions:</b> </p> <ul> <li> <p>
   * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
   * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
   * <a>UpdateGameSession</a> </p> </li> <li> <p> <a>SearchGameSessions</a> </p>
   * </li> </ul> </li> <li> <p> <b>Player sessions:</b> </p> <ul> <li> <p>
   * <a>CreatePlayerSession</a> </p> </li> <li> <p> <a>CreatePlayerSessions</a> </p>
   * </li> <li> <p> <a>DescribePlayerSessions</a> </p> </li> </ul> </li> <li> <p>
   * <b>Other actions:</b> </p> <ul> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li>
   * </ul> </li> </ul> <p> <b>Set Up and Manage Game Servers</b> </p> <p>Use these
   * administrative actions to configure GameLift to host your game servers. When
   * setting up GameLift, you will need to (1) configure a build for your game and
   * upload build files, and (2) set up one or more fleets to host game sessions.
   * Once you've created and activated a fleet, you can assign aliases to it, scale
   * capacity, track performance and utilization, etc.</p> <ul> <li> <p> <b>Game
   * builds:</b> </p> <ul> <li> <p> <a>ListBuilds</a> </p> </li> <li> <p>
   * <a>CreateBuild</a> </p> </li> <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p>
   * <a>UpdateBuild</a> </p> </li> <li> <p> <a>DeleteBuild</a> </p> </li> <li> <p>
   * <a>RequestUploadCredentials</a> </p> </li> </ul> </li> <li> <p> <b>Fleets:</b>
   * </p> <ul> <li> <p> <a>ListFleets</a> </p> </li> <li> <p> <a>CreateFleet</a> </p>
   * </li> <li> <p>Describe fleets:</p> <ul> <li> <p> <a>DescribeFleetAttributes</a>
   * </p> </li> <li> <p> <a>DescribeFleetCapacity</a> </p> </li> <li> <p>
   * <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
   * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
   * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
   * </p> </li> <li> <p> <a>DescribeRuntimeConfiguration</a> </p> </li> </ul> </li>
   * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
   * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
   * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
   * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
   * <a>DeleteFleet</a> </p> </li> </ul> </li> <li> <p> <b>Manage fleet aliases:</b>
   * </p> <ul> <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>CreateAlias</a>
   * </p> </li> <li> <p> <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a>
   * </p> </li> <li> <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a>
   * </p> </li> </ul> </li> <li> <p> <b>Manage autoscaling:</b> </p> <ul> <li> <p>
   * <a>PutScalingPolicy</a> </p> </li> <li> <p> <a>DescribeScalingPolicies</a> </p>
   * </li> <li> <p> <a>DeleteScalingPolicy</a> </p> </li> </ul> </li> </ul> <p>To
   * view changes to the API, see the GameLift <a
   * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/doc-history.html">Document
   * History</a> page.</p>
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
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

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
         * game build to Amazon GameLift. Once the build record has been created and its
         * status is <code>INITIALIZED</code>, you can upload your game build.</p>
         * <important> <p>Do not use this API action unless you are using your own Amazon
         * Simple Storage Service (Amazon S3) client and need to manually upload your build
         * files. Instead, to create a build, use the CLI command
         * <code>upload-build</code>, which creates a new build record and uploads the
         * build files in one step. (See the <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Amazon
         * GameLift Developer Guide</a> help on packaging and uploading your build.) </p>
         * </important> <p>To create a new build, identify the operating system of the game
         * server binaries. All game servers in a build must use the same operating system.
         * Optionally, specify a build name and version; this metadata is stored with other
         * properties in the build record and is displayed in the GameLift console (it is
         * not visible to players). If successful, this action returns the newly created
         * build record along with the Amazon S3 storage location and AWS account
         * credentials. Use the location and credentials to upload your game build.</p>
         */
        virtual Model::CreateBuildOutcome CreateBuild(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Initializes a new build record and generates information required to upload a
         * game build to Amazon GameLift. Once the build record has been created and its
         * status is <code>INITIALIZED</code>, you can upload your game build.</p>
         * <important> <p>Do not use this API action unless you are using your own Amazon
         * Simple Storage Service (Amazon S3) client and need to manually upload your build
         * files. Instead, to create a build, use the CLI command
         * <code>upload-build</code>, which creates a new build record and uploads the
         * build files in one step. (See the <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Amazon
         * GameLift Developer Guide</a> help on packaging and uploading your build.) </p>
         * </important> <p>To create a new build, identify the operating system of the game
         * server binaries. All game servers in a build must use the same operating system.
         * Optionally, specify a build name and version; this metadata is stored with other
         * properties in the build record and is displayed in the GameLift console (it is
         * not visible to players). If successful, this action returns the newly created
         * build record along with the Amazon S3 storage location and AWS account
         * credentials. Use the location and credentials to upload your game build.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBuildOutcomeCallable CreateBuildCallable(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Initializes a new build record and generates information required to upload a
         * game build to Amazon GameLift. Once the build record has been created and its
         * status is <code>INITIALIZED</code>, you can upload your game build.</p>
         * <important> <p>Do not use this API action unless you are using your own Amazon
         * Simple Storage Service (Amazon S3) client and need to manually upload your build
         * files. Instead, to create a build, use the CLI command
         * <code>upload-build</code>, which creates a new build record and uploads the
         * build files in one step. (See the <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Amazon
         * GameLift Developer Guide</a> help on packaging and uploading your build.) </p>
         * </important> <p>To create a new build, identify the operating system of the game
         * server binaries. All game servers in a build must use the same operating system.
         * Optionally, specify a build name and version; this metadata is stored with other
         * properties in the build record and is displayed in the GameLift console (it is
         * not visible to players). If successful, this action returns the newly created
         * build record along with the Amazon S3 storage location and AWS account
         * credentials. Use the location and credentials to upload your game build.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBuildAsync(const Model::CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new fleet to run your game servers. A fleet is a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, each of which can run multiple
         * server processes to host game sessions. You configure a fleet to create
         * instances with certain hardware specifications (see <a
         * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
         * for more information), and deploy a specified game build to each instance. A
         * newly created fleet passes through several statuses; once it reaches the
         * <code>ACTIVE</code> status, it can begin hosting game sessions.</p> <p>To create
         * a new fleet, provide a fleet name, an EC2 instance type, and a build ID of the
         * game build to deploy. You can also configure the new fleet with the following
         * settings: (1) a runtime configuration describing what server processes to run on
         * each instance in the fleet (required to create fleet), (2) access permissions
         * for inbound traffic, (3) fleet-wide game session protection, and (4) the
         * location of default log files for GameLift to upload and store.</p> <p>If the
         * <code>CreateFleet</code> call is successful, Amazon GameLift performs the
         * following tasks:</p> <ul> <li> <p>Creates a fleet record and sets the status to
         * <code>NEW</code> (followed by other statuses as the fleet is activated).</p>
         * </li> <li> <p>Sets the fleet's capacity to 1 "desired", which causes GameLift to
         * start one new EC2 instance.</p> </li> <li> <p>Starts launching server processes
         * on the instance. If the fleet is configured to run multiple server processes per
         * instance, GameLift staggers each launch by a few seconds.</p> </li> <li>
         * <p>Begins writing events to the fleet event log, which can be accessed in the
         * GameLift console.</p> </li> <li> <p>Sets the fleet's status to
         * <code>ACTIVE</code> once one server process in the fleet is ready to host a game
         * session.</p> </li> </ul> <p>After a fleet is created, use the following actions
         * to change fleet properties and configuration:</p> <ul> <li> <p>
         * <a>UpdateFleetAttributes</a> -- Update fleet metadata, including name and
         * description.</p> </li> <li> <p> <a>UpdateFleetCapacity</a> -- Increase or
         * decrease the number of instances you want the fleet to maintain.</p> </li> <li>
         * <p> <a>UpdateFleetPortSettings</a> -- Change the IP address and port ranges that
         * allow access to incoming traffic.</p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> -- Change how server processes are launched in
         * the fleet, including launch path, launch parameters, and the number of
         * concurrent processes.</p> </li> </ul>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a new fleet to run your game servers. A fleet is a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, each of which can run multiple
         * server processes to host game sessions. You configure a fleet to create
         * instances with certain hardware specifications (see <a
         * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
         * for more information), and deploy a specified game build to each instance. A
         * newly created fleet passes through several statuses; once it reaches the
         * <code>ACTIVE</code> status, it can begin hosting game sessions.</p> <p>To create
         * a new fleet, provide a fleet name, an EC2 instance type, and a build ID of the
         * game build to deploy. You can also configure the new fleet with the following
         * settings: (1) a runtime configuration describing what server processes to run on
         * each instance in the fleet (required to create fleet), (2) access permissions
         * for inbound traffic, (3) fleet-wide game session protection, and (4) the
         * location of default log files for GameLift to upload and store.</p> <p>If the
         * <code>CreateFleet</code> call is successful, Amazon GameLift performs the
         * following tasks:</p> <ul> <li> <p>Creates a fleet record and sets the status to
         * <code>NEW</code> (followed by other statuses as the fleet is activated).</p>
         * </li> <li> <p>Sets the fleet's capacity to 1 "desired", which causes GameLift to
         * start one new EC2 instance.</p> </li> <li> <p>Starts launching server processes
         * on the instance. If the fleet is configured to run multiple server processes per
         * instance, GameLift staggers each launch by a few seconds.</p> </li> <li>
         * <p>Begins writing events to the fleet event log, which can be accessed in the
         * GameLift console.</p> </li> <li> <p>Sets the fleet's status to
         * <code>ACTIVE</code> once one server process in the fleet is ready to host a game
         * session.</p> </li> </ul> <p>After a fleet is created, use the following actions
         * to change fleet properties and configuration:</p> <ul> <li> <p>
         * <a>UpdateFleetAttributes</a> -- Update fleet metadata, including name and
         * description.</p> </li> <li> <p> <a>UpdateFleetCapacity</a> -- Increase or
         * decrease the number of instances you want the fleet to maintain.</p> </li> <li>
         * <p> <a>UpdateFleetPortSettings</a> -- Change the IP address and port ranges that
         * allow access to incoming traffic.</p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> -- Change how server processes are launched in
         * the fleet, including launch path, launch parameters, and the number of
         * concurrent processes.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a new fleet to run your game servers. A fleet is a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, each of which can run multiple
         * server processes to host game sessions. You configure a fleet to create
         * instances with certain hardware specifications (see <a
         * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
         * for more information), and deploy a specified game build to each instance. A
         * newly created fleet passes through several statuses; once it reaches the
         * <code>ACTIVE</code> status, it can begin hosting game sessions.</p> <p>To create
         * a new fleet, provide a fleet name, an EC2 instance type, and a build ID of the
         * game build to deploy. You can also configure the new fleet with the following
         * settings: (1) a runtime configuration describing what server processes to run on
         * each instance in the fleet (required to create fleet), (2) access permissions
         * for inbound traffic, (3) fleet-wide game session protection, and (4) the
         * location of default log files for GameLift to upload and store.</p> <p>If the
         * <code>CreateFleet</code> call is successful, Amazon GameLift performs the
         * following tasks:</p> <ul> <li> <p>Creates a fleet record and sets the status to
         * <code>NEW</code> (followed by other statuses as the fleet is activated).</p>
         * </li> <li> <p>Sets the fleet's capacity to 1 "desired", which causes GameLift to
         * start one new EC2 instance.</p> </li> <li> <p>Starts launching server processes
         * on the instance. If the fleet is configured to run multiple server processes per
         * instance, GameLift staggers each launch by a few seconds.</p> </li> <li>
         * <p>Begins writing events to the fleet event log, which can be accessed in the
         * GameLift console.</p> </li> <li> <p>Sets the fleet's status to
         * <code>ACTIVE</code> once one server process in the fleet is ready to host a game
         * session.</p> </li> </ul> <p>After a fleet is created, use the following actions
         * to change fleet properties and configuration:</p> <ul> <li> <p>
         * <a>UpdateFleetAttributes</a> -- Update fleet metadata, including name and
         * description.</p> </li> <li> <p> <a>UpdateFleetCapacity</a> -- Increase or
         * decrease the number of instances you want the fleet to maintain.</p> </li> <li>
         * <p> <a>UpdateFleetPortSettings</a> -- Change the IP address and port ranges that
         * allow access to incoming traffic.</p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> -- Change how server processes are launched in
         * the fleet, including launch path, launch parameters, and the number of
         * concurrent processes.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a multiplayer game session for players. This action creates a game
         * session record and assigns the new session to an instance in the specified
         * fleet, which initializes a new server process to host the game session. A fleet
         * must be in an <code>ACTIVE</code> status before a game session can be created in
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
         * fleet, which initializes a new server process to host the game session. A fleet
         * must be in an <code>ACTIVE</code> status before a game session can be created in
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
         * fleet, which initializes a new server process to host the game session. A fleet
         * must be in an <code>ACTIVE</code> status before a game session can be created in
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
         * session must be in an <code>ACTIVE</code> status, have a creation policy of
         * <code>ALLOW_ALL</code>, and have an open player slot before players can be added
         * to the session.</p> <p>To create a player session, specify a game session ID and
         * player ID. If successful, the player is added to the game session and a new
         * <a>PlayerSession</a> object is returned. </p>
         */
        virtual Model::CreatePlayerSessionOutcome CreatePlayerSession(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. A game
         * session must be in an <code>ACTIVE</code> status, have a creation policy of
         * <code>ALLOW_ALL</code>, and have an open player slot before players can be added
         * to the session.</p> <p>To create a player session, specify a game session ID and
         * player ID. If successful, the player is added to the game session and a new
         * <a>PlayerSession</a> object is returned. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionOutcomeCallable CreatePlayerSessionCallable(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. A game
         * session must be in an <code>ACTIVE</code> status, have a creation policy of
         * <code>ALLOW_ALL</code>, and have an open player slot before players can be added
         * to the session.</p> <p>To create a player session, specify a game session ID and
         * player ID. If successful, the player is added to the game session and a new
         * <a>PlayerSession</a> object is returned. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionAsync(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a group of players to a game session. Similar to
         * <a>CreatePlayerSession</a>, this action allows you to add multiple players in a
         * single call, which is useful for games that provide party and/or matchmaking
         * features. A game session must be in an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot before
         * players can be added to the session.</p> <p>To create player sessions, specify a
         * game session ID and a list of player IDs. If successful, the players are added
         * to the game session and a set of new <a>PlayerSession</a> objects is returned.
         * </p>
         */
        virtual Model::CreatePlayerSessionsOutcome CreatePlayerSessions(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Adds a group of players to a game session. Similar to
         * <a>CreatePlayerSession</a>, this action allows you to add multiple players in a
         * single call, which is useful for games that provide party and/or matchmaking
         * features. A game session must be in an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot before
         * players can be added to the session.</p> <p>To create player sessions, specify a
         * game session ID and a list of player IDs. If successful, the players are added
         * to the game session and a set of new <a>PlayerSession</a> objects is returned.
         * </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionsOutcomeCallable CreatePlayerSessionsCallable(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Adds a group of players to a game session. Similar to
         * <a>CreatePlayerSession</a>, this action allows you to add multiple players in a
         * single call, which is useful for games that provide party and/or matchmaking
         * features. A game session must be in an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot before
         * players can be added to the session.</p> <p>To create player sessions, specify a
         * game session ID and a list of player IDs. If successful, the players are added
         * to the game session and a set of new <a>PlayerSession</a> objects is returned.
         * </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionsAsync(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alias. This action removes all record of the alias; game clients
         * attempting to access a server process using the deleted alias receive an error.
         * To delete an alias, specify the alias ID to be deleted.</p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes an alias. This action removes all record of the alias; game clients
         * attempting to access a server process using the deleted alias receive an error.
         * To delete an alias, specify the alias ID to be deleted.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes an alias. This action removes all record of the alias; game clients
         * attempting to access a server process using the deleted alias receive an error.
         * To delete an alias, specify the alias ID to be deleted.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets using the build, but you can no
         * longer create new fleets with the deleted build.</p>
         */
        virtual Model::DeleteBuildOutcome DeleteBuild(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets using the build, but you can no
         * longer create new fleets with the deleted build.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBuildOutcomeCallable DeleteBuildCallable(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets using the build, but you can no
         * longer create new fleets with the deleted build.</p>
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
         * <p>Deletes a fleet scaling policy. This action means that the policy is no
         * longer in force and removes all record of it. To delete a scaling policy,
         * specify both the scaling policy name and the fleet ID it is associated with.</p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes a fleet scaling policy. This action means that the policy is no
         * longer in force and removes all record of it. To delete a scaling policy,
         * specify both the scaling policy name and the fleet ID it is associated with.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes a fleet scaling policy. This action means that the policy is no
         * longer in force and removes all record of it. To delete a scaling policy,
         * specify both the scaling policy name and the fleet ID it is associated with.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>maximum number of instances allowed per AWS account (service
         * limit)</p> </li> <li> <p>current usage level for the AWS account</p> </li> </ul>
         * <p>Service limits vary depending on region. Available regions for GameLift can
         * be found in the AWS Management Console for GameLift (see the drop-down list in
         * the upper right corner).</p>
         */
        virtual Model::DescribeEC2InstanceLimitsOutcome DescribeEC2InstanceLimits(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>maximum number of instances allowed per AWS account (service
         * limit)</p> </li> <li> <p>current usage level for the AWS account</p> </li> </ul>
         * <p>Service limits vary depending on region. Available regions for GameLift can
         * be found in the AWS Management Console for GameLift (see the drop-down list in
         * the upper right corner).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEC2InstanceLimitsOutcomeCallable DescribeEC2InstanceLimitsCallable(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>maximum number of instances allowed per AWS account (service
         * limit)</p> </li> <li> <p>current usage level for the AWS account</p> </li> </ul>
         * <p>Service limits vary depending on region. Available regions for GameLift can
         * be found in the AWS Management Console for GameLift (see the drop-down list in
         * the upper right corner).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEC2InstanceLimitsAsync(const Model::DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves fleet properties, including metadata, status, and configuration,
         * for one or more fleets. You can request attributes for all fleets, or specify a
         * list of one or more fleet IDs. When requesting multiple fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetAttributes</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note> <p>Some API actions may limit the
         * number of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p> </note>
         */
        virtual Model::DescribeFleetAttributesOutcome DescribeFleetAttributes(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * <p>Retrieves fleet properties, including metadata, status, and configuration,
         * for one or more fleets. You can request attributes for all fleets, or specify a
         * list of one or more fleet IDs. When requesting multiple fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetAttributes</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note> <p>Some API actions may limit the
         * number of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAttributesOutcomeCallable DescribeFleetAttributesCallable(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * <p>Retrieves fleet properties, including metadata, status, and configuration,
         * for one or more fleets. You can request attributes for all fleets, or specify a
         * list of one or more fleet IDs. When requesting multiple fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetAttributes</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note> <p>Some API actions may limit the
         * number of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAttributesAsync(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current status of fleet capacity for one or more fleets. This
         * information includes the number of instances that have been requested for the
         * fleet and the number currently active. You can request capacity for all fleets,
         * or specify a list of one or more fleet IDs. When requesting multiple fleets, use
         * the pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetCapacity</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note> <p>Some API actions may limit the
         * number of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p> </note>
         */
        virtual Model::DescribeFleetCapacityOutcome DescribeFleetCapacity(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * <p>Retrieves the current status of fleet capacity for one or more fleets. This
         * information includes the number of instances that have been requested for the
         * fleet and the number currently active. You can request capacity for all fleets,
         * or specify a list of one or more fleet IDs. When requesting multiple fleets, use
         * the pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetCapacity</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note> <p>Some API actions may limit the
         * number of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetCapacityOutcomeCallable DescribeFleetCapacityCallable(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * <p>Retrieves the current status of fleet capacity for one or more fleets. This
         * information includes the number of instances that have been requested for the
         * fleet and the number currently active. You can request capacity for all fleets,
         * or specify a list of one or more fleet IDs. When requesting multiple fleets, use
         * the pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetCapacity</a> object is returned for each requested fleet
         * ID. When specifying a list of fleet IDs, attribute objects are returned only for
         * fleets that currently exist. </p> <note> <p>Some API actions may limit the
         * number of fleet IDs allowed in one request. If a request exceeds this limit, the
         * request fails and the error message includes the maximum allowed.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetCapacityAsync(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves entries from the specified fleet's event log. You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a collection of event log
         * entries matching the request are returned.</p>
         */
        virtual Model::DescribeFleetEventsOutcome DescribeFleetEvents(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * <p>Retrieves entries from the specified fleet's event log. You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a collection of event log
         * entries matching the request are returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetEventsOutcomeCallable DescribeFleetEventsCallable(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * <p>Retrieves entries from the specified fleet's event log. You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a collection of event log
         * entries matching the request are returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetEventsAsync(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the inbound connection permissions for a fleet. Connection
         * permissions include a range of IP addresses and port settings that incoming
         * traffic can use to access server processes in the fleet. To get a fleet's
         * inbound connection permissions, specify a fleet ID. If successful, a collection
         * of <a>IpPermission</a> objects is returned for the requested fleet ID. If the
         * requested fleet has been deleted, the result set is empty.</p>
         */
        virtual Model::DescribeFleetPortSettingsOutcome DescribeFleetPortSettings(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * <p>Retrieves the inbound connection permissions for a fleet. Connection
         * permissions include a range of IP addresses and port settings that incoming
         * traffic can use to access server processes in the fleet. To get a fleet's
         * inbound connection permissions, specify a fleet ID. If successful, a collection
         * of <a>IpPermission</a> objects is returned for the requested fleet ID. If the
         * requested fleet has been deleted, the result set is empty.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetPortSettingsOutcomeCallable DescribeFleetPortSettingsCallable(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * <p>Retrieves the inbound connection permissions for a fleet. Connection
         * permissions include a range of IP addresses and port settings that incoming
         * traffic can use to access server processes in the fleet. To get a fleet's
         * inbound connection permissions, specify a fleet ID. If successful, a collection
         * of <a>IpPermission</a> objects is returned for the requested fleet ID. If the
         * requested fleet has been deleted, the result set is empty.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetPortSettingsAsync(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. You can request
         * utilization data for all fleets, or specify a list of one or more fleet IDs.
         * When requesting multiple fleets, use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a <a>FleetUtilization</a>
         * object is returned for each requested fleet ID. When specifying a list of fleet
         * IDs, utilization objects are returned only for fleets that currently exist. </p>
         * <note> <p>Some API actions may limit the number of fleet IDs allowed in one
         * request. If a request exceeds this limit, the request fails and the error
         * message includes the maximum allowed.</p> </note>
         */
        virtual Model::DescribeFleetUtilizationOutcome DescribeFleetUtilization(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. You can request
         * utilization data for all fleets, or specify a list of one or more fleet IDs.
         * When requesting multiple fleets, use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a <a>FleetUtilization</a>
         * object is returned for each requested fleet ID. When specifying a list of fleet
         * IDs, utilization objects are returned only for fleets that currently exist. </p>
         * <note> <p>Some API actions may limit the number of fleet IDs allowed in one
         * request. If a request exceeds this limit, the request fails and the error
         * message includes the maximum allowed.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetUtilizationOutcomeCallable DescribeFleetUtilizationCallable(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. You can request
         * utilization data for all fleets, or specify a list of one or more fleet IDs.
         * When requesting multiple fleets, use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a <a>FleetUtilization</a>
         * object is returned for each requested fleet ID. When specifying a list of fleet
         * IDs, utilization objects are returned only for fleets that currently exist. </p>
         * <note> <p>Some API actions may limit the number of fleet IDs allowed in one
         * request. If a request exceeds this limit, the request fails and the error
         * message includes the maximum allowed.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetUtilizationAsync(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This action can be used in several ways: (1) provide a
         * <code>GameSessionId</code> to request details for a specific game session; (2)
         * provide either a <code>FleetId</code> or an <code>AliasId</code> to request
         * properties for all game sessions running on a fleet. </p> <p>To get game session
         * record(s), specify just one of the following: game session ID, fleet ID, or
         * alias ID. You can filter this request by game session status. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>GameSessionDetail</a> object is returned for each session matching the
         * request.</p>
         */
        virtual Model::DescribeGameSessionDetailsOutcome DescribeGameSessionDetails(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This action can be used in several ways: (1) provide a
         * <code>GameSessionId</code> to request details for a specific game session; (2)
         * provide either a <code>FleetId</code> or an <code>AliasId</code> to request
         * properties for all game sessions running on a fleet. </p> <p>To get game session
         * record(s), specify just one of the following: game session ID, fleet ID, or
         * alias ID. You can filter this request by game session status. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>GameSessionDetail</a> object is returned for each session matching the
         * request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionDetailsOutcomeCallable DescribeGameSessionDetailsCallable(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This action can be used in several ways: (1) provide a
         * <code>GameSessionId</code> to request details for a specific game session; (2)
         * provide either a <code>FleetId</code> or an <code>AliasId</code> to request
         * properties for all game sessions running on a fleet. </p> <p>To get game session
         * record(s), specify just one of the following: game session ID, fleet ID, or
         * alias ID. You can filter this request by game session status. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>GameSessionDetail</a> object is returned for each session matching the
         * request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionDetailsAsync(const Model::DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a set of one or more game sessions and properties. This action can
         * be used in several ways: (1) provide a <code>GameSessionId</code> to request
         * properties for a specific game session; (2) provide a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. You can also use <a>SearchGameSessions</a>, which allows you to retrieve
         * all game sessions or filter on certain criteria, but only returns game sessions
         * with a status of ACTIVE. If you need to retrieve the protection policy for each
         * game session, use <a>DescribeGameSessionDetails</a>.</p> <p>To get game session
         * record(s), specify just one of the following: game session ID, fleet ID, or
         * alias ID. You can filter this request by game session status. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>GameSession</a> object is returned for each session matching the request.</p>
         */
        virtual Model::DescribeGameSessionsOutcome DescribeGameSessions(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of one or more game sessions and properties. This action can
         * be used in several ways: (1) provide a <code>GameSessionId</code> to request
         * properties for a specific game session; (2) provide a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. You can also use <a>SearchGameSessions</a>, which allows you to retrieve
         * all game sessions or filter on certain criteria, but only returns game sessions
         * with a status of ACTIVE. If you need to retrieve the protection policy for each
         * game session, use <a>DescribeGameSessionDetails</a>.</p> <p>To get game session
         * record(s), specify just one of the following: game session ID, fleet ID, or
         * alias ID. You can filter this request by game session status. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>GameSession</a> object is returned for each session matching the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionsOutcomeCallable DescribeGameSessionsCallable(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of one or more game sessions and properties. This action can
         * be used in several ways: (1) provide a <code>GameSessionId</code> to request
         * properties for a specific game session; (2) provide a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. You can also use <a>SearchGameSessions</a>, which allows you to retrieve
         * all game sessions or filter on certain criteria, but only returns game sessions
         * with a status of ACTIVE. If you need to retrieve the protection policy for each
         * game session, use <a>DescribeGameSessionDetails</a>.</p> <p>To get game session
         * record(s), specify just one of the following: game session ID, fleet ID, or
         * alias ID. You can filter this request by game session status. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, a
         * <a>GameSession</a> object is returned for each session matching the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionsAsync(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about instances in a fleet.</p> <p>To get information
         * on a specific instance, specify both a fleet ID and instance ID. To get
         * information for all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Retrieves information about instances in a fleet.</p> <p>To get information
         * on a specific instance, specify both a fleet ID and instance ID. To get
         * information for all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Retrieves information about instances in a fleet.</p> <p>To get information
         * on a specific instance, specify both a fleet ID and instance ID. To get
         * information for all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <code>PlayerSessionId</code> parameter to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> parameter to request properties for all player
         * sessions in the specified game session; (3) provide a <code>PlayerId</code>
         * parameter to request properties for all player sessions of a specified player.
         * </p> <p>To get game session record(s), specify only one of the following: a
         * player session ID, a game session ID, or a player ID. You can filter this
         * request by player session status. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a <a>PlayerSession</a>
         * object is returned for each session matching the request.</p>
         */
        virtual Model::DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <code>PlayerSessionId</code> parameter to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> parameter to request properties for all player
         * sessions in the specified game session; (3) provide a <code>PlayerId</code>
         * parameter to request properties for all player sessions of a specified player.
         * </p> <p>To get game session record(s), specify only one of the following: a
         * player session ID, a game session ID, or a player ID. You can filter this
         * request by player session status. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a <a>PlayerSession</a>
         * object is returned for each session matching the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <code>PlayerSessionId</code> parameter to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> parameter to request properties for all player
         * sessions in the specified game session; (3) provide a <code>PlayerId</code>
         * parameter to request properties for all player sessions of a specified player.
         * </p> <p>To get game session record(s), specify only one of the following: a
         * player session ID, a game session ID, or a player ID. You can filter this
         * request by player session status. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a <a>PlayerSession</a>
         * object is returned for each session matching the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current runtime configuration for the specified fleet. The
         * runtime configuration tells GameLift how to launch server processes on instances
         * in the fleet.</p>
         */
        virtual Model::DescribeRuntimeConfigurationOutcome DescribeRuntimeConfiguration(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * <p>Retrieves the current runtime configuration for the specified fleet. The
         * runtime configuration tells GameLift how to launch server processes on instances
         * in the fleet.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuntimeConfigurationOutcomeCallable DescribeRuntimeConfigurationCallable(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * <p>Retrieves the current runtime configuration for the specified fleet. The
         * runtime configuration tells GameLift how to launch server processes on instances
         * in the fleet.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuntimeConfigurationAsync(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3. Use this URL to download the logs.</p> <note> <p>See the
         * <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p> </note>
         */
        virtual Model::GetGameSessionLogUrlOutcome GetGameSessionLogUrl(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3. Use this URL to download the logs.</p> <note> <p>See the
         * <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGameSessionLogUrlOutcomeCallable GetGameSessionLogUrlCallable(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3. Use this URL to download the logs.</p> <note> <p>See the
         * <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGameSessionLogUrlAsync(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages.</p> <note> <p>Aliases are
         * not listed in any particular order.</p> </note>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages.</p> <note> <p>Aliases are
         * not listed in any particular order.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages.</p> <note> <p>Aliases are
         * not listed in any particular order.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves build records for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p> <note> <p>Build records are not listed in any
         * particular order.</p> </note>
         */
        virtual Model::ListBuildsOutcome ListBuilds(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build records for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p> <note> <p>Build records are not listed in any
         * particular order.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsOutcomeCallable ListBuildsCallable(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build records for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p> <note> <p>Build records are not listed in any
         * particular order.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsAsync(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages.</p> <note> <p>Fleet records are not listed in any particular
         * order.</p> </note>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages.</p> <note> <p>Fleet records are not listed in any particular
         * order.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages.</p> <note> <p>Fleet records are not listed in any particular
         * order.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scaling policy for a fleet. An active scaling policy
         * prompts Amazon GameLift to track a certain metric for a fleet and automatically
         * change the fleet's capacity in specific circumstances. Each scaling policy
         * contains one rule statement. Fleets can have multiple scaling policies in force
         * simultaneously.</p> <p>A scaling policy rule statement has the following
         * structure:</p> <p>If <code>[MetricName]</code> is
         * <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
         * <code>[EvaluationPeriods]</code> minutes, then
         * <code>[ScalingAdjustmentType]</code> to/by <code>[ScalingAdjustment]</code>.</p>
         * <p>For example, this policy: "If the number of idle instances exceeds 20 for
         * more than 15 minutes, then reduce the fleet capacity by 10 instances" could be
         * implemented as the following rule statement:</p> <p>If [IdleInstances] is
         * [GreaterThanOrEqualToThreshold] [20] for [15] minutes, then [ChangeInCapacity]
         * by [-10].</p> <p>To create or update a scaling policy, specify a unique
         * combination of name and fleet ID, and set the rule values. All parameters for
         * this action are required. If successful, the policy name is returned. Scaling
         * policies cannot be suspended or made inactive. To stop enforcing a scaling
         * policy, call <a>DeleteScalingPolicy</a>.</p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for a fleet. An active scaling policy
         * prompts Amazon GameLift to track a certain metric for a fleet and automatically
         * change the fleet's capacity in specific circumstances. Each scaling policy
         * contains one rule statement. Fleets can have multiple scaling policies in force
         * simultaneously.</p> <p>A scaling policy rule statement has the following
         * structure:</p> <p>If <code>[MetricName]</code> is
         * <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
         * <code>[EvaluationPeriods]</code> minutes, then
         * <code>[ScalingAdjustmentType]</code> to/by <code>[ScalingAdjustment]</code>.</p>
         * <p>For example, this policy: "If the number of idle instances exceeds 20 for
         * more than 15 minutes, then reduce the fleet capacity by 10 instances" could be
         * implemented as the following rule statement:</p> <p>If [IdleInstances] is
         * [GreaterThanOrEqualToThreshold] [20] for [15] minutes, then [ChangeInCapacity]
         * by [-10].</p> <p>To create or update a scaling policy, specify a unique
         * combination of name and fleet ID, and set the rule values. All parameters for
         * this action are required. If successful, the policy name is returned. Scaling
         * policies cannot be suspended or made inactive. To stop enforcing a scaling
         * policy, call <a>DeleteScalingPolicy</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for a fleet. An active scaling policy
         * prompts Amazon GameLift to track a certain metric for a fleet and automatically
         * change the fleet's capacity in specific circumstances. Each scaling policy
         * contains one rule statement. Fleets can have multiple scaling policies in force
         * simultaneously.</p> <p>A scaling policy rule statement has the following
         * structure:</p> <p>If <code>[MetricName]</code> is
         * <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
         * <code>[EvaluationPeriods]</code> minutes, then
         * <code>[ScalingAdjustmentType]</code> to/by <code>[ScalingAdjustment]</code>.</p>
         * <p>For example, this policy: "If the number of idle instances exceeds 20 for
         * more than 15 minutes, then reduce the fleet capacity by 10 instances" could be
         * implemented as the following rule statement:</p> <p>If [IdleInstances] is
         * [GreaterThanOrEqualToThreshold] [20] for [15] minutes, then [ChangeInCapacity]
         * by [-10].</p> <p>To create or update a scaling policy, specify a unique
         * combination of name and fleet ID, and set the rule values. All parameters for
         * this action are required. If successful, the policy name is returned. Scaling
         * policies cannot be suspended or made inactive. To stop enforcing a scaling
         * policy, call <a>DeleteScalingPolicy</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fresh set of upload credentials and the assigned Amazon S3
         * storage location for a specific build. Valid credentials are required to upload
         * your game build files to Amazon S3.</p> <important> <p>Call this action only if
         * you need credentials for a build created with <code> <a>CreateBuild</a> </code>.
         * This is a rare situation; in most cases, builds are created using the CLI
         * command <code>upload-build</code>, which creates a build record and also uploads
         * build files. </p> </important> <p>Upload credentials are returned when you
         * create the build, but they have a limited lifespan. You can get fresh
         * credentials and use them to re-upload game files until the status of that build
         * changes to <code>READY</code>. Once this happens, you must create a brand new
         * build.</p>
         */
        virtual Model::RequestUploadCredentialsOutcome RequestUploadCredentials(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p>Retrieves a fresh set of upload credentials and the assigned Amazon S3
         * storage location for a specific build. Valid credentials are required to upload
         * your game build files to Amazon S3.</p> <important> <p>Call this action only if
         * you need credentials for a build created with <code> <a>CreateBuild</a> </code>.
         * This is a rare situation; in most cases, builds are created using the CLI
         * command <code>upload-build</code>, which creates a build record and also uploads
         * build files. </p> </important> <p>Upload credentials are returned when you
         * create the build, but they have a limited lifespan. You can get fresh
         * credentials and use them to re-upload game files until the status of that build
         * changes to <code>READY</code>. Once this happens, you must create a brand new
         * build.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestUploadCredentialsOutcomeCallable RequestUploadCredentialsCallable(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p>Retrieves a fresh set of upload credentials and the assigned Amazon S3
         * storage location for a specific build. Valid credentials are required to upload
         * your game build files to Amazon S3.</p> <important> <p>Call this action only if
         * you need credentials for a build created with <code> <a>CreateBuild</a> </code>.
         * This is a rare situation; in most cases, builds are created using the CLI
         * command <code>upload-build</code>, which creates a build record and also uploads
         * build files. </p> </important> <p>Upload credentials are returned when you
         * create the build, but they have a limited lifespan. You can get fresh
         * credentials and use them to re-upload game files until the status of that build
         * changes to <code>READY</code>. Once this happens, you must create a brand new
         * build.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestUploadCredentialsAsync(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing to.</p>
         */
        virtual Model::ResolveAliasOutcome ResolveAlias(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing to.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveAliasOutcomeCallable ResolveAliasCallable(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing to.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveAliasAsync(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a set of game sessions that match a set of search criteria and
         * sorts them in a specified order. Currently a game session search is limited to a
         * single fleet. Search results include only game sessions that are in ACTIVE
         * status. If you need to retrieve game sessions with a status other than active,
         * use <a>DescribeGameSessions</a>. If you need to retrieve the protection policy
         * for each game session, use <a>DescribeGameSessionDetails</a>.</p> <p>You can
         * search or sort by the following game session attributes:</p> <ul> <li> <p>
         * <b>gameSessionId</b> -- ID value assigned to a game session. This unique value
         * is returned in a <a>GameSession</a> object when a new game session is created.
         * </p> </li> <li> <p> <b>gameSessionName</b> -- Name assigned to a game session.
         * This value is set when requesting a new game session with
         * <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>. Game session
         * names do not need to be unique to a game session.</p> </li> <li> <p>
         * <b>creationTimeMillis</b> -- Value indicating when a game session was created.
         * It is expressed in Unix time as milliseconds.</p> </li> <li> <p>
         * <b>playerSessionCount</b> -- Number of players currently connected to a game
         * session. This value changes rapidly as players join the session or drop out.</p>
         * </li> <li> <p> <b>maximumSessions</b> -- Maximum number of player sessions
         * allowed for a game session. This value is set when requesting a new game session
         * with <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>.</p>
         * </li> <li> <p> <b>hasAvailablePlayerSessions</b> -- Boolean value indicating
         * whether or not a game session has reached its maximum number of players. When
         * searching with this attribute, the search value must be <code>true</code> or
         * <code>false</code>. It is highly recommended that all search requests include
         * this filter attribute to optimize search performance and return only sessions
         * that players can join. </p> </li> </ul> <p>To search or sort, specify either a
         * fleet ID or an alias ID, and provide a search filter expression, a sort
         * expression, or both. Use the pagination parameters to retrieve results as a set
         * of sequential pages. If successful, a collection of <a>GameSession</a> objects
         * matching the request is returned.</p> <note> <p>Returned values for
         * <code>playerSessionCount</code> and <code>hasAvailablePlayerSessions</code>
         * change quickly as players join sessions and others drop out. Results should be
         * considered a snapshot in time. Be sure to refresh search results often, and
         * handle sessions that fill up before a player can join. </p> </note>
         */
        virtual Model::SearchGameSessionsOutcome SearchGameSessions(const Model::SearchGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of game sessions that match a set of search criteria and
         * sorts them in a specified order. Currently a game session search is limited to a
         * single fleet. Search results include only game sessions that are in ACTIVE
         * status. If you need to retrieve game sessions with a status other than active,
         * use <a>DescribeGameSessions</a>. If you need to retrieve the protection policy
         * for each game session, use <a>DescribeGameSessionDetails</a>.</p> <p>You can
         * search or sort by the following game session attributes:</p> <ul> <li> <p>
         * <b>gameSessionId</b> -- ID value assigned to a game session. This unique value
         * is returned in a <a>GameSession</a> object when a new game session is created.
         * </p> </li> <li> <p> <b>gameSessionName</b> -- Name assigned to a game session.
         * This value is set when requesting a new game session with
         * <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>. Game session
         * names do not need to be unique to a game session.</p> </li> <li> <p>
         * <b>creationTimeMillis</b> -- Value indicating when a game session was created.
         * It is expressed in Unix time as milliseconds.</p> </li> <li> <p>
         * <b>playerSessionCount</b> -- Number of players currently connected to a game
         * session. This value changes rapidly as players join the session or drop out.</p>
         * </li> <li> <p> <b>maximumSessions</b> -- Maximum number of player sessions
         * allowed for a game session. This value is set when requesting a new game session
         * with <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>.</p>
         * </li> <li> <p> <b>hasAvailablePlayerSessions</b> -- Boolean value indicating
         * whether or not a game session has reached its maximum number of players. When
         * searching with this attribute, the search value must be <code>true</code> or
         * <code>false</code>. It is highly recommended that all search requests include
         * this filter attribute to optimize search performance and return only sessions
         * that players can join. </p> </li> </ul> <p>To search or sort, specify either a
         * fleet ID or an alias ID, and provide a search filter expression, a sort
         * expression, or both. Use the pagination parameters to retrieve results as a set
         * of sequential pages. If successful, a collection of <a>GameSession</a> objects
         * matching the request is returned.</p> <note> <p>Returned values for
         * <code>playerSessionCount</code> and <code>hasAvailablePlayerSessions</code>
         * change quickly as players join sessions and others drop out. Results should be
         * considered a snapshot in time. Be sure to refresh search results often, and
         * handle sessions that fill up before a player can join. </p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchGameSessionsOutcomeCallable SearchGameSessionsCallable(const Model::SearchGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of game sessions that match a set of search criteria and
         * sorts them in a specified order. Currently a game session search is limited to a
         * single fleet. Search results include only game sessions that are in ACTIVE
         * status. If you need to retrieve game sessions with a status other than active,
         * use <a>DescribeGameSessions</a>. If you need to retrieve the protection policy
         * for each game session, use <a>DescribeGameSessionDetails</a>.</p> <p>You can
         * search or sort by the following game session attributes:</p> <ul> <li> <p>
         * <b>gameSessionId</b> -- ID value assigned to a game session. This unique value
         * is returned in a <a>GameSession</a> object when a new game session is created.
         * </p> </li> <li> <p> <b>gameSessionName</b> -- Name assigned to a game session.
         * This value is set when requesting a new game session with
         * <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>. Game session
         * names do not need to be unique to a game session.</p> </li> <li> <p>
         * <b>creationTimeMillis</b> -- Value indicating when a game session was created.
         * It is expressed in Unix time as milliseconds.</p> </li> <li> <p>
         * <b>playerSessionCount</b> -- Number of players currently connected to a game
         * session. This value changes rapidly as players join the session or drop out.</p>
         * </li> <li> <p> <b>maximumSessions</b> -- Maximum number of player sessions
         * allowed for a game session. This value is set when requesting a new game session
         * with <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>.</p>
         * </li> <li> <p> <b>hasAvailablePlayerSessions</b> -- Boolean value indicating
         * whether or not a game session has reached its maximum number of players. When
         * searching with this attribute, the search value must be <code>true</code> or
         * <code>false</code>. It is highly recommended that all search requests include
         * this filter attribute to optimize search performance and return only sessions
         * that players can join. </p> </li> </ul> <p>To search or sort, specify either a
         * fleet ID or an alias ID, and provide a search filter expression, a sort
         * expression, or both. Use the pagination parameters to retrieve results as a set
         * of sequential pages. If successful, a collection of <a>GameSession</a> objects
         * matching the request is returned.</p> <note> <p>Returned values for
         * <code>playerSessionCount</code> and <code>hasAvailablePlayerSessions</code>
         * change quickly as players join sessions and others drop out. Results should be
         * considered a snapshot in time. Be sure to refresh search results often, and
         * handle sessions that fill up before a player can join. </p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchGameSessionsAsync(const Model::SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * If successful, a build object containing the updated metadata is returned.</p>
         */
        virtual Model::UpdateBuildOutcome UpdateBuild(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBuildOutcomeCallable UpdateBuildCallable(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is returned.</p>
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
         * of EC2 instances (hosts) that you want this fleet to contain. Before calling
         * this action, you may want to call <a>DescribeEC2InstanceLimits</a> to get the
         * maximum capacity based on the fleet's EC2 instance type.</p> <p>If you're using
         * autoscaling (see <a>PutScalingPolicy</a>), you may want to specify a minimum
         * and/or maximum capacity. If you don't provide these, autoscaling can set
         * capacity anywhere between zero and the <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">service
         * limits</a>.</p> <p>To update fleet capacity, specify the fleet ID and the number
         * of instances you want the fleet to host. If successful, Amazon GameLift starts
         * or terminates instances so that the fleet's active instance count matches the
         * desired instance count. You can view a fleet's current capacity information by
         * calling <a>DescribeFleetCapacity</a>. If the desired instance count is higher
         * than the instance type's limit, the "Limit Exceeded" exception occurs.</p>
         */
        virtual Model::UpdateFleetCapacityOutcome UpdateFleetCapacity(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this action to specify the number
         * of EC2 instances (hosts) that you want this fleet to contain. Before calling
         * this action, you may want to call <a>DescribeEC2InstanceLimits</a> to get the
         * maximum capacity based on the fleet's EC2 instance type.</p> <p>If you're using
         * autoscaling (see <a>PutScalingPolicy</a>), you may want to specify a minimum
         * and/or maximum capacity. If you don't provide these, autoscaling can set
         * capacity anywhere between zero and the <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">service
         * limits</a>.</p> <p>To update fleet capacity, specify the fleet ID and the number
         * of instances you want the fleet to host. If successful, Amazon GameLift starts
         * or terminates instances so that the fleet's active instance count matches the
         * desired instance count. You can view a fleet's current capacity information by
         * calling <a>DescribeFleetCapacity</a>. If the desired instance count is higher
         * than the instance type's limit, the "Limit Exceeded" exception occurs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetCapacityOutcomeCallable UpdateFleetCapacityCallable(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this action to specify the number
         * of EC2 instances (hosts) that you want this fleet to contain. Before calling
         * this action, you may want to call <a>DescribeEC2InstanceLimits</a> to get the
         * maximum capacity based on the fleet's EC2 instance type.</p> <p>If you're using
         * autoscaling (see <a>PutScalingPolicy</a>), you may want to specify a minimum
         * and/or maximum capacity. If you don't provide these, autoscaling can set
         * capacity anywhere between zero and the <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">service
         * limits</a>.</p> <p>To update fleet capacity, specify the fleet ID and the number
         * of instances you want the fleet to host. If successful, Amazon GameLift starts
         * or terminates instances so that the fleet's active instance count matches the
         * desired instance count. You can view a fleet's current capacity information by
         * calling <a>DescribeFleetCapacity</a>. If the desired instance count is higher
         * than the instance type's limit, the "Limit Exceeded" exception occurs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetCapacityAsync(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates port settings for a fleet. To update settings, specify the fleet ID
         * to be updated and list the permissions you want to update. List the permissions
         * you want to add in <code>InboundPermissionAuthorizations</code>, and permissions
         * you want to remove in <code>InboundPermissionRevocations</code>. Permissions to
         * be removed must match existing fleet permissions. If successful, the fleet ID
         * for the updated fleet is returned.</p>
         */
        virtual Model::UpdateFleetPortSettingsOutcome UpdateFleetPortSettings(const Model::UpdateFleetPortSettingsRequest& request) const;

        /**
         * <p>Updates port settings for a fleet. To update settings, specify the fleet ID
         * to be updated and list the permissions you want to update. List the permissions
         * you want to add in <code>InboundPermissionAuthorizations</code>, and permissions
         * you want to remove in <code>InboundPermissionRevocations</code>. Permissions to
         * be removed must match existing fleet permissions. If successful, the fleet ID
         * for the updated fleet is returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetPortSettingsOutcomeCallable UpdateFleetPortSettingsCallable(const Model::UpdateFleetPortSettingsRequest& request) const;

        /**
         * <p>Updates port settings for a fleet. To update settings, specify the fleet ID
         * to be updated and list the permissions you want to update. List the permissions
         * you want to add in <code>InboundPermissionAuthorizations</code>, and permissions
         * you want to remove in <code>InboundPermissionRevocations</code>. Permissions to
         * be removed must match existing fleet permissions. If successful, the fleet ID
         * for the updated fleet is returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetPortSettingsAsync(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count, protection policy, which controls whether or not an active game
         * session can be terminated during a scale-down event, and the player session
         * creation policy, which controls whether or not new players can join the session.
         * To update a game session, specify the game session ID and the values you want to
         * change. If successful, an updated <a>GameSession</a> object is returned. </p>
         */
        virtual Model::UpdateGameSessionOutcome UpdateGameSession(const Model::UpdateGameSessionRequest& request) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count, protection policy, which controls whether or not an active game
         * session can be terminated during a scale-down event, and the player session
         * creation policy, which controls whether or not new players can join the session.
         * To update a game session, specify the game session ID and the values you want to
         * change. If successful, an updated <a>GameSession</a> object is returned. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameSessionOutcomeCallable UpdateGameSessionCallable(const Model::UpdateGameSessionRequest& request) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count, protection policy, which controls whether or not an active game
         * session can be terminated during a scale-down event, and the player session
         * creation policy, which controls whether or not new players can join the session.
         * To update a game session, specify the game session ID and the values you want to
         * change. If successful, an updated <a>GameSession</a> object is returned. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameSessionAsync(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells GameLift how to launch server processes on instances in the fleet. You can
         * update a fleet's runtime configuration at any time after the fleet is created;
         * it does not need to be in an <code>ACTIVE</code> status.</p> <p>To update
         * runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> object with the updated collection of server
         * process configurations.</p> <p>Each instance in a GameLift fleet checks
         * regularly for an updated runtime configuration and changes how it launches
         * server processes to comply with the latest version. Existing server processes
         * are not affected by the update; they continue to run until they end, while
         * GameLift simply adds new server processes to fit the current runtime
         * configuration. As a result, the runtime configuration changes are applied
         * gradually as existing processes shut down and new processes are launched in
         * GameLift's normal process recycling activity.</p>
         */
        virtual Model::UpdateRuntimeConfigurationOutcome UpdateRuntimeConfiguration(const Model::UpdateRuntimeConfigurationRequest& request) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells GameLift how to launch server processes on instances in the fleet. You can
         * update a fleet's runtime configuration at any time after the fleet is created;
         * it does not need to be in an <code>ACTIVE</code> status.</p> <p>To update
         * runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> object with the updated collection of server
         * process configurations.</p> <p>Each instance in a GameLift fleet checks
         * regularly for an updated runtime configuration and changes how it launches
         * server processes to comply with the latest version. Existing server processes
         * are not affected by the update; they continue to run until they end, while
         * GameLift simply adds new server processes to fit the current runtime
         * configuration. As a result, the runtime configuration changes are applied
         * gradually as existing processes shut down and new processes are launched in
         * GameLift's normal process recycling activity.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuntimeConfigurationOutcomeCallable UpdateRuntimeConfigurationCallable(const Model::UpdateRuntimeConfigurationRequest& request) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells GameLift how to launch server processes on instances in the fleet. You can
         * update a fleet's runtime configuration at any time after the fleet is created;
         * it does not need to be in an <code>ACTIVE</code> status.</p> <p>To update
         * runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> object with the updated collection of server
         * process configurations.</p> <p>Each instance in a GameLift fleet checks
         * regularly for an updated runtime configuration and changes how it launches
         * server processes to comply with the latest version. Existing server processes
         * are not affected by the update; they continue to run until they end, while
         * GameLift simply adds new server processes to fit the current runtime
         * configuration. As a result, the runtime configuration changes are applied
         * gradually as existing processes shut down and new processes are launched in
         * GameLift's normal process recycling activity.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuntimeConfigurationAsync(const Model::UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
        void DeleteScalingPolicyAsyncHelper(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAliasAsyncHelper(const Model::DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBuildAsyncHelper(const Model::DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEC2InstanceLimitsAsyncHelper(const Model::DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetAttributesAsyncHelper(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetCapacityAsyncHelper(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetEventsAsyncHelper(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetPortSettingsAsyncHelper(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetUtilizationAsyncHelper(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionDetailsAsyncHelper(const Model::DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionsAsyncHelper(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancesAsyncHelper(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlayerSessionsAsyncHelper(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuntimeConfigurationAsyncHelper(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingPoliciesAsyncHelper(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGameSessionLogUrlAsyncHelper(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsAsyncHelper(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFleetsAsyncHelper(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestUploadCredentialsAsyncHelper(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveAliasAsyncHelper(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchGameSessionsAsyncHelper(const Model::SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBuildAsyncHelper(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetAttributesAsyncHelper(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetCapacityAsyncHelper(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetPortSettingsAsyncHelper(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameSessionAsyncHelper(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuntimeConfigurationAsyncHelper(const Model::UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace GameLift
} // namespace Aws
