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
#include <aws/gamelift/model/CreateGameSessionQueueResult.h>
#include <aws/gamelift/model/CreatePlayerSessionResult.h>
#include <aws/gamelift/model/CreatePlayerSessionsResult.h>
#include <aws/gamelift/model/DeleteGameSessionQueueResult.h>
#include <aws/gamelift/model/DescribeAliasResult.h>
#include <aws/gamelift/model/DescribeBuildResult.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsResult.h>
#include <aws/gamelift/model/DescribeFleetAttributesResult.h>
#include <aws/gamelift/model/DescribeFleetCapacityResult.h>
#include <aws/gamelift/model/DescribeFleetEventsResult.h>
#include <aws/gamelift/model/DescribeFleetPortSettingsResult.h>
#include <aws/gamelift/model/DescribeFleetUtilizationResult.h>
#include <aws/gamelift/model/DescribeGameSessionDetailsResult.h>
#include <aws/gamelift/model/DescribeGameSessionPlacementResult.h>
#include <aws/gamelift/model/DescribeGameSessionQueuesResult.h>
#include <aws/gamelift/model/DescribeGameSessionsResult.h>
#include <aws/gamelift/model/DescribeInstancesResult.h>
#include <aws/gamelift/model/DescribePlayerSessionsResult.h>
#include <aws/gamelift/model/DescribeRuntimeConfigurationResult.h>
#include <aws/gamelift/model/DescribeScalingPoliciesResult.h>
#include <aws/gamelift/model/GetGameSessionLogUrlResult.h>
#include <aws/gamelift/model/GetInstanceAccessResult.h>
#include <aws/gamelift/model/ListAliasesResult.h>
#include <aws/gamelift/model/ListBuildsResult.h>
#include <aws/gamelift/model/ListFleetsResult.h>
#include <aws/gamelift/model/PutScalingPolicyResult.h>
#include <aws/gamelift/model/RequestUploadCredentialsResult.h>
#include <aws/gamelift/model/ResolveAliasResult.h>
#include <aws/gamelift/model/SearchGameSessionsResult.h>
#include <aws/gamelift/model/StartGameSessionPlacementResult.h>
#include <aws/gamelift/model/StopGameSessionPlacementResult.h>
#include <aws/gamelift/model/UpdateAliasResult.h>
#include <aws/gamelift/model/UpdateBuildResult.h>
#include <aws/gamelift/model/UpdateFleetAttributesResult.h>
#include <aws/gamelift/model/UpdateFleetCapacityResult.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsResult.h>
#include <aws/gamelift/model/UpdateGameSessionResult.h>
#include <aws/gamelift/model/UpdateGameSessionQueueResult.h>
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
        class CreateGameSessionQueueRequest;
        class CreatePlayerSessionRequest;
        class CreatePlayerSessionsRequest;
        class DeleteAliasRequest;
        class DeleteBuildRequest;
        class DeleteFleetRequest;
        class DeleteGameSessionQueueRequest;
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
        class DescribeGameSessionPlacementRequest;
        class DescribeGameSessionQueuesRequest;
        class DescribeGameSessionsRequest;
        class DescribeInstancesRequest;
        class DescribePlayerSessionsRequest;
        class DescribeRuntimeConfigurationRequest;
        class DescribeScalingPoliciesRequest;
        class GetGameSessionLogUrlRequest;
        class GetInstanceAccessRequest;
        class ListAliasesRequest;
        class ListBuildsRequest;
        class ListFleetsRequest;
        class PutScalingPolicyRequest;
        class RequestUploadCredentialsRequest;
        class ResolveAliasRequest;
        class SearchGameSessionsRequest;
        class StartGameSessionPlacementRequest;
        class StopGameSessionPlacementRequest;
        class UpdateAliasRequest;
        class UpdateBuildRequest;
        class UpdateFleetAttributesRequest;
        class UpdateFleetCapacityRequest;
        class UpdateFleetPortSettingsRequest;
        class UpdateGameSessionRequest;
        class UpdateGameSessionQueueRequest;
        class UpdateRuntimeConfigurationRequest;

        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<GameLiftErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateBuildResult, Aws::Client::AWSError<GameLiftErrors>> CreateBuildOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, Aws::Client::AWSError<GameLiftErrors>> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<CreateGameSessionResult, Aws::Client::AWSError<GameLiftErrors>> CreateGameSessionOutcome;
        typedef Aws::Utils::Outcome<CreateGameSessionQueueResult, Aws::Client::AWSError<GameLiftErrors>> CreateGameSessionQueueOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionResult, Aws::Client::AWSError<GameLiftErrors>> CreatePlayerSessionOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionsResult, Aws::Client::AWSError<GameLiftErrors>> CreatePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteBuildOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<GameLiftErrors>> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<DeleteGameSessionQueueResult, Aws::Client::AWSError<GameLiftErrors>> DeleteGameSessionQueueOutcome;
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
        typedef Aws::Utils::Outcome<DescribeGameSessionPlacementResult, Aws::Client::AWSError<GameLiftErrors>> DescribeGameSessionPlacementOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionQueuesResult, Aws::Client::AWSError<GameLiftErrors>> DescribeGameSessionQueuesOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionsResult, Aws::Client::AWSError<GameLiftErrors>> DescribeGameSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancesResult, Aws::Client::AWSError<GameLiftErrors>> DescribeInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribePlayerSessionsResult, Aws::Client::AWSError<GameLiftErrors>> DescribePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribeRuntimeConfigurationResult, Aws::Client::AWSError<GameLiftErrors>> DescribeRuntimeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingPoliciesResult, Aws::Client::AWSError<GameLiftErrors>> DescribeScalingPoliciesOutcome;
        typedef Aws::Utils::Outcome<GetGameSessionLogUrlResult, Aws::Client::AWSError<GameLiftErrors>> GetGameSessionLogUrlOutcome;
        typedef Aws::Utils::Outcome<GetInstanceAccessResult, Aws::Client::AWSError<GameLiftErrors>> GetInstanceAccessOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<GameLiftErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListBuildsResult, Aws::Client::AWSError<GameLiftErrors>> ListBuildsOutcome;
        typedef Aws::Utils::Outcome<ListFleetsResult, Aws::Client::AWSError<GameLiftErrors>> ListFleetsOutcome;
        typedef Aws::Utils::Outcome<PutScalingPolicyResult, Aws::Client::AWSError<GameLiftErrors>> PutScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RequestUploadCredentialsResult, Aws::Client::AWSError<GameLiftErrors>> RequestUploadCredentialsOutcome;
        typedef Aws::Utils::Outcome<ResolveAliasResult, Aws::Client::AWSError<GameLiftErrors>> ResolveAliasOutcome;
        typedef Aws::Utils::Outcome<SearchGameSessionsResult, Aws::Client::AWSError<GameLiftErrors>> SearchGameSessionsOutcome;
        typedef Aws::Utils::Outcome<StartGameSessionPlacementResult, Aws::Client::AWSError<GameLiftErrors>> StartGameSessionPlacementOutcome;
        typedef Aws::Utils::Outcome<StopGameSessionPlacementResult, Aws::Client::AWSError<GameLiftErrors>> StopGameSessionPlacementOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, Aws::Client::AWSError<GameLiftErrors>> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateBuildResult, Aws::Client::AWSError<GameLiftErrors>> UpdateBuildOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetAttributesResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetCapacityResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetCapacityOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetPortSettingsResult, Aws::Client::AWSError<GameLiftErrors>> UpdateFleetPortSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateGameSessionResult, Aws::Client::AWSError<GameLiftErrors>> UpdateGameSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateGameSessionQueueResult, Aws::Client::AWSError<GameLiftErrors>> UpdateGameSessionQueueOutcome;
        typedef Aws::Utils::Outcome<UpdateRuntimeConfigurationResult, Aws::Client::AWSError<GameLiftErrors>> UpdateRuntimeConfigurationOutcome;

        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateBuildOutcome> CreateBuildOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<CreateGameSessionOutcome> CreateGameSessionOutcomeCallable;
        typedef std::future<CreateGameSessionQueueOutcome> CreateGameSessionQueueOutcomeCallable;
        typedef std::future<CreatePlayerSessionOutcome> CreatePlayerSessionOutcomeCallable;
        typedef std::future<CreatePlayerSessionsOutcome> CreatePlayerSessionsOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteBuildOutcome> DeleteBuildOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DeleteGameSessionQueueOutcome> DeleteGameSessionQueueOutcomeCallable;
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
        typedef std::future<DescribeGameSessionPlacementOutcome> DescribeGameSessionPlacementOutcomeCallable;
        typedef std::future<DescribeGameSessionQueuesOutcome> DescribeGameSessionQueuesOutcomeCallable;
        typedef std::future<DescribeGameSessionsOutcome> DescribeGameSessionsOutcomeCallable;
        typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
        typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
        typedef std::future<DescribeRuntimeConfigurationOutcome> DescribeRuntimeConfigurationOutcomeCallable;
        typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
        typedef std::future<GetGameSessionLogUrlOutcome> GetGameSessionLogUrlOutcomeCallable;
        typedef std::future<GetInstanceAccessOutcome> GetInstanceAccessOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListBuildsOutcome> ListBuildsOutcomeCallable;
        typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
        typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
        typedef std::future<RequestUploadCredentialsOutcome> RequestUploadCredentialsOutcomeCallable;
        typedef std::future<ResolveAliasOutcome> ResolveAliasOutcomeCallable;
        typedef std::future<SearchGameSessionsOutcome> SearchGameSessionsOutcomeCallable;
        typedef std::future<StartGameSessionPlacementOutcome> StartGameSessionPlacementOutcomeCallable;
        typedef std::future<StopGameSessionPlacementOutcome> StopGameSessionPlacementOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateBuildOutcome> UpdateBuildOutcomeCallable;
        typedef std::future<UpdateFleetAttributesOutcome> UpdateFleetAttributesOutcomeCallable;
        typedef std::future<UpdateFleetCapacityOutcome> UpdateFleetCapacityOutcomeCallable;
        typedef std::future<UpdateFleetPortSettingsOutcome> UpdateFleetPortSettingsOutcomeCallable;
        typedef std::future<UpdateGameSessionOutcome> UpdateGameSessionOutcomeCallable;
        typedef std::future<UpdateGameSessionQueueOutcome> UpdateGameSessionQueueOutcomeCallable;
        typedef std::future<UpdateRuntimeConfigurationOutcome> UpdateRuntimeConfigurationOutcomeCallable;
} // namespace Model

  class GameLiftClient;

    typedef std::function<void(const GameLiftClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateBuildRequest&, const Model::CreateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameSessionRequest&, const Model::CreateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameSessionQueueRequest&, const Model::CreateGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameSessionQueueResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreatePlayerSessionRequest&, const Model::CreatePlayerSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlayerSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreatePlayerSessionsRequest&, const Model::CreatePlayerSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlayerSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteBuildRequest&, const Model::DeleteBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteGameSessionQueueRequest&, const Model::DeleteGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGameSessionQueueResponseReceivedHandler;
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
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionPlacementRequest&, const Model::DescribeGameSessionPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionPlacementResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionQueuesRequest&, const Model::DescribeGameSessionQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionQueuesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionsRequest&, const Model::DescribeGameSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribePlayerSessionsRequest&, const Model::DescribePlayerSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlayerSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeRuntimeConfigurationRequest&, const Model::DescribeRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuntimeConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeScalingPoliciesRequest&, const Model::DescribeScalingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPoliciesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetGameSessionLogUrlRequest&, const Model::GetGameSessionLogUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGameSessionLogUrlResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetInstanceAccessRequest&, const Model::GetInstanceAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceAccessResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListBuildsRequest&, const Model::ListBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::RequestUploadCredentialsRequest&, const Model::RequestUploadCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestUploadCredentialsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ResolveAliasRequest&, const Model::ResolveAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::SearchGameSessionsRequest&, const Model::SearchGameSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGameSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StartGameSessionPlacementRequest&, const Model::StartGameSessionPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartGameSessionPlacementResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StopGameSessionPlacementRequest&, const Model::StopGameSessionPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopGameSessionPlacementResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateBuildRequest&, const Model::UpdateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetAttributesRequest&, const Model::UpdateFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetCapacityRequest&, const Model::UpdateFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetPortSettingsRequest&, const Model::UpdateFleetPortSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetPortSettingsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameSessionRequest&, const Model::UpdateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameSessionQueueRequest&, const Model::UpdateGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameSessionQueueResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateRuntimeConfigurationRequest&, const Model::UpdateRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuntimeConfigurationResponseReceivedHandler;

  /**
   * <fullname>Amazon GameLift Service</fullname> <p> Amazon GameLift is a managed
   * service for developers who need a scalable, dedicated server solution for their
   * multiplayer games. Amazon GameLift provides tools to acquire computing resources
   * and deploy game servers, scale game server capacity to meet player demand, and
   * track in-depth metrics on player usage and server performance.</p> <p>The Amazon
   * GameLift service API includes important features:</p> <ul> <li> <p>Find game
   * sessions and match players to games – Retrieve information on available game
   * sessions; create new game sessions; send player requests to join a game
   * session.</p> </li> <li> <p>Configure and manage game server resources – Manage
   * builds, fleets, queues, and aliases; set autoscaling policies; retrieve logs and
   * metrics.</p> </li> </ul> <p>This reference guide describes the low-level service
   * API for Amazon GameLift. We recommend using either the Amazon Web Services
   * software development kit (<a href="http://aws.amazon.com/tools/#sdk">AWS
   * SDK</a>), available in multiple languages, or the <a
   * href="http://aws.amazon.com/cli/">AWS command-line interface</a> (CLI) tool.
   * Both of these align with the low-level service API. In addition, you can use the
   * <a href="https://console.aws.amazon.com/gamelift/home">AWS Management
   * Console</a> for Amazon GameLift for many administrative actions.</p> <p>You can
   * use some API actions with Amazon GameLift Local, a testing tool that lets you
   * test your game integration locally before deploying on Amazon GameLift. You can
   * call these APIs from the AWS CLI or programmatically; API calls to Amazon
   * GameLift Local servers perform exactly as they do when calling Amazon GameLift
   * web servers. For more information on using Amazon GameLift Local, see <a
   * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/integration-testing-local.html">Testing
   * an Integration</a>.</p> <p> <b>MORE RESOURCES</b> </p> <ul> <li> <p> <a
   * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon
   * GameLift Developer Guide</a> – Learn more about Amazon GameLift features and how
   * to use them. </p> </li> <li> <p> <a
   * href="https://gamedev.amazon.com/forums/tutorials">Lumberyard and Amazon
   * GameLift Tutorials</a> – Get started fast with walkthroughs and sample
   * projects.</p> </li> <li> <p> <a
   * href="http://aws.amazon.com/blogs/gamedev/">GameDev Blog</a> – Stay up to date
   * with new features and techniques.</p> </li> <li> <p> <a
   * href="https://gamedev.amazon.com/forums/spaces/123/gamelift-discussion.html">GameDev
   * Forums</a> – Connect with the GameDev community.</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/doc-history.html">Amazon
   * GameLift Document History</a> – See changes to the Amazon GameLift service,
   * SDKs, and documentation, as well as links to release notes. </p> </li> </ul> <p>
   * <b>API SUMMARY</b> </p> <p>This list offers a functional overview of the Amazon
   * GameLift service API.</p> <p> <b>Finding Games and Joining Players</b> </p>
   * <p>You can enable players to connect to game servers on Amazon GameLift from a
   * game client or through a game service (such as a matchmaking service). You can
   * use these operations to discover actively running game or start new games. You
   * can also match players to games, either singly or as a group.</p> <ul> <li> <p>
   * <b>Discover existing game sessions</b> </p> <ul> <li> <p>
   * <a>SearchGameSessions</a> – Get all available game sessions or search for game
   * sessions that match a set of criteria. <i>Available in Amazon GameLift
   * Local.</i> </p> </li> </ul> </li> <li> <p> <b>Start a new game session</b> </p>
   * <ul> <li> <p>Game session placement – Use a queue to process new game session
   * requests and create game sessions on fleets designated for the queue.</p> <ul>
   * <li> <p> <a>StartGameSessionPlacement</a> – Request a new game session placement
   * and add one or more players to it.</p> </li> <li> <p>
   * <a>DescribeGameSessionPlacement</a> – Get details on a placement request,
   * including status.</p> </li> <li> <p> <a>StopGameSessionPlacement</a> – Cancel a
   * placement request. </p> </li> </ul> </li> <li> <p> <a>CreateGameSession</a> –
   * Start a new game session on a specific fleet. <i>Available in Amazon GameLift
   * Local.</i> </p> </li> </ul> </li> <li> <p> <b>Manage game session objects</b>
   * </p> <ul> <li> <p> <a>DescribeGameSessions</a> – Retrieve metadata for one or
   * more game sessions, including length of time active and current player count.
   * <i>Available in Amazon GameLift Local.</i> </p> </li> <li> <p>
   * <a>DescribeGameSessionDetails</a> – Retrieve metadata and the game session
   * protection setting for one or more game sessions.</p> </li> <li> <p>
   * <a>UpdateGameSession</a> – Change game session settings, such as maximum player
   * count and join policy.</p> </li> <li> <p> <a>GetGameSessionLogUrl</a> – Get the
   * location of saved logs for a game session.</p> </li> </ul> </li> <li> <p>
   * <b>Manage player sessions objects</b> </p> <ul> <li> <p>
   * <a>CreatePlayerSession</a> – Send a request for a player to join a game session.
   * <i>Available in Amazon GameLift Local.</i> </p> </li> <li> <p>
   * <a>CreatePlayerSessions</a> – Send a request for multiple players to join a game
   * session. <i>Available in Amazon GameLift Local.</i> </p> </li> <li> <p>
   * <a>DescribePlayerSessions</a> – Get details on player activity, including
   * status, playing time, and player data. <i>Available in Amazon GameLift
   * Local.</i> </p> </li> </ul> </li> </ul> <p> <b>Setting Up and Managing Game
   * Servers</b> </p> <p>When setting up Amazon GameLift, first create a game build
   * and upload the files to Amazon GameLift. Then use these operations to set up a
   * fleet of resources to run your game servers. Manage games to scale capacity,
   * adjust configuration settings, access raw utilization data, and more.</p> <ul>
   * <li> <p> <b>Manage game builds</b> </p> <ul> <li> <p> <a>CreateBuild</a> –
   * Create a new build by uploading files stored in an Amazon S3 bucket. (To create
   * a build stored at a local file location, use the AWS CLI command
   * <code>upload-build</code>.)</p> </li> <li> <p> <a>ListBuilds</a> – Get a list of
   * all builds uploaded to a Amazon GameLift region.</p> </li> <li> <p>
   * <a>DescribeBuild</a> – Retrieve information associated with a build.</p> </li>
   * <li> <p> <a>UpdateBuild</a> – Change build metadata, including build name and
   * version.</p> </li> <li> <p> <a>DeleteBuild</a> – Remove a build from Amazon
   * GameLift.</p> </li> </ul> </li> <li> <p> <b>Manage fleets</b> </p> <ul> <li> <p>
   * <a>CreateFleet</a> – Configure and activate a new fleet to run a build's game
   * servers.</p> </li> <li> <p> <a>DeleteFleet</a> – Terminate a fleet that is no
   * longer running game servers or hosting players.</p> </li> <li> <p>View / update
   * fleet configurations.</p> <ul> <li> <p> <a>ListFleets</a> – Get a list of all
   * fleet IDs in a Amazon GameLift region (all statuses).</p> </li> <li> <p>
   * <a>DescribeFleetAttributes</a> / <a>UpdateFleetAttributes</a> – View or change a
   * fleet's metadata and settings for game session protection and resource creation
   * limits.</p> </li> <li> <p> <a>DescribeFleetPortSettings</a> /
   * <a>UpdateFleetPortSettings</a> – View or change the inbound permissions (IP
   * address and port setting ranges) allowed for a fleet.</p> </li> <li> <p>
   * <a>DescribeRuntimeConfiguration</a> / <a>UpdateRuntimeConfiguration</a> – View
   * or change what server processes (and how many) to run on each instance in a
   * fleet.</p> </li> <li> <p> <a>DescribeInstances</a> – Get information on each
   * instance in a fleet, including instance ID, IP address, and status.</p> </li>
   * </ul> </li> </ul> </li> <li> <p> <b>Control fleet capacity</b> </p> <ul> <li>
   * <p> <a>DescribeEC2InstanceLimits</a> – Retrieve maximum number of instances
   * allowed for the current AWS account and the current usage level.</p> </li> <li>
   * <p> <a>DescribeFleetCapacity</a> / <a>UpdateFleetCapacity</a> – Retrieve the
   * capacity settings and the current number of instances in a fleet; adjust fleet
   * capacity settings to scale up or down.</p> </li> <li> <p>Autoscale – Manage
   * autoscaling rules and apply them to a fleet.</p> <ul> <li> <p>
   * <a>PutScalingPolicy</a> – Create a new autoscaling policy, or update an existing
   * one.</p> </li> <li> <p> <a>DescribeScalingPolicies</a> – Retrieve an existing
   * autoscaling policy.</p> </li> <li> <p> <a>DeleteScalingPolicy</a> – Delete an
   * autoscaling policy and stop it from affecting a fleet's capacity.</p> </li>
   * </ul> </li> </ul> </li> <li> <p> <b>Access fleet activity statistics</b> </p>
   * <ul> <li> <p> <a>DescribeFleetUtilization</a> – Get current data on the number
   * of server processes, game sessions, and players currently active on a fleet.</p>
   * </li> <li> <p> <a>DescribeFleetEvents</a> – Get a fleet's logged events for a
   * specified time span.</p> </li> <li> <p> <a>DescribeGameSessions</a> – Retrieve
   * metadata associated with one or more game sessions, including length of time
   * active and current player count.</p> </li> </ul> </li> <li> <p> <b>Remotely
   * access an instance</b> </p> <ul> <li> <p> <a>GetInstanceAccess</a> – Request
   * access credentials needed to remotely connect to a specified instance in a
   * fleet.</p> </li> </ul> </li> <li> <p> <b>Manage fleet aliases</b> </p> <ul> <li>
   * <p> <a>CreateAlias</a> – Define a new alias and optionally assign it to a
   * fleet.</p> </li> <li> <p> <a>ListAliases</a> – Get all fleet aliases defined in
   * a Amazon GameLift region.</p> </li> <li> <p> <a>DescribeAlias</a> – Retrieve
   * information on an existing alias.</p> </li> <li> <p> <a>UpdateAlias</a> – Change
   * settings for a alias, such as redirecting it from one fleet to another.</p>
   * </li> <li> <p> <a>DeleteAlias</a> – Remove an alias from the region.</p> </li>
   * <li> <p> <a>ResolveAlias</a> – Get the fleet ID that a specified alias points
   * to.</p> </li> </ul> </li> <li> <p> <b>Manage game session queues</b> </p> <ul>
   * <li> <p> <a>CreateGameSessionQueue</a> – Create a queue for processing requests
   * for new game sessions. </p> </li> <li> <p> <a>DescribeGameSessionQueues</a> –
   * Get data on all game session queues defined in a Amazon GameLift region.</p>
   * </li> <li> <p> <a>UpdateGameSessionQueue</a> – Change the configuration of a
   * game session queue.</p> </li> <li> <p> <a>DeleteGameSessionQueue</a> – Remove a
   * game session queue from the region.</p> </li> </ul> </li> </ul>
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
         * <p>Creates an alias and sets a target fleet. A fleet alias can be used in place
         * of a fleet ID, such as when calling <code>CreateGameSession</code> from a game
         * client or game service or adding destinations to a game session queue. By
         * changing an alias's target fleet, you can switch your players to the new fleet
         * without changing any other component. In production, this feature is
         * particularly useful to redirect your player base seamlessly to the latest game
         * server update. </p> <p>Amazon GameLift supports two types of routing strategies
         * for aliases: simple and terminal. Use a simple alias to point to an active
         * fleet. Use a terminal alias to display a message to incoming traffic instead of
         * routing players to an active fleet. This option is useful when a game server is
         * no longer supported but you want to provide better messaging than a standard 404
         * error.</p> <p>To create a fleet alias, specify an alias name, routing strategy,
         * and optional description. If successful, a new alias record is returned,
         * including an alias ID, which you can reference when creating a game session. To
         * reassign the alias to another fleet ID, call <a>UpdateAlias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias and sets a target fleet. A fleet alias can be used in place
         * of a fleet ID, such as when calling <code>CreateGameSession</code> from a game
         * client or game service or adding destinations to a game session queue. By
         * changing an alias's target fleet, you can switch your players to the new fleet
         * without changing any other component. In production, this feature is
         * particularly useful to redirect your player base seamlessly to the latest game
         * server update. </p> <p>Amazon GameLift supports two types of routing strategies
         * for aliases: simple and terminal. Use a simple alias to point to an active
         * fleet. Use a terminal alias to display a message to incoming traffic instead of
         * routing players to an active fleet. This option is useful when a game server is
         * no longer supported but you want to provide better messaging than a standard 404
         * error.</p> <p>To create a fleet alias, specify an alias name, routing strategy,
         * and optional description. If successful, a new alias record is returned,
         * including an alias ID, which you can reference when creating a game session. To
         * reassign the alias to another fleet ID, call <a>UpdateAlias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias and sets a target fleet. A fleet alias can be used in place
         * of a fleet ID, such as when calling <code>CreateGameSession</code> from a game
         * client or game service or adding destinations to a game session queue. By
         * changing an alias's target fleet, you can switch your players to the new fleet
         * without changing any other component. In production, this feature is
         * particularly useful to redirect your player base seamlessly to the latest game
         * server update. </p> <p>Amazon GameLift supports two types of routing strategies
         * for aliases: simple and terminal. Use a simple alias to point to an active
         * fleet. Use a terminal alias to display a message to incoming traffic instead of
         * routing players to an active fleet. This option is useful when a game server is
         * no longer supported but you want to provide better messaging than a standard 404
         * error.</p> <p>To create a fleet alias, specify an alias name, routing strategy,
         * and optional description. If successful, a new alias record is returned,
         * including an alias ID, which you can reference when creating a game session. To
         * reassign the alias to another fleet ID, call <a>UpdateAlias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon GameLift build from a set of game server binary files
         * stored in an Amazon Simple Storage Service (Amazon S3) location. When using this
         * API call, you must create a <code>.zip</code> file containing all of the build
         * files and store it in an Amazon S3 bucket under your AWS account. For help on
         * packaging your build files and creating a build, see <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading
         * Your Game to Amazon GameLift</a>.</p> <important> <p>Use this API action ONLY if
         * you are storing your game build files in an Amazon S3 bucket in your AWS
         * account. To create a build using files stored in a directory, use the CLI
         * command <a
         * href="http://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">
         * <code>upload-build</code> </a>, which uploads the build files from a file
         * location you specify and creates a build.</p> </important> <p>To create a new
         * build using <code>CreateBuild</code>, identify the storage location and
         * operating system of your game build. You also have the option of specifying a
         * build name and version. If successful, this action creates a new build record
         * with an unique build ID and in <code>INITIALIZED</code> status. Use the API call
         * <a>DescribeBuild</a> to check the status of your build. A build must be in
         * <code>READY</code> status before it can be used to create fleets to host your
         * game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBuildOutcome CreateBuild(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Creates a new Amazon GameLift build from a set of game server binary files
         * stored in an Amazon Simple Storage Service (Amazon S3) location. When using this
         * API call, you must create a <code>.zip</code> file containing all of the build
         * files and store it in an Amazon S3 bucket under your AWS account. For help on
         * packaging your build files and creating a build, see <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading
         * Your Game to Amazon GameLift</a>.</p> <important> <p>Use this API action ONLY if
         * you are storing your game build files in an Amazon S3 bucket in your AWS
         * account. To create a build using files stored in a directory, use the CLI
         * command <a
         * href="http://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">
         * <code>upload-build</code> </a>, which uploads the build files from a file
         * location you specify and creates a build.</p> </important> <p>To create a new
         * build using <code>CreateBuild</code>, identify the storage location and
         * operating system of your game build. You also have the option of specifying a
         * build name and version. If successful, this action creates a new build record
         * with an unique build ID and in <code>INITIALIZED</code> status. Use the API call
         * <a>DescribeBuild</a> to check the status of your build. A build must be in
         * <code>READY</code> status before it can be used to create fleets to host your
         * game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBuildOutcomeCallable CreateBuildCallable(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Creates a new Amazon GameLift build from a set of game server binary files
         * stored in an Amazon Simple Storage Service (Amazon S3) location. When using this
         * API call, you must create a <code>.zip</code> file containing all of the build
         * files and store it in an Amazon S3 bucket under your AWS account. For help on
         * packaging your build files and creating a build, see <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading
         * Your Game to Amazon GameLift</a>.</p> <important> <p>Use this API action ONLY if
         * you are storing your game build files in an Amazon S3 bucket in your AWS
         * account. To create a build using files stored in a directory, use the CLI
         * command <a
         * href="http://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">
         * <code>upload-build</code> </a>, which uploads the build files from a file
         * location you specify and creates a build.</p> </important> <p>To create a new
         * build using <code>CreateBuild</code>, identify the storage location and
         * operating system of your game build. You also have the option of specifying a
         * build name and version. If successful, this action creates a new build record
         * with an unique build ID and in <code>INITIALIZED</code> status. Use the API call
         * <a>DescribeBuild</a> to check the status of your build. A build must be in
         * <code>READY</code> status before it can be used to create fleets to host your
         * game.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuild">AWS
         * API Reference</a></p>
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
         * location of default log files for Amazon GameLift to upload and store.</p> <p>If
         * the CreateFleet call is successful, Amazon GameLift performs the following
         * tasks:</p> <ul> <li> <p>Creates a fleet record and sets the status to
         * <code>NEW</code> (followed by other statuses as the fleet is activated).</p>
         * </li> <li> <p>Sets the fleet's capacity to 1 "desired", which causes Amazon
         * GameLift to start one new EC2 instance.</p> </li> <li> <p>Starts launching
         * server processes on the instance. If the fleet is configured to run multiple
         * server processes per instance, Amazon GameLift staggers each launch by a few
         * seconds.</p> </li> <li> <p>Begins writing events to the fleet event log, which
         * can be accessed in the Amazon GameLift console.</p> </li> <li> <p>Sets the
         * fleet's status to <code>ACTIVE</code> once one server process in the fleet is
         * ready to host a game session.</p> </li> </ul> <p>After a fleet is created, use
         * the following actions to change fleet properties and configuration:</p> <ul>
         * <li> <p> <a>UpdateFleetAttributes</a> -- Update fleet metadata, including name
         * and description.</p> </li> <li> <p> <a>UpdateFleetCapacity</a> -- Increase or
         * decrease the number of instances you want the fleet to maintain.</p> </li> <li>
         * <p> <a>UpdateFleetPortSettings</a> -- Change the IP address and port ranges that
         * allow access to incoming traffic.</p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> -- Change how server processes are launched in
         * the fleet, including launch path, launch parameters, and the number of
         * concurrent processes.</p> </li> <li> <p> <a>PutScalingPolicy</a> -- Create or
         * update rules that are used to set the fleet's capacity (autoscaling).</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleet">AWS
         * API Reference</a></p>
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
         * location of default log files for Amazon GameLift to upload and store.</p> <p>If
         * the CreateFleet call is successful, Amazon GameLift performs the following
         * tasks:</p> <ul> <li> <p>Creates a fleet record and sets the status to
         * <code>NEW</code> (followed by other statuses as the fleet is activated).</p>
         * </li> <li> <p>Sets the fleet's capacity to 1 "desired", which causes Amazon
         * GameLift to start one new EC2 instance.</p> </li> <li> <p>Starts launching
         * server processes on the instance. If the fleet is configured to run multiple
         * server processes per instance, Amazon GameLift staggers each launch by a few
         * seconds.</p> </li> <li> <p>Begins writing events to the fleet event log, which
         * can be accessed in the Amazon GameLift console.</p> </li> <li> <p>Sets the
         * fleet's status to <code>ACTIVE</code> once one server process in the fleet is
         * ready to host a game session.</p> </li> </ul> <p>After a fleet is created, use
         * the following actions to change fleet properties and configuration:</p> <ul>
         * <li> <p> <a>UpdateFleetAttributes</a> -- Update fleet metadata, including name
         * and description.</p> </li> <li> <p> <a>UpdateFleetCapacity</a> -- Increase or
         * decrease the number of instances you want the fleet to maintain.</p> </li> <li>
         * <p> <a>UpdateFleetPortSettings</a> -- Change the IP address and port ranges that
         * allow access to incoming traffic.</p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> -- Change how server processes are launched in
         * the fleet, including launch path, launch parameters, and the number of
         * concurrent processes.</p> </li> <li> <p> <a>PutScalingPolicy</a> -- Create or
         * update rules that are used to set the fleet's capacity (autoscaling).</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleet">AWS
         * API Reference</a></p>
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
         * location of default log files for Amazon GameLift to upload and store.</p> <p>If
         * the CreateFleet call is successful, Amazon GameLift performs the following
         * tasks:</p> <ul> <li> <p>Creates a fleet record and sets the status to
         * <code>NEW</code> (followed by other statuses as the fleet is activated).</p>
         * </li> <li> <p>Sets the fleet's capacity to 1 "desired", which causes Amazon
         * GameLift to start one new EC2 instance.</p> </li> <li> <p>Starts launching
         * server processes on the instance. If the fleet is configured to run multiple
         * server processes per instance, Amazon GameLift staggers each launch by a few
         * seconds.</p> </li> <li> <p>Begins writing events to the fleet event log, which
         * can be accessed in the Amazon GameLift console.</p> </li> <li> <p>Sets the
         * fleet's status to <code>ACTIVE</code> once one server process in the fleet is
         * ready to host a game session.</p> </li> </ul> <p>After a fleet is created, use
         * the following actions to change fleet properties and configuration:</p> <ul>
         * <li> <p> <a>UpdateFleetAttributes</a> -- Update fleet metadata, including name
         * and description.</p> </li> <li> <p> <a>UpdateFleetCapacity</a> -- Increase or
         * decrease the number of instances you want the fleet to maintain.</p> </li> <li>
         * <p> <a>UpdateFleetPortSettings</a> -- Change the IP address and port ranges that
         * allow access to incoming traffic.</p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> -- Change how server processes are launched in
         * the fleet, including launch path, launch parameters, and the number of
         * concurrent processes.</p> </li> <li> <p> <a>PutScalingPolicy</a> -- Create or
         * update rules that are used to set the fleet's capacity (autoscaling).</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a multiplayer game session for players. This action creates a game
         * session record and assigns an available server process in the specified fleet to
         * host the game session. A fleet must have an <code>ACTIVE</code> status before a
         * game session can be created in it.</p> <p>To create a game session, specify
         * either fleet ID or alias ID and indicate a maximum number of players to allow in
         * the game session. You can also provide a name and game-specific properties for
         * this game session. If successful, a <a>GameSession</a> object is returned
         * containing game session properties, including a game session ID with the custom
         * string you provided.</p> <p> <b>Idempotency tokens.</b> You can add a token that
         * uniquely identifies game session requests. This is useful for ensuring that game
         * session requests are idempotent. Multiple requests with the same idempotency
         * token are processed only once; subsequent requests return the original result.
         * All response values are the same with the exception of game session status,
         * which may change.</p> <p> <b>Resource creation limits.</b> If you are creating a
         * game session on a fleet with a resource creation limit policy in force, then you
         * must specify a creator ID. Without this ID, Amazon GameLift has no way to
         * evaluate the policy for this new game session request.</p> <p> By default, newly
         * created game sessions allow new players to join. Use <a>UpdateGameSession</a> to
         * change the game session's player session creation policy.</p> <p> <i>Available
         * in Amazon GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameSessionOutcome CreateGameSession(const Model::CreateGameSessionRequest& request) const;

        /**
         * <p>Creates a multiplayer game session for players. This action creates a game
         * session record and assigns an available server process in the specified fleet to
         * host the game session. A fleet must have an <code>ACTIVE</code> status before a
         * game session can be created in it.</p> <p>To create a game session, specify
         * either fleet ID or alias ID and indicate a maximum number of players to allow in
         * the game session. You can also provide a name and game-specific properties for
         * this game session. If successful, a <a>GameSession</a> object is returned
         * containing game session properties, including a game session ID with the custom
         * string you provided.</p> <p> <b>Idempotency tokens.</b> You can add a token that
         * uniquely identifies game session requests. This is useful for ensuring that game
         * session requests are idempotent. Multiple requests with the same idempotency
         * token are processed only once; subsequent requests return the original result.
         * All response values are the same with the exception of game session status,
         * which may change.</p> <p> <b>Resource creation limits.</b> If you are creating a
         * game session on a fleet with a resource creation limit policy in force, then you
         * must specify a creator ID. Without this ID, Amazon GameLift has no way to
         * evaluate the policy for this new game session request.</p> <p> By default, newly
         * created game sessions allow new players to join. Use <a>UpdateGameSession</a> to
         * change the game session's player session creation policy.</p> <p> <i>Available
         * in Amazon GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameSessionOutcomeCallable CreateGameSessionCallable(const Model::CreateGameSessionRequest& request) const;

        /**
         * <p>Creates a multiplayer game session for players. This action creates a game
         * session record and assigns an available server process in the specified fleet to
         * host the game session. A fleet must have an <code>ACTIVE</code> status before a
         * game session can be created in it.</p> <p>To create a game session, specify
         * either fleet ID or alias ID and indicate a maximum number of players to allow in
         * the game session. You can also provide a name and game-specific properties for
         * this game session. If successful, a <a>GameSession</a> object is returned
         * containing game session properties, including a game session ID with the custom
         * string you provided.</p> <p> <b>Idempotency tokens.</b> You can add a token that
         * uniquely identifies game session requests. This is useful for ensuring that game
         * session requests are idempotent. Multiple requests with the same idempotency
         * token are processed only once; subsequent requests return the original result.
         * All response values are the same with the exception of game session status,
         * which may change.</p> <p> <b>Resource creation limits.</b> If you are creating a
         * game session on a fleet with a resource creation limit policy in force, then you
         * must specify a creator ID. Without this ID, Amazon GameLift has no way to
         * evaluate the policy for this new game session request.</p> <p> By default, newly
         * created game sessions allow new players to join. Use <a>UpdateGameSession</a> to
         * change the game session's player session creation policy.</p> <p> <i>Available
         * in Amazon GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameSessionAsync(const Model::CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Establishes a new queue for processing requests to place new game sessions. A
         * queue identifies where new game sessions can be hosted -- by specifying a list
         * of destinations (fleets or aliases) -- and how long requests can wait in the
         * queue before timing out. You can set up a queue to try to place game sessions on
         * fleets in multiple regions. To add placement requests to a queue, call
         * <a>StartGameSessionPlacement</a> and reference the queue name.</p> <p>
         * <b>Destination order.</b> When processing a request for a game session, Amazon
         * GameLift tries each destination in order until it finds one with available
         * resources to host the new game session. A queue's default order is determined by
         * how destinations are listed. The default order is overridden when a game session
         * placement request provides player latency information. Player latency
         * information enables Amazon GameLift to prioritize destinations where players
         * report the lowest average latency, as a result placing the new game session
         * where the majority of players will have the best possible gameplay
         * experience.</p> <p> <b>Player latency policies.</b> For placement requests
         * containing player latency information, use player latency policies to protect
         * individual players from very high latencies. With a latency cap, even when a
         * destination can deliver a low latency for most players, the game is not placed
         * where any individual player is reporting latency higher than a policy's maximum.
         * A queue can have multiple latency policies, which are enforced consecutively
         * starting with the policy with the lowest latency cap. Use multiple policies to
         * gradually relax latency controls; for example, you might set a policy with a low
         * latency cap for the first 60 seconds, a second policy with a higher cap for the
         * next 60 seconds, etc. </p> <p>To create a new queue, provide a name, timeout
         * value, a list of destinations and, if desired, a set of latency policies. If
         * successful, a new queue object is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameSessionQueueOutcome CreateGameSessionQueue(const Model::CreateGameSessionQueueRequest& request) const;

        /**
         * <p>Establishes a new queue for processing requests to place new game sessions. A
         * queue identifies where new game sessions can be hosted -- by specifying a list
         * of destinations (fleets or aliases) -- and how long requests can wait in the
         * queue before timing out. You can set up a queue to try to place game sessions on
         * fleets in multiple regions. To add placement requests to a queue, call
         * <a>StartGameSessionPlacement</a> and reference the queue name.</p> <p>
         * <b>Destination order.</b> When processing a request for a game session, Amazon
         * GameLift tries each destination in order until it finds one with available
         * resources to host the new game session. A queue's default order is determined by
         * how destinations are listed. The default order is overridden when a game session
         * placement request provides player latency information. Player latency
         * information enables Amazon GameLift to prioritize destinations where players
         * report the lowest average latency, as a result placing the new game session
         * where the majority of players will have the best possible gameplay
         * experience.</p> <p> <b>Player latency policies.</b> For placement requests
         * containing player latency information, use player latency policies to protect
         * individual players from very high latencies. With a latency cap, even when a
         * destination can deliver a low latency for most players, the game is not placed
         * where any individual player is reporting latency higher than a policy's maximum.
         * A queue can have multiple latency policies, which are enforced consecutively
         * starting with the policy with the lowest latency cap. Use multiple policies to
         * gradually relax latency controls; for example, you might set a policy with a low
         * latency cap for the first 60 seconds, a second policy with a higher cap for the
         * next 60 seconds, etc. </p> <p>To create a new queue, provide a name, timeout
         * value, a list of destinations and, if desired, a set of latency policies. If
         * successful, a new queue object is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameSessionQueueOutcomeCallable CreateGameSessionQueueCallable(const Model::CreateGameSessionQueueRequest& request) const;

        /**
         * <p>Establishes a new queue for processing requests to place new game sessions. A
         * queue identifies where new game sessions can be hosted -- by specifying a list
         * of destinations (fleets or aliases) -- and how long requests can wait in the
         * queue before timing out. You can set up a queue to try to place game sessions on
         * fleets in multiple regions. To add placement requests to a queue, call
         * <a>StartGameSessionPlacement</a> and reference the queue name.</p> <p>
         * <b>Destination order.</b> When processing a request for a game session, Amazon
         * GameLift tries each destination in order until it finds one with available
         * resources to host the new game session. A queue's default order is determined by
         * how destinations are listed. The default order is overridden when a game session
         * placement request provides player latency information. Player latency
         * information enables Amazon GameLift to prioritize destinations where players
         * report the lowest average latency, as a result placing the new game session
         * where the majority of players will have the best possible gameplay
         * experience.</p> <p> <b>Player latency policies.</b> For placement requests
         * containing player latency information, use player latency policies to protect
         * individual players from very high latencies. With a latency cap, even when a
         * destination can deliver a low latency for most players, the game is not placed
         * where any individual player is reporting latency higher than a policy's maximum.
         * A queue can have multiple latency policies, which are enforced consecutively
         * starting with the policy with the lowest latency cap. Use multiple policies to
         * gradually relax latency controls; for example, you might set a policy with a low
         * latency cap for the first 60 seconds, a second policy with a higher cap for the
         * next 60 seconds, etc. </p> <p>To create a new queue, provide a name, timeout
         * value, a list of destinations and, if desired, a set of latency policies. If
         * successful, a new queue object is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameSessionQueueAsync(const Model::CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. Before a
         * player can be added, a game session must have an <code>ACTIVE</code> status,
         * have a creation policy of <code>ALLOW_ALL</code>, and have an open player slot.
         * To add a group of players to a game session, use
         * <a>CreatePlayerSessions</a>.</p> <p>To create a player session, specify a game
         * session ID, player ID, and optionally a string of player data. If successful,
         * the player is added to the game session and a new <a>PlayerSession</a> object is
         * returned. Player sessions cannot be updated. </p> <p> <i>Available in Amazon
         * GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlayerSessionOutcome CreatePlayerSession(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. Before a
         * player can be added, a game session must have an <code>ACTIVE</code> status,
         * have a creation policy of <code>ALLOW_ALL</code>, and have an open player slot.
         * To add a group of players to a game session, use
         * <a>CreatePlayerSessions</a>.</p> <p>To create a player session, specify a game
         * session ID, player ID, and optionally a string of player data. If successful,
         * the player is added to the game session and a new <a>PlayerSession</a> object is
         * returned. Player sessions cannot be updated. </p> <p> <i>Available in Amazon
         * GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionOutcomeCallable CreatePlayerSessionCallable(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Adds a player to a game session and creates a player session record. Before a
         * player can be added, a game session must have an <code>ACTIVE</code> status,
         * have a creation policy of <code>ALLOW_ALL</code>, and have an open player slot.
         * To add a group of players to a game session, use
         * <a>CreatePlayerSessions</a>.</p> <p>To create a player session, specify a game
         * session ID, player ID, and optionally a string of player data. If successful,
         * the player is added to the game session and a new <a>PlayerSession</a> object is
         * returned. Player sessions cannot be updated. </p> <p> <i>Available in Amazon
         * GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionAsync(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a group of players to a game session. This action is useful with a team
         * matching feature. Before players can be added, a game session must have an
         * <code>ACTIVE</code> status, have a creation policy of <code>ALLOW_ALL</code>,
         * and have an open player slot. To add a single player to a game session, use
         * <a>CreatePlayerSession</a>.</p> <p>To create player sessions, specify a game
         * session ID, a list of player IDs, and optionally a set of player data strings.
         * If successful, the players are added to the game session and a set of new
         * <a>PlayerSession</a> objects is returned. Player sessions cannot be updated.</p>
         * <p> <i>Available in Amazon GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlayerSessionsOutcome CreatePlayerSessions(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Adds a group of players to a game session. This action is useful with a team
         * matching feature. Before players can be added, a game session must have an
         * <code>ACTIVE</code> status, have a creation policy of <code>ALLOW_ALL</code>,
         * and have an open player slot. To add a single player to a game session, use
         * <a>CreatePlayerSession</a>.</p> <p>To create player sessions, specify a game
         * session ID, a list of player IDs, and optionally a set of player data strings.
         * If successful, the players are added to the game session and a set of new
         * <a>PlayerSession</a> objects is returned. Player sessions cannot be updated.</p>
         * <p> <i>Available in Amazon GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionsOutcomeCallable CreatePlayerSessionsCallable(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Adds a group of players to a game session. This action is useful with a team
         * matching feature. Before players can be added, a game session must have an
         * <code>ACTIVE</code> status, have a creation policy of <code>ALLOW_ALL</code>,
         * and have an open player slot. To add a single player to a game session, use
         * <a>CreatePlayerSession</a>.</p> <p>To create player sessions, specify a game
         * session ID, a list of player IDs, and optionally a set of player data strings.
         * If successful, the players are added to the game session and a set of new
         * <a>PlayerSession</a> objects is returned. Player sessions cannot be updated.</p>
         * <p> <i>Available in Amazon GameLift Local.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionsAsync(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet alias. This action removes all record of the alias. Game
         * clients attempting to access a server process using the deleted alias receive an
         * error. To delete an alias, specify the alias ID to be deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes a fleet alias. This action removes all record of the alias. Game
         * clients attempting to access a server process using the deleted alias receive an
         * error. To delete an alias, specify the alias ID to be deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes a fleet alias. This action removes all record of the alias. Game
         * clients attempting to access a server process using the deleted alias receive an
         * error. To delete an alias, specify the alias ID to be deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets using the build, but you can no
         * longer create new fleets with the deleted build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBuildOutcome DeleteBuild(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets using the build, but you can no
         * longer create new fleets with the deleted build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBuildOutcomeCallable DeleteBuildCallable(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This action permanently deletes the build record and any
         * uploaded build files.</p> <p>To delete a build, specify its ID. Deleting a build
         * does not affect the status of any active fleets using the build, but you can no
         * longer create new fleets with the deleted build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBuildAsync(const Model::DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p>
         * <p>This action removes the fleet's resources and the fleet record. Once a fleet
         * is deleted, you can no longer use that fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p>
         * <p>This action removes the fleet's resources and the fleet record. Once a fleet
         * is deleted, you can no longer use that fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p>
         * <p>This action removes the fleet's resources and the fleet record. Once a fleet
         * is deleted, you can no longer use that fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a game session queue. This action means that any
         * <a>StartGameSessionPlacement</a> requests that reference this queue will fail.
         * To delete a queue, specify the queue name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGameSessionQueueOutcome DeleteGameSessionQueue(const Model::DeleteGameSessionQueueRequest& request) const;

        /**
         * <p>Deletes a game session queue. This action means that any
         * <a>StartGameSessionPlacement</a> requests that reference this queue will fail.
         * To delete a queue, specify the queue name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGameSessionQueueOutcomeCallable DeleteGameSessionQueueCallable(const Model::DeleteGameSessionQueueRequest& request) const;

        /**
         * <p>Deletes a game session queue. This action means that any
         * <a>StartGameSessionPlacement</a> requests that reference this queue will fail.
         * To delete a queue, specify the queue name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGameSessionQueueAsync(const Model::DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet scaling policy. This action means that the policy is no
         * longer in force and removes all record of it. To delete a scaling policy,
         * specify both the scaling policy name and the fleet ID it is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes a fleet scaling policy. This action means that the policy is no
         * longer in force and removes all record of it. To delete a scaling policy,
         * specify both the scaling policy name and the fleet ID it is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes a fleet scaling policy. This action means that the policy is no
         * longer in force and removes all record of it. To delete a scaling policy,
         * specify both the scaling policy name and the fleet ID it is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a fleet alias. This operation returns all alias
         * metadata and settings. To get just the fleet ID an alias is currently pointing
         * to, use <a>ResolveAlias</a>. </p> <p>To get alias properties, specify the alias
         * ID. If successful, an <a>Alias</a> object is returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAliasOutcome DescribeAlias(const Model::DescribeAliasRequest& request) const;

        /**
         * <p>Retrieves properties for a fleet alias. This operation returns all alias
         * metadata and settings. To get just the fleet ID an alias is currently pointing
         * to, use <a>ResolveAlias</a>. </p> <p>To get alias properties, specify the alias
         * ID. If successful, an <a>Alias</a> object is returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAliasOutcomeCallable DescribeAliasCallable(const Model::DescribeAliasRequest& request) const;

        /**
         * <p>Retrieves properties for a fleet alias. This operation returns all alias
         * metadata and settings. To get just the fleet ID an alias is currently pointing
         * to, use <a>ResolveAlias</a>. </p> <p>To get alias properties, specify the alias
         * ID. If successful, an <a>Alias</a> object is returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAliasAsync(const Model::DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a build. To get a build record, specify a build ID.
         * If successful, an object containing the build properties is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBuildOutcome DescribeBuild(const Model::DescribeBuildRequest& request) const;

        /**
         * <p>Retrieves properties for a build. To get a build record, specify a build ID.
         * If successful, an object containing the build properties is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBuildOutcomeCallable DescribeBuildCallable(const Model::DescribeBuildRequest& request) const;

        /**
         * <p>Retrieves properties for a build. To get a build record, specify a build ID.
         * If successful, an object containing the build properties is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBuildAsync(const Model::DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>maximum number of instances allowed per AWS account (service
         * limit)</p> </li> <li> <p>current usage level for the AWS account</p> </li> </ul>
         * <p>Service limits vary depending on region. Available regions for Amazon
         * GameLift can be found in the AWS Management Console for Amazon GameLift (see the
         * drop-down list in the upper right corner).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEC2InstanceLimitsOutcome DescribeEC2InstanceLimits(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>maximum number of instances allowed per AWS account (service
         * limit)</p> </li> <li> <p>current usage level for the AWS account</p> </li> </ul>
         * <p>Service limits vary depending on region. Available regions for Amazon
         * GameLift can be found in the AWS Management Console for Amazon GameLift (see the
         * drop-down list in the upper right corner).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEC2InstanceLimitsOutcomeCallable DescribeEC2InstanceLimitsCallable(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>maximum number of instances allowed per AWS account (service
         * limit)</p> </li> <li> <p>current usage level for the AWS account</p> </li> </ul>
         * <p>Service limits vary depending on region. Available regions for Amazon
         * GameLift can be found in the AWS Management Console for Amazon GameLift (see the
         * drop-down list in the upper right corner).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimits">AWS
         * API Reference</a></p>
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
         * request fails and the error message includes the maximum allowed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetAttributes">AWS
         * API Reference</a></p>
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
         * request fails and the error message includes the maximum allowed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetAttributes">AWS
         * API Reference</a></p>
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
         * request fails and the error message includes the maximum allowed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetAttributes">AWS
         * API Reference</a></p>
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
         * request fails and the error message includes the maximum allowed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetCapacity">AWS
         * API Reference</a></p>
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
         * request fails and the error message includes the maximum allowed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetCapacity">AWS
         * API Reference</a></p>
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
         * request fails and the error message includes the maximum allowed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetCapacity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetCapacityAsync(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves entries from the specified fleet's event log. You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a collection of event log
         * entries matching the request are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetEventsOutcome DescribeFleetEvents(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * <p>Retrieves entries from the specified fleet's event log. You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a collection of event log
         * entries matching the request are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetEventsOutcomeCallable DescribeFleetEventsCallable(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * <p>Retrieves entries from the specified fleet's event log. You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a collection of event log
         * entries matching the request are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetEvents">AWS
         * API Reference</a></p>
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
         * requested fleet has been deleted, the result set is empty.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetPortSettingsOutcome DescribeFleetPortSettings(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * <p>Retrieves the inbound connection permissions for a fleet. Connection
         * permissions include a range of IP addresses and port settings that incoming
         * traffic can use to access server processes in the fleet. To get a fleet's
         * inbound connection permissions, specify a fleet ID. If successful, a collection
         * of <a>IpPermission</a> objects is returned for the requested fleet ID. If the
         * requested fleet has been deleted, the result set is empty.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettings">AWS
         * API Reference</a></p>
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
         * requested fleet has been deleted, the result set is empty.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettings">AWS
         * API Reference</a></p>
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
         * message includes the maximum allowed.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetUtilization">AWS
         * API Reference</a></p>
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
         * message includes the maximum allowed.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetUtilization">AWS
         * API Reference</a></p>
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
         * message includes the maximum allowed.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetUtilization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetUtilizationAsync(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This action can be used in several ways: (1) provide a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> to request details for
         * a specific game session; (2) provide either a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. </p> <p>To get game session record(s), specify just one of the following:
         * game session ID, fleet ID, or alias ID. You can filter this request by game
         * session status. Use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionDetail</a> object is returned
         * for each session matching the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionDetailsOutcome DescribeGameSessionDetails(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This action can be used in several ways: (1) provide a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> to request details for
         * a specific game session; (2) provide either a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. </p> <p>To get game session record(s), specify just one of the following:
         * game session ID, fleet ID, or alias ID. You can filter this request by game
         * session status. Use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionDetail</a> object is returned
         * for each session matching the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionDetailsOutcomeCallable DescribeGameSessionDetailsCallable(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This action can be used in several ways: (1) provide a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> to request details for
         * a specific game session; (2) provide either a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. </p> <p>To get game session record(s), specify just one of the following:
         * game session ID, fleet ID, or alias ID. You can filter this request by game
         * session status. Use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionDetail</a> object is returned
         * for each session matching the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionDetailsAsync(const Model::DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties and current status of a game session placement request.
         * To get game session placement details, specify the placement ID. If successful,
         * a <a>GameSessionPlacement</a> object is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionPlacementOutcome DescribeGameSessionPlacement(const Model::DescribeGameSessionPlacementRequest& request) const;

        /**
         * <p>Retrieves properties and current status of a game session placement request.
         * To get game session placement details, specify the placement ID. If successful,
         * a <a>GameSessionPlacement</a> object is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionPlacementOutcomeCallable DescribeGameSessionPlacementCallable(const Model::DescribeGameSessionPlacementRequest& request) const;

        /**
         * <p>Retrieves properties and current status of a game session placement request.
         * To get game session placement details, specify the placement ID. If successful,
         * a <a>GameSessionPlacement</a> object is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionPlacementAsync(const Model::DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the properties for one or more game session queues. When requesting
         * multiple queues, use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionQueue</a> object is returned
         * for each requested queue. When specifying a list of queues, objects are returned
         * only for queues that currently exist in the region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionQueuesOutcome DescribeGameSessionQueues(const Model::DescribeGameSessionQueuesRequest& request) const;

        /**
         * <p>Retrieves the properties for one or more game session queues. When requesting
         * multiple queues, use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionQueue</a> object is returned
         * for each requested queue. When specifying a list of queues, objects are returned
         * only for queues that currently exist in the region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionQueuesOutcomeCallable DescribeGameSessionQueuesCallable(const Model::DescribeGameSessionQueuesRequest& request) const;

        /**
         * <p>Retrieves the properties for one or more game session queues. When requesting
         * multiple queues, use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionQueue</a> object is returned
         * for each requested queue. When specifying a list of queues, objects are returned
         * only for queues that currently exist in the region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionQueuesAsync(const Model::DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a set of one or more game sessions. Request a specific game session
         * or request all game sessions on a fleet. Alternatively, use
         * <a>SearchGameSessions</a> to request a set of active game sessions that are
         * filtered by certain criteria. To retrieve protection policy settings for game
         * sessions, use <a>DescribeGameSessionDetails</a>.</p> <p>To get game sessions,
         * specify one of the following: game session ID, fleet ID, or alias ID. You can
         * filter this request by game session status. Use the pagination parameters to
         * retrieve results as a set of sequential pages. If successful, a
         * <a>GameSession</a> object is returned for each game session matching the
         * request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionsOutcome DescribeGameSessions(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of one or more game sessions. Request a specific game session
         * or request all game sessions on a fleet. Alternatively, use
         * <a>SearchGameSessions</a> to request a set of active game sessions that are
         * filtered by certain criteria. To retrieve protection policy settings for game
         * sessions, use <a>DescribeGameSessionDetails</a>.</p> <p>To get game sessions,
         * specify one of the following: game session ID, fleet ID, or alias ID. You can
         * filter this request by game session status. Use the pagination parameters to
         * retrieve results as a set of sequential pages. If successful, a
         * <a>GameSession</a> object is returned for each game session matching the
         * request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionsOutcomeCallable DescribeGameSessionsCallable(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of one or more game sessions. Request a specific game session
         * or request all game sessions on a fleet. Alternatively, use
         * <a>SearchGameSessions</a> to request a set of active game sessions that are
         * filtered by certain criteria. To retrieve protection policy settings for game
         * sessions, use <a>DescribeGameSessionDetails</a>.</p> <p>To get game sessions,
         * specify one of the following: game session ID, fleet ID, or alias ID. You can
         * filter this request by game session status. Use the pagination parameters to
         * retrieve results as a set of sequential pages. If successful, a
         * <a>GameSession</a> object is returned for each game session matching the
         * request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionsAsync(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a fleet's instances, including instance IDs. Use
         * this action to get details on all instances in the fleet or get details on one
         * specific instance.</p> <p>To get a specific instance, specify fleet ID and
         * instance ID. To get all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Retrieves information about a fleet's instances, including instance IDs. Use
         * this action to get details on all instances in the fleet or get details on one
         * specific instance.</p> <p>To get a specific instance, specify fleet ID and
         * instance ID. To get all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Retrieves information about a fleet's instances, including instance IDs. Use
         * this action to get details on all instances in the fleet or get details on one
         * specific instance.</p> <p>To get a specific instance, specify fleet ID and
         * instance ID. To get all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <code>PlayerSessionId</code> to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> to request properties for all player sessions in the
         * specified game session; (3) provide a <code>PlayerId</code> to request
         * properties for all player sessions of a specified player. </p> <p>To get game
         * session record(s), specify only one of the following: a player session ID, a
         * game session ID, or a player ID. You can filter this request by player session
         * status. Use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>PlayerSession</a> object is returned for each session
         * matching the request.</p> <p> <i>Available in Amazon GameLift Local.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <code>PlayerSessionId</code> to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> to request properties for all player sessions in the
         * specified game session; (3) provide a <code>PlayerId</code> to request
         * properties for all player sessions of a specified player. </p> <p>To get game
         * session record(s), specify only one of the following: a player session ID, a
         * game session ID, or a player ID. You can filter this request by player session
         * status. Use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>PlayerSession</a> object is returned for each session
         * matching the request.</p> <p> <i>Available in Amazon GameLift Local.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This action can be used
         * in several ways: (1) provide a <code>PlayerSessionId</code> to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> to request properties for all player sessions in the
         * specified game session; (3) provide a <code>PlayerId</code> to request
         * properties for all player sessions of a specified player. </p> <p>To get game
         * session record(s), specify only one of the following: a player session ID, a
         * game session ID, or a player ID. You can filter this request by player session
         * status. Use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>PlayerSession</a> object is returned for each session
         * matching the request.</p> <p> <i>Available in Amazon GameLift Local.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current runtime configuration for the specified fleet. The
         * runtime configuration tells Amazon GameLift how to launch server processes on
         * instances in the fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuntimeConfigurationOutcome DescribeRuntimeConfiguration(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * <p>Retrieves the current runtime configuration for the specified fleet. The
         * runtime configuration tells Amazon GameLift how to launch server processes on
         * instances in the fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeRuntimeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuntimeConfigurationOutcomeCallable DescribeRuntimeConfigurationCallable(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * <p>Retrieves the current runtime configuration for the specified fleet. The
         * runtime configuration tells Amazon GameLift how to launch server processes on
         * instances in the fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeRuntimeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuntimeConfigurationAsync(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPolicies">AWS
         * API Reference</a></p>
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
         * limit are not saved.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGameSessionLogUrlOutcome GetGameSessionLogUrl(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3. Use this URL to download the logs.</p> <note> <p>See the
         * <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrl">AWS
         * API Reference</a></p>
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
         * limit are not saved.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGameSessionLogUrlAsync(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or watching activity in real time. </p>
         * <p>Access requires credentials that match the operating system of the instance.
         * For a Windows instance, Amazon GameLift returns a user name and password as
         * strings for use with a Windows Remote Desktop client. For a Linux instance,
         * Amazon GameLift returns a user name and RSA private key, also as strings, for
         * use with an SSH client. The private key must be saved in the proper format to a
         * <code>.pem</code> file before using. If you're making this request using the AWS
         * CLI, saving the secret can be handled as part of the GetInstanceAccess request.
         * (See the example later in this topic). For more information on remote access,
         * see <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Accessing an Instance</a>.</p> <p>To request access to a specific instance,
         * specify the IDs of the instance and the fleet it belongs to. If successful, an
         * <a>InstanceAccess</a> object is returned containing the instance's IP address
         * and a set of credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceAccessOutcome GetInstanceAccess(const Model::GetInstanceAccessRequest& request) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or watching activity in real time. </p>
         * <p>Access requires credentials that match the operating system of the instance.
         * For a Windows instance, Amazon GameLift returns a user name and password as
         * strings for use with a Windows Remote Desktop client. For a Linux instance,
         * Amazon GameLift returns a user name and RSA private key, also as strings, for
         * use with an SSH client. The private key must be saved in the proper format to a
         * <code>.pem</code> file before using. If you're making this request using the AWS
         * CLI, saving the secret can be handled as part of the GetInstanceAccess request.
         * (See the example later in this topic). For more information on remote access,
         * see <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Accessing an Instance</a>.</p> <p>To request access to a specific instance,
         * specify the IDs of the instance and the fleet it belongs to. If successful, an
         * <a>InstanceAccess</a> object is returned containing the instance's IP address
         * and a set of credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceAccessOutcomeCallable GetInstanceAccessCallable(const Model::GetInstanceAccessRequest& request) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or watching activity in real time. </p>
         * <p>Access requires credentials that match the operating system of the instance.
         * For a Windows instance, Amazon GameLift returns a user name and password as
         * strings for use with a Windows Remote Desktop client. For a Linux instance,
         * Amazon GameLift returns a user name and RSA private key, also as strings, for
         * use with an SSH client. The private key must be saved in the proper format to a
         * <code>.pem</code> file before using. If you're making this request using the AWS
         * CLI, saving the secret can be handled as part of the GetInstanceAccess request.
         * (See the example later in this topic). For more information on remote access,
         * see <a
         * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Accessing an Instance</a>.</p> <p>To request access to a specific instance,
         * specify the IDs of the instance and the fleet it belongs to. If successful, an
         * <a>InstanceAccess</a> object is returned containing the instance's IP address
         * and a set of credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceAccessAsync(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages.</p> <note> <p>Aliases are
         * not listed in any particular order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages.</p> <note> <p>Aliases are
         * not listed in any particular order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves a collection of alias records for this AWS account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages.</p> <note> <p>Aliases are
         * not listed in any particular order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves build records for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p> <note> <p>Build records are not listed in any
         * particular order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsOutcome ListBuilds(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build records for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p> <note> <p>Build records are not listed in any
         * particular order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuilds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsOutcomeCallable ListBuildsCallable(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build records for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p> <note> <p>Build records are not listed in any
         * particular order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuilds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsAsync(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages.</p> <note> <p>Fleet records are not listed in any particular
         * order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages.</p> <note> <p>Fleet records are not listed in any particular
         * order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet records for this AWS account. You can filter
         * the result set by build ID. Use the pagination parameters to retrieve results in
         * sequential pages.</p> <note> <p>Fleet records are not listed in any particular
         * order.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleets">AWS
         * API Reference</a></p>
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
         * policy, call <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicy">AWS
         * API Reference</a></p>
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
         * policy, call <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicy">AWS
         * API Reference</a></p>
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
         * policy, call <a>DeleteScalingPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <i>This API call is not currently in use. </i> Retrieves a fresh set of
         * upload credentials and the assigned Amazon S3 storage location for a specific
         * build. Valid credentials are required to upload your game build files to Amazon
         * S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestUploadCredentialsOutcome RequestUploadCredentials(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p> <i>This API call is not currently in use. </i> Retrieves a fresh set of
         * upload credentials and the assigned Amazon S3 storage location for a specific
         * build. Valid credentials are required to upload your game build files to Amazon
         * S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestUploadCredentialsOutcomeCallable RequestUploadCredentialsCallable(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p> <i>This API call is not currently in use. </i> Retrieves a fresh set of
         * upload credentials and the assigned Amazon S3 storage location for a specific
         * build. Valid credentials are required to upload your game build files to Amazon
         * S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestUploadCredentialsAsync(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveAliasOutcome ResolveAlias(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveAliasOutcomeCallable ResolveAliasCallable(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that a specified alias is currently pointing
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveAliasAsync(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a set of game sessions that match a set of search criteria and
         * sorts them in a specified order. Currently a game session search is limited to a
         * single fleet. Search results include only game sessions that are in
         * <code>ACTIVE</code> status. If you need to retrieve game sessions with a status
         * other than active, use <a>DescribeGameSessions</a>. If you need to retrieve the
         * protection policy for each game session, use
         * <a>DescribeGameSessionDetails</a>.</p> <p>You can search or sort by the
         * following game session attributes:</p> <ul> <li> <p> <b>gameSessionId</b> --
         * Unique identifier for the game session. You can use either a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p> </li> <li>
         * <p> <b>gameSessionName</b> -- Name assigned to a game session. This value is set
         * when requesting a new game session with <a>CreateGameSession</a> or updating
         * with <a>UpdateGameSession</a>. Game session names do not need to be unique to a
         * game session.</p> </li> <li> <p> <b>creationTimeMillis</b> -- Value indicating
         * when a game session was created. It is expressed in Unix time as
         * milliseconds.</p> </li> <li> <p> <b>playerSessionCount</b> -- Number of players
         * currently connected to a game session. This value changes rapidly as players
         * join the session or drop out.</p> </li> <li> <p> <b>maximumSessions</b> --
         * Maximum number of player sessions allowed for a game session. This value is set
         * when requesting a new game session with <a>CreateGameSession</a> or updating
         * with <a>UpdateGameSession</a>.</p> </li> <li> <p>
         * <b>hasAvailablePlayerSessions</b> -- Boolean value indicating whether or not a
         * game session has reached its maximum number of players. When searching with this
         * attribute, the search value must be <code>true</code> or <code>false</code>. It
         * is highly recommended that all search requests include this filter attribute to
         * optimize search performance and return only sessions that players can join. </p>
         * </li> </ul> <p>To search or sort, specify either a fleet ID or an alias ID, and
         * provide a search filter expression, a sort expression, or both. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a collection of <a>GameSession</a> objects matching the request is
         * returned.</p> <note> <p>Returned values for <code>playerSessionCount</code> and
         * <code>hasAvailablePlayerSessions</code> change quickly as players join sessions
         * and others drop out. Results should be considered a snapshot in time. Be sure to
         * refresh search results often, and handle sessions that fill up before a player
         * can join. </p> </note> <p> <i>Available in Amazon GameLift Local.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGameSessionsOutcome SearchGameSessions(const Model::SearchGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of game sessions that match a set of search criteria and
         * sorts them in a specified order. Currently a game session search is limited to a
         * single fleet. Search results include only game sessions that are in
         * <code>ACTIVE</code> status. If you need to retrieve game sessions with a status
         * other than active, use <a>DescribeGameSessions</a>. If you need to retrieve the
         * protection policy for each game session, use
         * <a>DescribeGameSessionDetails</a>.</p> <p>You can search or sort by the
         * following game session attributes:</p> <ul> <li> <p> <b>gameSessionId</b> --
         * Unique identifier for the game session. You can use either a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p> </li> <li>
         * <p> <b>gameSessionName</b> -- Name assigned to a game session. This value is set
         * when requesting a new game session with <a>CreateGameSession</a> or updating
         * with <a>UpdateGameSession</a>. Game session names do not need to be unique to a
         * game session.</p> </li> <li> <p> <b>creationTimeMillis</b> -- Value indicating
         * when a game session was created. It is expressed in Unix time as
         * milliseconds.</p> </li> <li> <p> <b>playerSessionCount</b> -- Number of players
         * currently connected to a game session. This value changes rapidly as players
         * join the session or drop out.</p> </li> <li> <p> <b>maximumSessions</b> --
         * Maximum number of player sessions allowed for a game session. This value is set
         * when requesting a new game session with <a>CreateGameSession</a> or updating
         * with <a>UpdateGameSession</a>.</p> </li> <li> <p>
         * <b>hasAvailablePlayerSessions</b> -- Boolean value indicating whether or not a
         * game session has reached its maximum number of players. When searching with this
         * attribute, the search value must be <code>true</code> or <code>false</code>. It
         * is highly recommended that all search requests include this filter attribute to
         * optimize search performance and return only sessions that players can join. </p>
         * </li> </ul> <p>To search or sort, specify either a fleet ID or an alias ID, and
         * provide a search filter expression, a sort expression, or both. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a collection of <a>GameSession</a> objects matching the request is
         * returned.</p> <note> <p>Returned values for <code>playerSessionCount</code> and
         * <code>hasAvailablePlayerSessions</code> change quickly as players join sessions
         * and others drop out. Results should be considered a snapshot in time. Be sure to
         * refresh search results often, and handle sessions that fill up before a player
         * can join. </p> </note> <p> <i>Available in Amazon GameLift Local.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchGameSessionsOutcomeCallable SearchGameSessionsCallable(const Model::SearchGameSessionsRequest& request) const;

        /**
         * <p>Retrieves a set of game sessions that match a set of search criteria and
         * sorts them in a specified order. Currently a game session search is limited to a
         * single fleet. Search results include only game sessions that are in
         * <code>ACTIVE</code> status. If you need to retrieve game sessions with a status
         * other than active, use <a>DescribeGameSessions</a>. If you need to retrieve the
         * protection policy for each game session, use
         * <a>DescribeGameSessionDetails</a>.</p> <p>You can search or sort by the
         * following game session attributes:</p> <ul> <li> <p> <b>gameSessionId</b> --
         * Unique identifier for the game session. You can use either a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p> </li> <li>
         * <p> <b>gameSessionName</b> -- Name assigned to a game session. This value is set
         * when requesting a new game session with <a>CreateGameSession</a> or updating
         * with <a>UpdateGameSession</a>. Game session names do not need to be unique to a
         * game session.</p> </li> <li> <p> <b>creationTimeMillis</b> -- Value indicating
         * when a game session was created. It is expressed in Unix time as
         * milliseconds.</p> </li> <li> <p> <b>playerSessionCount</b> -- Number of players
         * currently connected to a game session. This value changes rapidly as players
         * join the session or drop out.</p> </li> <li> <p> <b>maximumSessions</b> --
         * Maximum number of player sessions allowed for a game session. This value is set
         * when requesting a new game session with <a>CreateGameSession</a> or updating
         * with <a>UpdateGameSession</a>.</p> </li> <li> <p>
         * <b>hasAvailablePlayerSessions</b> -- Boolean value indicating whether or not a
         * game session has reached its maximum number of players. When searching with this
         * attribute, the search value must be <code>true</code> or <code>false</code>. It
         * is highly recommended that all search requests include this filter attribute to
         * optimize search performance and return only sessions that players can join. </p>
         * </li> </ul> <p>To search or sort, specify either a fleet ID or an alias ID, and
         * provide a search filter expression, a sort expression, or both. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a collection of <a>GameSession</a> objects matching the request is
         * returned.</p> <note> <p>Returned values for <code>playerSessionCount</code> and
         * <code>hasAvailablePlayerSessions</code> change quickly as players join sessions
         * and others drop out. Results should be considered a snapshot in time. Be sure to
         * refresh search results often, and handle sessions that fill up before a player
         * can join. </p> </note> <p> <i>Available in Amazon GameLift Local.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchGameSessionsAsync(const Model::SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Places a request for a new game session in a queue (see
         * <a>CreateGameSessionQueue</a>). When processing a placement request, Amazon
         * GameLift searches for available resources on the queue's destinations, scanning
         * each until it finds resources or the placement request times out. A game session
         * placement request can also request player sessions. When a new game session is
         * successfully created, Amazon GameLift creates a player session for each player
         * included in the request.</p> <p>When placing a game session, by default Amazon
         * GameLift tries each fleet in the order they are listed in the queue
         * configuration. Ideally, a queue's destinations are listed in preference order.
         * Alternatively, when requesting a game session with players, you can also provide
         * latency data for each player in relevant regions. Latency data indicates the
         * performance lag a player experiences when connected to a fleet in the region.
         * Amazon GameLift uses latency data to reorder the list of destinations to place
         * the game session in a region with minimal lag. If latency data is provided for
         * multiple players, Amazon GameLift calculates each region's average lag for all
         * players and reorders to get the best game play across all players. </p> <p>To
         * place a new game session request, specify the queue name and a set of game
         * session properties and settings. Also provide a unique ID (such as a UUID) for
         * the placement. You'll use this ID to track the status of the placement request.
         * Optionally, provide a set of IDs and player data for each player you want to
         * join to the new game session. To optimize game play for the players, also
         * provide latency data for all players. If successful, a new game session
         * placement is created. To track the status of a placement request, call
         * <a>DescribeGameSessionPlacement</a> and check the request's status. If the
         * status is Fulfilled, a new game session has been created and a game session ARN
         * and region are referenced. If the placement request times out, you have the
         * option of resubmitting the request or retrying it with a different queue.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::StartGameSessionPlacementOutcome StartGameSessionPlacement(const Model::StartGameSessionPlacementRequest& request) const;

        /**
         * <p>Places a request for a new game session in a queue (see
         * <a>CreateGameSessionQueue</a>). When processing a placement request, Amazon
         * GameLift searches for available resources on the queue's destinations, scanning
         * each until it finds resources or the placement request times out. A game session
         * placement request can also request player sessions. When a new game session is
         * successfully created, Amazon GameLift creates a player session for each player
         * included in the request.</p> <p>When placing a game session, by default Amazon
         * GameLift tries each fleet in the order they are listed in the queue
         * configuration. Ideally, a queue's destinations are listed in preference order.
         * Alternatively, when requesting a game session with players, you can also provide
         * latency data for each player in relevant regions. Latency data indicates the
         * performance lag a player experiences when connected to a fleet in the region.
         * Amazon GameLift uses latency data to reorder the list of destinations to place
         * the game session in a region with minimal lag. If latency data is provided for
         * multiple players, Amazon GameLift calculates each region's average lag for all
         * players and reorders to get the best game play across all players. </p> <p>To
         * place a new game session request, specify the queue name and a set of game
         * session properties and settings. Also provide a unique ID (such as a UUID) for
         * the placement. You'll use this ID to track the status of the placement request.
         * Optionally, provide a set of IDs and player data for each player you want to
         * join to the new game session. To optimize game play for the players, also
         * provide latency data for all players. If successful, a new game session
         * placement is created. To track the status of a placement request, call
         * <a>DescribeGameSessionPlacement</a> and check the request's status. If the
         * status is Fulfilled, a new game session has been created and a game session ARN
         * and region are referenced. If the placement request times out, you have the
         * option of resubmitting the request or retrying it with a different queue.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartGameSessionPlacementOutcomeCallable StartGameSessionPlacementCallable(const Model::StartGameSessionPlacementRequest& request) const;

        /**
         * <p>Places a request for a new game session in a queue (see
         * <a>CreateGameSessionQueue</a>). When processing a placement request, Amazon
         * GameLift searches for available resources on the queue's destinations, scanning
         * each until it finds resources or the placement request times out. A game session
         * placement request can also request player sessions. When a new game session is
         * successfully created, Amazon GameLift creates a player session for each player
         * included in the request.</p> <p>When placing a game session, by default Amazon
         * GameLift tries each fleet in the order they are listed in the queue
         * configuration. Ideally, a queue's destinations are listed in preference order.
         * Alternatively, when requesting a game session with players, you can also provide
         * latency data for each player in relevant regions. Latency data indicates the
         * performance lag a player experiences when connected to a fleet in the region.
         * Amazon GameLift uses latency data to reorder the list of destinations to place
         * the game session in a region with minimal lag. If latency data is provided for
         * multiple players, Amazon GameLift calculates each region's average lag for all
         * players and reorders to get the best game play across all players. </p> <p>To
         * place a new game session request, specify the queue name and a set of game
         * session properties and settings. Also provide a unique ID (such as a UUID) for
         * the placement. You'll use this ID to track the status of the placement request.
         * Optionally, provide a set of IDs and player data for each player you want to
         * join to the new game session. To optimize game play for the players, also
         * provide latency data for all players. If successful, a new game session
         * placement is created. To track the status of a placement request, call
         * <a>DescribeGameSessionPlacement</a> and check the request's status. If the
         * status is Fulfilled, a new game session has been created and a game session ARN
         * and region are referenced. If the placement request times out, you have the
         * option of resubmitting the request or retrying it with a different queue.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartGameSessionPlacementAsync(const Model::StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a game session placement that is in Pending status. To stop a
         * placement, provide the placement ID values. If successful, the placement is
         * moved to Cancelled status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::StopGameSessionPlacementOutcome StopGameSessionPlacement(const Model::StopGameSessionPlacementRequest& request) const;

        /**
         * <p>Cancels a game session placement that is in Pending status. To stop a
         * placement, provide the placement ID values. If successful, the placement is
         * moved to Cancelled status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopGameSessionPlacementOutcomeCallable StopGameSessionPlacementCallable(const Model::StopGameSessionPlacementRequest& request) const;

        /**
         * <p>Cancels a game session placement that is in Pending status. To stop a
         * placement, provide the placement ID values. If successful, the placement is
         * moved to Cancelled status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopGameSessionPlacementAsync(const Model::StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties for a fleet alias. To update properties, specify the alias
         * ID to be updated and provide the information to be changed. To reassign an alias
         * to another fleet, provide an updated routing strategy. If successful, the
         * updated alias record is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates properties for a fleet alias. To update properties, specify the alias
         * ID to be updated and provide the information to be changed. To reassign an alias
         * to another fleet, provide an updated routing strategy. If successful, the
         * updated alias record is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates properties for a fleet alias. To update properties, specify the alias
         * ID to be updated and provide the information to be changed. To reassign an alias
         * to another fleet, provide an updated routing strategy. If successful, the
         * updated alias record is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBuildOutcome UpdateBuild(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBuildOutcomeCallable UpdateBuildCallable(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build record, including the build name and version. To
         * update the metadata, specify the build ID to update and provide the new values.
         * If successful, a build object containing the updated metadata is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBuildAsync(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values you want to
         * change. If successful, the fleet ID for the updated fleet is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetAttributesOutcome UpdateFleetAttributes(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values you want to
         * change. If successful, the fleet ID for the updated fleet is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetAttributesOutcomeCallable UpdateFleetAttributesCallable(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values you want to
         * change. If successful, the fleet ID for the updated fleet is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributes">AWS
         * API Reference</a></p>
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
         * than the instance type's limit, the "Limit Exceeded" exception
         * occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetCapacity">AWS
         * API Reference</a></p>
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
         * than the instance type's limit, the "Limit Exceeded" exception
         * occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetCapacity">AWS
         * API Reference</a></p>
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
         * than the instance type's limit, the "Limit Exceeded" exception
         * occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetCapacity">AWS
         * API Reference</a></p>
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
         * for the updated fleet is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetPortSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetPortSettingsOutcome UpdateFleetPortSettings(const Model::UpdateFleetPortSettingsRequest& request) const;

        /**
         * <p>Updates port settings for a fleet. To update settings, specify the fleet ID
         * to be updated and list the permissions you want to update. List the permissions
         * you want to add in <code>InboundPermissionAuthorizations</code>, and permissions
         * you want to remove in <code>InboundPermissionRevocations</code>. Permissions to
         * be removed must match existing fleet permissions. If successful, the fleet ID
         * for the updated fleet is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetPortSettings">AWS
         * API Reference</a></p>
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
         * for the updated fleet is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetPortSettings">AWS
         * API Reference</a></p>
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
         * change. If successful, an updated <a>GameSession</a> object is returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameSessionOutcome UpdateGameSession(const Model::UpdateGameSessionRequest& request) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count, protection policy, which controls whether or not an active game
         * session can be terminated during a scale-down event, and the player session
         * creation policy, which controls whether or not new players can join the session.
         * To update a game session, specify the game session ID and the values you want to
         * change. If successful, an updated <a>GameSession</a> object is returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSession">AWS
         * API Reference</a></p>
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
         * change. If successful, an updated <a>GameSession</a> object is returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameSessionAsync(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates settings for a game session queue, which determines how new game
         * session requests in the queue are processed. To update settings, specify the
         * queue name to be updated and provide the new settings. When updating
         * destinations, provide a complete list of destinations. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameSessionQueueOutcome UpdateGameSessionQueue(const Model::UpdateGameSessionQueueRequest& request) const;

        /**
         * <p>Updates settings for a game session queue, which determines how new game
         * session requests in the queue are processed. To update settings, specify the
         * queue name to be updated and provide the new settings. When updating
         * destinations, provide a complete list of destinations. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameSessionQueueOutcomeCallable UpdateGameSessionQueueCallable(const Model::UpdateGameSessionQueueRequest& request) const;

        /**
         * <p>Updates settings for a game session queue, which determines how new game
         * session requests in the queue are processed. To update settings, specify the
         * queue name to be updated and provide the new settings. When updating
         * destinations, provide a complete list of destinations. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameSessionQueueAsync(const Model::UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells Amazon GameLift how to launch server processes on instances in the fleet.
         * You can update a fleet's runtime configuration at any time after the fleet is
         * created; it does not need to be in an <code>ACTIVE</code> status.</p> <p>To
         * update runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> object with the updated collection of server
         * process configurations.</p> <p>Each instance in a Amazon GameLift fleet checks
         * regularly for an updated runtime configuration and changes how it launches
         * server processes to comply with the latest version. Existing server processes
         * are not affected by the update; they continue to run until they end, while
         * Amazon GameLift simply adds new server processes to fit the current runtime
         * configuration. As a result, the runtime configuration changes are applied
         * gradually as existing processes shut down and new processes are launched in
         * Amazon GameLift's normal process recycling activity.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuntimeConfigurationOutcome UpdateRuntimeConfiguration(const Model::UpdateRuntimeConfigurationRequest& request) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells Amazon GameLift how to launch server processes on instances in the fleet.
         * You can update a fleet's runtime configuration at any time after the fleet is
         * created; it does not need to be in an <code>ACTIVE</code> status.</p> <p>To
         * update runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> object with the updated collection of server
         * process configurations.</p> <p>Each instance in a Amazon GameLift fleet checks
         * regularly for an updated runtime configuration and changes how it launches
         * server processes to comply with the latest version. Existing server processes
         * are not affected by the update; they continue to run until they end, while
         * Amazon GameLift simply adds new server processes to fit the current runtime
         * configuration. As a result, the runtime configuration changes are applied
         * gradually as existing processes shut down and new processes are launched in
         * Amazon GameLift's normal process recycling activity.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateRuntimeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuntimeConfigurationOutcomeCallable UpdateRuntimeConfigurationCallable(const Model::UpdateRuntimeConfigurationRequest& request) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells Amazon GameLift how to launch server processes on instances in the fleet.
         * You can update a fleet's runtime configuration at any time after the fleet is
         * created; it does not need to be in an <code>ACTIVE</code> status.</p> <p>To
         * update runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> object with the updated collection of server
         * process configurations.</p> <p>Each instance in a Amazon GameLift fleet checks
         * regularly for an updated runtime configuration and changes how it launches
         * server processes to comply with the latest version. Existing server processes
         * are not affected by the update; they continue to run until they end, while
         * Amazon GameLift simply adds new server processes to fit the current runtime
         * configuration. As a result, the runtime configuration changes are applied
         * gradually as existing processes shut down and new processes are launched in
         * Amazon GameLift's normal process recycling activity.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateRuntimeConfiguration">AWS
         * API Reference</a></p>
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
        void CreateGameSessionQueueAsyncHelper(const Model::CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlayerSessionAsyncHelper(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlayerSessionsAsyncHelper(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBuildAsyncHelper(const Model::DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFleetAsyncHelper(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGameSessionQueueAsyncHelper(const Model::DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void DescribeGameSessionPlacementAsyncHelper(const Model::DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionQueuesAsyncHelper(const Model::DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionsAsyncHelper(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancesAsyncHelper(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlayerSessionsAsyncHelper(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuntimeConfigurationAsyncHelper(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingPoliciesAsyncHelper(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGameSessionLogUrlAsyncHelper(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceAccessAsyncHelper(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsAsyncHelper(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFleetsAsyncHelper(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestUploadCredentialsAsyncHelper(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveAliasAsyncHelper(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchGameSessionsAsyncHelper(const Model::SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartGameSessionPlacementAsyncHelper(const Model::StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopGameSessionPlacementAsyncHelper(const Model::StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBuildAsyncHelper(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetAttributesAsyncHelper(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetCapacityAsyncHelper(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetPortSettingsAsyncHelper(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameSessionAsyncHelper(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameSessionQueueAsyncHelper(const Model::UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuntimeConfigurationAsyncHelper(const Model::UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GameLift
} // namespace Aws
