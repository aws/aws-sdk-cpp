/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/AcceptMatchResult.h>
#include <aws/gamelift/model/ClaimGameServerResult.h>
#include <aws/gamelift/model/CreateAliasResult.h>
#include <aws/gamelift/model/CreateBuildResult.h>
#include <aws/gamelift/model/CreateFleetResult.h>
#include <aws/gamelift/model/CreateGameServerGroupResult.h>
#include <aws/gamelift/model/CreateGameSessionResult.h>
#include <aws/gamelift/model/CreateGameSessionQueueResult.h>
#include <aws/gamelift/model/CreateMatchmakingConfigurationResult.h>
#include <aws/gamelift/model/CreateMatchmakingRuleSetResult.h>
#include <aws/gamelift/model/CreatePlayerSessionResult.h>
#include <aws/gamelift/model/CreatePlayerSessionsResult.h>
#include <aws/gamelift/model/CreateScriptResult.h>
#include <aws/gamelift/model/CreateVpcPeeringAuthorizationResult.h>
#include <aws/gamelift/model/CreateVpcPeeringConnectionResult.h>
#include <aws/gamelift/model/DeleteGameServerGroupResult.h>
#include <aws/gamelift/model/DeleteGameSessionQueueResult.h>
#include <aws/gamelift/model/DeleteMatchmakingConfigurationResult.h>
#include <aws/gamelift/model/DeleteMatchmakingRuleSetResult.h>
#include <aws/gamelift/model/DeleteVpcPeeringAuthorizationResult.h>
#include <aws/gamelift/model/DeleteVpcPeeringConnectionResult.h>
#include <aws/gamelift/model/DescribeAliasResult.h>
#include <aws/gamelift/model/DescribeBuildResult.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsResult.h>
#include <aws/gamelift/model/DescribeFleetAttributesResult.h>
#include <aws/gamelift/model/DescribeFleetCapacityResult.h>
#include <aws/gamelift/model/DescribeFleetEventsResult.h>
#include <aws/gamelift/model/DescribeFleetPortSettingsResult.h>
#include <aws/gamelift/model/DescribeFleetUtilizationResult.h>
#include <aws/gamelift/model/DescribeGameServerResult.h>
#include <aws/gamelift/model/DescribeGameServerGroupResult.h>
#include <aws/gamelift/model/DescribeGameServerInstancesResult.h>
#include <aws/gamelift/model/DescribeGameSessionDetailsResult.h>
#include <aws/gamelift/model/DescribeGameSessionPlacementResult.h>
#include <aws/gamelift/model/DescribeGameSessionQueuesResult.h>
#include <aws/gamelift/model/DescribeGameSessionsResult.h>
#include <aws/gamelift/model/DescribeInstancesResult.h>
#include <aws/gamelift/model/DescribeMatchmakingResult.h>
#include <aws/gamelift/model/DescribeMatchmakingConfigurationsResult.h>
#include <aws/gamelift/model/DescribeMatchmakingRuleSetsResult.h>
#include <aws/gamelift/model/DescribePlayerSessionsResult.h>
#include <aws/gamelift/model/DescribeRuntimeConfigurationResult.h>
#include <aws/gamelift/model/DescribeScalingPoliciesResult.h>
#include <aws/gamelift/model/DescribeScriptResult.h>
#include <aws/gamelift/model/DescribeVpcPeeringAuthorizationsResult.h>
#include <aws/gamelift/model/DescribeVpcPeeringConnectionsResult.h>
#include <aws/gamelift/model/GetGameSessionLogUrlResult.h>
#include <aws/gamelift/model/GetInstanceAccessResult.h>
#include <aws/gamelift/model/ListAliasesResult.h>
#include <aws/gamelift/model/ListBuildsResult.h>
#include <aws/gamelift/model/ListFleetsResult.h>
#include <aws/gamelift/model/ListGameServerGroupsResult.h>
#include <aws/gamelift/model/ListGameServersResult.h>
#include <aws/gamelift/model/ListScriptsResult.h>
#include <aws/gamelift/model/ListTagsForResourceResult.h>
#include <aws/gamelift/model/PutScalingPolicyResult.h>
#include <aws/gamelift/model/RegisterGameServerResult.h>
#include <aws/gamelift/model/RequestUploadCredentialsResult.h>
#include <aws/gamelift/model/ResolveAliasResult.h>
#include <aws/gamelift/model/ResumeGameServerGroupResult.h>
#include <aws/gamelift/model/SearchGameSessionsResult.h>
#include <aws/gamelift/model/StartFleetActionsResult.h>
#include <aws/gamelift/model/StartGameSessionPlacementResult.h>
#include <aws/gamelift/model/StartMatchBackfillResult.h>
#include <aws/gamelift/model/StartMatchmakingResult.h>
#include <aws/gamelift/model/StopFleetActionsResult.h>
#include <aws/gamelift/model/StopGameSessionPlacementResult.h>
#include <aws/gamelift/model/StopMatchmakingResult.h>
#include <aws/gamelift/model/SuspendGameServerGroupResult.h>
#include <aws/gamelift/model/TagResourceResult.h>
#include <aws/gamelift/model/UntagResourceResult.h>
#include <aws/gamelift/model/UpdateAliasResult.h>
#include <aws/gamelift/model/UpdateBuildResult.h>
#include <aws/gamelift/model/UpdateFleetAttributesResult.h>
#include <aws/gamelift/model/UpdateFleetCapacityResult.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsResult.h>
#include <aws/gamelift/model/UpdateGameServerResult.h>
#include <aws/gamelift/model/UpdateGameServerGroupResult.h>
#include <aws/gamelift/model/UpdateGameSessionResult.h>
#include <aws/gamelift/model/UpdateGameSessionQueueResult.h>
#include <aws/gamelift/model/UpdateMatchmakingConfigurationResult.h>
#include <aws/gamelift/model/UpdateRuntimeConfigurationResult.h>
#include <aws/gamelift/model/UpdateScriptResult.h>
#include <aws/gamelift/model/ValidateMatchmakingRuleSetResult.h>
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
        class AcceptMatchRequest;
        class ClaimGameServerRequest;
        class CreateAliasRequest;
        class CreateBuildRequest;
        class CreateFleetRequest;
        class CreateGameServerGroupRequest;
        class CreateGameSessionRequest;
        class CreateGameSessionQueueRequest;
        class CreateMatchmakingConfigurationRequest;
        class CreateMatchmakingRuleSetRequest;
        class CreatePlayerSessionRequest;
        class CreatePlayerSessionsRequest;
        class CreateScriptRequest;
        class CreateVpcPeeringAuthorizationRequest;
        class CreateVpcPeeringConnectionRequest;
        class DeleteAliasRequest;
        class DeleteBuildRequest;
        class DeleteFleetRequest;
        class DeleteGameServerGroupRequest;
        class DeleteGameSessionQueueRequest;
        class DeleteMatchmakingConfigurationRequest;
        class DeleteMatchmakingRuleSetRequest;
        class DeleteScalingPolicyRequest;
        class DeleteScriptRequest;
        class DeleteVpcPeeringAuthorizationRequest;
        class DeleteVpcPeeringConnectionRequest;
        class DeregisterGameServerRequest;
        class DescribeAliasRequest;
        class DescribeBuildRequest;
        class DescribeEC2InstanceLimitsRequest;
        class DescribeFleetAttributesRequest;
        class DescribeFleetCapacityRequest;
        class DescribeFleetEventsRequest;
        class DescribeFleetPortSettingsRequest;
        class DescribeFleetUtilizationRequest;
        class DescribeGameServerRequest;
        class DescribeGameServerGroupRequest;
        class DescribeGameServerInstancesRequest;
        class DescribeGameSessionDetailsRequest;
        class DescribeGameSessionPlacementRequest;
        class DescribeGameSessionQueuesRequest;
        class DescribeGameSessionsRequest;
        class DescribeInstancesRequest;
        class DescribeMatchmakingRequest;
        class DescribeMatchmakingConfigurationsRequest;
        class DescribeMatchmakingRuleSetsRequest;
        class DescribePlayerSessionsRequest;
        class DescribeRuntimeConfigurationRequest;
        class DescribeScalingPoliciesRequest;
        class DescribeScriptRequest;
        class DescribeVpcPeeringAuthorizationsRequest;
        class DescribeVpcPeeringConnectionsRequest;
        class GetGameSessionLogUrlRequest;
        class GetInstanceAccessRequest;
        class ListAliasesRequest;
        class ListBuildsRequest;
        class ListFleetsRequest;
        class ListGameServerGroupsRequest;
        class ListGameServersRequest;
        class ListScriptsRequest;
        class ListTagsForResourceRequest;
        class PutScalingPolicyRequest;
        class RegisterGameServerRequest;
        class RequestUploadCredentialsRequest;
        class ResolveAliasRequest;
        class ResumeGameServerGroupRequest;
        class SearchGameSessionsRequest;
        class StartFleetActionsRequest;
        class StartGameSessionPlacementRequest;
        class StartMatchBackfillRequest;
        class StartMatchmakingRequest;
        class StopFleetActionsRequest;
        class StopGameSessionPlacementRequest;
        class StopMatchmakingRequest;
        class SuspendGameServerGroupRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAliasRequest;
        class UpdateBuildRequest;
        class UpdateFleetAttributesRequest;
        class UpdateFleetCapacityRequest;
        class UpdateFleetPortSettingsRequest;
        class UpdateGameServerRequest;
        class UpdateGameServerGroupRequest;
        class UpdateGameSessionRequest;
        class UpdateGameSessionQueueRequest;
        class UpdateMatchmakingConfigurationRequest;
        class UpdateRuntimeConfigurationRequest;
        class UpdateScriptRequest;
        class ValidateMatchmakingRuleSetRequest;

        typedef Aws::Utils::Outcome<AcceptMatchResult, GameLiftError> AcceptMatchOutcome;
        typedef Aws::Utils::Outcome<ClaimGameServerResult, GameLiftError> ClaimGameServerOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, GameLiftError> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateBuildResult, GameLiftError> CreateBuildOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, GameLiftError> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<CreateGameServerGroupResult, GameLiftError> CreateGameServerGroupOutcome;
        typedef Aws::Utils::Outcome<CreateGameSessionResult, GameLiftError> CreateGameSessionOutcome;
        typedef Aws::Utils::Outcome<CreateGameSessionQueueResult, GameLiftError> CreateGameSessionQueueOutcome;
        typedef Aws::Utils::Outcome<CreateMatchmakingConfigurationResult, GameLiftError> CreateMatchmakingConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateMatchmakingRuleSetResult, GameLiftError> CreateMatchmakingRuleSetOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionResult, GameLiftError> CreatePlayerSessionOutcome;
        typedef Aws::Utils::Outcome<CreatePlayerSessionsResult, GameLiftError> CreatePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<CreateScriptResult, GameLiftError> CreateScriptOutcome;
        typedef Aws::Utils::Outcome<CreateVpcPeeringAuthorizationResult, GameLiftError> CreateVpcPeeringAuthorizationOutcome;
        typedef Aws::Utils::Outcome<CreateVpcPeeringConnectionResult, GameLiftError> CreateVpcPeeringConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeleteBuildOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<DeleteGameServerGroupResult, GameLiftError> DeleteGameServerGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteGameSessionQueueResult, GameLiftError> DeleteGameSessionQueueOutcome;
        typedef Aws::Utils::Outcome<DeleteMatchmakingConfigurationResult, GameLiftError> DeleteMatchmakingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteMatchmakingRuleSetResult, GameLiftError> DeleteMatchmakingRuleSetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeleteScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeleteScriptOutcome;
        typedef Aws::Utils::Outcome<DeleteVpcPeeringAuthorizationResult, GameLiftError> DeleteVpcPeeringAuthorizationOutcome;
        typedef Aws::Utils::Outcome<DeleteVpcPeeringConnectionResult, GameLiftError> DeleteVpcPeeringConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeregisterGameServerOutcome;
        typedef Aws::Utils::Outcome<DescribeAliasResult, GameLiftError> DescribeAliasOutcome;
        typedef Aws::Utils::Outcome<DescribeBuildResult, GameLiftError> DescribeBuildOutcome;
        typedef Aws::Utils::Outcome<DescribeEC2InstanceLimitsResult, GameLiftError> DescribeEC2InstanceLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetAttributesResult, GameLiftError> DescribeFleetAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetCapacityResult, GameLiftError> DescribeFleetCapacityOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetEventsResult, GameLiftError> DescribeFleetEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetPortSettingsResult, GameLiftError> DescribeFleetPortSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetUtilizationResult, GameLiftError> DescribeFleetUtilizationOutcome;
        typedef Aws::Utils::Outcome<DescribeGameServerResult, GameLiftError> DescribeGameServerOutcome;
        typedef Aws::Utils::Outcome<DescribeGameServerGroupResult, GameLiftError> DescribeGameServerGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeGameServerInstancesResult, GameLiftError> DescribeGameServerInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionDetailsResult, GameLiftError> DescribeGameSessionDetailsOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionPlacementResult, GameLiftError> DescribeGameSessionPlacementOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionQueuesResult, GameLiftError> DescribeGameSessionQueuesOutcome;
        typedef Aws::Utils::Outcome<DescribeGameSessionsResult, GameLiftError> DescribeGameSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancesResult, GameLiftError> DescribeInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeMatchmakingResult, GameLiftError> DescribeMatchmakingOutcome;
        typedef Aws::Utils::Outcome<DescribeMatchmakingConfigurationsResult, GameLiftError> DescribeMatchmakingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribeMatchmakingRuleSetsResult, GameLiftError> DescribeMatchmakingRuleSetsOutcome;
        typedef Aws::Utils::Outcome<DescribePlayerSessionsResult, GameLiftError> DescribePlayerSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribeRuntimeConfigurationResult, GameLiftError> DescribeRuntimeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingPoliciesResult, GameLiftError> DescribeScalingPoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeScriptResult, GameLiftError> DescribeScriptOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcPeeringAuthorizationsResult, GameLiftError> DescribeVpcPeeringAuthorizationsOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcPeeringConnectionsResult, GameLiftError> DescribeVpcPeeringConnectionsOutcome;
        typedef Aws::Utils::Outcome<GetGameSessionLogUrlResult, GameLiftError> GetGameSessionLogUrlOutcome;
        typedef Aws::Utils::Outcome<GetInstanceAccessResult, GameLiftError> GetInstanceAccessOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, GameLiftError> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListBuildsResult, GameLiftError> ListBuildsOutcome;
        typedef Aws::Utils::Outcome<ListFleetsResult, GameLiftError> ListFleetsOutcome;
        typedef Aws::Utils::Outcome<ListGameServerGroupsResult, GameLiftError> ListGameServerGroupsOutcome;
        typedef Aws::Utils::Outcome<ListGameServersResult, GameLiftError> ListGameServersOutcome;
        typedef Aws::Utils::Outcome<ListScriptsResult, GameLiftError> ListScriptsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, GameLiftError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutScalingPolicyResult, GameLiftError> PutScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RegisterGameServerResult, GameLiftError> RegisterGameServerOutcome;
        typedef Aws::Utils::Outcome<RequestUploadCredentialsResult, GameLiftError> RequestUploadCredentialsOutcome;
        typedef Aws::Utils::Outcome<ResolveAliasResult, GameLiftError> ResolveAliasOutcome;
        typedef Aws::Utils::Outcome<ResumeGameServerGroupResult, GameLiftError> ResumeGameServerGroupOutcome;
        typedef Aws::Utils::Outcome<SearchGameSessionsResult, GameLiftError> SearchGameSessionsOutcome;
        typedef Aws::Utils::Outcome<StartFleetActionsResult, GameLiftError> StartFleetActionsOutcome;
        typedef Aws::Utils::Outcome<StartGameSessionPlacementResult, GameLiftError> StartGameSessionPlacementOutcome;
        typedef Aws::Utils::Outcome<StartMatchBackfillResult, GameLiftError> StartMatchBackfillOutcome;
        typedef Aws::Utils::Outcome<StartMatchmakingResult, GameLiftError> StartMatchmakingOutcome;
        typedef Aws::Utils::Outcome<StopFleetActionsResult, GameLiftError> StopFleetActionsOutcome;
        typedef Aws::Utils::Outcome<StopGameSessionPlacementResult, GameLiftError> StopGameSessionPlacementOutcome;
        typedef Aws::Utils::Outcome<StopMatchmakingResult, GameLiftError> StopMatchmakingOutcome;
        typedef Aws::Utils::Outcome<SuspendGameServerGroupResult, GameLiftError> SuspendGameServerGroupOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, GameLiftError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, GameLiftError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, GameLiftError> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateBuildResult, GameLiftError> UpdateBuildOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetAttributesResult, GameLiftError> UpdateFleetAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetCapacityResult, GameLiftError> UpdateFleetCapacityOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetPortSettingsResult, GameLiftError> UpdateFleetPortSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateGameServerResult, GameLiftError> UpdateGameServerOutcome;
        typedef Aws::Utils::Outcome<UpdateGameServerGroupResult, GameLiftError> UpdateGameServerGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateGameSessionResult, GameLiftError> UpdateGameSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateGameSessionQueueResult, GameLiftError> UpdateGameSessionQueueOutcome;
        typedef Aws::Utils::Outcome<UpdateMatchmakingConfigurationResult, GameLiftError> UpdateMatchmakingConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateRuntimeConfigurationResult, GameLiftError> UpdateRuntimeConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateScriptResult, GameLiftError> UpdateScriptOutcome;
        typedef Aws::Utils::Outcome<ValidateMatchmakingRuleSetResult, GameLiftError> ValidateMatchmakingRuleSetOutcome;

        typedef std::future<AcceptMatchOutcome> AcceptMatchOutcomeCallable;
        typedef std::future<ClaimGameServerOutcome> ClaimGameServerOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateBuildOutcome> CreateBuildOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<CreateGameServerGroupOutcome> CreateGameServerGroupOutcomeCallable;
        typedef std::future<CreateGameSessionOutcome> CreateGameSessionOutcomeCallable;
        typedef std::future<CreateGameSessionQueueOutcome> CreateGameSessionQueueOutcomeCallable;
        typedef std::future<CreateMatchmakingConfigurationOutcome> CreateMatchmakingConfigurationOutcomeCallable;
        typedef std::future<CreateMatchmakingRuleSetOutcome> CreateMatchmakingRuleSetOutcomeCallable;
        typedef std::future<CreatePlayerSessionOutcome> CreatePlayerSessionOutcomeCallable;
        typedef std::future<CreatePlayerSessionsOutcome> CreatePlayerSessionsOutcomeCallable;
        typedef std::future<CreateScriptOutcome> CreateScriptOutcomeCallable;
        typedef std::future<CreateVpcPeeringAuthorizationOutcome> CreateVpcPeeringAuthorizationOutcomeCallable;
        typedef std::future<CreateVpcPeeringConnectionOutcome> CreateVpcPeeringConnectionOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteBuildOutcome> DeleteBuildOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DeleteGameServerGroupOutcome> DeleteGameServerGroupOutcomeCallable;
        typedef std::future<DeleteGameSessionQueueOutcome> DeleteGameSessionQueueOutcomeCallable;
        typedef std::future<DeleteMatchmakingConfigurationOutcome> DeleteMatchmakingConfigurationOutcomeCallable;
        typedef std::future<DeleteMatchmakingRuleSetOutcome> DeleteMatchmakingRuleSetOutcomeCallable;
        typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
        typedef std::future<DeleteScriptOutcome> DeleteScriptOutcomeCallable;
        typedef std::future<DeleteVpcPeeringAuthorizationOutcome> DeleteVpcPeeringAuthorizationOutcomeCallable;
        typedef std::future<DeleteVpcPeeringConnectionOutcome> DeleteVpcPeeringConnectionOutcomeCallable;
        typedef std::future<DeregisterGameServerOutcome> DeregisterGameServerOutcomeCallable;
        typedef std::future<DescribeAliasOutcome> DescribeAliasOutcomeCallable;
        typedef std::future<DescribeBuildOutcome> DescribeBuildOutcomeCallable;
        typedef std::future<DescribeEC2InstanceLimitsOutcome> DescribeEC2InstanceLimitsOutcomeCallable;
        typedef std::future<DescribeFleetAttributesOutcome> DescribeFleetAttributesOutcomeCallable;
        typedef std::future<DescribeFleetCapacityOutcome> DescribeFleetCapacityOutcomeCallable;
        typedef std::future<DescribeFleetEventsOutcome> DescribeFleetEventsOutcomeCallable;
        typedef std::future<DescribeFleetPortSettingsOutcome> DescribeFleetPortSettingsOutcomeCallable;
        typedef std::future<DescribeFleetUtilizationOutcome> DescribeFleetUtilizationOutcomeCallable;
        typedef std::future<DescribeGameServerOutcome> DescribeGameServerOutcomeCallable;
        typedef std::future<DescribeGameServerGroupOutcome> DescribeGameServerGroupOutcomeCallable;
        typedef std::future<DescribeGameServerInstancesOutcome> DescribeGameServerInstancesOutcomeCallable;
        typedef std::future<DescribeGameSessionDetailsOutcome> DescribeGameSessionDetailsOutcomeCallable;
        typedef std::future<DescribeGameSessionPlacementOutcome> DescribeGameSessionPlacementOutcomeCallable;
        typedef std::future<DescribeGameSessionQueuesOutcome> DescribeGameSessionQueuesOutcomeCallable;
        typedef std::future<DescribeGameSessionsOutcome> DescribeGameSessionsOutcomeCallable;
        typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
        typedef std::future<DescribeMatchmakingOutcome> DescribeMatchmakingOutcomeCallable;
        typedef std::future<DescribeMatchmakingConfigurationsOutcome> DescribeMatchmakingConfigurationsOutcomeCallable;
        typedef std::future<DescribeMatchmakingRuleSetsOutcome> DescribeMatchmakingRuleSetsOutcomeCallable;
        typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
        typedef std::future<DescribeRuntimeConfigurationOutcome> DescribeRuntimeConfigurationOutcomeCallable;
        typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
        typedef std::future<DescribeScriptOutcome> DescribeScriptOutcomeCallable;
        typedef std::future<DescribeVpcPeeringAuthorizationsOutcome> DescribeVpcPeeringAuthorizationsOutcomeCallable;
        typedef std::future<DescribeVpcPeeringConnectionsOutcome> DescribeVpcPeeringConnectionsOutcomeCallable;
        typedef std::future<GetGameSessionLogUrlOutcome> GetGameSessionLogUrlOutcomeCallable;
        typedef std::future<GetInstanceAccessOutcome> GetInstanceAccessOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListBuildsOutcome> ListBuildsOutcomeCallable;
        typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
        typedef std::future<ListGameServerGroupsOutcome> ListGameServerGroupsOutcomeCallable;
        typedef std::future<ListGameServersOutcome> ListGameServersOutcomeCallable;
        typedef std::future<ListScriptsOutcome> ListScriptsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
        typedef std::future<RegisterGameServerOutcome> RegisterGameServerOutcomeCallable;
        typedef std::future<RequestUploadCredentialsOutcome> RequestUploadCredentialsOutcomeCallable;
        typedef std::future<ResolveAliasOutcome> ResolveAliasOutcomeCallable;
        typedef std::future<ResumeGameServerGroupOutcome> ResumeGameServerGroupOutcomeCallable;
        typedef std::future<SearchGameSessionsOutcome> SearchGameSessionsOutcomeCallable;
        typedef std::future<StartFleetActionsOutcome> StartFleetActionsOutcomeCallable;
        typedef std::future<StartGameSessionPlacementOutcome> StartGameSessionPlacementOutcomeCallable;
        typedef std::future<StartMatchBackfillOutcome> StartMatchBackfillOutcomeCallable;
        typedef std::future<StartMatchmakingOutcome> StartMatchmakingOutcomeCallable;
        typedef std::future<StopFleetActionsOutcome> StopFleetActionsOutcomeCallable;
        typedef std::future<StopGameSessionPlacementOutcome> StopGameSessionPlacementOutcomeCallable;
        typedef std::future<StopMatchmakingOutcome> StopMatchmakingOutcomeCallable;
        typedef std::future<SuspendGameServerGroupOutcome> SuspendGameServerGroupOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateBuildOutcome> UpdateBuildOutcomeCallable;
        typedef std::future<UpdateFleetAttributesOutcome> UpdateFleetAttributesOutcomeCallable;
        typedef std::future<UpdateFleetCapacityOutcome> UpdateFleetCapacityOutcomeCallable;
        typedef std::future<UpdateFleetPortSettingsOutcome> UpdateFleetPortSettingsOutcomeCallable;
        typedef std::future<UpdateGameServerOutcome> UpdateGameServerOutcomeCallable;
        typedef std::future<UpdateGameServerGroupOutcome> UpdateGameServerGroupOutcomeCallable;
        typedef std::future<UpdateGameSessionOutcome> UpdateGameSessionOutcomeCallable;
        typedef std::future<UpdateGameSessionQueueOutcome> UpdateGameSessionQueueOutcomeCallable;
        typedef std::future<UpdateMatchmakingConfigurationOutcome> UpdateMatchmakingConfigurationOutcomeCallable;
        typedef std::future<UpdateRuntimeConfigurationOutcome> UpdateRuntimeConfigurationOutcomeCallable;
        typedef std::future<UpdateScriptOutcome> UpdateScriptOutcomeCallable;
        typedef std::future<ValidateMatchmakingRuleSetOutcome> ValidateMatchmakingRuleSetOutcomeCallable;
} // namespace Model

  class GameLiftClient;

    typedef std::function<void(const GameLiftClient*, const Model::AcceptMatchRequest&, const Model::AcceptMatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptMatchResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ClaimGameServerRequest&, const Model::ClaimGameServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClaimGameServerResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateBuildRequest&, const Model::CreateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameServerGroupRequest&, const Model::CreateGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameSessionRequest&, const Model::CreateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameSessionQueueRequest&, const Model::CreateGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameSessionQueueResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateMatchmakingConfigurationRequest&, const Model::CreateMatchmakingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMatchmakingConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateMatchmakingRuleSetRequest&, const Model::CreateMatchmakingRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMatchmakingRuleSetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreatePlayerSessionRequest&, const Model::CreatePlayerSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlayerSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreatePlayerSessionsRequest&, const Model::CreatePlayerSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlayerSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateScriptRequest&, const Model::CreateScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScriptResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateVpcPeeringAuthorizationRequest&, const Model::CreateVpcPeeringAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcPeeringAuthorizationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateVpcPeeringConnectionRequest&, const Model::CreateVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteBuildRequest&, const Model::DeleteBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteGameServerGroupRequest&, const Model::DeleteGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteGameSessionQueueRequest&, const Model::DeleteGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGameSessionQueueResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteMatchmakingConfigurationRequest&, const Model::DeleteMatchmakingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMatchmakingConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteMatchmakingRuleSetRequest&, const Model::DeleteMatchmakingRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMatchmakingRuleSetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteScalingPolicyRequest&, const Model::DeleteScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteScriptRequest&, const Model::DeleteScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScriptResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteVpcPeeringAuthorizationRequest&, const Model::DeleteVpcPeeringAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcPeeringAuthorizationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteVpcPeeringConnectionRequest&, const Model::DeleteVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeregisterGameServerRequest&, const Model::DeregisterGameServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterGameServerResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeAliasRequest&, const Model::DescribeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeBuildRequest&, const Model::DescribeBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeEC2InstanceLimitsRequest&, const Model::DescribeEC2InstanceLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEC2InstanceLimitsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetAttributesRequest&, const Model::DescribeFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetCapacityRequest&, const Model::DescribeFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetEventsRequest&, const Model::DescribeFleetEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetEventsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetPortSettingsRequest&, const Model::DescribeFleetPortSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetPortSettingsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetUtilizationRequest&, const Model::DescribeFleetUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetUtilizationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameServerRequest&, const Model::DescribeGameServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameServerResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameServerGroupRequest&, const Model::DescribeGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameServerInstancesRequest&, const Model::DescribeGameServerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameServerInstancesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionDetailsRequest&, const Model::DescribeGameSessionDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionDetailsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionPlacementRequest&, const Model::DescribeGameSessionPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionPlacementResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionQueuesRequest&, const Model::DescribeGameSessionQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionQueuesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeGameSessionsRequest&, const Model::DescribeGameSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGameSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeMatchmakingRequest&, const Model::DescribeMatchmakingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMatchmakingResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeMatchmakingConfigurationsRequest&, const Model::DescribeMatchmakingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMatchmakingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeMatchmakingRuleSetsRequest&, const Model::DescribeMatchmakingRuleSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMatchmakingRuleSetsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribePlayerSessionsRequest&, const Model::DescribePlayerSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlayerSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeRuntimeConfigurationRequest&, const Model::DescribeRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuntimeConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeScalingPoliciesRequest&, const Model::DescribeScalingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPoliciesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeScriptRequest&, const Model::DescribeScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScriptResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeVpcPeeringAuthorizationsRequest&, const Model::DescribeVpcPeeringAuthorizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcPeeringAuthorizationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeVpcPeeringConnectionsRequest&, const Model::DescribeVpcPeeringConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcPeeringConnectionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetGameSessionLogUrlRequest&, const Model::GetGameSessionLogUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGameSessionLogUrlResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetInstanceAccessRequest&, const Model::GetInstanceAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceAccessResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListBuildsRequest&, const Model::ListBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListGameServerGroupsRequest&, const Model::ListGameServerGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGameServerGroupsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListGameServersRequest&, const Model::ListGameServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGameServersResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListScriptsRequest&, const Model::ListScriptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScriptsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::RegisterGameServerRequest&, const Model::RegisterGameServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterGameServerResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::RequestUploadCredentialsRequest&, const Model::RequestUploadCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestUploadCredentialsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ResolveAliasRequest&, const Model::ResolveAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ResumeGameServerGroupRequest&, const Model::ResumeGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::SearchGameSessionsRequest&, const Model::SearchGameSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGameSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StartFleetActionsRequest&, const Model::StartFleetActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFleetActionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StartGameSessionPlacementRequest&, const Model::StartGameSessionPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartGameSessionPlacementResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StartMatchBackfillRequest&, const Model::StartMatchBackfillOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMatchBackfillResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StartMatchmakingRequest&, const Model::StartMatchmakingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMatchmakingResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StopFleetActionsRequest&, const Model::StopFleetActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFleetActionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StopGameSessionPlacementRequest&, const Model::StopGameSessionPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopGameSessionPlacementResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::StopMatchmakingRequest&, const Model::StopMatchmakingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMatchmakingResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::SuspendGameServerGroupRequest&, const Model::SuspendGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuspendGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateBuildRequest&, const Model::UpdateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetAttributesRequest&, const Model::UpdateFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetCapacityRequest&, const Model::UpdateFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateFleetPortSettingsRequest&, const Model::UpdateFleetPortSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetPortSettingsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameServerRequest&, const Model::UpdateGameServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameServerResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameServerGroupRequest&, const Model::UpdateGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameSessionRequest&, const Model::UpdateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateGameSessionQueueRequest&, const Model::UpdateGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGameSessionQueueResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateMatchmakingConfigurationRequest&, const Model::UpdateMatchmakingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMatchmakingConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateRuntimeConfigurationRequest&, const Model::UpdateRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuntimeConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::UpdateScriptRequest&, const Model::UpdateScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScriptResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ValidateMatchmakingRuleSetRequest&, const Model::ValidateMatchmakingRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateMatchmakingRuleSetResponseReceivedHandler;

  /**
   * <fullname>Amazon GameLift Service</fullname> <p>GameLift provides solutions for
   * hosting session-based multiplayer game servers in the cloud, including tools for
   * deploying, operating, and scaling game servers. Built on AWS global computing
   * infrastructure, GameLift helps you deliver high-performance, high-reliability,
   * low-cost game servers while dynamically scaling your resource usage to meet
   * player demand. </p> <p> <b>About GameLift solutions</b> </p> <p>Get more
   * information on these GameLift solutions in the <a
   * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/">Amazon
   * GameLift Developer Guide</a>.</p> <ul> <li> <p>Managed GameLift -- GameLift
   * offers a fully managed service to set up and maintain computing machines for
   * hosting, manage game session and player session life cycle, and handle security,
   * storage, and performance tracking. You can use automatic scaling tools to
   * balance hosting costs against meeting player demand., configure your game
   * session management to minimize player latency, or add FlexMatch for
   * matchmaking.</p> </li> <li> <p>Managed GameLift with Realtime Servers – With
   * GameLift Realtime Servers, you can quickly configure and set up game servers for
   * your game. Realtime Servers provides a game server framework with core Amazon
   * GameLift infrastructure already built in.</p> </li> <li> <p>GameLift FleetIQ –
   * Use GameLift FleetIQ as a standalone feature while managing your own EC2
   * instances and Auto Scaling groups for game hosting. GameLift FleetIQ provides
   * optimizations that make low-cost Spot Instances viable for game hosting. </p>
   * </li> </ul> <p> <b>About this API Reference</b> </p> <p>This reference guide
   * describes the low-level service API for Amazon GameLift. You can find links to
   * language-specific SDK guides and the AWS CLI reference with each operation and
   * data type topic. Useful links:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html">GameLift
   * API operations listed by tasks</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-components.html">
   * GameLift tools and resources</a> </p> </li> </ul>
   */
  class AWS_GAMELIFT_API GameLiftClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameLiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GameLiftClient();


        /**
         * <p>Registers a player's acceptance or rejection of a proposed FlexMatch match. A
         * matchmaking configuration may require player acceptance; if so, then matches
         * built with that configuration cannot be completed unless all players accept the
         * proposed match within a specified time limit. </p> <p>When FlexMatch builds a
         * match, all the matchmaking tickets involved in the proposed match are placed
         * into status <code>REQUIRES_ACCEPTANCE</code>. This is a trigger for your game to
         * get acceptance from all players in the ticket. Acceptances are only valid for
         * tickets when they are in this status; all other acceptances result in an
         * error.</p> <p>To register acceptance, specify the ticket ID, a response, and one
         * or more players. Once all players have registered acceptance, the matchmaking
         * tickets advance to status <code>PLACING</code>, where a new game session is
         * created for the match. </p> <p>If any player rejects the match, or if
         * acceptances are not received before a specified timeout, the proposed match is
         * dropped. The matchmaking tickets are then handled in one of two ways: For
         * tickets where one or more players rejected the match, the ticket status is
         * returned to <code>SEARCHING</code> to find a new match. For tickets where one or
         * more players failed to respond, the ticket status is set to
         * <code>CANCELLED</code>, and processing is terminated. A new matchmaking request
         * for these players can be submitted as needed. </p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html">
         * FlexMatch Events Reference</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a> </p>
         * </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p> <a>AcceptMatch</a>
         * </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AcceptMatch">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptMatchOutcome AcceptMatch(const Model::AcceptMatchRequest& request) const;

        /**
         * <p>Registers a player's acceptance or rejection of a proposed FlexMatch match. A
         * matchmaking configuration may require player acceptance; if so, then matches
         * built with that configuration cannot be completed unless all players accept the
         * proposed match within a specified time limit. </p> <p>When FlexMatch builds a
         * match, all the matchmaking tickets involved in the proposed match are placed
         * into status <code>REQUIRES_ACCEPTANCE</code>. This is a trigger for your game to
         * get acceptance from all players in the ticket. Acceptances are only valid for
         * tickets when they are in this status; all other acceptances result in an
         * error.</p> <p>To register acceptance, specify the ticket ID, a response, and one
         * or more players. Once all players have registered acceptance, the matchmaking
         * tickets advance to status <code>PLACING</code>, where a new game session is
         * created for the match. </p> <p>If any player rejects the match, or if
         * acceptances are not received before a specified timeout, the proposed match is
         * dropped. The matchmaking tickets are then handled in one of two ways: For
         * tickets where one or more players rejected the match, the ticket status is
         * returned to <code>SEARCHING</code> to find a new match. For tickets where one or
         * more players failed to respond, the ticket status is set to
         * <code>CANCELLED</code>, and processing is terminated. A new matchmaking request
         * for these players can be submitted as needed. </p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html">
         * FlexMatch Events Reference</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a> </p>
         * </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p> <a>AcceptMatch</a>
         * </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AcceptMatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptMatchOutcomeCallable AcceptMatchCallable(const Model::AcceptMatchRequest& request) const;

        /**
         * <p>Registers a player's acceptance or rejection of a proposed FlexMatch match. A
         * matchmaking configuration may require player acceptance; if so, then matches
         * built with that configuration cannot be completed unless all players accept the
         * proposed match within a specified time limit. </p> <p>When FlexMatch builds a
         * match, all the matchmaking tickets involved in the proposed match are placed
         * into status <code>REQUIRES_ACCEPTANCE</code>. This is a trigger for your game to
         * get acceptance from all players in the ticket. Acceptances are only valid for
         * tickets when they are in this status; all other acceptances result in an
         * error.</p> <p>To register acceptance, specify the ticket ID, a response, and one
         * or more players. Once all players have registered acceptance, the matchmaking
         * tickets advance to status <code>PLACING</code>, where a new game session is
         * created for the match. </p> <p>If any player rejects the match, or if
         * acceptances are not received before a specified timeout, the proposed match is
         * dropped. The matchmaking tickets are then handled in one of two ways: For
         * tickets where one or more players rejected the match, the ticket status is
         * returned to <code>SEARCHING</code> to find a new match. For tickets where one or
         * more players failed to respond, the ticket status is set to
         * <code>CANCELLED</code>, and processing is terminated. A new matchmaking request
         * for these players can be submitted as needed. </p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html">
         * FlexMatch Events Reference</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a> </p>
         * </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p> <a>AcceptMatch</a>
         * </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AcceptMatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptMatchAsync(const Model::AcceptMatchRequest& request, const AcceptMatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Locates an available game server and temporarily
         * reserves it to host gameplay and players. This operation is called from a game
         * client or client service (such as a matchmaker) to request hosting resources for
         * a new game session. In response, GameLift FleetIQ locates an available game
         * server, places it in <code>CLAIMED</code> status for 60 seconds, and returns
         * connection information that players can use to connect to the game server. </p>
         * <p>To claim a game server, identify a game server group. You can also specify a
         * game server ID, although this approach bypasses GameLift FleetIQ placement
         * optimization. Optionally, include game data to pass to the game server at the
         * start of a game session, such as a game map or player information. </p> <p>When
         * a game server is successfully claimed, connection information is returned. A
         * claimed game server's utilization status remains <code>AVAILABLE</code> while
         * the claim status is set to <code>CLAIMED</code> for up to 60 seconds. This time
         * period gives the game server time to update its status to <code>UTILIZED</code>
         * (using <a>UpdateGameServer</a>) once players join. If the game server's status
         * is not updated within 60 seconds, the game server reverts to unclaimed status
         * and is available to be claimed by another request. The claim time period is a
         * fixed value and is not configurable.</p> <p>If you try to claim a specific game
         * server, this request will fail in the following cases:</p> <ul> <li> <p>If the
         * game server utilization status is <code>UTILIZED</code>.</p> </li> <li> <p>If
         * the game server claim status is <code>CLAIMED</code>.</p> </li> </ul> 
         * <p>When claiming a specific game server, this request will succeed even if the
         * game server is running on an instance in <code>DRAINING</code> status. To avoid
         * this, first check the instance status by calling
         * <a>DescribeGameServerInstances</a>.</p>  <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ClaimGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimGameServerOutcome ClaimGameServer(const Model::ClaimGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Locates an available game server and temporarily
         * reserves it to host gameplay and players. This operation is called from a game
         * client or client service (such as a matchmaker) to request hosting resources for
         * a new game session. In response, GameLift FleetIQ locates an available game
         * server, places it in <code>CLAIMED</code> status for 60 seconds, and returns
         * connection information that players can use to connect to the game server. </p>
         * <p>To claim a game server, identify a game server group. You can also specify a
         * game server ID, although this approach bypasses GameLift FleetIQ placement
         * optimization. Optionally, include game data to pass to the game server at the
         * start of a game session, such as a game map or player information. </p> <p>When
         * a game server is successfully claimed, connection information is returned. A
         * claimed game server's utilization status remains <code>AVAILABLE</code> while
         * the claim status is set to <code>CLAIMED</code> for up to 60 seconds. This time
         * period gives the game server time to update its status to <code>UTILIZED</code>
         * (using <a>UpdateGameServer</a>) once players join. If the game server's status
         * is not updated within 60 seconds, the game server reverts to unclaimed status
         * and is available to be claimed by another request. The claim time period is a
         * fixed value and is not configurable.</p> <p>If you try to claim a specific game
         * server, this request will fail in the following cases:</p> <ul> <li> <p>If the
         * game server utilization status is <code>UTILIZED</code>.</p> </li> <li> <p>If
         * the game server claim status is <code>CLAIMED</code>.</p> </li> </ul> 
         * <p>When claiming a specific game server, this request will succeed even if the
         * game server is running on an instance in <code>DRAINING</code> status. To avoid
         * this, first check the instance status by calling
         * <a>DescribeGameServerInstances</a>.</p>  <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ClaimGameServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClaimGameServerOutcomeCallable ClaimGameServerCallable(const Model::ClaimGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Locates an available game server and temporarily
         * reserves it to host gameplay and players. This operation is called from a game
         * client or client service (such as a matchmaker) to request hosting resources for
         * a new game session. In response, GameLift FleetIQ locates an available game
         * server, places it in <code>CLAIMED</code> status for 60 seconds, and returns
         * connection information that players can use to connect to the game server. </p>
         * <p>To claim a game server, identify a game server group. You can also specify a
         * game server ID, although this approach bypasses GameLift FleetIQ placement
         * optimization. Optionally, include game data to pass to the game server at the
         * start of a game session, such as a game map or player information. </p> <p>When
         * a game server is successfully claimed, connection information is returned. A
         * claimed game server's utilization status remains <code>AVAILABLE</code> while
         * the claim status is set to <code>CLAIMED</code> for up to 60 seconds. This time
         * period gives the game server time to update its status to <code>UTILIZED</code>
         * (using <a>UpdateGameServer</a>) once players join. If the game server's status
         * is not updated within 60 seconds, the game server reverts to unclaimed status
         * and is available to be claimed by another request. The claim time period is a
         * fixed value and is not configurable.</p> <p>If you try to claim a specific game
         * server, this request will fail in the following cases:</p> <ul> <li> <p>If the
         * game server utilization status is <code>UTILIZED</code>.</p> </li> <li> <p>If
         * the game server claim status is <code>CLAIMED</code>.</p> </li> </ul> 
         * <p>When claiming a specific game server, this request will succeed even if the
         * game server is running on an instance in <code>DRAINING</code> status. To avoid
         * this, first check the instance status by calling
         * <a>DescribeGameServerInstances</a>.</p>  <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ClaimGameServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClaimGameServerAsync(const Model::ClaimGameServerRequest& request, const ClaimGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for a fleet. In most situations, you can use an alias ID in
         * place of a fleet ID. An alias provides a level of abstraction for a fleet that
         * is useful when redirecting player traffic from one fleet to another, such as
         * when updating your game build. </p> <p>Amazon GameLift supports two types of
         * routing strategies for aliases: simple and terminal. A simple alias points to an
         * active fleet. A terminal alias is used to display messaging or link to a URL
         * instead of routing players to an active fleet. For example, you might use a
         * terminal alias when a game version is no longer supported and you want to direct
         * players to an upgrade site. </p> <p>To create a fleet alias, specify an alias
         * name, routing strategy, and optional description. Each simple alias can point to
         * only one fleet, but a fleet can have multiple aliases. If successful, a new
         * alias record is returned, including an alias ID and an ARN. You can reassign an
         * alias to another fleet by calling <code>UpdateAlias</code>.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a fleet. In most situations, you can use an alias ID in
         * place of a fleet ID. An alias provides a level of abstraction for a fleet that
         * is useful when redirecting player traffic from one fleet to another, such as
         * when updating your game build. </p> <p>Amazon GameLift supports two types of
         * routing strategies for aliases: simple and terminal. A simple alias points to an
         * active fleet. A terminal alias is used to display messaging or link to a URL
         * instead of routing players to an active fleet. For example, you might use a
         * terminal alias when a game version is no longer supported and you want to direct
         * players to an upgrade site. </p> <p>To create a fleet alias, specify an alias
         * name, routing strategy, and optional description. Each simple alias can point to
         * only one fleet, but a fleet can have multiple aliases. If successful, a new
         * alias record is returned, including an alias ID and an ARN. You can reassign an
         * alias to another fleet by calling <code>UpdateAlias</code>.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a fleet. In most situations, you can use an alias ID in
         * place of a fleet ID. An alias provides a level of abstraction for a fleet that
         * is useful when redirecting player traffic from one fleet to another, such as
         * when updating your game build. </p> <p>Amazon GameLift supports two types of
         * routing strategies for aliases: simple and terminal. A simple alias points to an
         * active fleet. A terminal alias is used to display messaging or link to a URL
         * instead of routing players to an active fleet. For example, you might use a
         * terminal alias when a game version is no longer supported and you want to direct
         * players to an upgrade site. </p> <p>To create a fleet alias, specify an alias
         * name, routing strategy, and optional description. Each simple alias can point to
         * only one fleet, but a fleet can have multiple aliases. If successful, a new
         * alias record is returned, including an alias ID and an ARN. You can reassign an
         * alias to another fleet by calling <code>UpdateAlias</code>.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon GameLift build resource for your game server binary
         * files. Game server binaries must be combined into a zip file for use with Amazon
         * GameLift. </p>  <p>When setting up a new game build for GameLift, we
         * recommend using the AWS CLI command <b> <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">upload-build</a>
         * </b>. This helper command combines two tasks: (1) it uploads your build files
         * from a file directory to a GameLift Amazon S3 location, and (2) it creates a new
         * build resource. </p>  <p>The <code>CreateBuild</code> operation can
         * used in the following scenarios:</p> <ul> <li> <p>To create a new game build
         * with build files that are in an S3 location under an AWS account that you
         * control. To use this option, you must first give Amazon GameLift access to the
         * S3 bucket. With permissions in place, call <code>CreateBuild</code> and specify
         * a build name, operating system, and the S3 storage location of your game
         * build.</p> </li> <li> <p>To directly upload your build files to a GameLift S3
         * location. To use this option, first call <code>CreateBuild</code> and specify a
         * build name and operating system. This operation creates a new build resource and
         * also returns an S3 location with temporary access credentials. Use the
         * credentials to manually upload your build files to the specified S3 location.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UploadingObjects.html">Uploading
         * Objects</a> in the <i>Amazon S3 Developer Guide</i>. Build files can be uploaded
         * to the GameLift S3 location once only; that can't be updated. </p> </li> </ul>
         * <p>If successful, this operation creates a new build resource with a unique
         * build ID and places it in <code>INITIALIZED</code> status. A build must be in
         * <code>READY</code> status before you can create fleets with it.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading
         * Your Game</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in Amazon S3</a> </p> <p> <b>Related operations</b>
         * </p> <ul> <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p>
         * </li> <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p>
         * </li> <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBuildOutcome CreateBuild(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Creates a new Amazon GameLift build resource for your game server binary
         * files. Game server binaries must be combined into a zip file for use with Amazon
         * GameLift. </p>  <p>When setting up a new game build for GameLift, we
         * recommend using the AWS CLI command <b> <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">upload-build</a>
         * </b>. This helper command combines two tasks: (1) it uploads your build files
         * from a file directory to a GameLift Amazon S3 location, and (2) it creates a new
         * build resource. </p>  <p>The <code>CreateBuild</code> operation can
         * used in the following scenarios:</p> <ul> <li> <p>To create a new game build
         * with build files that are in an S3 location under an AWS account that you
         * control. To use this option, you must first give Amazon GameLift access to the
         * S3 bucket. With permissions in place, call <code>CreateBuild</code> and specify
         * a build name, operating system, and the S3 storage location of your game
         * build.</p> </li> <li> <p>To directly upload your build files to a GameLift S3
         * location. To use this option, first call <code>CreateBuild</code> and specify a
         * build name and operating system. This operation creates a new build resource and
         * also returns an S3 location with temporary access credentials. Use the
         * credentials to manually upload your build files to the specified S3 location.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UploadingObjects.html">Uploading
         * Objects</a> in the <i>Amazon S3 Developer Guide</i>. Build files can be uploaded
         * to the GameLift S3 location once only; that can't be updated. </p> </li> </ul>
         * <p>If successful, this operation creates a new build resource with a unique
         * build ID and places it in <code>INITIALIZED</code> status. A build must be in
         * <code>READY</code> status before you can create fleets with it.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading
         * Your Game</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in Amazon S3</a> </p> <p> <b>Related operations</b>
         * </p> <ul> <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p>
         * </li> <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p>
         * </li> <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBuildOutcomeCallable CreateBuildCallable(const Model::CreateBuildRequest& request) const;

        /**
         * <p>Creates a new Amazon GameLift build resource for your game server binary
         * files. Game server binaries must be combined into a zip file for use with Amazon
         * GameLift. </p>  <p>When setting up a new game build for GameLift, we
         * recommend using the AWS CLI command <b> <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">upload-build</a>
         * </b>. This helper command combines two tasks: (1) it uploads your build files
         * from a file directory to a GameLift Amazon S3 location, and (2) it creates a new
         * build resource. </p>  <p>The <code>CreateBuild</code> operation can
         * used in the following scenarios:</p> <ul> <li> <p>To create a new game build
         * with build files that are in an S3 location under an AWS account that you
         * control. To use this option, you must first give Amazon GameLift access to the
         * S3 bucket. With permissions in place, call <code>CreateBuild</code> and specify
         * a build name, operating system, and the S3 storage location of your game
         * build.</p> </li> <li> <p>To directly upload your build files to a GameLift S3
         * location. To use this option, first call <code>CreateBuild</code> and specify a
         * build name and operating system. This operation creates a new build resource and
         * also returns an S3 location with temporary access credentials. Use the
         * credentials to manually upload your build files to the specified S3 location.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UploadingObjects.html">Uploading
         * Objects</a> in the <i>Amazon S3 Developer Guide</i>. Build files can be uploaded
         * to the GameLift S3 location once only; that can't be updated. </p> </li> </ul>
         * <p>If successful, this operation creates a new build resource with a unique
         * build ID and places it in <code>INITIALIZED</code> status. A build must be in
         * <code>READY</code> status before you can create fleets with it.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading
         * Your Game</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in Amazon S3</a> </p> <p> <b>Related operations</b>
         * </p> <ul> <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p>
         * </li> <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p>
         * </li> <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBuildAsync(const Model::CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new fleet to run your game servers. whether they are custom game
         * builds or Realtime Servers with game-specific script. A fleet is a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, each of which can host multiple
         * game sessions. When creating a fleet, you choose the hardware specifications,
         * set some configuration options, and specify the game server to deploy on the new
         * fleet. </p> <p>To create a new fleet, provide the following: (1) a fleet name,
         * (2) an EC2 instance type and fleet type (spot or on-demand), (3) the build ID
         * for your game build or script ID if using Realtime Servers, and (4) a runtime
         * configuration, which determines how game servers will run on each instance in
         * the fleet. </p> <p>If the <code>CreateFleet</code> call is successful, Amazon
         * GameLift performs the following tasks. You can track the process of a fleet by
         * checking the fleet status or by monitoring fleet creation events:</p> <ul> <li>
         * <p>Creates a fleet resource. Status: <code>NEW</code>.</p> </li> <li> <p>Begins
         * writing events to the fleet event log, which can be accessed in the Amazon
         * GameLift console.</p> </li> <li> <p>Sets the fleet's target capacity to 1
         * (desired instances), which triggers Amazon GameLift to start one new EC2
         * instance.</p> </li> <li> <p>Downloads the game build or Realtime script to the
         * new instance and installs it. Statuses: <code>DOWNLOADING</code>,
         * <code>VALIDATING</code>, <code>BUILDING</code>. </p> </li> <li> <p>Starts
         * launching server processes on the instance. If the fleet is configured to run
         * multiple server processes per instance, Amazon GameLift staggers each process
         * launch by a few seconds. Status: <code>ACTIVATING</code>.</p> </li> <li> <p>Sets
         * the fleet's status to <code>ACTIVE</code> as soon as one server process is ready
         * to host a game session.</p> </li> </ul> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * Up Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html#fleets-creating-debug-creation">Debug
         * Fleet Creation Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a new fleet to run your game servers. whether they are custom game
         * builds or Realtime Servers with game-specific script. A fleet is a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, each of which can host multiple
         * game sessions. When creating a fleet, you choose the hardware specifications,
         * set some configuration options, and specify the game server to deploy on the new
         * fleet. </p> <p>To create a new fleet, provide the following: (1) a fleet name,
         * (2) an EC2 instance type and fleet type (spot or on-demand), (3) the build ID
         * for your game build or script ID if using Realtime Servers, and (4) a runtime
         * configuration, which determines how game servers will run on each instance in
         * the fleet. </p> <p>If the <code>CreateFleet</code> call is successful, Amazon
         * GameLift performs the following tasks. You can track the process of a fleet by
         * checking the fleet status or by monitoring fleet creation events:</p> <ul> <li>
         * <p>Creates a fleet resource. Status: <code>NEW</code>.</p> </li> <li> <p>Begins
         * writing events to the fleet event log, which can be accessed in the Amazon
         * GameLift console.</p> </li> <li> <p>Sets the fleet's target capacity to 1
         * (desired instances), which triggers Amazon GameLift to start one new EC2
         * instance.</p> </li> <li> <p>Downloads the game build or Realtime script to the
         * new instance and installs it. Statuses: <code>DOWNLOADING</code>,
         * <code>VALIDATING</code>, <code>BUILDING</code>. </p> </li> <li> <p>Starts
         * launching server processes on the instance. If the fleet is configured to run
         * multiple server processes per instance, Amazon GameLift staggers each process
         * launch by a few seconds. Status: <code>ACTIVATING</code>.</p> </li> <li> <p>Sets
         * the fleet's status to <code>ACTIVE</code> as soon as one server process is ready
         * to host a game session.</p> </li> </ul> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * Up Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html#fleets-creating-debug-creation">Debug
         * Fleet Creation Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a new fleet to run your game servers. whether they are custom game
         * builds or Realtime Servers with game-specific script. A fleet is a set of Amazon
         * Elastic Compute Cloud (Amazon EC2) instances, each of which can host multiple
         * game sessions. When creating a fleet, you choose the hardware specifications,
         * set some configuration options, and specify the game server to deploy on the new
         * fleet. </p> <p>To create a new fleet, provide the following: (1) a fleet name,
         * (2) an EC2 instance type and fleet type (spot or on-demand), (3) the build ID
         * for your game build or script ID if using Realtime Servers, and (4) a runtime
         * configuration, which determines how game servers will run on each instance in
         * the fleet. </p> <p>If the <code>CreateFleet</code> call is successful, Amazon
         * GameLift performs the following tasks. You can track the process of a fleet by
         * checking the fleet status or by monitoring fleet creation events:</p> <ul> <li>
         * <p>Creates a fleet resource. Status: <code>NEW</code>.</p> </li> <li> <p>Begins
         * writing events to the fleet event log, which can be accessed in the Amazon
         * GameLift console.</p> </li> <li> <p>Sets the fleet's target capacity to 1
         * (desired instances), which triggers Amazon GameLift to start one new EC2
         * instance.</p> </li> <li> <p>Downloads the game build or Realtime script to the
         * new instance and installs it. Statuses: <code>DOWNLOADING</code>,
         * <code>VALIDATING</code>, <code>BUILDING</code>. </p> </li> <li> <p>Starts
         * launching server processes on the instance. If the fleet is configured to run
         * multiple server processes per instance, Amazon GameLift staggers each process
         * launch by a few seconds. Status: <code>ACTIVATING</code>.</p> </li> <li> <p>Sets
         * the fleet's status to <code>ACTIVE</code> as soon as one server process is ready
         * to host a game session.</p> </li> </ul> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * Up Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html#fleets-creating-debug-creation">Debug
         * Fleet Creation Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Creates a GameLift FleetIQ game server group for
         * managing game hosting on a collection of Amazon EC2 instances for game hosting.
         * This operation creates the game server group, creates an Auto Scaling group in
         * your AWS account, and establishes a link between the two groups. You can view
         * the status of your game server groups in the GameLift console. Game server group
         * metrics and events are emitted to Amazon CloudWatch.</p> <p>Before creating a
         * new game server group, you must have the following: </p> <ul> <li> <p>An Amazon
         * EC2 launch template that specifies how to launch Amazon EC2 instances with your
         * game server build. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">
         * Launching an Instance from a Launch Template</a> in the <i>Amazon EC2 User
         * Guide</i>. </p> </li> <li> <p>An IAM role that extends limited access to your
         * AWS account to allow GameLift FleetIQ to create and interact with the Auto
         * Scaling group. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gsg-iam-permissions-roles.html">Create
         * IAM roles for cross-service interaction</a> in the <i>GameLift FleetIQ Developer
         * Guide</i>.</p> </li> </ul> <p>To create a new game server group, specify a
         * unique group name, IAM role and Amazon EC2 launch template, and provide a list
         * of instance types that can be used in the group. You must also set initial
         * maximum and minimum limits on the group's instance count. You can optionally set
         * an Auto Scaling policy with target tracking based on a GameLift FleetIQ
         * metric.</p> <p>Once the game server group and corresponding Auto Scaling group
         * are created, you have full access to change the Auto Scaling group's
         * configuration as needed. Several properties that are set when creating a game
         * server group, including maximum/minimum size and auto-scaling policy settings,
         * must be updated directly in the Auto Scaling group. Keep in mind that some Auto
         * Scaling group properties are periodically updated by GameLift FleetIQ as part of
         * its balancing activities to optimize for availability and cost.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameServerGroupOutcome CreateGameServerGroup(const Model::CreateGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Creates a GameLift FleetIQ game server group for
         * managing game hosting on a collection of Amazon EC2 instances for game hosting.
         * This operation creates the game server group, creates an Auto Scaling group in
         * your AWS account, and establishes a link between the two groups. You can view
         * the status of your game server groups in the GameLift console. Game server group
         * metrics and events are emitted to Amazon CloudWatch.</p> <p>Before creating a
         * new game server group, you must have the following: </p> <ul> <li> <p>An Amazon
         * EC2 launch template that specifies how to launch Amazon EC2 instances with your
         * game server build. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">
         * Launching an Instance from a Launch Template</a> in the <i>Amazon EC2 User
         * Guide</i>. </p> </li> <li> <p>An IAM role that extends limited access to your
         * AWS account to allow GameLift FleetIQ to create and interact with the Auto
         * Scaling group. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gsg-iam-permissions-roles.html">Create
         * IAM roles for cross-service interaction</a> in the <i>GameLift FleetIQ Developer
         * Guide</i>.</p> </li> </ul> <p>To create a new game server group, specify a
         * unique group name, IAM role and Amazon EC2 launch template, and provide a list
         * of instance types that can be used in the group. You must also set initial
         * maximum and minimum limits on the group's instance count. You can optionally set
         * an Auto Scaling policy with target tracking based on a GameLift FleetIQ
         * metric.</p> <p>Once the game server group and corresponding Auto Scaling group
         * are created, you have full access to change the Auto Scaling group's
         * configuration as needed. Several properties that are set when creating a game
         * server group, including maximum/minimum size and auto-scaling policy settings,
         * must be updated directly in the Auto Scaling group. Keep in mind that some Auto
         * Scaling group properties are periodically updated by GameLift FleetIQ as part of
         * its balancing activities to optimize for availability and cost.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameServerGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameServerGroupOutcomeCallable CreateGameServerGroupCallable(const Model::CreateGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Creates a GameLift FleetIQ game server group for
         * managing game hosting on a collection of Amazon EC2 instances for game hosting.
         * This operation creates the game server group, creates an Auto Scaling group in
         * your AWS account, and establishes a link between the two groups. You can view
         * the status of your game server groups in the GameLift console. Game server group
         * metrics and events are emitted to Amazon CloudWatch.</p> <p>Before creating a
         * new game server group, you must have the following: </p> <ul> <li> <p>An Amazon
         * EC2 launch template that specifies how to launch Amazon EC2 instances with your
         * game server build. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">
         * Launching an Instance from a Launch Template</a> in the <i>Amazon EC2 User
         * Guide</i>. </p> </li> <li> <p>An IAM role that extends limited access to your
         * AWS account to allow GameLift FleetIQ to create and interact with the Auto
         * Scaling group. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gsg-iam-permissions-roles.html">Create
         * IAM roles for cross-service interaction</a> in the <i>GameLift FleetIQ Developer
         * Guide</i>.</p> </li> </ul> <p>To create a new game server group, specify a
         * unique group name, IAM role and Amazon EC2 launch template, and provide a list
         * of instance types that can be used in the group. You must also set initial
         * maximum and minimum limits on the group's instance count. You can optionally set
         * an Auto Scaling policy with target tracking based on a GameLift FleetIQ
         * metric.</p> <p>Once the game server group and corresponding Auto Scaling group
         * are created, you have full access to change the Auto Scaling group's
         * configuration as needed. Several properties that are set when creating a game
         * server group, including maximum/minimum size and auto-scaling policy settings,
         * must be updated directly in the Auto Scaling group. Keep in mind that some Auto
         * Scaling group properties are periodically updated by GameLift FleetIQ as part of
         * its balancing activities to optimize for availability and cost.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameServerGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameServerGroupAsync(const Model::CreateGameServerGroupRequest& request, const CreateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a multiplayer game session for players. This operation creates a game
         * session record and assigns an available server process in the specified fleet to
         * host the game session. A fleet must have an <code>ACTIVE</code> status before a
         * game session can be created in it.</p> <p>To create a game session, specify
         * either fleet ID or alias ID and indicate a maximum number of players to allow in
         * the game session. You can also provide a name and game-specific properties for
         * this game session. If successful, a <a>GameSession</a> object is returned
         * containing the game session properties and other settings you specified.</p> <p>
         * <b>Idempotency tokens.</b> You can add a token that uniquely identifies game
         * session requests. This is useful for ensuring that game session requests are
         * idempotent. Multiple requests with the same idempotency token are processed only
         * once; subsequent requests return the original result. All response values are
         * the same with the exception of game session status, which may change.</p> <p>
         * <b>Resource creation limits.</b> If you are creating a game session on a fleet
         * with a resource creation limit policy in force, then you must specify a creator
         * ID. Without this ID, Amazon GameLift has no way to evaluate the policy for this
         * new game session request.</p> <p> <b>Player acceptance policy.</b> By default,
         * newly created game sessions are open to new players. You can restrict new player
         * access by using <a>UpdateGameSession</a> to change the game session's player
         * session creation policy.</p> <p> <b>Game session logs.</b> Logs are retained for
         * all active game sessions for 14 days. To access the logs, call
         * <a>GetGameSessionLogUrl</a> to download the log files.</p> <p> <i>Available in
         * Amazon GameLift Local.</i> </p> <ul> <li> <p> <a>CreateGameSession</a> </p>
         * </li> <li> <p> <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameSessionOutcome CreateGameSession(const Model::CreateGameSessionRequest& request) const;

        /**
         * <p>Creates a multiplayer game session for players. This operation creates a game
         * session record and assigns an available server process in the specified fleet to
         * host the game session. A fleet must have an <code>ACTIVE</code> status before a
         * game session can be created in it.</p> <p>To create a game session, specify
         * either fleet ID or alias ID and indicate a maximum number of players to allow in
         * the game session. You can also provide a name and game-specific properties for
         * this game session. If successful, a <a>GameSession</a> object is returned
         * containing the game session properties and other settings you specified.</p> <p>
         * <b>Idempotency tokens.</b> You can add a token that uniquely identifies game
         * session requests. This is useful for ensuring that game session requests are
         * idempotent. Multiple requests with the same idempotency token are processed only
         * once; subsequent requests return the original result. All response values are
         * the same with the exception of game session status, which may change.</p> <p>
         * <b>Resource creation limits.</b> If you are creating a game session on a fleet
         * with a resource creation limit policy in force, then you must specify a creator
         * ID. Without this ID, Amazon GameLift has no way to evaluate the policy for this
         * new game session request.</p> <p> <b>Player acceptance policy.</b> By default,
         * newly created game sessions are open to new players. You can restrict new player
         * access by using <a>UpdateGameSession</a> to change the game session's player
         * session creation policy.</p> <p> <b>Game session logs.</b> Logs are retained for
         * all active game sessions for 14 days. To access the logs, call
         * <a>GetGameSessionLogUrl</a> to download the log files.</p> <p> <i>Available in
         * Amazon GameLift Local.</i> </p> <ul> <li> <p> <a>CreateGameSession</a> </p>
         * </li> <li> <p> <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameSessionOutcomeCallable CreateGameSessionCallable(const Model::CreateGameSessionRequest& request) const;

        /**
         * <p>Creates a multiplayer game session for players. This operation creates a game
         * session record and assigns an available server process in the specified fleet to
         * host the game session. A fleet must have an <code>ACTIVE</code> status before a
         * game session can be created in it.</p> <p>To create a game session, specify
         * either fleet ID or alias ID and indicate a maximum number of players to allow in
         * the game session. You can also provide a name and game-specific properties for
         * this game session. If successful, a <a>GameSession</a> object is returned
         * containing the game session properties and other settings you specified.</p> <p>
         * <b>Idempotency tokens.</b> You can add a token that uniquely identifies game
         * session requests. This is useful for ensuring that game session requests are
         * idempotent. Multiple requests with the same idempotency token are processed only
         * once; subsequent requests return the original result. All response values are
         * the same with the exception of game session status, which may change.</p> <p>
         * <b>Resource creation limits.</b> If you are creating a game session on a fleet
         * with a resource creation limit policy in force, then you must specify a creator
         * ID. Without this ID, Amazon GameLift has no way to evaluate the policy for this
         * new game session request.</p> <p> <b>Player acceptance policy.</b> By default,
         * newly created game sessions are open to new players. You can restrict new player
         * access by using <a>UpdateGameSession</a> to change the game session's player
         * session creation policy.</p> <p> <b>Game session logs.</b> Logs are retained for
         * all active game sessions for 14 days. To access the logs, call
         * <a>GetGameSessionLogUrl</a> to download the log files.</p> <p> <i>Available in
         * Amazon GameLift Local.</i> </p> <ul> <li> <p> <a>CreateGameSession</a> </p>
         * </li> <li> <p> <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * fleets in multiple Regions. To add placement requests to a queue, call
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
         * successful, a new queue object is returned.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-design.html">
         * Design a Game Session Queue</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-creating.html">
         * Create a Game Session Queue</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameSessionQueueOutcome CreateGameSessionQueue(const Model::CreateGameSessionQueueRequest& request) const;

        /**
         * <p>Establishes a new queue for processing requests to place new game sessions. A
         * queue identifies where new game sessions can be hosted -- by specifying a list
         * of destinations (fleets or aliases) -- and how long requests can wait in the
         * queue before timing out. You can set up a queue to try to place game sessions on
         * fleets in multiple Regions. To add placement requests to a queue, call
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
         * successful, a new queue object is returned.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-design.html">
         * Design a Game Session Queue</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-creating.html">
         * Create a Game Session Queue</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * fleets in multiple Regions. To add placement requests to a queue, call
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
         * successful, a new queue object is returned.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-design.html">
         * Design a Game Session Queue</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-creating.html">
         * Create a Game Session Queue</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameSessionQueueAsync(const Model::CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines a new matchmaking configuration for use with FlexMatch. Whether your
         * are using FlexMatch with GameLift hosting or as a standalone matchmaking
         * service, the matchmaking configuration sets out rules for matching players and
         * forming teams. If you're also using GameLift hosting, it defines how to start
         * game sessions for each match. Your matchmaking system can use multiple
         * configurations to handle different game scenarios. All matchmaking requests
         * (<a>StartMatchmaking</a> or <a>StartMatchBackfill</a>) identify the matchmaking
         * configuration to use and provide player attributes consistent with that
         * configuration. </p> <p>To create a matchmaking configuration, you must provide
         * the following: configuration name and FlexMatch mode (with or without GameLift
         * hosting); a rule set that specifies how to evaluate players and find acceptable
         * matches; whether player acceptance is required; and the maximum time allowed for
         * a matchmaking attempt. When using FlexMatch with GameLift hosting, you also need
         * to identify the game session queue to use when starting a game session for the
         * match.</p> <p>In addition, you must set up an Amazon Simple Notification Service
         * (SNS) to receive matchmaking notifications, and provide the topic ARN in the
         * matchmaking configuration. An alternative method, continuously polling ticket
         * status with <a>DescribeMatchmaking</a>, is only suitable for games in
         * development with low matchmaking usage.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * FlexMatch Developer Guide</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch Matchmaker</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMatchmakingConfigurationOutcome CreateMatchmakingConfiguration(const Model::CreateMatchmakingConfigurationRequest& request) const;

        /**
         * <p>Defines a new matchmaking configuration for use with FlexMatch. Whether your
         * are using FlexMatch with GameLift hosting or as a standalone matchmaking
         * service, the matchmaking configuration sets out rules for matching players and
         * forming teams. If you're also using GameLift hosting, it defines how to start
         * game sessions for each match. Your matchmaking system can use multiple
         * configurations to handle different game scenarios. All matchmaking requests
         * (<a>StartMatchmaking</a> or <a>StartMatchBackfill</a>) identify the matchmaking
         * configuration to use and provide player attributes consistent with that
         * configuration. </p> <p>To create a matchmaking configuration, you must provide
         * the following: configuration name and FlexMatch mode (with or without GameLift
         * hosting); a rule set that specifies how to evaluate players and find acceptable
         * matches; whether player acceptance is required; and the maximum time allowed for
         * a matchmaking attempt. When using FlexMatch with GameLift hosting, you also need
         * to identify the game session queue to use when starting a game session for the
         * match.</p> <p>In addition, you must set up an Amazon Simple Notification Service
         * (SNS) to receive matchmaking notifications, and provide the topic ARN in the
         * matchmaking configuration. An alternative method, continuously polling ticket
         * status with <a>DescribeMatchmaking</a>, is only suitable for games in
         * development with low matchmaking usage.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * FlexMatch Developer Guide</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch Matchmaker</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMatchmakingConfigurationOutcomeCallable CreateMatchmakingConfigurationCallable(const Model::CreateMatchmakingConfigurationRequest& request) const;

        /**
         * <p>Defines a new matchmaking configuration for use with FlexMatch. Whether your
         * are using FlexMatch with GameLift hosting or as a standalone matchmaking
         * service, the matchmaking configuration sets out rules for matching players and
         * forming teams. If you're also using GameLift hosting, it defines how to start
         * game sessions for each match. Your matchmaking system can use multiple
         * configurations to handle different game scenarios. All matchmaking requests
         * (<a>StartMatchmaking</a> or <a>StartMatchBackfill</a>) identify the matchmaking
         * configuration to use and provide player attributes consistent with that
         * configuration. </p> <p>To create a matchmaking configuration, you must provide
         * the following: configuration name and FlexMatch mode (with or without GameLift
         * hosting); a rule set that specifies how to evaluate players and find acceptable
         * matches; whether player acceptance is required; and the maximum time allowed for
         * a matchmaking attempt. When using FlexMatch with GameLift hosting, you also need
         * to identify the game session queue to use when starting a game session for the
         * match.</p> <p>In addition, you must set up an Amazon Simple Notification Service
         * (SNS) to receive matchmaking notifications, and provide the topic ARN in the
         * matchmaking configuration. An alternative method, continuously polling ticket
         * status with <a>DescribeMatchmaking</a>, is only suitable for games in
         * development with low matchmaking usage.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * FlexMatch Developer Guide</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch Matchmaker</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMatchmakingConfigurationAsync(const Model::CreateMatchmakingConfigurationRequest& request, const CreateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new rule set for FlexMatch matchmaking. A rule set describes the
         * type of match to create, such as the number and size of teams. It also sets the
         * parameters for acceptable player matches, such as minimum skill level or
         * character type. A rule set is used by a <a>MatchmakingConfiguration</a>. </p>
         * <p>To create a matchmaking rule set, provide unique rule set name and the rule
         * set body in JSON format. Rule sets must be defined in the same Region as the
         * matchmaking configuration they are used with.</p> <p>Since matchmaking rule sets
         * cannot be edited, it is a good idea to check the rule set syntax using
         * <a>ValidateMatchmakingRuleSet</a> before creating a new rule set.</p> <p>
         * <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">Design
         * a Matchmaker</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-intro.html">Matchmaking
         * with FlexMatch</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMatchmakingRuleSetOutcome CreateMatchmakingRuleSet(const Model::CreateMatchmakingRuleSetRequest& request) const;

        /**
         * <p>Creates a new rule set for FlexMatch matchmaking. A rule set describes the
         * type of match to create, such as the number and size of teams. It also sets the
         * parameters for acceptable player matches, such as minimum skill level or
         * character type. A rule set is used by a <a>MatchmakingConfiguration</a>. </p>
         * <p>To create a matchmaking rule set, provide unique rule set name and the rule
         * set body in JSON format. Rule sets must be defined in the same Region as the
         * matchmaking configuration they are used with.</p> <p>Since matchmaking rule sets
         * cannot be edited, it is a good idea to check the rule set syntax using
         * <a>ValidateMatchmakingRuleSet</a> before creating a new rule set.</p> <p>
         * <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">Design
         * a Matchmaker</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-intro.html">Matchmaking
         * with FlexMatch</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMatchmakingRuleSetOutcomeCallable CreateMatchmakingRuleSetCallable(const Model::CreateMatchmakingRuleSetRequest& request) const;

        /**
         * <p>Creates a new rule set for FlexMatch matchmaking. A rule set describes the
         * type of match to create, such as the number and size of teams. It also sets the
         * parameters for acceptable player matches, such as minimum skill level or
         * character type. A rule set is used by a <a>MatchmakingConfiguration</a>. </p>
         * <p>To create a matchmaking rule set, provide unique rule set name and the rule
         * set body in JSON format. Rule sets must be defined in the same Region as the
         * matchmaking configuration they are used with.</p> <p>Since matchmaking rule sets
         * cannot be edited, it is a good idea to check the rule set syntax using
         * <a>ValidateMatchmakingRuleSet</a> before creating a new rule set.</p> <p>
         * <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">Design
         * a Matchmaker</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-intro.html">Matchmaking
         * with FlexMatch</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMatchmakingRuleSetAsync(const Model::CreateMatchmakingRuleSetRequest& request, const CreateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reserves an open player slot in an active game session. Before a player can
         * be added, a game session must have an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot. To add
         * a group of players to a game session, use <a>CreatePlayerSessions</a>. When the
         * player connects to the game server and references a player session ID, the game
         * server contacts the Amazon GameLift service to validate the player reservation
         * and accept the player.</p> <p>To create a player session, specify a game session
         * ID, player ID, and optionally a string of player data. If successful, a slot is
         * reserved in the game session for the player and a new <a>PlayerSession</a>
         * object is returned. Player sessions cannot be updated. </p> <p> <i>Available in
         * Amazon GameLift Local.</i> </p> <ul> <li> <p> <a>CreatePlayerSession</a> </p>
         * </li> <li> <p> <a>CreatePlayerSessions</a> </p> </li> <li> <p>
         * <a>DescribePlayerSessions</a> </p> </li> <li> <p>Game session placements</p>
         * <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlayerSessionOutcome CreatePlayerSession(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Reserves an open player slot in an active game session. Before a player can
         * be added, a game session must have an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot. To add
         * a group of players to a game session, use <a>CreatePlayerSessions</a>. When the
         * player connects to the game server and references a player session ID, the game
         * server contacts the Amazon GameLift service to validate the player reservation
         * and accept the player.</p> <p>To create a player session, specify a game session
         * ID, player ID, and optionally a string of player data. If successful, a slot is
         * reserved in the game session for the player and a new <a>PlayerSession</a>
         * object is returned. Player sessions cannot be updated. </p> <p> <i>Available in
         * Amazon GameLift Local.</i> </p> <ul> <li> <p> <a>CreatePlayerSession</a> </p>
         * </li> <li> <p> <a>CreatePlayerSessions</a> </p> </li> <li> <p>
         * <a>DescribePlayerSessions</a> </p> </li> <li> <p>Game session placements</p>
         * <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionOutcomeCallable CreatePlayerSessionCallable(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * <p>Reserves an open player slot in an active game session. Before a player can
         * be added, a game session must have an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot. To add
         * a group of players to a game session, use <a>CreatePlayerSessions</a>. When the
         * player connects to the game server and references a player session ID, the game
         * server contacts the Amazon GameLift service to validate the player reservation
         * and accept the player.</p> <p>To create a player session, specify a game session
         * ID, player ID, and optionally a string of player data. If successful, a slot is
         * reserved in the game session for the player and a new <a>PlayerSession</a>
         * object is returned. Player sessions cannot be updated. </p> <p> <i>Available in
         * Amazon GameLift Local.</i> </p> <ul> <li> <p> <a>CreatePlayerSession</a> </p>
         * </li> <li> <p> <a>CreatePlayerSessions</a> </p> </li> <li> <p>
         * <a>DescribePlayerSessions</a> </p> </li> <li> <p>Game session placements</p>
         * <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionAsync(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reserves open slots in a game session for a group of players. Before players
         * can be added, a game session must have an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot. To add
         * a single player to a game session, use <a>CreatePlayerSession</a>. When a player
         * connects to the game server and references a player session ID, the game server
         * contacts the Amazon GameLift service to validate the player reservation and
         * accept the player.</p> <p>To create player sessions, specify a game session ID,
         * a list of player IDs, and optionally a set of player data strings. If
         * successful, a slot is reserved in the game session for each player and a set of
         * new <a>PlayerSession</a> objects is returned. Player sessions cannot be
         * updated.</p> <p> <i>Available in Amazon GameLift Local.</i> </p> <ul> <li> <p>
         * <a>CreatePlayerSession</a> </p> </li> <li> <p> <a>CreatePlayerSessions</a> </p>
         * </li> <li> <p> <a>DescribePlayerSessions</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlayerSessionsOutcome CreatePlayerSessions(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Reserves open slots in a game session for a group of players. Before players
         * can be added, a game session must have an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot. To add
         * a single player to a game session, use <a>CreatePlayerSession</a>. When a player
         * connects to the game server and references a player session ID, the game server
         * contacts the Amazon GameLift service to validate the player reservation and
         * accept the player.</p> <p>To create player sessions, specify a game session ID,
         * a list of player IDs, and optionally a set of player data strings. If
         * successful, a slot is reserved in the game session for each player and a set of
         * new <a>PlayerSession</a> objects is returned. Player sessions cannot be
         * updated.</p> <p> <i>Available in Amazon GameLift Local.</i> </p> <ul> <li> <p>
         * <a>CreatePlayerSession</a> </p> </li> <li> <p> <a>CreatePlayerSessions</a> </p>
         * </li> <li> <p> <a>DescribePlayerSessions</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionsOutcomeCallable CreatePlayerSessionsCallable(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * <p>Reserves open slots in a game session for a group of players. Before players
         * can be added, a game session must have an <code>ACTIVE</code> status, have a
         * creation policy of <code>ALLOW_ALL</code>, and have an open player slot. To add
         * a single player to a game session, use <a>CreatePlayerSession</a>. When a player
         * connects to the game server and references a player session ID, the game server
         * contacts the Amazon GameLift service to validate the player reservation and
         * accept the player.</p> <p>To create player sessions, specify a game session ID,
         * a list of player IDs, and optionally a set of player data strings. If
         * successful, a slot is reserved in the game session for each player and a set of
         * new <a>PlayerSession</a> objects is returned. Player sessions cannot be
         * updated.</p> <p> <i>Available in Amazon GameLift Local.</i> </p> <ul> <li> <p>
         * <a>CreatePlayerSession</a> </p> </li> <li> <p> <a>CreatePlayerSessions</a> </p>
         * </li> <li> <p> <a>DescribePlayerSessions</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionsAsync(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new script record for your Realtime Servers script. Realtime
         * scripts are JavaScript that provide configuration settings and optional custom
         * game logic for your game. The script is deployed when you create a Realtime
         * Servers fleet to host your game sessions. Script logic is executed during an
         * active game session. </p> <p>To create a new script record, specify a script
         * name and provide the script file(s). The script files and all dependencies must
         * be zipped into a single file. You can pull the zip file from either of these
         * locations: </p> <ul> <li> <p>A locally available directory. Use the
         * <i>ZipFile</i> parameter for this option.</p> </li> <li> <p>An Amazon Simple
         * Storage Service (Amazon S3) bucket under your AWS account. Use the
         * <i>StorageLocation</i> parameter for this option. You'll need to have an
         * Identity Access Management (IAM) role that allows the Amazon GameLift service to
         * access your S3 bucket. </p> </li> </ul> <p>If the call is successful, a new
         * script record is created with a unique script ID. If the script file is provided
         * as a local file, the file is uploaded to an Amazon GameLift-owned S3 bucket and
         * the script record's storage location reflects this location. If the script file
         * is provided as an S3 bucket, Amazon GameLift accesses the file at this storage
         * location as needed for deployment.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set
         * Up a Role for Amazon GameLift Access</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p>
         * </li> <li> <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a>
         * </p> </li> <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateScript">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScriptOutcome CreateScript(const Model::CreateScriptRequest& request) const;

        /**
         * <p>Creates a new script record for your Realtime Servers script. Realtime
         * scripts are JavaScript that provide configuration settings and optional custom
         * game logic for your game. The script is deployed when you create a Realtime
         * Servers fleet to host your game sessions. Script logic is executed during an
         * active game session. </p> <p>To create a new script record, specify a script
         * name and provide the script file(s). The script files and all dependencies must
         * be zipped into a single file. You can pull the zip file from either of these
         * locations: </p> <ul> <li> <p>A locally available directory. Use the
         * <i>ZipFile</i> parameter for this option.</p> </li> <li> <p>An Amazon Simple
         * Storage Service (Amazon S3) bucket under your AWS account. Use the
         * <i>StorageLocation</i> parameter for this option. You'll need to have an
         * Identity Access Management (IAM) role that allows the Amazon GameLift service to
         * access your S3 bucket. </p> </li> </ul> <p>If the call is successful, a new
         * script record is created with a unique script ID. If the script file is provided
         * as a local file, the file is uploaded to an Amazon GameLift-owned S3 bucket and
         * the script record's storage location reflects this location. If the script file
         * is provided as an S3 bucket, Amazon GameLift accesses the file at this storage
         * location as needed for deployment.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set
         * Up a Role for Amazon GameLift Access</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p>
         * </li> <li> <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a>
         * </p> </li> <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateScript">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request) const;

        /**
         * <p>Creates a new script record for your Realtime Servers script. Realtime
         * scripts are JavaScript that provide configuration settings and optional custom
         * game logic for your game. The script is deployed when you create a Realtime
         * Servers fleet to host your game sessions. Script logic is executed during an
         * active game session. </p> <p>To create a new script record, specify a script
         * name and provide the script file(s). The script files and all dependencies must
         * be zipped into a single file. You can pull the zip file from either of these
         * locations: </p> <ul> <li> <p>A locally available directory. Use the
         * <i>ZipFile</i> parameter for this option.</p> </li> <li> <p>An Amazon Simple
         * Storage Service (Amazon S3) bucket under your AWS account. Use the
         * <i>StorageLocation</i> parameter for this option. You'll need to have an
         * Identity Access Management (IAM) role that allows the Amazon GameLift service to
         * access your S3 bucket. </p> </li> </ul> <p>If the call is successful, a new
         * script record is created with a unique script ID. If the script file is provided
         * as a local file, the file is uploaded to an Amazon GameLift-owned S3 bucket and
         * the script record's storage location reflects this location. If the script file
         * is provided as an S3 bucket, Amazon GameLift accesses the file at this storage
         * location as needed for deployment.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set
         * Up a Role for Amazon GameLift Access</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p>
         * </li> <li> <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a>
         * </p> </li> <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateScript">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests authorization to create or delete a peer connection between the VPC
         * for your Amazon GameLift fleet and a virtual private cloud (VPC) in your AWS
         * account. VPC peering enables the game servers on your fleet to communicate
         * directly with other AWS resources. Once you've received authorization, call
         * <a>CreateVpcPeeringConnection</a> to establish the peering connection. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>You can peer with VPCs that are
         * owned by any AWS account you have access to, including the account that you use
         * to manage your Amazon GameLift fleets. You cannot peer with VPCs that are in
         * different Regions.</p> <p>To request authorization to create a connection, call
         * this operation from the AWS account with the VPC that you want to peer to your
         * Amazon GameLift fleet. For example, to enable your game servers to retrieve data
         * from a DynamoDB table, use the account that manages that DynamoDB resource.
         * Identify the following values: (1) The ID of the VPC that you want to peer with,
         * and (2) the ID of the AWS account that you use to manage Amazon GameLift. If
         * successful, VPC peering is authorized for the specified VPC. </p> <p>To request
         * authorization to delete a connection, call this operation from the AWS account
         * with the VPC that is peered with your Amazon GameLift fleet. Identify the
         * following values: (1) VPC ID that you want to delete the peering connection for,
         * and (2) ID of the AWS account that you use to manage Amazon GameLift. </p>
         * <p>The authorization remains valid for 24 hours unless it is canceled by a call
         * to <a>DeleteVpcPeeringAuthorization</a>. You must create or delete the peering
         * connection while the authorization is valid. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcPeeringAuthorizationOutcome CreateVpcPeeringAuthorization(const Model::CreateVpcPeeringAuthorizationRequest& request) const;

        /**
         * <p>Requests authorization to create or delete a peer connection between the VPC
         * for your Amazon GameLift fleet and a virtual private cloud (VPC) in your AWS
         * account. VPC peering enables the game servers on your fleet to communicate
         * directly with other AWS resources. Once you've received authorization, call
         * <a>CreateVpcPeeringConnection</a> to establish the peering connection. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>You can peer with VPCs that are
         * owned by any AWS account you have access to, including the account that you use
         * to manage your Amazon GameLift fleets. You cannot peer with VPCs that are in
         * different Regions.</p> <p>To request authorization to create a connection, call
         * this operation from the AWS account with the VPC that you want to peer to your
         * Amazon GameLift fleet. For example, to enable your game servers to retrieve data
         * from a DynamoDB table, use the account that manages that DynamoDB resource.
         * Identify the following values: (1) The ID of the VPC that you want to peer with,
         * and (2) the ID of the AWS account that you use to manage Amazon GameLift. If
         * successful, VPC peering is authorized for the specified VPC. </p> <p>To request
         * authorization to delete a connection, call this operation from the AWS account
         * with the VPC that is peered with your Amazon GameLift fleet. Identify the
         * following values: (1) VPC ID that you want to delete the peering connection for,
         * and (2) ID of the AWS account that you use to manage Amazon GameLift. </p>
         * <p>The authorization remains valid for 24 hours unless it is canceled by a call
         * to <a>DeleteVpcPeeringAuthorization</a>. You must create or delete the peering
         * connection while the authorization is valid. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcPeeringAuthorizationOutcomeCallable CreateVpcPeeringAuthorizationCallable(const Model::CreateVpcPeeringAuthorizationRequest& request) const;

        /**
         * <p>Requests authorization to create or delete a peer connection between the VPC
         * for your Amazon GameLift fleet and a virtual private cloud (VPC) in your AWS
         * account. VPC peering enables the game servers on your fleet to communicate
         * directly with other AWS resources. Once you've received authorization, call
         * <a>CreateVpcPeeringConnection</a> to establish the peering connection. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>You can peer with VPCs that are
         * owned by any AWS account you have access to, including the account that you use
         * to manage your Amazon GameLift fleets. You cannot peer with VPCs that are in
         * different Regions.</p> <p>To request authorization to create a connection, call
         * this operation from the AWS account with the VPC that you want to peer to your
         * Amazon GameLift fleet. For example, to enable your game servers to retrieve data
         * from a DynamoDB table, use the account that manages that DynamoDB resource.
         * Identify the following values: (1) The ID of the VPC that you want to peer with,
         * and (2) the ID of the AWS account that you use to manage Amazon GameLift. If
         * successful, VPC peering is authorized for the specified VPC. </p> <p>To request
         * authorization to delete a connection, call this operation from the AWS account
         * with the VPC that is peered with your Amazon GameLift fleet. Identify the
         * following values: (1) VPC ID that you want to delete the peering connection for,
         * and (2) ID of the AWS account that you use to manage Amazon GameLift. </p>
         * <p>The authorization remains valid for 24 hours unless it is canceled by a call
         * to <a>DeleteVpcPeeringAuthorization</a>. You must create or delete the peering
         * connection while the authorization is valid. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcPeeringAuthorizationAsync(const Model::CreateVpcPeeringAuthorizationRequest& request, const CreateVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Establishes a VPC peering connection between a virtual private cloud (VPC) in
         * an AWS account with the VPC for your Amazon GameLift fleet. VPC peering enables
         * the game servers on your fleet to communicate directly with other AWS resources.
         * You can peer with VPCs in any AWS account that you have access to, including the
         * account that you use to manage your Amazon GameLift fleets. You cannot peer with
         * VPCs that are in different Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>Before calling this operation to
         * establish the peering connection, you first need to call
         * <a>CreateVpcPeeringAuthorization</a> and identify the VPC you want to peer with.
         * Once the authorization for the specified VPC is issued, you have 24 hours to
         * establish the connection. These two operations handle all tasks necessary to
         * peer the two VPCs, including acceptance, updating routing tables, etc. </p>
         * <p>To establish the connection, call this operation from the AWS account that is
         * used to manage the Amazon GameLift fleets. Identify the following values: (1)
         * The ID of the fleet you want to be enable a VPC peering connection for; (2) The
         * AWS account with the VPC that you want to peer with; and (3) The ID of the VPC
         * you want to peer with. This operation is asynchronous. If successful, a
         * <a>VpcPeeringConnection</a> request is created. You can use continuous polling
         * to track the request's status using <a>DescribeVpcPeeringConnections</a>, or by
         * monitoring fleet events for success or failure using <a>DescribeFleetEvents</a>.
         * </p> <ul> <li> <p> <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcPeeringConnectionOutcome CreateVpcPeeringConnection(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Establishes a VPC peering connection between a virtual private cloud (VPC) in
         * an AWS account with the VPC for your Amazon GameLift fleet. VPC peering enables
         * the game servers on your fleet to communicate directly with other AWS resources.
         * You can peer with VPCs in any AWS account that you have access to, including the
         * account that you use to manage your Amazon GameLift fleets. You cannot peer with
         * VPCs that are in different Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>Before calling this operation to
         * establish the peering connection, you first need to call
         * <a>CreateVpcPeeringAuthorization</a> and identify the VPC you want to peer with.
         * Once the authorization for the specified VPC is issued, you have 24 hours to
         * establish the connection. These two operations handle all tasks necessary to
         * peer the two VPCs, including acceptance, updating routing tables, etc. </p>
         * <p>To establish the connection, call this operation from the AWS account that is
         * used to manage the Amazon GameLift fleets. Identify the following values: (1)
         * The ID of the fleet you want to be enable a VPC peering connection for; (2) The
         * AWS account with the VPC that you want to peer with; and (3) The ID of the VPC
         * you want to peer with. This operation is asynchronous. If successful, a
         * <a>VpcPeeringConnection</a> request is created. You can use continuous polling
         * to track the request's status using <a>DescribeVpcPeeringConnections</a>, or by
         * monitoring fleet events for success or failure using <a>DescribeFleetEvents</a>.
         * </p> <ul> <li> <p> <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcPeeringConnectionOutcomeCallable CreateVpcPeeringConnectionCallable(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Establishes a VPC peering connection between a virtual private cloud (VPC) in
         * an AWS account with the VPC for your Amazon GameLift fleet. VPC peering enables
         * the game servers on your fleet to communicate directly with other AWS resources.
         * You can peer with VPCs in any AWS account that you have access to, including the
         * account that you use to manage your Amazon GameLift fleets. You cannot peer with
         * VPCs that are in different Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>Before calling this operation to
         * establish the peering connection, you first need to call
         * <a>CreateVpcPeeringAuthorization</a> and identify the VPC you want to peer with.
         * Once the authorization for the specified VPC is issued, you have 24 hours to
         * establish the connection. These two operations handle all tasks necessary to
         * peer the two VPCs, including acceptance, updating routing tables, etc. </p>
         * <p>To establish the connection, call this operation from the AWS account that is
         * used to manage the Amazon GameLift fleets. Identify the following values: (1)
         * The ID of the fleet you want to be enable a VPC peering connection for; (2) The
         * AWS account with the VPC that you want to peer with; and (3) The ID of the VPC
         * you want to peer with. This operation is asynchronous. If successful, a
         * <a>VpcPeeringConnection</a> request is created. You can use continuous polling
         * to track the request's status using <a>DescribeVpcPeeringConnections</a>, or by
         * monitoring fleet events for success or failure using <a>DescribeFleetEvents</a>.
         * </p> <ul> <li> <p> <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcPeeringConnectionAsync(const Model::CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alias. This operation removes all record of the alias. Game
         * clients attempting to access a server process using the deleted alias receive an
         * error. To delete an alias, specify the alias ID to be deleted.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes an alias. This operation removes all record of the alias. Game
         * clients attempting to access a server process using the deleted alias receive an
         * error. To delete an alias, specify the alias ID to be deleted.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes an alias. This operation removes all record of the alias. Game
         * clients attempting to access a server process using the deleted alias receive an
         * error. To delete an alias, specify the alias ID to be deleted.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a build. This operation permanently deletes the build resource and
         * any uploaded build files. Deleting a build does not affect the status of any
         * active fleets using the build, but you can no longer create new fleets with the
         * deleted build.</p> <p>To delete a build, specify the build ID. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBuildOutcome DeleteBuild(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This operation permanently deletes the build resource and
         * any uploaded build files. Deleting a build does not affect the status of any
         * active fleets using the build, but you can no longer create new fleets with the
         * deleted build.</p> <p>To delete a build, specify the build ID. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBuildOutcomeCallable DeleteBuildCallable(const Model::DeleteBuildRequest& request) const;

        /**
         * <p>Deletes a build. This operation permanently deletes the build resource and
         * any uploaded build files. Deleting a build does not affect the status of any
         * active fleets using the build, but you can no longer create new fleets with the
         * deleted build.</p> <p>To delete a build, specify the build ID. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBuildAsync(const Model::DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p> <p>If
         * the fleet being deleted has a VPC peering connection, you first need to get a
         * valid authorization (good for 24 hours) by calling
         * <a>CreateVpcPeeringAuthorization</a>. You do not need to explicitly delete the
         * VPC peering connection--this is done as part of the delete fleet process.</p>
         * <p>This operation removes the fleet and its resources. Once a fleet is deleted,
         * you can no longer use any of the resource in that fleet.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p> <p>If
         * the fleet being deleted has a VPC peering connection, you first need to get a
         * valid authorization (good for 24 hours) by calling
         * <a>CreateVpcPeeringAuthorization</a>. You do not need to explicitly delete the
         * VPC peering connection--this is done as part of the delete fleet process.</p>
         * <p>This operation removes the fleet and its resources. Once a fleet is deleted,
         * you can no longer use any of the resource in that fleet.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes everything related to a fleet. Before deleting a fleet, you must set
         * the fleet's desired capacity to zero. See <a>UpdateFleetCapacity</a>.</p> <p>If
         * the fleet being deleted has a VPC peering connection, you first need to get a
         * valid authorization (good for 24 hours) by calling
         * <a>CreateVpcPeeringAuthorization</a>. You do not need to explicitly delete the
         * VPC peering connection--this is done as part of the delete fleet process.</p>
         * <p>This operation removes the fleet and its resources. Once a fleet is deleted,
         * you can no longer use any of the resource in that fleet.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Terminates a game server group and permanently
         * deletes the game server group record. You have several options for how these
         * resources are impacted when deleting the game server group. Depending on the
         * type of delete operation selected, this operation might affect these
         * resources:</p> <ul> <li> <p>The game server group</p> </li> <li> <p>The
         * corresponding Auto Scaling group</p> </li> <li> <p>All game servers that are
         * currently running in the group</p> </li> </ul> <p>To delete a game server group,
         * identify the game server group to delete and specify the type of delete
         * operation to initiate. Game server groups can only be deleted if they are in
         * <code>ACTIVE</code> or <code>ERROR</code> status.</p> <p>If the delete request
         * is successful, a series of operations are kicked off. The game server group
         * status is changed to <code>DELETE_SCHEDULED</code>, which prevents new game
         * servers from being registered and stops automatic scaling activity. Once all
         * game servers in the game server group are deregistered, GameLift FleetIQ can
         * begin deleting resources. If any of the delete operations fail, the game server
         * group is placed in <code>ERROR</code> status.</p> <p>GameLift FleetIQ emits
         * delete events to Amazon CloudWatch.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGameServerGroupOutcome DeleteGameServerGroup(const Model::DeleteGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Terminates a game server group and permanently
         * deletes the game server group record. You have several options for how these
         * resources are impacted when deleting the game server group. Depending on the
         * type of delete operation selected, this operation might affect these
         * resources:</p> <ul> <li> <p>The game server group</p> </li> <li> <p>The
         * corresponding Auto Scaling group</p> </li> <li> <p>All game servers that are
         * currently running in the group</p> </li> </ul> <p>To delete a game server group,
         * identify the game server group to delete and specify the type of delete
         * operation to initiate. Game server groups can only be deleted if they are in
         * <code>ACTIVE</code> or <code>ERROR</code> status.</p> <p>If the delete request
         * is successful, a series of operations are kicked off. The game server group
         * status is changed to <code>DELETE_SCHEDULED</code>, which prevents new game
         * servers from being registered and stops automatic scaling activity. Once all
         * game servers in the game server group are deregistered, GameLift FleetIQ can
         * begin deleting resources. If any of the delete operations fail, the game server
         * group is placed in <code>ERROR</code> status.</p> <p>GameLift FleetIQ emits
         * delete events to Amazon CloudWatch.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameServerGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGameServerGroupOutcomeCallable DeleteGameServerGroupCallable(const Model::DeleteGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Terminates a game server group and permanently
         * deletes the game server group record. You have several options for how these
         * resources are impacted when deleting the game server group. Depending on the
         * type of delete operation selected, this operation might affect these
         * resources:</p> <ul> <li> <p>The game server group</p> </li> <li> <p>The
         * corresponding Auto Scaling group</p> </li> <li> <p>All game servers that are
         * currently running in the group</p> </li> </ul> <p>To delete a game server group,
         * identify the game server group to delete and specify the type of delete
         * operation to initiate. Game server groups can only be deleted if they are in
         * <code>ACTIVE</code> or <code>ERROR</code> status.</p> <p>If the delete request
         * is successful, a series of operations are kicked off. The game server group
         * status is changed to <code>DELETE_SCHEDULED</code>, which prevents new game
         * servers from being registered and stops automatic scaling activity. Once all
         * game servers in the game server group are deregistered, GameLift FleetIQ can
         * begin deleting resources. If any of the delete operations fail, the game server
         * group is placed in <code>ERROR</code> status.</p> <p>GameLift FleetIQ emits
         * delete events to Amazon CloudWatch.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameServerGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGameServerGroupAsync(const Model::DeleteGameServerGroupRequest& request, const DeleteGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a game session queue. Once a queue is successfully deleted,
         * unfulfilled <a>StartGameSessionPlacement</a> requests that reference the queue
         * will fail. To delete a queue, specify the queue name.</p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">
         * Using Multi-Region Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGameSessionQueueOutcome DeleteGameSessionQueue(const Model::DeleteGameSessionQueueRequest& request) const;

        /**
         * <p>Deletes a game session queue. Once a queue is successfully deleted,
         * unfulfilled <a>StartGameSessionPlacement</a> requests that reference the queue
         * will fail. To delete a queue, specify the queue name.</p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">
         * Using Multi-Region Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGameSessionQueueOutcomeCallable DeleteGameSessionQueueCallable(const Model::DeleteGameSessionQueueRequest& request) const;

        /**
         * <p>Deletes a game session queue. Once a queue is successfully deleted,
         * unfulfilled <a>StartGameSessionPlacement</a> requests that reference the queue
         * will fail. To delete a queue, specify the queue name.</p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">
         * Using Multi-Region Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGameSessionQueueAsync(const Model::DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently removes a FlexMatch matchmaking configuration. To delete, specify
         * the configuration name. A matchmaking configuration cannot be deleted if it is
         * being used in any active matchmaking tickets.</p> <p> <b>Related operations</b>
         * </p> <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMatchmakingConfigurationOutcome DeleteMatchmakingConfiguration(const Model::DeleteMatchmakingConfigurationRequest& request) const;

        /**
         * <p>Permanently removes a FlexMatch matchmaking configuration. To delete, specify
         * the configuration name. A matchmaking configuration cannot be deleted if it is
         * being used in any active matchmaking tickets.</p> <p> <b>Related operations</b>
         * </p> <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMatchmakingConfigurationOutcomeCallable DeleteMatchmakingConfigurationCallable(const Model::DeleteMatchmakingConfigurationRequest& request) const;

        /**
         * <p>Permanently removes a FlexMatch matchmaking configuration. To delete, specify
         * the configuration name. A matchmaking configuration cannot be deleted if it is
         * being used in any active matchmaking tickets.</p> <p> <b>Related operations</b>
         * </p> <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMatchmakingConfigurationAsync(const Model::DeleteMatchmakingConfigurationRequest& request, const DeleteMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing matchmaking rule set. To delete the rule set, provide the
         * rule set name. Rule sets cannot be deleted if they are currently being used by a
         * matchmaking configuration. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMatchmakingRuleSetOutcome DeleteMatchmakingRuleSet(const Model::DeleteMatchmakingRuleSetRequest& request) const;

        /**
         * <p>Deletes an existing matchmaking rule set. To delete the rule set, provide the
         * rule set name. Rule sets cannot be deleted if they are currently being used by a
         * matchmaking configuration. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMatchmakingRuleSetOutcomeCallable DeleteMatchmakingRuleSetCallable(const Model::DeleteMatchmakingRuleSetRequest& request) const;

        /**
         * <p>Deletes an existing matchmaking rule set. To delete the rule set, provide the
         * rule set name. Rule sets cannot be deleted if they are currently being used by a
         * matchmaking configuration. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMatchmakingRuleSetAsync(const Model::DeleteMatchmakingRuleSetRequest& request, const DeleteMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet scaling policy. Once deleted, the policy is no longer in
         * force and GameLift removes all record of it. To delete a scaling policy, specify
         * both the scaling policy name and the fleet ID it is associated with.</p> <p>To
         * temporarily suspend scaling policies, call <a>StopFleetActions</a>. This
         * operation suspends all policies for the fleet.</p> <ul> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
         * </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes a fleet scaling policy. Once deleted, the policy is no longer in
         * force and GameLift removes all record of it. To delete a scaling policy, specify
         * both the scaling policy name and the fleet ID it is associated with.</p> <p>To
         * temporarily suspend scaling policies, call <a>StopFleetActions</a>. This
         * operation suspends all policies for the fleet.</p> <ul> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
         * </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * <p>Deletes a fleet scaling policy. Once deleted, the policy is no longer in
         * force and GameLift removes all record of it. To delete a scaling policy, specify
         * both the scaling policy name and the fleet ID it is associated with.</p> <p>To
         * temporarily suspend scaling policies, call <a>StopFleetActions</a>. This
         * operation suspends all policies for the fleet.</p> <ul> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
         * </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Realtime script. This operation permanently deletes the script
         * record. If script files were uploaded, they are also deleted (files stored in an
         * S3 bucket are not deleted). </p> <p>To delete a script, specify the script ID.
         * Before deleting a script, be sure to terminate all fleets that are deployed with
         * the script being deleted. Fleet instances periodically check for script updates,
         * and if the script record no longer exists, the instance will go into an error
         * state and be unable to host game sessions.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScript">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScriptOutcome DeleteScript(const Model::DeleteScriptRequest& request) const;

        /**
         * <p>Deletes a Realtime script. This operation permanently deletes the script
         * record. If script files were uploaded, they are also deleted (files stored in an
         * S3 bucket are not deleted). </p> <p>To delete a script, specify the script ID.
         * Before deleting a script, be sure to terminate all fleets that are deployed with
         * the script being deleted. Fleet instances periodically check for script updates,
         * and if the script record no longer exists, the instance will go into an error
         * state and be unable to host game sessions.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScript">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScriptOutcomeCallable DeleteScriptCallable(const Model::DeleteScriptRequest& request) const;

        /**
         * <p>Deletes a Realtime script. This operation permanently deletes the script
         * record. If script files were uploaded, they are also deleted (files stored in an
         * S3 bucket are not deleted). </p> <p>To delete a script, specify the script ID.
         * Before deleting a script, be sure to terminate all fleets that are deployed with
         * the script being deleted. Fleet instances periodically check for script updates,
         * and if the script record no longer exists, the instance will go into an error
         * state and be unable to host game sessions.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScript">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScriptAsync(const Model::DeleteScriptRequest& request, const DeleteScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a pending VPC peering authorization for the specified VPC. If you
         * need to delete an existing VPC peering connection, call
         * <a>DeleteVpcPeeringConnection</a>. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcPeeringAuthorizationOutcome DeleteVpcPeeringAuthorization(const Model::DeleteVpcPeeringAuthorizationRequest& request) const;

        /**
         * <p>Cancels a pending VPC peering authorization for the specified VPC. If you
         * need to delete an existing VPC peering connection, call
         * <a>DeleteVpcPeeringConnection</a>. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcPeeringAuthorizationOutcomeCallable DeleteVpcPeeringAuthorizationCallable(const Model::DeleteVpcPeeringAuthorizationRequest& request) const;

        /**
         * <p>Cancels a pending VPC peering authorization for the specified VPC. If you
         * need to delete an existing VPC peering connection, call
         * <a>DeleteVpcPeeringConnection</a>. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcPeeringAuthorizationAsync(const Model::DeleteVpcPeeringAuthorizationRequest& request, const DeleteVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a VPC peering connection. To delete the connection, you must have a
         * valid authorization for the VPC peering connection that you want to delete. You
         * can check for an authorization by calling
         * <a>DescribeVpcPeeringAuthorizations</a> or request a new one using
         * <a>CreateVpcPeeringAuthorization</a>. </p> <p>Once a valid authorization exists,
         * call this operation from the AWS account that is used to manage the Amazon
         * GameLift fleets. Identify the connection to delete by the connection ID and
         * fleet ID. If successful, the connection is removed. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcPeeringConnectionOutcome DeleteVpcPeeringConnection(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Removes a VPC peering connection. To delete the connection, you must have a
         * valid authorization for the VPC peering connection that you want to delete. You
         * can check for an authorization by calling
         * <a>DescribeVpcPeeringAuthorizations</a> or request a new one using
         * <a>CreateVpcPeeringAuthorization</a>. </p> <p>Once a valid authorization exists,
         * call this operation from the AWS account that is used to manage the Amazon
         * GameLift fleets. Identify the connection to delete by the connection ID and
         * fleet ID. If successful, the connection is removed. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcPeeringConnectionOutcomeCallable DeleteVpcPeeringConnectionCallable(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Removes a VPC peering connection. To delete the connection, you must have a
         * valid authorization for the VPC peering connection that you want to delete. You
         * can check for an authorization by calling
         * <a>DescribeVpcPeeringAuthorizations</a> or request a new one using
         * <a>CreateVpcPeeringAuthorization</a>. </p> <p>Once a valid authorization exists,
         * call this operation from the AWS account that is used to manage the Amazon
         * GameLift fleets. Identify the connection to delete by the connection ID and
         * fleet ID. If successful, the connection is removed. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcPeeringConnectionAsync(const Model::DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Removes the game server from a game server group. As
         * a result of this operation, the deregistered game server can no longer be
         * claimed and will not be returned in a list of active game servers. </p> <p>To
         * deregister a game server, specify the game server group and game server ID. If
         * successful, this operation emits a CloudWatch event with termination timestamp
         * and reason.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeregisterGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterGameServerOutcome DeregisterGameServer(const Model::DeregisterGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Removes the game server from a game server group. As
         * a result of this operation, the deregistered game server can no longer be
         * claimed and will not be returned in a list of active game servers. </p> <p>To
         * deregister a game server, specify the game server group and game server ID. If
         * successful, this operation emits a CloudWatch event with termination timestamp
         * and reason.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeregisterGameServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterGameServerOutcomeCallable DeregisterGameServerCallable(const Model::DeregisterGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Removes the game server from a game server group. As
         * a result of this operation, the deregistered game server can no longer be
         * claimed and will not be returned in a list of active game servers. </p> <p>To
         * deregister a game server, specify the game server group and game server ID. If
         * successful, this operation emits a CloudWatch event with termination timestamp
         * and reason.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeregisterGameServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterGameServerAsync(const Model::DeregisterGameServerRequest& request, const DeregisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for an alias. This operation returns all alias metadata
         * and settings. To get an alias's target fleet ID only, use
         * <code>ResolveAlias</code>. </p> <p>To get alias properties, specify the alias
         * ID. If successful, the requested alias record is returned.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAliasOutcome DescribeAlias(const Model::DescribeAliasRequest& request) const;

        /**
         * <p>Retrieves properties for an alias. This operation returns all alias metadata
         * and settings. To get an alias's target fleet ID only, use
         * <code>ResolveAlias</code>. </p> <p>To get alias properties, specify the alias
         * ID. If successful, the requested alias record is returned.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAliasOutcomeCallable DescribeAliasCallable(const Model::DescribeAliasRequest& request) const;

        /**
         * <p>Retrieves properties for an alias. This operation returns all alias metadata
         * and settings. To get an alias's target fleet ID only, use
         * <code>ResolveAlias</code>. </p> <p>To get alias properties, specify the alias
         * ID. If successful, the requested alias record is returned.</p> <ul> <li> <p>
         * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
         * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
         * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAliasAsync(const Model::DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a custom game build. To request a build resource,
         * specify a build ID. If successful, an object containing the build properties is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBuildOutcome DescribeBuild(const Model::DescribeBuildRequest& request) const;

        /**
         * <p>Retrieves properties for a custom game build. To request a build resource,
         * specify a build ID. If successful, an object containing the build properties is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBuildOutcomeCallable DescribeBuildCallable(const Model::DescribeBuildRequest& request) const;

        /**
         * <p>Retrieves properties for a custom game build. To request a build resource,
         * specify a build ID. If successful, an object containing the build properties is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBuildAsync(const Model::DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>Maximum number of instances allowed per AWS account (service
         * limit).</p> </li> <li> <p>Current usage for the AWS account.</p> </li> </ul>
         * <p>To learn more about the capabilities of each instance type, see <a
         * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>.
         * Note that the instance types offered may vary depending on the region.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEC2InstanceLimitsOutcome DescribeEC2InstanceLimits(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>Maximum number of instances allowed per AWS account (service
         * limit).</p> </li> <li> <p>Current usage for the AWS account.</p> </li> </ul>
         * <p>To learn more about the capabilities of each instance type, see <a
         * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>.
         * Note that the instance types offered may vary depending on the region.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEC2InstanceLimitsOutcomeCallable DescribeEC2InstanceLimitsCallable(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * <p>Retrieves the following information for the specified EC2 instance type:</p>
         * <ul> <li> <p>Maximum number of instances allowed per AWS account (service
         * limit).</p> </li> <li> <p>Current usage for the AWS account.</p> </li> </ul>
         * <p>To learn more about the capabilities of each instance type, see <a
         * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>.
         * Note that the instance types offered may vary depending on the region.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEC2InstanceLimitsAsync(const Model::DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves core properties, including configuration, status, and metadata, for
         * a fleet. </p> <p>To get attributes for one or more fleets, provide a list of
         * fleet IDs or fleet ARNs. To get attributes for all fleets, do not specify a
         * fleet identifier. When requesting attributes for multiple fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetAttributes</a> object is returned for each fleet
         * requested, unless the fleet identifier is not found.</p>  <p>Some API
         * operations may limit the number of fleet IDs allowed in one request. If a
         * request exceeds this limit, the request fails and the error message includes the
         * maximum allowed number.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetAttributesOutcome DescribeFleetAttributes(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * <p>Retrieves core properties, including configuration, status, and metadata, for
         * a fleet. </p> <p>To get attributes for one or more fleets, provide a list of
         * fleet IDs or fleet ARNs. To get attributes for all fleets, do not specify a
         * fleet identifier. When requesting attributes for multiple fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetAttributes</a> object is returned for each fleet
         * requested, unless the fleet identifier is not found.</p>  <p>Some API
         * operations may limit the number of fleet IDs allowed in one request. If a
         * request exceeds this limit, the request fails and the error message includes the
         * maximum allowed number.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAttributesOutcomeCallable DescribeFleetAttributesCallable(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * <p>Retrieves core properties, including configuration, status, and metadata, for
         * a fleet. </p> <p>To get attributes for one or more fleets, provide a list of
         * fleet IDs or fleet ARNs. To get attributes for all fleets, do not specify a
         * fleet identifier. When requesting attributes for multiple fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, a <a>FleetAttributes</a> object is returned for each fleet
         * requested, unless the fleet identifier is not found.</p>  <p>Some API
         * operations may limit the number of fleet IDs allowed in one request. If a
         * request exceeds this limit, the request fails and the error message includes the
         * maximum allowed number.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAttributesAsync(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current capacity statistics for one or more fleets. These
         * statistics present a snapshot of the fleet's instances and provide insight on
         * current or imminent scaling activity. To get statistics on game hosting activity
         * in the fleet, see <a>DescribeFleetUtilization</a>.</p> <p>You can request
         * capacity for all fleets or specify a list of one or more fleet identifiers. When
         * requesting multiple fleets, use the pagination parameters to retrieve results as
         * a set of sequential pages. If successful, a <a>FleetCapacity</a> object is
         * returned for each requested fleet ID. When a list of fleet IDs is provided,
         * attribute objects are returned only for fleets that currently exist.</p> 
         * <p>Some API operations may limit the number of fleet IDs allowed in one request.
         * If a request exceeds this limit, the request fails and the error message
         * includes the maximum allowed.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * Metrics for Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetCapacityOutcome DescribeFleetCapacity(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * <p>Retrieves the current capacity statistics for one or more fleets. These
         * statistics present a snapshot of the fleet's instances and provide insight on
         * current or imminent scaling activity. To get statistics on game hosting activity
         * in the fleet, see <a>DescribeFleetUtilization</a>.</p> <p>You can request
         * capacity for all fleets or specify a list of one or more fleet identifiers. When
         * requesting multiple fleets, use the pagination parameters to retrieve results as
         * a set of sequential pages. If successful, a <a>FleetCapacity</a> object is
         * returned for each requested fleet ID. When a list of fleet IDs is provided,
         * attribute objects are returned only for fleets that currently exist.</p> 
         * <p>Some API operations may limit the number of fleet IDs allowed in one request.
         * If a request exceeds this limit, the request fails and the error message
         * includes the maximum allowed.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * Metrics for Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetCapacity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetCapacityOutcomeCallable DescribeFleetCapacityCallable(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * <p>Retrieves the current capacity statistics for one or more fleets. These
         * statistics present a snapshot of the fleet's instances and provide insight on
         * current or imminent scaling activity. To get statistics on game hosting activity
         * in the fleet, see <a>DescribeFleetUtilization</a>.</p> <p>You can request
         * capacity for all fleets or specify a list of one or more fleet identifiers. When
         * requesting multiple fleets, use the pagination parameters to retrieve results as
         * a set of sequential pages. If successful, a <a>FleetCapacity</a> object is
         * returned for each requested fleet ID. When a list of fleet IDs is provided,
         * attribute objects are returned only for fleets that currently exist.</p> 
         * <p>Some API operations may limit the number of fleet IDs allowed in one request.
         * If a request exceeds this limit, the request fails and the error message
         * includes the maximum allowed.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * Metrics for Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * entries matching the request are returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetEventsOutcome DescribeFleetEvents(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * <p>Retrieves entries from the specified fleet's event log. You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a collection of event log
         * entries matching the request are returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * entries matching the request are returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetEventsAsync(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fleet's inbound connection permissions. Connection permissions
         * specify the range of IP addresses and port settings that incoming traffic can
         * use to access server processes in the fleet. Game sessions that are running on
         * instances in the fleet use connections that fall in this range. </p> <p>To get a
         * fleet's inbound connection permissions, specify the fleet's unique identifier.
         * If successful, a collection of <a>IpPermission</a> objects is returned for the
         * requested fleet ID. If the requested fleet has been deleted, the result set is
         * empty.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetPortSettingsOutcome DescribeFleetPortSettings(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * <p>Retrieves a fleet's inbound connection permissions. Connection permissions
         * specify the range of IP addresses and port settings that incoming traffic can
         * use to access server processes in the fleet. Game sessions that are running on
         * instances in the fleet use connections that fall in this range. </p> <p>To get a
         * fleet's inbound connection permissions, specify the fleet's unique identifier.
         * If successful, a collection of <a>IpPermission</a> objects is returned for the
         * requested fleet ID. If the requested fleet has been deleted, the result set is
         * empty.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetPortSettingsOutcomeCallable DescribeFleetPortSettingsCallable(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * <p>Retrieves a fleet's inbound connection permissions. Connection permissions
         * specify the range of IP addresses and port settings that incoming traffic can
         * use to access server processes in the fleet. Game sessions that are running on
         * instances in the fleet use connections that fall in this range. </p> <p>To get a
         * fleet's inbound connection permissions, specify the fleet's unique identifier.
         * If successful, a collection of <a>IpPermission</a> objects is returned for the
         * requested fleet ID. If the requested fleet has been deleted, the result set is
         * empty.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetPortSettingsAsync(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. These statistics
         * provide insight into how available hosting resources are currently being used.
         * To get statistics on available hosting resources, see
         * <a>DescribeFleetCapacity</a>.</p> <p>You can request utilization data for all
         * fleets, or specify a list of one or more fleet IDs. When requesting multiple
         * fleets, use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>FleetUtilization</a> object is returned for each
         * requested fleet ID, unless the fleet identifier is not found. </p> 
         * <p>Some API operations may limit the number of fleet IDs allowed in one request.
         * If a request exceeds this limit, the request fails and the error message
         * includes the maximum allowed.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * Metrics for Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetUtilizationOutcome DescribeFleetUtilization(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. These statistics
         * provide insight into how available hosting resources are currently being used.
         * To get statistics on available hosting resources, see
         * <a>DescribeFleetCapacity</a>.</p> <p>You can request utilization data for all
         * fleets, or specify a list of one or more fleet IDs. When requesting multiple
         * fleets, use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>FleetUtilization</a> object is returned for each
         * requested fleet ID, unless the fleet identifier is not found. </p> 
         * <p>Some API operations may limit the number of fleet IDs allowed in one request.
         * If a request exceeds this limit, the request fails and the error message
         * includes the maximum allowed.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * Metrics for Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetUtilization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetUtilizationOutcomeCallable DescribeFleetUtilizationCallable(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. These statistics
         * provide insight into how available hosting resources are currently being used.
         * To get statistics on available hosting resources, see
         * <a>DescribeFleetCapacity</a>.</p> <p>You can request utilization data for all
         * fleets, or specify a list of one or more fleet IDs. When requesting multiple
         * fleets, use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>FleetUtilization</a> object is returned for each
         * requested fleet ID, unless the fleet identifier is not found. </p> 
         * <p>Some API operations may limit the number of fleet IDs allowed in one request.
         * If a request exceeds this limit, the request fails and the error message
         * includes the maximum allowed.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * Metrics for Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
         * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetUtilization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetUtilizationAsync(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information for a registered game server.
         * Information includes game server status, health check info, and the instance
         * that the game server is running on. </p> <p>To retrieve game server information,
         * specify the game server ID. If successful, the requested game server object is
         * returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameServerOutcome DescribeGameServer(const Model::DescribeGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information for a registered game server.
         * Information includes game server status, health check info, and the instance
         * that the game server is running on. </p> <p>To retrieve game server information,
         * specify the game server ID. If successful, the requested game server object is
         * returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameServerOutcomeCallable DescribeGameServerCallable(const Model::DescribeGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information for a registered game server.
         * Information includes game server status, health check info, and the instance
         * that the game server is running on. </p> <p>To retrieve game server information,
         * specify the game server ID. If successful, the requested game server object is
         * returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameServerAsync(const Model::DescribeGameServerRequest& request, const DescribeGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on a game server group. This
         * operation returns only properties related to GameLift FleetIQ. To view or update
         * properties for the corresponding Auto Scaling group, such as launch template,
         * auto scaling policies, and maximum/minimum group size, access the Auto Scaling
         * group directly.</p> <p>To get attributes for a game server group, provide a
         * group name or ARN value. If successful, a <a>GameServerGroup</a> object is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameServerGroupOutcome DescribeGameServerGroup(const Model::DescribeGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on a game server group. This
         * operation returns only properties related to GameLift FleetIQ. To view or update
         * properties for the corresponding Auto Scaling group, such as launch template,
         * auto scaling policies, and maximum/minimum group size, access the Auto Scaling
         * group directly.</p> <p>To get attributes for a game server group, provide a
         * group name or ARN value. If successful, a <a>GameServerGroup</a> object is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameServerGroupOutcomeCallable DescribeGameServerGroupCallable(const Model::DescribeGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on a game server group. This
         * operation returns only properties related to GameLift FleetIQ. To view or update
         * properties for the corresponding Auto Scaling group, such as launch template,
         * auto scaling policies, and maximum/minimum group size, access the Auto Scaling
         * group directly.</p> <p>To get attributes for a game server group, provide a
         * group name or ARN value. If successful, a <a>GameServerGroup</a> object is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameServerGroupAsync(const Model::DescribeGameServerGroupRequest& request, const DescribeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves status information about the Amazon EC2
         * instances associated with a GameLift FleetIQ game server group. Use this
         * operation to detect when instances are active or not available to host new game
         * servers. If you are looking for instance configuration information, call
         * <a>DescribeGameServerGroup</a> or access the corresponding Auto Scaling group
         * properties.</p> <p>To request status for all instances in the game server group,
         * provide a game server group ID only. To request status for specific instances,
         * provide the game server group ID and one or more instance IDs. Use the
         * pagination parameters to retrieve results in sequential segments. If successful,
         * a collection of <code>GameServerInstance</code> objects is returned. </p>
         * <p>This operation is not designed to be called with every game server claim
         * request; this practice can cause you to exceed your API limit, which results in
         * errors. Instead, as a best practice, cache the results and refresh your cache no
         * more than once every 10 seconds.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameServerInstancesOutcome DescribeGameServerInstances(const Model::DescribeGameServerInstancesRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves status information about the Amazon EC2
         * instances associated with a GameLift FleetIQ game server group. Use this
         * operation to detect when instances are active or not available to host new game
         * servers. If you are looking for instance configuration information, call
         * <a>DescribeGameServerGroup</a> or access the corresponding Auto Scaling group
         * properties.</p> <p>To request status for all instances in the game server group,
         * provide a game server group ID only. To request status for specific instances,
         * provide the game server group ID and one or more instance IDs. Use the
         * pagination parameters to retrieve results in sequential segments. If successful,
         * a collection of <code>GameServerInstance</code> objects is returned. </p>
         * <p>This operation is not designed to be called with every game server claim
         * request; this practice can cause you to exceed your API limit, which results in
         * errors. Instead, as a best practice, cache the results and refresh your cache no
         * more than once every 10 seconds.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameServerInstancesOutcomeCallable DescribeGameServerInstancesCallable(const Model::DescribeGameServerInstancesRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves status information about the Amazon EC2
         * instances associated with a GameLift FleetIQ game server group. Use this
         * operation to detect when instances are active or not available to host new game
         * servers. If you are looking for instance configuration information, call
         * <a>DescribeGameServerGroup</a> or access the corresponding Auto Scaling group
         * properties.</p> <p>To request status for all instances in the game server group,
         * provide a game server group ID only. To request status for specific instances,
         * provide the game server group ID and one or more instance IDs. Use the
         * pagination parameters to retrieve results in sequential segments. If successful,
         * a collection of <code>GameServerInstance</code> objects is returned. </p>
         * <p>This operation is not designed to be called with every game server claim
         * request; this practice can cause you to exceed your API limit, which results in
         * errors. Instead, as a best practice, cache the results and refresh your cache no
         * more than once every 10 seconds.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameServerInstancesAsync(const Model::DescribeGameServerInstancesRequest& request, const DescribeGameServerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This operation can be used in several ways: (1) provide a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> to request details for
         * a specific game session; (2) provide either a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. </p> <p>To get game session record(s), specify just one of the following:
         * game session ID, fleet ID, or alias ID. You can filter this request by game
         * session status. Use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionDetail</a> object is returned
         * for each session matching the request.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionDetailsOutcome DescribeGameSessionDetails(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This operation can be used in several ways: (1) provide a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> to request details for
         * a specific game session; (2) provide either a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. </p> <p>To get game session record(s), specify just one of the following:
         * game session ID, fleet ID, or alias ID. You can filter this request by game
         * session status. Use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionDetail</a> object is returned
         * for each session matching the request.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionDetailsOutcomeCallable DescribeGameSessionDetailsCallable(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * <p>Retrieves properties, including the protection policy in force, for one or
         * more game sessions. This operation can be used in several ways: (1) provide a
         * <code>GameSessionId</code> or <code>GameSessionArn</code> to request details for
         * a specific game session; (2) provide either a <code>FleetId</code> or an
         * <code>AliasId</code> to request properties for all game sessions running on a
         * fleet. </p> <p>To get game session record(s), specify just one of the following:
         * game session ID, fleet ID, or alias ID. You can filter this request by game
         * session status. Use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionDetail</a> object is returned
         * for each session matching the request.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionDetailsAsync(const Model::DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties and current status of a game session placement request.
         * To get game session placement details, specify the placement ID. If successful,
         * a <a>GameSessionPlacement</a> object is returned.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionPlacementOutcome DescribeGameSessionPlacement(const Model::DescribeGameSessionPlacementRequest& request) const;

        /**
         * <p>Retrieves properties and current status of a game session placement request.
         * To get game session placement details, specify the placement ID. If successful,
         * a <a>GameSessionPlacement</a> object is returned.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionPlacementOutcomeCallable DescribeGameSessionPlacementCallable(const Model::DescribeGameSessionPlacementRequest& request) const;

        /**
         * <p>Retrieves properties and current status of a game session placement request.
         * To get game session placement details, specify the placement ID. If successful,
         * a <a>GameSessionPlacement</a> object is returned.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * only for queues that currently exist in the Region.</p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-console.html">
         * View Your Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionQueuesOutcome DescribeGameSessionQueues(const Model::DescribeGameSessionQueuesRequest& request) const;

        /**
         * <p>Retrieves the properties for one or more game session queues. When requesting
         * multiple queues, use the pagination parameters to retrieve results as a set of
         * sequential pages. If successful, a <a>GameSessionQueue</a> object is returned
         * for each requested queue. When specifying a list of queues, objects are returned
         * only for queues that currently exist in the Region.</p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-console.html">
         * View Your Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * only for queues that currently exist in the Region.</p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-console.html">
         * View Your Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
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
         * request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
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
         * request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionsAsync(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a fleet's instances, including instance IDs. Use
         * this operation to get details on all instances in the fleet or get details on
         * one specific instance.</p> <p>To get a specific instance, specify fleet ID and
         * instance ID. To get all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>DescribeInstances</a> </p> </li> <li> <p> <a>GetInstanceAccess</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Retrieves information about a fleet's instances, including instance IDs. Use
         * this operation to get details on all instances in the fleet or get details on
         * one specific instance.</p> <p>To get a specific instance, specify fleet ID and
         * instance ID. To get all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>DescribeInstances</a> </p> </li> <li> <p> <a>GetInstanceAccess</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Retrieves information about a fleet's instances, including instance IDs. Use
         * this operation to get details on all instances in the fleet or get details on
         * one specific instance.</p> <p>To get a specific instance, specify fleet ID and
         * instance ID. To get all instances in a fleet, specify a fleet ID only. Use the
         * pagination parameters to retrieve results as a set of sequential pages. If
         * successful, an <a>Instance</a> object is returned for each result.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>DescribeInstances</a> </p> </li> <li> <p> <a>GetInstanceAccess</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves one or more matchmaking tickets. Use this operation to retrieve
         * ticket information, including--after a successful match is made--connection
         * information for the resulting new game session. </p> <p>To request matchmaking
         * tickets, provide a list of up to 10 ticket IDs. If the request is successful, a
         * ticket object is returned for each requested ID that currently exists.</p>
         * <p>This operation is not designed to be continually called to track matchmaking
         * ticket status. This practice can cause you to exceed your API limit, which
         * results in errors. Instead, as a best practice, set up an Amazon Simple
         * Notification Service (SNS) to receive notifications, and provide the topic ARN
         * in the matchmaking configuration. Continuously poling ticket status with
         * <a>DescribeMatchmaking</a> should only be used for games in development with low
         * matchmaking usage.</p> <p/> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p>
         * <a>DescribeMatchmaking</a> </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li>
         * <li> <p> <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmaking">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMatchmakingOutcome DescribeMatchmaking(const Model::DescribeMatchmakingRequest& request) const;

        /**
         * <p>Retrieves one or more matchmaking tickets. Use this operation to retrieve
         * ticket information, including--after a successful match is made--connection
         * information for the resulting new game session. </p> <p>To request matchmaking
         * tickets, provide a list of up to 10 ticket IDs. If the request is successful, a
         * ticket object is returned for each requested ID that currently exists.</p>
         * <p>This operation is not designed to be continually called to track matchmaking
         * ticket status. This practice can cause you to exceed your API limit, which
         * results in errors. Instead, as a best practice, set up an Amazon Simple
         * Notification Service (SNS) to receive notifications, and provide the topic ARN
         * in the matchmaking configuration. Continuously poling ticket status with
         * <a>DescribeMatchmaking</a> should only be used for games in development with low
         * matchmaking usage.</p> <p/> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p>
         * <a>DescribeMatchmaking</a> </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li>
         * <li> <p> <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmaking">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMatchmakingOutcomeCallable DescribeMatchmakingCallable(const Model::DescribeMatchmakingRequest& request) const;

        /**
         * <p>Retrieves one or more matchmaking tickets. Use this operation to retrieve
         * ticket information, including--after a successful match is made--connection
         * information for the resulting new game session. </p> <p>To request matchmaking
         * tickets, provide a list of up to 10 ticket IDs. If the request is successful, a
         * ticket object is returned for each requested ID that currently exists.</p>
         * <p>This operation is not designed to be continually called to track matchmaking
         * ticket status. This practice can cause you to exceed your API limit, which
         * results in errors. Instead, as a best practice, set up an Amazon Simple
         * Notification Service (SNS) to receive notifications, and provide the topic ARN
         * in the matchmaking configuration. Continuously poling ticket status with
         * <a>DescribeMatchmaking</a> should only be used for games in development with low
         * matchmaking usage.</p> <p/> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p>
         * <a>DescribeMatchmaking</a> </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li>
         * <li> <p> <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmaking">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMatchmakingAsync(const Model::DescribeMatchmakingRequest& request, const DescribeMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of FlexMatch matchmaking configurations. </p> <p>This
         * operation offers the following options: (1) retrieve all matchmaking
         * configurations, (2) retrieve configurations for a specified list, or (3)
         * retrieve all configurations that use a specified rule set name. When requesting
         * multiple items, use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, a configuration is returned for each
         * requested name. When specifying a list of names, only configurations that
         * currently exist are returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/matchmaker-build.html">
         * Setting Up FlexMatch Matchmakers</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMatchmakingConfigurationsOutcome DescribeMatchmakingConfigurations(const Model::DescribeMatchmakingConfigurationsRequest& request) const;

        /**
         * <p>Retrieves the details of FlexMatch matchmaking configurations. </p> <p>This
         * operation offers the following options: (1) retrieve all matchmaking
         * configurations, (2) retrieve configurations for a specified list, or (3)
         * retrieve all configurations that use a specified rule set name. When requesting
         * multiple items, use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, a configuration is returned for each
         * requested name. When specifying a list of names, only configurations that
         * currently exist are returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/matchmaker-build.html">
         * Setting Up FlexMatch Matchmakers</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMatchmakingConfigurationsOutcomeCallable DescribeMatchmakingConfigurationsCallable(const Model::DescribeMatchmakingConfigurationsRequest& request) const;

        /**
         * <p>Retrieves the details of FlexMatch matchmaking configurations. </p> <p>This
         * operation offers the following options: (1) retrieve all matchmaking
         * configurations, (2) retrieve configurations for a specified list, or (3)
         * retrieve all configurations that use a specified rule set name. When requesting
         * multiple items, use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, a configuration is returned for each
         * requested name. When specifying a list of names, only configurations that
         * currently exist are returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/matchmaker-build.html">
         * Setting Up FlexMatch Matchmakers</a> </p> <p> <b>Related operations</b> </p>
         * <ul> <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMatchmakingConfigurationsAsync(const Model::DescribeMatchmakingConfigurationsRequest& request, const DescribeMatchmakingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details for FlexMatch matchmaking rule sets. You can request
         * all existing rule sets for the Region, or provide a list of one or more rule set
         * names. When requesting multiple items, use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a rule set is returned for
         * each requested name. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingRuleSets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMatchmakingRuleSetsOutcome DescribeMatchmakingRuleSets(const Model::DescribeMatchmakingRuleSetsRequest& request) const;

        /**
         * <p>Retrieves the details for FlexMatch matchmaking rule sets. You can request
         * all existing rule sets for the Region, or provide a list of one or more rule set
         * names. When requesting multiple items, use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a rule set is returned for
         * each requested name. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingRuleSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMatchmakingRuleSetsOutcomeCallable DescribeMatchmakingRuleSetsCallable(const Model::DescribeMatchmakingRuleSetsRequest& request) const;

        /**
         * <p>Retrieves the details for FlexMatch matchmaking rule sets. You can request
         * all existing rule sets for the Region, or provide a list of one or more rule set
         * names. When requesting multiple items, use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a rule set is returned for
         * each requested name. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingRuleSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMatchmakingRuleSetsAsync(const Model::DescribeMatchmakingRuleSetsRequest& request, const DescribeMatchmakingRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This operation can be
         * used in several ways: (1) provide a <code>PlayerSessionId</code> to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> to request properties for all player sessions in the
         * specified game session; (3) provide a <code>PlayerId</code> to request
         * properties for all player sessions of a specified player. </p> <p>To get game
         * session record(s), specify only one of the following: a player session ID, a
         * game session ID, or a player ID. You can filter this request by player session
         * status. Use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>PlayerSession</a> object is returned for each session
         * matching the request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p>
         * <ul> <li> <p> <a>CreatePlayerSession</a> </p> </li> <li> <p>
         * <a>CreatePlayerSessions</a> </p> </li> <li> <p> <a>DescribePlayerSessions</a>
         * </p> </li> <li> <p>Game session placements</p> <ul> <li> <p>
         * <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This operation can be
         * used in several ways: (1) provide a <code>PlayerSessionId</code> to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> to request properties for all player sessions in the
         * specified game session; (3) provide a <code>PlayerId</code> to request
         * properties for all player sessions of a specified player. </p> <p>To get game
         * session record(s), specify only one of the following: a player session ID, a
         * game session ID, or a player ID. You can filter this request by player session
         * status. Use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>PlayerSession</a> object is returned for each session
         * matching the request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p>
         * <ul> <li> <p> <a>CreatePlayerSession</a> </p> </li> <li> <p>
         * <a>CreatePlayerSessions</a> </p> </li> <li> <p> <a>DescribePlayerSessions</a>
         * </p> </li> <li> <p>Game session placements</p> <ul> <li> <p>
         * <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * <p>Retrieves properties for one or more player sessions. This operation can be
         * used in several ways: (1) provide a <code>PlayerSessionId</code> to request
         * properties for a specific player session; (2) provide a
         * <code>GameSessionId</code> to request properties for all player sessions in the
         * specified game session; (3) provide a <code>PlayerId</code> to request
         * properties for all player sessions of a specified player. </p> <p>To get game
         * session record(s), specify only one of the following: a player session ID, a
         * game session ID, or a player ID. You can filter this request by player session
         * status. Use the pagination parameters to retrieve results as a set of sequential
         * pages. If successful, a <a>PlayerSession</a> object is returned for each session
         * matching the request.</p> <p> <i>Available in Amazon GameLift Local.</i> </p>
         * <ul> <li> <p> <a>CreatePlayerSession</a> </p> </li> <li> <p>
         * <a>CreatePlayerSessions</a> </p> </li> <li> <p> <a>DescribePlayerSessions</a>
         * </p> </li> <li> <p>Game session placements</p> <ul> <li> <p>
         * <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fleet's runtime configuration settings. The runtime configuration
         * tells Amazon GameLift which server processes to run (and how) on each instance
         * in the fleet.</p> <p>To get a runtime configuration, specify the fleet's unique
         * identifier. If successful, a <a>RuntimeConfiguration</a> object is returned for
         * the requested fleet. If the requested fleet has been deleted, the result set is
         * empty.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-multiprocess.html">Running
         * Multiple Processes on a Fleet</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li>
         * <li> <p> <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li>
         * <p> <a>DescribeFleetAttributes</a> </p> </li> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p>
         * <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuntimeConfigurationOutcome DescribeRuntimeConfiguration(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * <p>Retrieves a fleet's runtime configuration settings. The runtime configuration
         * tells Amazon GameLift which server processes to run (and how) on each instance
         * in the fleet.</p> <p>To get a runtime configuration, specify the fleet's unique
         * identifier. If successful, a <a>RuntimeConfiguration</a> object is returned for
         * the requested fleet. If the requested fleet has been deleted, the result set is
         * empty.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-multiprocess.html">Running
         * Multiple Processes on a Fleet</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li>
         * <li> <p> <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li>
         * <p> <a>DescribeFleetAttributes</a> </p> </li> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p>
         * <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeRuntimeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuntimeConfigurationOutcomeCallable DescribeRuntimeConfigurationCallable(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * <p>Retrieves a fleet's runtime configuration settings. The runtime configuration
         * tells Amazon GameLift which server processes to run (and how) on each instance
         * in the fleet.</p> <p>To get a runtime configuration, specify the fleet's unique
         * identifier. If successful, a <a>RuntimeConfiguration</a> object is returned for
         * the requested fleet. If the requested fleet has been deleted, the result set is
         * empty.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-multiprocess.html">Running
         * Multiple Processes on a Fleet</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li>
         * <li> <p> <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li>
         * <p> <a>DescribeFleetAttributes</a> </p> </li> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p>
         * <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
         * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
         * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
         * </p> </li> </ul> </li> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p> <p>A fleet may
         * have all of its scaling policies suspended (<a>StopFleetActions</a>). This
         * operation does not affect the status of the scaling policies, which remains
         * ACTIVE. To see whether a fleet's scaling policies are in force or suspended,
         * call <a>DescribeFleetAttributes</a> and check the stopped actions.</p> <ul> <li>
         * <p> <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p> <p>A fleet may
         * have all of its scaling policies suspended (<a>StopFleetActions</a>). This
         * operation does not affect the status of the scaling policies, which remains
         * ACTIVE. To see whether a fleet's scaling policies are in force or suspended,
         * call <a>DescribeFleetAttributes</a> and check the stopped actions.</p> <ul> <li>
         * <p> <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
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
         * of <a>ScalingPolicy</a> objects is returned for the fleet.</p> <p>A fleet may
         * have all of its scaling policies suspended (<a>StopFleetActions</a>). This
         * operation does not affect the status of the scaling policies, which remains
         * ACTIVE. To see whether a fleet's scaling policies are in force or suspended,
         * call <a>DescribeFleetAttributes</a> and check the stopped actions.</p> <ul> <li>
         * <p> <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a>
         * </p> </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a Realtime script. </p> <p>To request a script
         * record, specify the script ID. If successful, an object containing the script
         * properties is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScript">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScriptOutcome DescribeScript(const Model::DescribeScriptRequest& request) const;

        /**
         * <p>Retrieves properties for a Realtime script. </p> <p>To request a script
         * record, specify the script ID. If successful, an object containing the script
         * properties is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScript">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScriptOutcomeCallable DescribeScriptCallable(const Model::DescribeScriptRequest& request) const;

        /**
         * <p>Retrieves properties for a Realtime script. </p> <p>To request a script
         * record, specify the script ID. If successful, an object containing the script
         * properties is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScript">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScriptAsync(const Model::DescribeScriptRequest& request, const DescribeScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves valid VPC peering authorizations that are pending for the AWS
         * account. This operation returns all VPC peering authorizations and requests for
         * peering. This includes those initiated and received by this account. </p> <ul>
         * <li> <p> <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcPeeringAuthorizationsOutcome DescribeVpcPeeringAuthorizations(const Model::DescribeVpcPeeringAuthorizationsRequest& request) const;

        /**
         * <p>Retrieves valid VPC peering authorizations that are pending for the AWS
         * account. This operation returns all VPC peering authorizations and requests for
         * peering. This includes those initiated and received by this account. </p> <ul>
         * <li> <p> <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringAuthorizations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcPeeringAuthorizationsOutcomeCallable DescribeVpcPeeringAuthorizationsCallable(const Model::DescribeVpcPeeringAuthorizationsRequest& request) const;

        /**
         * <p>Retrieves valid VPC peering authorizations that are pending for the AWS
         * account. This operation returns all VPC peering authorizations and requests for
         * peering. This includes those initiated and received by this account. </p> <ul>
         * <li> <p> <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringAuthorizations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcPeeringAuthorizationsAsync(const Model::DescribeVpcPeeringAuthorizationsRequest& request, const DescribeVpcPeeringAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information on VPC peering connections. Use this operation to get
         * peering information for all fleets or for one specific fleet ID. </p> <p>To
         * retrieve connection information, call this operation from the AWS account that
         * is used to manage the Amazon GameLift fleets. Specify a fleet ID or leave the
         * parameter empty to retrieve all connection records. If successful, the retrieved
         * information includes both active and pending connections. Active connections
         * identify the IpV4 CIDR block that the VPC uses to connect. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcome DescribeVpcPeeringConnections(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * <p>Retrieves information on VPC peering connections. Use this operation to get
         * peering information for all fleets or for one specific fleet ID. </p> <p>To
         * retrieve connection information, call this operation from the AWS account that
         * is used to manage the Amazon GameLift fleets. Specify a fleet ID or leave the
         * parameter empty to retrieve all connection records. If successful, the retrieved
         * information includes both active and pending connections. Active connections
         * identify the IpV4 CIDR block that the VPC uses to connect. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcomeCallable DescribeVpcPeeringConnectionsCallable(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * <p>Retrieves information on VPC peering connections. Use this operation to get
         * peering information for all fleets or for one specific fleet ID. </p> <p>To
         * retrieve connection information, call this operation from the AWS account that
         * is used to manage the Amazon GameLift fleets. Specify a fleet ID or leave the
         * parameter empty to retrieve all connection records. If successful, the retrieved
         * information includes both active and pending connections. Active connections
         * identify the IpV4 CIDR block that the VPC uses to connect. </p> <ul> <li> <p>
         * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
         * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
         * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
         * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcPeeringConnectionsAsync(const Model::DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3 and retains them for 14 days. Use this URL to download the
         * logs.</p>  <p>See the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p>  <ul> <li> <p> <a>CreateGameSession</a> </p>
         * </li> <li> <p> <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGameSessionLogUrlOutcome GetGameSessionLogUrl(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3 and retains them for 14 days. Use this URL to download the
         * logs.</p>  <p>See the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p>  <ul> <li> <p> <a>CreateGameSession</a> </p>
         * </li> <li> <p> <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGameSessionLogUrlOutcomeCallable GetGameSessionLogUrlCallable(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, Amazon GameLift automatically stores
         * the logs in Amazon S3 and retains them for 14 days. Use this URL to download the
         * logs.</p>  <p>See the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">AWS
         * Service Limits</a> page for maximum log file sizes. Log files that exceed this
         * limit are not saved.</p>  <ul> <li> <p> <a>CreateGameSession</a> </p>
         * </li> <li> <p> <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGameSessionLogUrlAsync(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or observing activity in real time. </p>
         * <p>To remotely access an instance, you need credentials that match the operating
         * system of the instance. For a Windows instance, Amazon GameLift returns a user
         * name and password as strings for use with a Windows Remote Desktop client. For a
         * Linux instance, Amazon GameLift returns a user name and RSA private key, also as
         * strings, for use with an SSH client. The private key must be saved in the proper
         * format to a <code>.pem</code> file before using. If you're making this request
         * using the AWS CLI, saving the secret can be handled as part of the
         * GetInstanceAccess request, as shown in one of the examples for this operation.
         * </p> <p>To request access to a specific instance, specify the IDs of both the
         * instance and the fleet it belongs to. You can retrieve a fleet's instance IDs by
         * calling <a>DescribeInstances</a>. If successful, an <a>InstanceAccess</a> object
         * is returned that contains the instance's IP address and a set of
         * credentials.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>DescribeInstances</a> </p> </li> <li> <p> <a>GetInstanceAccess</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceAccessOutcome GetInstanceAccess(const Model::GetInstanceAccessRequest& request) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or observing activity in real time. </p>
         * <p>To remotely access an instance, you need credentials that match the operating
         * system of the instance. For a Windows instance, Amazon GameLift returns a user
         * name and password as strings for use with a Windows Remote Desktop client. For a
         * Linux instance, Amazon GameLift returns a user name and RSA private key, also as
         * strings, for use with an SSH client. The private key must be saved in the proper
         * format to a <code>.pem</code> file before using. If you're making this request
         * using the AWS CLI, saving the secret can be handled as part of the
         * GetInstanceAccess request, as shown in one of the examples for this operation.
         * </p> <p>To request access to a specific instance, specify the IDs of both the
         * instance and the fleet it belongs to. You can retrieve a fleet's instance IDs by
         * calling <a>DescribeInstances</a>. If successful, an <a>InstanceAccess</a> object
         * is returned that contains the instance's IP address and a set of
         * credentials.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>DescribeInstances</a> </p> </li> <li> <p> <a>GetInstanceAccess</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceAccessOutcomeCallable GetInstanceAccessCallable(const Model::GetInstanceAccessRequest& request) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or observing activity in real time. </p>
         * <p>To remotely access an instance, you need credentials that match the operating
         * system of the instance. For a Windows instance, Amazon GameLift returns a user
         * name and password as strings for use with a Windows Remote Desktop client. For a
         * Linux instance, Amazon GameLift returns a user name and RSA private key, also as
         * strings, for use with an SSH client. The private key must be saved in the proper
         * format to a <code>.pem</code> file before using. If you're making this request
         * using the AWS CLI, saving the secret can be handled as part of the
         * GetInstanceAccess request, as shown in one of the examples for this operation.
         * </p> <p>To request access to a specific instance, specify the IDs of both the
         * instance and the fleet it belongs to. You can retrieve a fleet's instance IDs by
         * calling <a>DescribeInstances</a>. If successful, an <a>InstanceAccess</a> object
         * is returned that contains the instance's IP address and a set of
         * credentials.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>DescribeInstances</a> </p> </li> <li> <p> <a>GetInstanceAccess</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceAccessAsync(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all aliases for this AWS account. You can filter the result set by
         * alias name and/or routing strategy type. Use the pagination parameters to
         * retrieve results in sequential pages.</p>  <p>Returned aliases are not
         * listed in any particular order.</p>  <ul> <li> <p> <a>CreateAlias</a>
         * </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>DescribeAlias</a>
         * </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a>
         * </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves all aliases for this AWS account. You can filter the result set by
         * alias name and/or routing strategy type. Use the pagination parameters to
         * retrieve results in sequential pages.</p>  <p>Returned aliases are not
         * listed in any particular order.</p>  <ul> <li> <p> <a>CreateAlias</a>
         * </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>DescribeAlias</a>
         * </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a>
         * </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Retrieves all aliases for this AWS account. You can filter the result set by
         * alias name and/or routing strategy type. Use the pagination parameters to
         * retrieve results in sequential pages.</p>  <p>Returned aliases are not
         * listed in any particular order.</p>  <ul> <li> <p> <a>CreateAlias</a>
         * </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>DescribeAlias</a>
         * </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a>
         * </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves build resources for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p>  <p>Build resources are not listed in
         * any particular order.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsOutcome ListBuilds(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build resources for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p>  <p>Build resources are not listed in
         * any particular order.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuilds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsOutcomeCallable ListBuildsCallable(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Retrieves build resources for all builds associated with the AWS account in
         * use. You can limit results to builds that are in a specific status by using the
         * <code>Status</code> parameter. Use the pagination parameters to retrieve results
         * in a set of sequential pages. </p>  <p>Build resources are not listed in
         * any particular order.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuilds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsAsync(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of fleet resources for this AWS account. You can
         * filter the result set to find only those fleets that are deployed with a
         * specific build or script. Use the pagination parameters to retrieve results in
         * sequential pages.</p>  <p>Fleet resources are not listed in a particular
         * order.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet resources for this AWS account. You can
         * filter the result set to find only those fleets that are deployed with a
         * specific build or script. Use the pagination parameters to retrieve results in
         * sequential pages.</p>  <p>Fleet resources are not listed in a particular
         * order.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Retrieves a collection of fleet resources for this AWS account. You can
         * filter the result set to find only those fleets that are deployed with a
         * specific build or script. Use the pagination parameters to retrieve results in
         * sequential pages.</p>  <p>Fleet resources are not listed in a particular
         * order.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on all game servers groups that
         * exist in the current AWS account for the selected Region. Use the pagination
         * parameters to retrieve results in a set of sequential segments. </p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServerGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGameServerGroupsOutcome ListGameServerGroups(const Model::ListGameServerGroupsRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on all game servers groups that
         * exist in the current AWS account for the selected Region. Use the pagination
         * parameters to retrieve results in a set of sequential segments. </p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServerGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGameServerGroupsOutcomeCallable ListGameServerGroupsCallable(const Model::ListGameServerGroupsRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on all game servers groups that
         * exist in the current AWS account for the selected Region. Use the pagination
         * parameters to retrieve results in a set of sequential segments. </p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServerGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGameServerGroupsAsync(const Model::ListGameServerGroupsRequest& request, const ListGameServerGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on all game servers that are
         * currently active in a specified game server group. You can opt to sort the list
         * by game server age. Use the pagination parameters to retrieve results in a set
         * of sequential segments. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGameServersOutcome ListGameServers(const Model::ListGameServersRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on all game servers that are
         * currently active in a specified game server group. You can opt to sort the list
         * by game server age. Use the pagination parameters to retrieve results in a set
         * of sequential segments. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGameServersOutcomeCallable ListGameServersCallable(const Model::ListGameServersRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Retrieves information on all game servers that are
         * currently active in a specified game server group. You can opt to sort the list
         * by game server age. Use the pagination parameters to retrieve results in a set
         * of sequential segments. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGameServersAsync(const Model::ListGameServersRequest& request, const ListGameServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves script records for all Realtime scripts that are associated with
         * the AWS account in use. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListScripts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScriptsOutcome ListScripts(const Model::ListScriptsRequest& request) const;

        /**
         * <p>Retrieves script records for all Realtime scripts that are associated with
         * the AWS account in use. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListScripts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScriptsOutcomeCallable ListScriptsCallable(const Model::ListScriptsRequest& request) const;

        /**
         * <p>Retrieves script records for all Realtime scripts that are associated with
         * the AWS account in use. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListScripts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScriptsAsync(const Model::ListScriptsRequest& request, const ListScriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves all tags that are assigned to a GameLift resource. Resource tags
         * are used to organize AWS resources for a range of purposes. This operation
         * handles the permissions necessary to manage tags for the following GameLift
         * resource types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p> </li> <li>
         * <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li> <p>GameSessionQueue</p> </li>
         * <li> <p>MatchmakingConfiguration</p> </li> <li> <p>MatchmakingRuleSet</p> </li>
         * </ul> <p>To list tags for a resource, specify the unique ARN value for the
         * resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> Retrieves all tags that are assigned to a GameLift resource. Resource tags
         * are used to organize AWS resources for a range of purposes. This operation
         * handles the permissions necessary to manage tags for the following GameLift
         * resource types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p> </li> <li>
         * <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li> <p>GameSessionQueue</p> </li>
         * <li> <p>MatchmakingConfiguration</p> </li> <li> <p>MatchmakingRuleSet</p> </li>
         * </ul> <p>To list tags for a resource, specify the unique ARN value for the
         * resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> Retrieves all tags that are assigned to a GameLift resource. Resource tags
         * are used to organize AWS resources for a range of purposes. This operation
         * handles the permissions necessary to manage tags for the following GameLift
         * resource types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p> </li> <li>
         * <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li> <p>GameSessionQueue</p> </li>
         * <li> <p>MatchmakingConfiguration</p> </li> <li> <p>MatchmakingRuleSet</p> </li>
         * </ul> <p>To list tags for a resource, specify the unique ARN value for the
         * resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scaling policy for a fleet. Scaling policies are used to
         * automatically scale a fleet's hosting capacity to meet player demand. An active
         * scaling policy instructs Amazon GameLift to track a fleet metric and
         * automatically change the fleet's capacity when a certain threshold is reached.
         * There are two types of scaling policies: target-based and rule-based. Use a
         * target-based policy to quickly and efficiently manage fleet scaling; this option
         * is the most commonly used. Use rule-based policies when you need to exert
         * fine-grained control over auto-scaling. </p> <p>Fleets can have multiple scaling
         * policies of each type in force at the same time; you can have one target-based
         * policy, one or multiple rule-based scaling policies, or both. We recommend
         * caution, however, because multiple auto-scaling policies can have unintended
         * consequences.</p> <p>You can temporarily suspend all scaling policies for a
         * fleet by calling <a>StopFleetActions</a> with the fleet action AUTO_SCALING. To
         * resume scaling policies, call <a>StartFleetActions</a> with the same fleet
         * action. To stop just one scaling policy--or to permanently remove it, you must
         * delete the policy with <a>DeleteScalingPolicy</a>.</p> <p>Learn more about how
         * to work with auto-scaling in <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-autoscaling.html">Set
         * Up Fleet Automatic Scaling</a>.</p> <p> <b>Target-based policy</b> </p> <p>A
         * target-based policy tracks a single metric: PercentAvailableGameSessions. This
         * metric tells us how much of a fleet's hosting capacity is ready to host game
         * sessions but is not currently in use. This is the fleet's buffer; it measures
         * the additional player demand that the fleet could handle at current capacity.
         * With a target-based policy, you set your ideal buffer size and leave it to
         * Amazon GameLift to take whatever action is needed to maintain that target. </p>
         * <p>For example, you might choose to maintain a 10% buffer for a fleet that has
         * the capacity to host 100 simultaneous game sessions. This policy tells Amazon
         * GameLift to take action whenever the fleet's available capacity falls below or
         * rises above 10 game sessions. Amazon GameLift will start new instances or stop
         * unused instances in order to return to the 10% buffer. </p> <p>To create or
         * update a target-based policy, specify a fleet ID and name, and set the policy
         * type to "TargetBased". Specify the metric to track
         * (PercentAvailableGameSessions) and reference a <a>TargetConfiguration</a> object
         * with your desired buffer value. Exclude all other parameters. On a successful
         * request, the policy name is returned. The scaling policy is automatically in
         * force as soon as it's successfully created. If the fleet's auto-scaling actions
         * are temporarily suspended, the new policy will be in force once the fleet
         * actions are restarted.</p> <p> <b>Rule-based policy</b> </p> <p>A rule-based
         * policy tracks specified fleet metric, sets a threshold value, and specifies the
         * type of action to initiate when triggered. With a rule-based policy, you can
         * select from several available fleet metrics. Each policy specifies whether to
         * scale up or scale down (and by how much), so you need one policy for each type
         * of action. </p> <p>For example, a policy may make the following statement: "If
         * the percentage of idle instances is greater than 20% for more than 15 minutes,
         * then reduce the fleet capacity by 10%."</p> <p>A policy's rule statement has the
         * following structure:</p> <p>If <code>[MetricName]</code> is
         * <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
         * <code>[EvaluationPeriods]</code> minutes, then
         * <code>[ScalingAdjustmentType]</code> to/by <code>[ScalingAdjustment]</code>.</p>
         * <p>To implement the example, the rule statement would look like this:</p> <p>If
         * <code>[PercentIdleInstances]</code> is <code>[GreaterThanThreshold]</code>
         * <code>[20]</code> for <code>[15]</code> minutes, then
         * <code>[PercentChangeInCapacity]</code> to/by <code>[10]</code>.</p> <p>To create
         * or update a scaling policy, specify a unique combination of name and fleet ID,
         * and set the policy type to "RuleBased". Specify the parameter values for a
         * policy rule statement. On a successful request, the policy name is returned.
         * Scaling policies are automatically in force as soon as they're successfully
         * created. If the fleet's auto-scaling actions are temporarily suspended, the new
         * policy will be in force once the fleet actions are restarted.</p> <ul> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
         * </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for a fleet. Scaling policies are used to
         * automatically scale a fleet's hosting capacity to meet player demand. An active
         * scaling policy instructs Amazon GameLift to track a fleet metric and
         * automatically change the fleet's capacity when a certain threshold is reached.
         * There are two types of scaling policies: target-based and rule-based. Use a
         * target-based policy to quickly and efficiently manage fleet scaling; this option
         * is the most commonly used. Use rule-based policies when you need to exert
         * fine-grained control over auto-scaling. </p> <p>Fleets can have multiple scaling
         * policies of each type in force at the same time; you can have one target-based
         * policy, one or multiple rule-based scaling policies, or both. We recommend
         * caution, however, because multiple auto-scaling policies can have unintended
         * consequences.</p> <p>You can temporarily suspend all scaling policies for a
         * fleet by calling <a>StopFleetActions</a> with the fleet action AUTO_SCALING. To
         * resume scaling policies, call <a>StartFleetActions</a> with the same fleet
         * action. To stop just one scaling policy--or to permanently remove it, you must
         * delete the policy with <a>DeleteScalingPolicy</a>.</p> <p>Learn more about how
         * to work with auto-scaling in <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-autoscaling.html">Set
         * Up Fleet Automatic Scaling</a>.</p> <p> <b>Target-based policy</b> </p> <p>A
         * target-based policy tracks a single metric: PercentAvailableGameSessions. This
         * metric tells us how much of a fleet's hosting capacity is ready to host game
         * sessions but is not currently in use. This is the fleet's buffer; it measures
         * the additional player demand that the fleet could handle at current capacity.
         * With a target-based policy, you set your ideal buffer size and leave it to
         * Amazon GameLift to take whatever action is needed to maintain that target. </p>
         * <p>For example, you might choose to maintain a 10% buffer for a fleet that has
         * the capacity to host 100 simultaneous game sessions. This policy tells Amazon
         * GameLift to take action whenever the fleet's available capacity falls below or
         * rises above 10 game sessions. Amazon GameLift will start new instances or stop
         * unused instances in order to return to the 10% buffer. </p> <p>To create or
         * update a target-based policy, specify a fleet ID and name, and set the policy
         * type to "TargetBased". Specify the metric to track
         * (PercentAvailableGameSessions) and reference a <a>TargetConfiguration</a> object
         * with your desired buffer value. Exclude all other parameters. On a successful
         * request, the policy name is returned. The scaling policy is automatically in
         * force as soon as it's successfully created. If the fleet's auto-scaling actions
         * are temporarily suspended, the new policy will be in force once the fleet
         * actions are restarted.</p> <p> <b>Rule-based policy</b> </p> <p>A rule-based
         * policy tracks specified fleet metric, sets a threshold value, and specifies the
         * type of action to initiate when triggered. With a rule-based policy, you can
         * select from several available fleet metrics. Each policy specifies whether to
         * scale up or scale down (and by how much), so you need one policy for each type
         * of action. </p> <p>For example, a policy may make the following statement: "If
         * the percentage of idle instances is greater than 20% for more than 15 minutes,
         * then reduce the fleet capacity by 10%."</p> <p>A policy's rule statement has the
         * following structure:</p> <p>If <code>[MetricName]</code> is
         * <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
         * <code>[EvaluationPeriods]</code> minutes, then
         * <code>[ScalingAdjustmentType]</code> to/by <code>[ScalingAdjustment]</code>.</p>
         * <p>To implement the example, the rule statement would look like this:</p> <p>If
         * <code>[PercentIdleInstances]</code> is <code>[GreaterThanThreshold]</code>
         * <code>[20]</code> for <code>[15]</code> minutes, then
         * <code>[PercentChangeInCapacity]</code> to/by <code>[10]</code>.</p> <p>To create
         * or update a scaling policy, specify a unique combination of name and fleet ID,
         * and set the policy type to "RuleBased". Specify the parameter values for a
         * policy rule statement. On a successful request, the policy name is returned.
         * Scaling policies are automatically in force as soon as they're successfully
         * created. If the fleet's auto-scaling actions are temporarily suspended, the new
         * policy will be in force once the fleet actions are restarted.</p> <ul> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
         * </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a scaling policy for a fleet. Scaling policies are used to
         * automatically scale a fleet's hosting capacity to meet player demand. An active
         * scaling policy instructs Amazon GameLift to track a fleet metric and
         * automatically change the fleet's capacity when a certain threshold is reached.
         * There are two types of scaling policies: target-based and rule-based. Use a
         * target-based policy to quickly and efficiently manage fleet scaling; this option
         * is the most commonly used. Use rule-based policies when you need to exert
         * fine-grained control over auto-scaling. </p> <p>Fleets can have multiple scaling
         * policies of each type in force at the same time; you can have one target-based
         * policy, one or multiple rule-based scaling policies, or both. We recommend
         * caution, however, because multiple auto-scaling policies can have unintended
         * consequences.</p> <p>You can temporarily suspend all scaling policies for a
         * fleet by calling <a>StopFleetActions</a> with the fleet action AUTO_SCALING. To
         * resume scaling policies, call <a>StartFleetActions</a> with the same fleet
         * action. To stop just one scaling policy--or to permanently remove it, you must
         * delete the policy with <a>DeleteScalingPolicy</a>.</p> <p>Learn more about how
         * to work with auto-scaling in <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-autoscaling.html">Set
         * Up Fleet Automatic Scaling</a>.</p> <p> <b>Target-based policy</b> </p> <p>A
         * target-based policy tracks a single metric: PercentAvailableGameSessions. This
         * metric tells us how much of a fleet's hosting capacity is ready to host game
         * sessions but is not currently in use. This is the fleet's buffer; it measures
         * the additional player demand that the fleet could handle at current capacity.
         * With a target-based policy, you set your ideal buffer size and leave it to
         * Amazon GameLift to take whatever action is needed to maintain that target. </p>
         * <p>For example, you might choose to maintain a 10% buffer for a fleet that has
         * the capacity to host 100 simultaneous game sessions. This policy tells Amazon
         * GameLift to take action whenever the fleet's available capacity falls below or
         * rises above 10 game sessions. Amazon GameLift will start new instances or stop
         * unused instances in order to return to the 10% buffer. </p> <p>To create or
         * update a target-based policy, specify a fleet ID and name, and set the policy
         * type to "TargetBased". Specify the metric to track
         * (PercentAvailableGameSessions) and reference a <a>TargetConfiguration</a> object
         * with your desired buffer value. Exclude all other parameters. On a successful
         * request, the policy name is returned. The scaling policy is automatically in
         * force as soon as it's successfully created. If the fleet's auto-scaling actions
         * are temporarily suspended, the new policy will be in force once the fleet
         * actions are restarted.</p> <p> <b>Rule-based policy</b> </p> <p>A rule-based
         * policy tracks specified fleet metric, sets a threshold value, and specifies the
         * type of action to initiate when triggered. With a rule-based policy, you can
         * select from several available fleet metrics. Each policy specifies whether to
         * scale up or scale down (and by how much), so you need one policy for each type
         * of action. </p> <p>For example, a policy may make the following statement: "If
         * the percentage of idle instances is greater than 20% for more than 15 minutes,
         * then reduce the fleet capacity by 10%."</p> <p>A policy's rule statement has the
         * following structure:</p> <p>If <code>[MetricName]</code> is
         * <code>[ComparisonOperator]</code> <code>[Threshold]</code> for
         * <code>[EvaluationPeriods]</code> minutes, then
         * <code>[ScalingAdjustmentType]</code> to/by <code>[ScalingAdjustment]</code>.</p>
         * <p>To implement the example, the rule statement would look like this:</p> <p>If
         * <code>[PercentIdleInstances]</code> is <code>[GreaterThanThreshold]</code>
         * <code>[20]</code> for <code>[15]</code> minutes, then
         * <code>[PercentChangeInCapacity]</code> to/by <code>[10]</code>.</p> <p>To create
         * or update a scaling policy, specify a unique combination of name and fleet ID,
         * and set the policy type to "RuleBased". Specify the parameter values for a
         * policy rule statement. On a successful request, the policy name is returned.
         * Scaling policies are automatically in force as soon as they're successfully
         * created. If the fleet's auto-scaling actions are temporarily suspended, the new
         * policy will be in force once the fleet actions are restarted.</p> <ul> <li> <p>
         * <a>DescribeFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
         * </li> <li> <p> <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage
         * scaling policies:</p> <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p>
         * </li> <li> <p> <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
         * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
         * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
         * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Creates a new game server resource and notifies
         * GameLift FleetIQ that the game server is ready to host gameplay and players.
         * This operation is called by a game server process that is running on an instance
         * in a game server group. Registering game servers enables GameLift FleetIQ to
         * track available game servers and enables game clients and services to claim a
         * game server for a new game session. </p> <p>To register a game server, identify
         * the game server group and instance where the game server is running, and provide
         * a unique identifier for the game server. You can also include connection and
         * game server data. When a game client or service requests a game server by
         * calling <a>ClaimGameServer</a>, this information is returned in the
         * response.</p> <p>Once a game server is successfully registered, it is put in
         * status <code>AVAILABLE</code>. A request to register a game server may fail if
         * the instance it is running on is in the process of shutting down as part of
         * instance balancing or scale-down activity. </p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RegisterGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterGameServerOutcome RegisterGameServer(const Model::RegisterGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Creates a new game server resource and notifies
         * GameLift FleetIQ that the game server is ready to host gameplay and players.
         * This operation is called by a game server process that is running on an instance
         * in a game server group. Registering game servers enables GameLift FleetIQ to
         * track available game servers and enables game clients and services to claim a
         * game server for a new game session. </p> <p>To register a game server, identify
         * the game server group and instance where the game server is running, and provide
         * a unique identifier for the game server. You can also include connection and
         * game server data. When a game client or service requests a game server by
         * calling <a>ClaimGameServer</a>, this information is returned in the
         * response.</p> <p>Once a game server is successfully registered, it is put in
         * status <code>AVAILABLE</code>. A request to register a game server may fail if
         * the instance it is running on is in the process of shutting down as part of
         * instance balancing or scale-down activity. </p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RegisterGameServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterGameServerOutcomeCallable RegisterGameServerCallable(const Model::RegisterGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Creates a new game server resource and notifies
         * GameLift FleetIQ that the game server is ready to host gameplay and players.
         * This operation is called by a game server process that is running on an instance
         * in a game server group. Registering game servers enables GameLift FleetIQ to
         * track available game servers and enables game clients and services to claim a
         * game server for a new game session. </p> <p>To register a game server, identify
         * the game server group and instance where the game server is running, and provide
         * a unique identifier for the game server. You can also include connection and
         * game server data. When a game client or service requests a game server by
         * calling <a>ClaimGameServer</a>, this information is returned in the
         * response.</p> <p>Once a game server is successfully registered, it is put in
         * status <code>AVAILABLE</code>. A request to register a game server may fail if
         * the instance it is running on is in the process of shutting down as part of
         * instance balancing or scale-down activity. </p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RegisterGameServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterGameServerAsync(const Model::RegisterGameServerRequest& request, const RegisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fresh set of credentials for use when uploading a new set of game
         * build files to Amazon GameLift's Amazon S3. This is done as part of the build
         * creation process; see <a>CreateBuild</a>.</p> <p>To request new credentials,
         * specify the build ID as returned with an initial <code>CreateBuild</code>
         * request. If successful, a new set of credentials are returned, along with the S3
         * storage location associated with the build ID.</p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in S3</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestUploadCredentialsOutcome RequestUploadCredentials(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p>Retrieves a fresh set of credentials for use when uploading a new set of game
         * build files to Amazon GameLift's Amazon S3. This is done as part of the build
         * creation process; see <a>CreateBuild</a>.</p> <p>To request new credentials,
         * specify the build ID as returned with an initial <code>CreateBuild</code>
         * request. If successful, a new set of credentials are returned, along with the S3
         * storage location associated with the build ID.</p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in S3</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestUploadCredentialsOutcomeCallable RequestUploadCredentialsCallable(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * <p>Retrieves a fresh set of credentials for use when uploading a new set of game
         * build files to Amazon GameLift's Amazon S3. This is done as part of the build
         * creation process; see <a>CreateBuild</a>.</p> <p>To request new credentials,
         * specify the build ID as returned with an initial <code>CreateBuild</code>
         * request. If successful, a new set of credentials are returned, along with the S3
         * storage location associated with the build ID.</p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in S3</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestUploadCredentialsAsync(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the fleet ID that an alias is currently pointing to.</p> <ul> <li>
         * <p> <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li>
         * <p> <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li>
         * <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveAliasOutcome ResolveAlias(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that an alias is currently pointing to.</p> <ul> <li>
         * <p> <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li>
         * <p> <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li>
         * <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveAliasOutcomeCallable ResolveAliasCallable(const Model::ResolveAliasRequest& request) const;

        /**
         * <p>Retrieves the fleet ID that an alias is currently pointing to.</p> <ul> <li>
         * <p> <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li>
         * <p> <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li>
         * <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveAliasAsync(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Reinstates activity on a game server group after it
         * has been suspended. A game server group might be suspended by
         * the<a>SuspendGameServerGroup</a> operation, or it might be suspended
         * involuntarily due to a configuration problem. In the second case, you can
         * manually resume activity on the group once the configuration problem has been
         * resolved. Refer to the game server group status and status reason for more
         * information on why group activity is suspended.</p> <p>To resume activity,
         * specify a game server group ARN and the type of activity to be resumed. If
         * successful, a <a>GameServerGroup</a> object is returned showing that the resumed
         * activity is no longer listed in <code>SuspendedActions</code>. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResumeGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeGameServerGroupOutcome ResumeGameServerGroup(const Model::ResumeGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Reinstates activity on a game server group after it
         * has been suspended. A game server group might be suspended by
         * the<a>SuspendGameServerGroup</a> operation, or it might be suspended
         * involuntarily due to a configuration problem. In the second case, you can
         * manually resume activity on the group once the configuration problem has been
         * resolved. Refer to the game server group status and status reason for more
         * information on why group activity is suspended.</p> <p>To resume activity,
         * specify a game server group ARN and the type of activity to be resumed. If
         * successful, a <a>GameServerGroup</a> object is returned showing that the resumed
         * activity is no longer listed in <code>SuspendedActions</code>. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResumeGameServerGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeGameServerGroupOutcomeCallable ResumeGameServerGroupCallable(const Model::ResumeGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Reinstates activity on a game server group after it
         * has been suspended. A game server group might be suspended by
         * the<a>SuspendGameServerGroup</a> operation, or it might be suspended
         * involuntarily due to a configuration problem. In the second case, you can
         * manually resume activity on the group once the configuration problem has been
         * resolved. Refer to the game server group status and status reason for more
         * information on why group activity is suspended.</p> <p>To resume activity,
         * specify a game server group ARN and the type of activity to be resumed. If
         * successful, a <a>GameServerGroup</a> object is returned showing that the resumed
         * activity is no longer listed in <code>SuspendedActions</code>. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResumeGameServerGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeGameServerGroupAsync(const Model::ResumeGameServerGroupRequest& request, const ResumeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all active game sessions that match a set of search criteria and
         * sorts them in a specified order. You can search or sort by the following game
         * session attributes:</p> <ul> <li> <p> <b>gameSessionId</b> -- A unique
         * identifier for the game session. You can use either a <code>GameSessionId</code>
         * or <code>GameSessionArn</code> value. </p> </li> <li> <p> <b>gameSessionName</b>
         * -- Name assigned to a game session. This value is set when requesting a new game
         * session with <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>.
         * Game session names do not need to be unique to a game session.</p> </li> <li>
         * <p> <b>gameSessionProperties</b> -- Custom data defined in a game session's
         * <code>GameProperty</code> parameter. <code>GameProperty</code> values are stored
         * as key:value pairs; the filter expression must indicate the key and a string to
         * search the data values for. For example, to search for game sessions with custom
         * data containing the key:value pair "gameMode:brawl", specify the following:
         * <code>gameSessionProperties.gameMode = "brawl"</code>. All custom data values
         * are searched as strings.</p> </li> <li> <p> <b>maximumSessions</b> -- Maximum
         * number of player sessions allowed for a game session. This value is set when
         * requesting a new game session with <a>CreateGameSession</a> or updating with
         * <a>UpdateGameSession</a>.</p> </li> <li> <p> <b>creationTimeMillis</b> -- Value
         * indicating when a game session was created. It is expressed in Unix time as
         * milliseconds.</p> </li> <li> <p> <b>playerSessionCount</b> -- Number of players
         * currently connected to a game session. This value changes rapidly as players
         * join the session or drop out.</p> </li> <li> <p>
         * <b>hasAvailablePlayerSessions</b> -- Boolean value indicating whether a game
         * session has reached its maximum number of players. It is highly recommended that
         * all search requests include this filter attribute to optimize search performance
         * and return only sessions that players can join. </p> </li> </ul> 
         * <p>Returned values for <code>playerSessionCount</code> and
         * <code>hasAvailablePlayerSessions</code> change quickly as players join sessions
         * and others drop out. Results should be considered a snapshot in time. Be sure to
         * refresh search results often, and handle sessions that fill up before a player
         * can join. </p>  <p>To search or sort, specify either a fleet ID or an
         * alias ID, and provide a search filter expression, a sort expression, or both. If
         * successful, a collection of <a>GameSession</a> objects matching the request is
         * returned. Use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>You can search for game sessions one fleet at a time
         * only. To find game sessions across multiple fleets, you must search each fleet
         * separately and combine the results. This search feature finds only game sessions
         * that are in <code>ACTIVE</code> status. To locate games in statuses other than
         * active, use <a>DescribeGameSessionDetails</a>.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGameSessionsOutcome SearchGameSessions(const Model::SearchGameSessionsRequest& request) const;

        /**
         * <p>Retrieves all active game sessions that match a set of search criteria and
         * sorts them in a specified order. You can search or sort by the following game
         * session attributes:</p> <ul> <li> <p> <b>gameSessionId</b> -- A unique
         * identifier for the game session. You can use either a <code>GameSessionId</code>
         * or <code>GameSessionArn</code> value. </p> </li> <li> <p> <b>gameSessionName</b>
         * -- Name assigned to a game session. This value is set when requesting a new game
         * session with <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>.
         * Game session names do not need to be unique to a game session.</p> </li> <li>
         * <p> <b>gameSessionProperties</b> -- Custom data defined in a game session's
         * <code>GameProperty</code> parameter. <code>GameProperty</code> values are stored
         * as key:value pairs; the filter expression must indicate the key and a string to
         * search the data values for. For example, to search for game sessions with custom
         * data containing the key:value pair "gameMode:brawl", specify the following:
         * <code>gameSessionProperties.gameMode = "brawl"</code>. All custom data values
         * are searched as strings.</p> </li> <li> <p> <b>maximumSessions</b> -- Maximum
         * number of player sessions allowed for a game session. This value is set when
         * requesting a new game session with <a>CreateGameSession</a> or updating with
         * <a>UpdateGameSession</a>.</p> </li> <li> <p> <b>creationTimeMillis</b> -- Value
         * indicating when a game session was created. It is expressed in Unix time as
         * milliseconds.</p> </li> <li> <p> <b>playerSessionCount</b> -- Number of players
         * currently connected to a game session. This value changes rapidly as players
         * join the session or drop out.</p> </li> <li> <p>
         * <b>hasAvailablePlayerSessions</b> -- Boolean value indicating whether a game
         * session has reached its maximum number of players. It is highly recommended that
         * all search requests include this filter attribute to optimize search performance
         * and return only sessions that players can join. </p> </li> </ul> 
         * <p>Returned values for <code>playerSessionCount</code> and
         * <code>hasAvailablePlayerSessions</code> change quickly as players join sessions
         * and others drop out. Results should be considered a snapshot in time. Be sure to
         * refresh search results often, and handle sessions that fill up before a player
         * can join. </p>  <p>To search or sort, specify either a fleet ID or an
         * alias ID, and provide a search filter expression, a sort expression, or both. If
         * successful, a collection of <a>GameSession</a> objects matching the request is
         * returned. Use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>You can search for game sessions one fleet at a time
         * only. To find game sessions across multiple fleets, you must search each fleet
         * separately and combine the results. This search feature finds only game sessions
         * that are in <code>ACTIVE</code> status. To locate games in statuses other than
         * active, use <a>DescribeGameSessionDetails</a>.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchGameSessionsOutcomeCallable SearchGameSessionsCallable(const Model::SearchGameSessionsRequest& request) const;

        /**
         * <p>Retrieves all active game sessions that match a set of search criteria and
         * sorts them in a specified order. You can search or sort by the following game
         * session attributes:</p> <ul> <li> <p> <b>gameSessionId</b> -- A unique
         * identifier for the game session. You can use either a <code>GameSessionId</code>
         * or <code>GameSessionArn</code> value. </p> </li> <li> <p> <b>gameSessionName</b>
         * -- Name assigned to a game session. This value is set when requesting a new game
         * session with <a>CreateGameSession</a> or updating with <a>UpdateGameSession</a>.
         * Game session names do not need to be unique to a game session.</p> </li> <li>
         * <p> <b>gameSessionProperties</b> -- Custom data defined in a game session's
         * <code>GameProperty</code> parameter. <code>GameProperty</code> values are stored
         * as key:value pairs; the filter expression must indicate the key and a string to
         * search the data values for. For example, to search for game sessions with custom
         * data containing the key:value pair "gameMode:brawl", specify the following:
         * <code>gameSessionProperties.gameMode = "brawl"</code>. All custom data values
         * are searched as strings.</p> </li> <li> <p> <b>maximumSessions</b> -- Maximum
         * number of player sessions allowed for a game session. This value is set when
         * requesting a new game session with <a>CreateGameSession</a> or updating with
         * <a>UpdateGameSession</a>.</p> </li> <li> <p> <b>creationTimeMillis</b> -- Value
         * indicating when a game session was created. It is expressed in Unix time as
         * milliseconds.</p> </li> <li> <p> <b>playerSessionCount</b> -- Number of players
         * currently connected to a game session. This value changes rapidly as players
         * join the session or drop out.</p> </li> <li> <p>
         * <b>hasAvailablePlayerSessions</b> -- Boolean value indicating whether a game
         * session has reached its maximum number of players. It is highly recommended that
         * all search requests include this filter attribute to optimize search performance
         * and return only sessions that players can join. </p> </li> </ul> 
         * <p>Returned values for <code>playerSessionCount</code> and
         * <code>hasAvailablePlayerSessions</code> change quickly as players join sessions
         * and others drop out. Results should be considered a snapshot in time. Be sure to
         * refresh search results often, and handle sessions that fill up before a player
         * can join. </p>  <p>To search or sort, specify either a fleet ID or an
         * alias ID, and provide a search filter expression, a sort expression, or both. If
         * successful, a collection of <a>GameSession</a> objects matching the request is
         * returned. Use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>You can search for game sessions one fleet at a time
         * only. To find game sessions across multiple fleets, you must search each fleet
         * separately and combine the results. This search feature finds only game sessions
         * that are in <code>ACTIVE</code> status. To locate games in statuses other than
         * active, use <a>DescribeGameSessionDetails</a>.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchGameSessionsAsync(const Model::SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes activity on a fleet that was suspended with <a>StopFleetActions</a>.
         * Currently, this operation is used to restart a fleet's auto-scaling activity.
         * </p> <p>To start fleet actions, specify the fleet ID and the type of actions to
         * restart. When auto-scaling fleet actions are restarted, Amazon GameLift once
         * again initiates scaling events as triggered by the fleet's scaling policies. If
         * actions on the fleet were never stopped, this operation will have no effect. You
         * can view a fleet's stopped actions using <a>DescribeFleetAttributes</a>.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartFleetActions">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFleetActionsOutcome StartFleetActions(const Model::StartFleetActionsRequest& request) const;

        /**
         * <p>Resumes activity on a fleet that was suspended with <a>StopFleetActions</a>.
         * Currently, this operation is used to restart a fleet's auto-scaling activity.
         * </p> <p>To start fleet actions, specify the fleet ID and the type of actions to
         * restart. When auto-scaling fleet actions are restarted, Amazon GameLift once
         * again initiates scaling events as triggered by the fleet's scaling policies. If
         * actions on the fleet were never stopped, this operation will have no effect. You
         * can view a fleet's stopped actions using <a>DescribeFleetAttributes</a>.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartFleetActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFleetActionsOutcomeCallable StartFleetActionsCallable(const Model::StartFleetActionsRequest& request) const;

        /**
         * <p>Resumes activity on a fleet that was suspended with <a>StopFleetActions</a>.
         * Currently, this operation is used to restart a fleet's auto-scaling activity.
         * </p> <p>To start fleet actions, specify the fleet ID and the type of actions to
         * restart. When auto-scaling fleet actions are restarted, Amazon GameLift once
         * again initiates scaling events as triggered by the fleet's scaling policies. If
         * actions on the fleet were never stopped, this operation will have no effect. You
         * can view a fleet's stopped actions using <a>DescribeFleetAttributes</a>.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartFleetActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFleetActionsAsync(const Model::StartFleetActionsRequest& request, const StartFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Places a request for a new game session in a queue (see
         * <a>CreateGameSessionQueue</a>). When processing a placement request, Amazon
         * GameLift searches for available resources on the queue's destinations, scanning
         * each until it finds resources or the placement request times out.</p> <p>A game
         * session placement request can also request player sessions. When a new game
         * session is successfully created, Amazon GameLift creates a player session for
         * each player included in the request.</p> <p>When placing a game session, by
         * default Amazon GameLift tries each fleet in the order they are listed in the
         * queue configuration. Ideally, a queue's destinations are listed in preference
         * order.</p> <p>Alternatively, when requesting a game session with players, you
         * can also provide latency data for each player in relevant Regions. Latency data
         * indicates the performance lag a player experiences when connected to a fleet in
         * the Region. Amazon GameLift uses latency data to reorder the list of
         * destinations to place the game session in a Region with minimal lag. If latency
         * data is provided for multiple players, Amazon GameLift calculates each Region's
         * average lag for all players and reorders to get the best game play across all
         * players. </p> <p>To place a new game session request, specify the following:</p>
         * <ul> <li> <p>The queue name and a set of game session properties and
         * settings</p> </li> <li> <p>A unique ID (such as a UUID) for the placement. You
         * use this ID to track the status of the placement request</p> </li> <li>
         * <p>(Optional) A set of player data and a unique player ID for each player that
         * you are joining to the new game session (player data is optional, but if you
         * include it, you must also provide a unique ID for each player)</p> </li> <li>
         * <p>Latency data for all players (if you want to optimize game play for the
         * players)</p> </li> </ul> <p>If successful, a new game session placement is
         * created.</p> <p>To track the status of a placement request, call
         * <a>DescribeGameSessionPlacement</a> and check the request's status. If the
         * status is <code>FULFILLED</code>, a new game session has been created and a game
         * session ARN and Region are referenced. If the placement request times out, you
         * can resubmit the request or retry it with a different queue. </p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::StartGameSessionPlacementOutcome StartGameSessionPlacement(const Model::StartGameSessionPlacementRequest& request) const;

        /**
         * <p>Places a request for a new game session in a queue (see
         * <a>CreateGameSessionQueue</a>). When processing a placement request, Amazon
         * GameLift searches for available resources on the queue's destinations, scanning
         * each until it finds resources or the placement request times out.</p> <p>A game
         * session placement request can also request player sessions. When a new game
         * session is successfully created, Amazon GameLift creates a player session for
         * each player included in the request.</p> <p>When placing a game session, by
         * default Amazon GameLift tries each fleet in the order they are listed in the
         * queue configuration. Ideally, a queue's destinations are listed in preference
         * order.</p> <p>Alternatively, when requesting a game session with players, you
         * can also provide latency data for each player in relevant Regions. Latency data
         * indicates the performance lag a player experiences when connected to a fleet in
         * the Region. Amazon GameLift uses latency data to reorder the list of
         * destinations to place the game session in a Region with minimal lag. If latency
         * data is provided for multiple players, Amazon GameLift calculates each Region's
         * average lag for all players and reorders to get the best game play across all
         * players. </p> <p>To place a new game session request, specify the following:</p>
         * <ul> <li> <p>The queue name and a set of game session properties and
         * settings</p> </li> <li> <p>A unique ID (such as a UUID) for the placement. You
         * use this ID to track the status of the placement request</p> </li> <li>
         * <p>(Optional) A set of player data and a unique player ID for each player that
         * you are joining to the new game session (player data is optional, but if you
         * include it, you must also provide a unique ID for each player)</p> </li> <li>
         * <p>Latency data for all players (if you want to optimize game play for the
         * players)</p> </li> </ul> <p>If successful, a new game session placement is
         * created.</p> <p>To track the status of a placement request, call
         * <a>DescribeGameSessionPlacement</a> and check the request's status. If the
         * status is <code>FULFILLED</code>, a new game session has been created and a game
         * session ARN and Region are referenced. If the placement request times out, you
         * can resubmit the request or retry it with a different queue. </p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * each until it finds resources or the placement request times out.</p> <p>A game
         * session placement request can also request player sessions. When a new game
         * session is successfully created, Amazon GameLift creates a player session for
         * each player included in the request.</p> <p>When placing a game session, by
         * default Amazon GameLift tries each fleet in the order they are listed in the
         * queue configuration. Ideally, a queue's destinations are listed in preference
         * order.</p> <p>Alternatively, when requesting a game session with players, you
         * can also provide latency data for each player in relevant Regions. Latency data
         * indicates the performance lag a player experiences when connected to a fleet in
         * the Region. Amazon GameLift uses latency data to reorder the list of
         * destinations to place the game session in a Region with minimal lag. If latency
         * data is provided for multiple players, Amazon GameLift calculates each Region's
         * average lag for all players and reorders to get the best game play across all
         * players. </p> <p>To place a new game session request, specify the following:</p>
         * <ul> <li> <p>The queue name and a set of game session properties and
         * settings</p> </li> <li> <p>A unique ID (such as a UUID) for the placement. You
         * use this ID to track the status of the placement request</p> </li> <li>
         * <p>(Optional) A set of player data and a unique player ID for each player that
         * you are joining to the new game session (player data is optional, but if you
         * include it, you must also provide a unique ID for each player)</p> </li> <li>
         * <p>Latency data for all players (if you want to optimize game play for the
         * players)</p> </li> </ul> <p>If successful, a new game session placement is
         * created.</p> <p>To track the status of a placement request, call
         * <a>DescribeGameSessionPlacement</a> and check the request's status. If the
         * status is <code>FULFILLED</code>, a new game session has been created and a game
         * session ARN and Region are referenced. If the placement request times out, you
         * can resubmit the request or retry it with a different queue. </p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartGameSessionPlacementAsync(const Model::StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds new players to fill open slots in an existing game session. This
         * operation can be used to add players to matched games that start with fewer than
         * the maximum number of players or to replace players when they drop out. By
         * backfilling with the same matchmaker used to create the original match, you
         * ensure that new players meet the match criteria and maintain a consistent
         * experience throughout the game session. You can backfill a match anytime after a
         * game session has been created. </p> <p>To request a match backfill, specify a
         * unique ticket ID, the existing game session's ARN, a matchmaking configuration,
         * and a set of data that describes all current players in the game session. If
         * successful, a match backfill ticket is created and returned with status set to
         * QUEUED. The ticket is placed in the matchmaker's ticket pool and processed.
         * Track the status of the ticket to respond as needed. </p> <p>The process of
         * finding backfill matches is essentially identical to the initial matchmaking
         * process. The matchmaker searches the pool and groups tickets together to form
         * potential matches, allowing only one backfill ticket per potential match. Once
         * the a match is formed, the matchmaker creates player sessions for the new
         * players. All tickets in the match are updated with the game session's connection
         * information, and the <a>GameSession</a> object is updated to include matchmaker
         * data on the new players. For more detail on how match backfill requests are
         * processed, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How Amazon GameLift FlexMatch Works</a>. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
         * Backfill Existing Games with FlexMatch</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch Works</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchBackfill">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMatchBackfillOutcome StartMatchBackfill(const Model::StartMatchBackfillRequest& request) const;

        /**
         * <p>Finds new players to fill open slots in an existing game session. This
         * operation can be used to add players to matched games that start with fewer than
         * the maximum number of players or to replace players when they drop out. By
         * backfilling with the same matchmaker used to create the original match, you
         * ensure that new players meet the match criteria and maintain a consistent
         * experience throughout the game session. You can backfill a match anytime after a
         * game session has been created. </p> <p>To request a match backfill, specify a
         * unique ticket ID, the existing game session's ARN, a matchmaking configuration,
         * and a set of data that describes all current players in the game session. If
         * successful, a match backfill ticket is created and returned with status set to
         * QUEUED. The ticket is placed in the matchmaker's ticket pool and processed.
         * Track the status of the ticket to respond as needed. </p> <p>The process of
         * finding backfill matches is essentially identical to the initial matchmaking
         * process. The matchmaker searches the pool and groups tickets together to form
         * potential matches, allowing only one backfill ticket per potential match. Once
         * the a match is formed, the matchmaker creates player sessions for the new
         * players. All tickets in the match are updated with the game session's connection
         * information, and the <a>GameSession</a> object is updated to include matchmaker
         * data on the new players. For more detail on how match backfill requests are
         * processed, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How Amazon GameLift FlexMatch Works</a>. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
         * Backfill Existing Games with FlexMatch</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch Works</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchBackfill">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMatchBackfillOutcomeCallable StartMatchBackfillCallable(const Model::StartMatchBackfillRequest& request) const;

        /**
         * <p>Finds new players to fill open slots in an existing game session. This
         * operation can be used to add players to matched games that start with fewer than
         * the maximum number of players or to replace players when they drop out. By
         * backfilling with the same matchmaker used to create the original match, you
         * ensure that new players meet the match criteria and maintain a consistent
         * experience throughout the game session. You can backfill a match anytime after a
         * game session has been created. </p> <p>To request a match backfill, specify a
         * unique ticket ID, the existing game session's ARN, a matchmaking configuration,
         * and a set of data that describes all current players in the game session. If
         * successful, a match backfill ticket is created and returned with status set to
         * QUEUED. The ticket is placed in the matchmaker's ticket pool and processed.
         * Track the status of the ticket to respond as needed. </p> <p>The process of
         * finding backfill matches is essentially identical to the initial matchmaking
         * process. The matchmaker searches the pool and groups tickets together to form
         * potential matches, allowing only one backfill ticket per potential match. Once
         * the a match is formed, the matchmaker creates player sessions for the new
         * players. All tickets in the match are updated with the game session's connection
         * information, and the <a>GameSession</a> object is updated to include matchmaker
         * data on the new players. For more detail on how match backfill requests are
         * processed, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How Amazon GameLift FlexMatch Works</a>. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
         * Backfill Existing Games with FlexMatch</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch Works</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchBackfill">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMatchBackfillAsync(const Model::StartMatchBackfillRequest& request, const StartMatchBackfillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses FlexMatch to create a game match for a group of players based on custom
         * matchmaking rules. If you're also using GameLift hosting, a new game session is
         * started for the matched players. Each matchmaking request identifies one or more
         * players to find a match for, and specifies the type of match to build, including
         * the team configuration and the rules for an acceptable match. When a matchmaking
         * request identifies a group of players who want to play together, FlexMatch finds
         * additional players to fill the match. Match type, rules, and other features are
         * defined in a <code>MatchmakingConfiguration</code>. </p> <p>To start
         * matchmaking, provide a unique ticket ID, specify a matchmaking configuration,
         * and include the players to be matched. For each player, you must also include
         * the player attribute values that are required by the matchmaking configuration
         * (in the rule set). If successful, a matchmaking ticket is returned with status
         * set to <code>QUEUED</code>. </p> <p>Track the status of the ticket to respond as
         * needed. If you're also using GameLift hosting, a successfully completed ticket
         * contains game session connection information. Ticket status updates are tracked
         * using event notification through Amazon Simple Notification Service (SNS), which
         * is defined in the matchmaking configuration.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-tasks.html">
         * FlexMatch Integration Roadmap</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch Works</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchmaking">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMatchmakingOutcome StartMatchmaking(const Model::StartMatchmakingRequest& request) const;

        /**
         * <p>Uses FlexMatch to create a game match for a group of players based on custom
         * matchmaking rules. If you're also using GameLift hosting, a new game session is
         * started for the matched players. Each matchmaking request identifies one or more
         * players to find a match for, and specifies the type of match to build, including
         * the team configuration and the rules for an acceptable match. When a matchmaking
         * request identifies a group of players who want to play together, FlexMatch finds
         * additional players to fill the match. Match type, rules, and other features are
         * defined in a <code>MatchmakingConfiguration</code>. </p> <p>To start
         * matchmaking, provide a unique ticket ID, specify a matchmaking configuration,
         * and include the players to be matched. For each player, you must also include
         * the player attribute values that are required by the matchmaking configuration
         * (in the rule set). If successful, a matchmaking ticket is returned with status
         * set to <code>QUEUED</code>. </p> <p>Track the status of the ticket to respond as
         * needed. If you're also using GameLift hosting, a successfully completed ticket
         * contains game session connection information. Ticket status updates are tracked
         * using event notification through Amazon Simple Notification Service (SNS), which
         * is defined in the matchmaking configuration.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-tasks.html">
         * FlexMatch Integration Roadmap</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch Works</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchmaking">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMatchmakingOutcomeCallable StartMatchmakingCallable(const Model::StartMatchmakingRequest& request) const;

        /**
         * <p>Uses FlexMatch to create a game match for a group of players based on custom
         * matchmaking rules. If you're also using GameLift hosting, a new game session is
         * started for the matched players. Each matchmaking request identifies one or more
         * players to find a match for, and specifies the type of match to build, including
         * the team configuration and the rules for an acceptable match. When a matchmaking
         * request identifies a group of players who want to play together, FlexMatch finds
         * additional players to fill the match. Match type, rules, and other features are
         * defined in a <code>MatchmakingConfiguration</code>. </p> <p>To start
         * matchmaking, provide a unique ticket ID, specify a matchmaking configuration,
         * and include the players to be matched. For each player, you must also include
         * the player attribute values that are required by the matchmaking configuration
         * (in the rule set). If successful, a matchmaking ticket is returned with status
         * set to <code>QUEUED</code>. </p> <p>Track the status of the ticket to respond as
         * needed. If you're also using GameLift hosting, a successfully completed ticket
         * contains game session connection information. Ticket status updates are tracked
         * using event notification through Amazon Simple Notification Service (SNS), which
         * is defined in the matchmaking configuration.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch Event Notification</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-tasks.html">
         * FlexMatch Integration Roadmap</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch Works</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchmaking">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMatchmakingAsync(const Model::StartMatchmakingRequest& request, const StartMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends activity on a fleet. Currently, this operation is used to stop a
         * fleet's auto-scaling activity. It is used to temporarily stop triggering scaling
         * events. The policies can be retained and auto-scaling activity can be restarted
         * using <a>StartFleetActions</a>. You can view a fleet's stopped actions using
         * <a>DescribeFleetAttributes</a>.</p> <p>To stop fleet actions, specify the fleet
         * ID and the type of actions to suspend. When auto-scaling fleet actions are
         * stopped, Amazon GameLift no longer initiates scaling events except in response
         * to manual changes using <a>UpdateFleetCapacity</a>. </p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopFleetActions">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFleetActionsOutcome StopFleetActions(const Model::StopFleetActionsRequest& request) const;

        /**
         * <p>Suspends activity on a fleet. Currently, this operation is used to stop a
         * fleet's auto-scaling activity. It is used to temporarily stop triggering scaling
         * events. The policies can be retained and auto-scaling activity can be restarted
         * using <a>StartFleetActions</a>. You can view a fleet's stopped actions using
         * <a>DescribeFleetAttributes</a>.</p> <p>To stop fleet actions, specify the fleet
         * ID and the type of actions to suspend. When auto-scaling fleet actions are
         * stopped, Amazon GameLift no longer initiates scaling events except in response
         * to manual changes using <a>UpdateFleetCapacity</a>. </p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopFleetActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFleetActionsOutcomeCallable StopFleetActionsCallable(const Model::StopFleetActionsRequest& request) const;

        /**
         * <p>Suspends activity on a fleet. Currently, this operation is used to stop a
         * fleet's auto-scaling activity. It is used to temporarily stop triggering scaling
         * events. The policies can be retained and auto-scaling activity can be restarted
         * using <a>StartFleetActions</a>. You can view a fleet's stopped actions using
         * <a>DescribeFleetAttributes</a>.</p> <p>To stop fleet actions, specify the fleet
         * ID and the type of actions to suspend. When auto-scaling fleet actions are
         * stopped, Amazon GameLift no longer initiates scaling events except in response
         * to manual changes using <a>UpdateFleetCapacity</a>. </p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopFleetActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFleetActionsAsync(const Model::StopFleetActionsRequest& request, const StopFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a game session placement that is in <code>PENDING</code> status. To
         * stop a placement, provide the placement ID values. If successful, the placement
         * is moved to <code>CANCELLED</code> status.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::StopGameSessionPlacementOutcome StopGameSessionPlacement(const Model::StopGameSessionPlacementRequest& request) const;

        /**
         * <p>Cancels a game session placement that is in <code>PENDING</code> status. To
         * stop a placement, provide the placement ID values. If successful, the placement
         * is moved to <code>CANCELLED</code> status.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopGameSessionPlacementOutcomeCallable StopGameSessionPlacementCallable(const Model::StopGameSessionPlacementRequest& request) const;

        /**
         * <p>Cancels a game session placement that is in <code>PENDING</code> status. To
         * stop a placement, provide the placement ID values. If successful, the placement
         * is moved to <code>CANCELLED</code> status.</p> <ul> <li> <p>
         * <a>CreateGameSession</a> </p> </li> <li> <p> <a>DescribeGameSessions</a> </p>
         * </li> <li> <p> <a>DescribeGameSessionDetails</a> </p> </li> <li> <p>
         * <a>SearchGameSessions</a> </p> </li> <li> <p> <a>UpdateGameSession</a> </p>
         * </li> <li> <p> <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session
         * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
         * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopGameSessionPlacementAsync(const Model::StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a matchmaking ticket or match backfill ticket that is currently being
         * processed. To stop the matchmaking operation, specify the ticket ID. If
         * successful, work on the ticket is stopped, and the ticket status is changed to
         * <code>CANCELLED</code>.</p> <p>This call is also used to turn off automatic
         * backfill for an individual game session. This is for game sessions that are
         * created with a matchmaking configuration that has automatic backfill enabled.
         * The ticket ID is included in the <code>MatchmakerData</code> of an updated game
         * session object, which is provided to the game server.</p>  <p>If the
         * operation is successful, the service sends back an empty JSON struct with the
         * HTTP 200 response (not an empty HTTP body).</p>  <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopMatchmaking">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMatchmakingOutcome StopMatchmaking(const Model::StopMatchmakingRequest& request) const;

        /**
         * <p>Cancels a matchmaking ticket or match backfill ticket that is currently being
         * processed. To stop the matchmaking operation, specify the ticket ID. If
         * successful, work on the ticket is stopped, and the ticket status is changed to
         * <code>CANCELLED</code>.</p> <p>This call is also used to turn off automatic
         * backfill for an individual game session. This is for game sessions that are
         * created with a matchmaking configuration that has automatic backfill enabled.
         * The ticket ID is included in the <code>MatchmakerData</code> of an updated game
         * session object, which is provided to the game server.</p>  <p>If the
         * operation is successful, the service sends back an empty JSON struct with the
         * HTTP 200 response (not an empty HTTP body).</p>  <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopMatchmaking">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMatchmakingOutcomeCallable StopMatchmakingCallable(const Model::StopMatchmakingRequest& request) const;

        /**
         * <p>Cancels a matchmaking ticket or match backfill ticket that is currently being
         * processed. To stop the matchmaking operation, specify the ticket ID. If
         * successful, work on the ticket is stopped, and the ticket status is changed to
         * <code>CANCELLED</code>.</p> <p>This call is also used to turn off automatic
         * backfill for an individual game session. This is for game sessions that are
         * created with a matchmaking configuration that has automatic backfill enabled.
         * The ticket ID is included in the <code>MatchmakerData</code> of an updated game
         * session object, which is provided to the game server.</p>  <p>If the
         * operation is successful, the service sends back an empty JSON struct with the
         * HTTP 200 response (not an empty HTTP body).</p>  <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a Game Client</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>StartMatchmaking</a> </p> </li> <li> <p> <a>DescribeMatchmaking</a>
         * </p> </li> <li> <p> <a>StopMatchmaking</a> </p> </li> <li> <p>
         * <a>AcceptMatch</a> </p> </li> <li> <p> <a>StartMatchBackfill</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopMatchmaking">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMatchmakingAsync(const Model::StopMatchmakingRequest& request, const StopMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Temporarily stops activity on a game server group
         * without terminating instances or the game server group. You can restart activity
         * by calling <a>ResumeGameServerGroup</a>. You can suspend the following
         * activity:</p> <ul> <li> <p> <b>Instance type replacement</b> - This activity
         * evaluates the current game hosting viability of all Spot instance types that are
         * defined for the game server group. It updates the Auto Scaling group to remove
         * nonviable Spot Instance types, which have a higher chance of game server
         * interruptions. It then balances capacity across the remaining viable Spot
         * Instance types. When this activity is suspended, the Auto Scaling group
         * continues with its current balance, regardless of viability. Instance
         * protection, utilization metrics, and capacity scaling activities continue to be
         * active. </p> </li> </ul> <p>To suspend activity, specify a game server group ARN
         * and the type of activity to be suspended. If successful, a
         * <a>GameServerGroup</a> object is returned showing that the activity is listed in
         * <code>SuspendedActions</code>.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SuspendGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendGameServerGroupOutcome SuspendGameServerGroup(const Model::SuspendGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Temporarily stops activity on a game server group
         * without terminating instances or the game server group. You can restart activity
         * by calling <a>ResumeGameServerGroup</a>. You can suspend the following
         * activity:</p> <ul> <li> <p> <b>Instance type replacement</b> - This activity
         * evaluates the current game hosting viability of all Spot instance types that are
         * defined for the game server group. It updates the Auto Scaling group to remove
         * nonviable Spot Instance types, which have a higher chance of game server
         * interruptions. It then balances capacity across the remaining viable Spot
         * Instance types. When this activity is suspended, the Auto Scaling group
         * continues with its current balance, regardless of viability. Instance
         * protection, utilization metrics, and capacity scaling activities continue to be
         * active. </p> </li> </ul> <p>To suspend activity, specify a game server group ARN
         * and the type of activity to be suspended. If successful, a
         * <a>GameServerGroup</a> object is returned showing that the activity is listed in
         * <code>SuspendedActions</code>.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SuspendGameServerGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SuspendGameServerGroupOutcomeCallable SuspendGameServerGroupCallable(const Model::SuspendGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Temporarily stops activity on a game server group
         * without terminating instances or the game server group. You can restart activity
         * by calling <a>ResumeGameServerGroup</a>. You can suspend the following
         * activity:</p> <ul> <li> <p> <b>Instance type replacement</b> - This activity
         * evaluates the current game hosting viability of all Spot instance types that are
         * defined for the game server group. It updates the Auto Scaling group to remove
         * nonviable Spot Instance types, which have a higher chance of game server
         * interruptions. It then balances capacity across the remaining viable Spot
         * Instance types. When this activity is suspended, the Auto Scaling group
         * continues with its current balance, regardless of viability. Instance
         * protection, utilization metrics, and capacity scaling activities continue to be
         * active. </p> </li> </ul> <p>To suspend activity, specify a game server group ARN
         * and the type of activity to be suspended. If successful, a
         * <a>GameServerGroup</a> object is returned showing that the activity is listed in
         * <code>SuspendedActions</code>.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SuspendGameServerGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SuspendGameServerGroupAsync(const Model::SuspendGameServerGroupRequest& request, const SuspendGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Assigns a tag to a GameLift resource. AWS resource tags provide an
         * additional management tool set. You can use tags to organize resources, create
         * IAM permissions policies to manage access to groups of resources, customize AWS
         * cost breakdowns, etc. This operation handles the permissions necessary to manage
         * tags for the following GameLift resource types:</p> <ul> <li> <p>Build</p> </li>
         * <li> <p>Script</p> </li> <li> <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li>
         * <p>GameSessionQueue</p> </li> <li> <p>MatchmakingConfiguration</p> </li> <li>
         * <p>MatchmakingRuleSet</p> </li> </ul> <p>To add a tag to a resource, specify the
         * unique ARN value for the resource and provide a tag list containing one or more
         * tags. The operation succeeds even if the list includes tags that are already
         * assigned to the specified resource. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p> Assigns a tag to a GameLift resource. AWS resource tags provide an
         * additional management tool set. You can use tags to organize resources, create
         * IAM permissions policies to manage access to groups of resources, customize AWS
         * cost breakdowns, etc. This operation handles the permissions necessary to manage
         * tags for the following GameLift resource types:</p> <ul> <li> <p>Build</p> </li>
         * <li> <p>Script</p> </li> <li> <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li>
         * <p>GameSessionQueue</p> </li> <li> <p>MatchmakingConfiguration</p> </li> <li>
         * <p>MatchmakingRuleSet</p> </li> </ul> <p>To add a tag to a resource, specify the
         * unique ARN value for the resource and provide a tag list containing one or more
         * tags. The operation succeeds even if the list includes tags that are already
         * assigned to the specified resource. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p> Assigns a tag to a GameLift resource. AWS resource tags provide an
         * additional management tool set. You can use tags to organize resources, create
         * IAM permissions policies to manage access to groups of resources, customize AWS
         * cost breakdowns, etc. This operation handles the permissions necessary to manage
         * tags for the following GameLift resource types:</p> <ul> <li> <p>Build</p> </li>
         * <li> <p>Script</p> </li> <li> <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li>
         * <p>GameSessionQueue</p> </li> <li> <p>MatchmakingConfiguration</p> </li> <li>
         * <p>MatchmakingRuleSet</p> </li> </ul> <p>To add a tag to a resource, specify the
         * unique ARN value for the resource and provide a tag list containing one or more
         * tags. The operation succeeds even if the list includes tags that are already
         * assigned to the specified resource. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag that is assigned to a GameLift resource. Resource tags are used
         * to organize AWS resources for a range of purposes. This operation handles the
         * permissions necessary to manage tags for the following GameLift resource
         * types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p> </li> <li>
         * <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li> <p>GameSessionQueue</p> </li>
         * <li> <p>MatchmakingConfiguration</p> </li> <li> <p>MatchmakingRuleSet</p> </li>
         * </ul> <p>To remove a tag from a resource, specify the unique ARN value for the
         * resource and provide a string list containing one or more tags to be removed.
         * This operation succeeds even if the list includes tags that are not currently
         * assigned to the specified resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag that is assigned to a GameLift resource. Resource tags are used
         * to organize AWS resources for a range of purposes. This operation handles the
         * permissions necessary to manage tags for the following GameLift resource
         * types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p> </li> <li>
         * <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li> <p>GameSessionQueue</p> </li>
         * <li> <p>MatchmakingConfiguration</p> </li> <li> <p>MatchmakingRuleSet</p> </li>
         * </ul> <p>To remove a tag from a resource, specify the unique ARN value for the
         * resource and provide a string list containing one or more tags to be removed.
         * This operation succeeds even if the list includes tags that are not currently
         * assigned to the specified resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag that is assigned to a GameLift resource. Resource tags are used
         * to organize AWS resources for a range of purposes. This operation handles the
         * permissions necessary to manage tags for the following GameLift resource
         * types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p> </li> <li>
         * <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li> <p>GameSessionQueue</p> </li>
         * <li> <p>MatchmakingConfiguration</p> </li> <li> <p>MatchmakingRuleSet</p> </li>
         * </ul> <p>To remove a tag from a resource, specify the unique ARN value for the
         * resource and provide a string list containing one or more tags to be removed.
         * This operation succeeds even if the list includes tags that are not currently
         * assigned to the specified resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * AWS Resources</a> in the <i>AWS General Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * AWS Tagging Strategies</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li> <li> <p>
         * <a>ListTagsForResource</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties for an alias. To update properties, specify the alias ID
         * to be updated and provide the information to be changed. To reassign an alias to
         * another fleet, provide an updated routing strategy. If successful, the updated
         * alias record is returned.</p> <ul> <li> <p> <a>CreateAlias</a> </p> </li> <li>
         * <p> <a>ListAliases</a> </p> </li> <li> <p> <a>DescribeAlias</a> </p> </li> <li>
         * <p> <a>UpdateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a> </p> </li> <li>
         * <p> <a>ResolveAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates properties for an alias. To update properties, specify the alias ID
         * to be updated and provide the information to be changed. To reassign an alias to
         * another fleet, provide an updated routing strategy. If successful, the updated
         * alias record is returned.</p> <ul> <li> <p> <a>CreateAlias</a> </p> </li> <li>
         * <p> <a>ListAliases</a> </p> </li> <li> <p> <a>DescribeAlias</a> </p> </li> <li>
         * <p> <a>UpdateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a> </p> </li> <li>
         * <p> <a>ResolveAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates properties for an alias. To update properties, specify the alias ID
         * to be updated and provide the information to be changed. To reassign an alias to
         * another fleet, provide an updated routing strategy. If successful, the updated
         * alias record is returned.</p> <ul> <li> <p> <a>CreateAlias</a> </p> </li> <li>
         * <p> <a>ListAliases</a> </p> </li> <li> <p> <a>DescribeAlias</a> </p> </li> <li>
         * <p> <a>UpdateAlias</a> </p> </li> <li> <p> <a>DeleteAlias</a> </p> </li> <li>
         * <p> <a>ResolveAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata in a build resource, including the build name and version.
         * To update the metadata, specify the build ID to update and provide the new
         * values. If successful, a build object containing the updated metadata is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBuildOutcome UpdateBuild(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build resource, including the build name and version.
         * To update the metadata, specify the build ID to update and provide the new
         * values. If successful, a build object containing the updated metadata is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBuildOutcomeCallable UpdateBuildCallable(const Model::UpdateBuildRequest& request) const;

        /**
         * <p>Updates metadata in a build resource, including the build name and version.
         * To update the metadata, specify the build ID to update and provide the new
         * values. If successful, a build object containing the updated metadata is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateBuild</a> </p> </li> <li> <p> <a>ListBuilds</a> </p> </li>
         * <li> <p> <a>DescribeBuild</a> </p> </li> <li> <p> <a>UpdateBuild</a> </p> </li>
         * <li> <p> <a>DeleteBuild</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBuildAsync(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values that you want to
         * change. If successful, the fleet ID for the updated fleet is returned.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetAttributesOutcome UpdateFleetAttributes(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values that you want to
         * change. If successful, the fleet ID for the updated fleet is returned.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetAttributesOutcomeCallable UpdateFleetAttributesCallable(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * <p>Updates fleet properties, including name and description, for a fleet. To
         * update metadata, specify the fleet ID and the property values that you want to
         * change. If successful, the fleet ID for the updated fleet is returned.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetAttributesAsync(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this operation to specify the
         * number of EC2 instances (hosts) that you want this fleet to contain. Before
         * calling this operation, you may want to call <a>DescribeEC2InstanceLimits</a> to
         * get the maximum capacity based on the fleet's EC2 instance type.</p> <p>Specify
         * minimum and maximum number of instances. Amazon GameLift will not change fleet
         * capacity to values fall outside of this range. This is particularly important
         * when using auto-scaling (see <a>PutScalingPolicy</a>) to allow capacity to
         * adjust based on player demand while imposing limits on automatic
         * adjustments.</p> <p>To update fleet capacity, specify the fleet ID and the
         * number of instances you want the fleet to host. If successful, Amazon GameLift
         * starts or terminates instances so that the fleet's active instance count matches
         * the desired instance count. You can view a fleet's current capacity information
         * by calling <a>DescribeFleetCapacity</a>. If the desired instance count is higher
         * than the instance type's limit, the "Limit Exceeded" exception occurs.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetCapacityOutcome UpdateFleetCapacity(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this operation to specify the
         * number of EC2 instances (hosts) that you want this fleet to contain. Before
         * calling this operation, you may want to call <a>DescribeEC2InstanceLimits</a> to
         * get the maximum capacity based on the fleet's EC2 instance type.</p> <p>Specify
         * minimum and maximum number of instances. Amazon GameLift will not change fleet
         * capacity to values fall outside of this range. This is particularly important
         * when using auto-scaling (see <a>PutScalingPolicy</a>) to allow capacity to
         * adjust based on player demand while imposing limits on automatic
         * adjustments.</p> <p>To update fleet capacity, specify the fleet ID and the
         * number of instances you want the fleet to host. If successful, Amazon GameLift
         * starts or terminates instances so that the fleet's active instance count matches
         * the desired instance count. You can view a fleet's current capacity information
         * by calling <a>DescribeFleetCapacity</a>. If the desired instance count is higher
         * than the instance type's limit, the "Limit Exceeded" exception occurs.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetCapacity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetCapacityOutcomeCallable UpdateFleetCapacityCallable(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * <p>Updates capacity settings for a fleet. Use this operation to specify the
         * number of EC2 instances (hosts) that you want this fleet to contain. Before
         * calling this operation, you may want to call <a>DescribeEC2InstanceLimits</a> to
         * get the maximum capacity based on the fleet's EC2 instance type.</p> <p>Specify
         * minimum and maximum number of instances. Amazon GameLift will not change fleet
         * capacity to values fall outside of this range. This is particularly important
         * when using auto-scaling (see <a>PutScalingPolicy</a>) to allow capacity to
         * adjust based on player demand while imposing limits on automatic
         * adjustments.</p> <p>To update fleet capacity, specify the fleet ID and the
         * number of instances you want the fleet to host. If successful, Amazon GameLift
         * starts or terminates instances so that the fleet's active instance count matches
         * the desired instance count. You can view a fleet's current capacity information
         * by calling <a>DescribeFleetCapacity</a>. If the desired instance count is higher
         * than the instance type's limit, the "Limit Exceeded" exception occurs.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * for the updated fleet is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * for the updated fleet is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * for the updated fleet is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetPortSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetPortSettingsAsync(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Updates information about a registered game server to
         * help GameLift FleetIQ to track game server availability. This operation is
         * called by a game server process that is running on an instance in a game server
         * group. </p> <p>Use this operation to update the following types of game server
         * information. You can make all three types of updates in the same request:</p>
         * <ul> <li> <p>To update the game server's utilization status, identify the game
         * server and game server group and specify the current utilization status. Use
         * this status to identify when game servers are currently hosting games and when
         * they are available to be claimed.</p> </li> <li> <p>To report health status,
         * identify the game server and game server group and set health check to
         * <code>HEALTHY</code>. If a game server does not report health status for a
         * certain length of time, the game server is no longer considered healthy. As a
         * result, it will be eventually deregistered from the game server group to avoid
         * affecting utilization metrics. The best practice is to report health every 60
         * seconds.</p> </li> <li> <p>To change game server metadata, provide updated game
         * server data.</p> </li> </ul> <p>Once a game server is successfully updated, the
         * relevant statuses and timestamps are updated.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameServerOutcome UpdateGameServer(const Model::UpdateGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Updates information about a registered game server to
         * help GameLift FleetIQ to track game server availability. This operation is
         * called by a game server process that is running on an instance in a game server
         * group. </p> <p>Use this operation to update the following types of game server
         * information. You can make all three types of updates in the same request:</p>
         * <ul> <li> <p>To update the game server's utilization status, identify the game
         * server and game server group and specify the current utilization status. Use
         * this status to identify when game servers are currently hosting games and when
         * they are available to be claimed.</p> </li> <li> <p>To report health status,
         * identify the game server and game server group and set health check to
         * <code>HEALTHY</code>. If a game server does not report health status for a
         * certain length of time, the game server is no longer considered healthy. As a
         * result, it will be eventually deregistered from the game server group to avoid
         * affecting utilization metrics. The best practice is to report health every 60
         * seconds.</p> </li> <li> <p>To change game server metadata, provide updated game
         * server data.</p> </li> </ul> <p>Once a game server is successfully updated, the
         * relevant statuses and timestamps are updated.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameServerOutcomeCallable UpdateGameServerCallable(const Model::UpdateGameServerRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Updates information about a registered game server to
         * help GameLift FleetIQ to track game server availability. This operation is
         * called by a game server process that is running on an instance in a game server
         * group. </p> <p>Use this operation to update the following types of game server
         * information. You can make all three types of updates in the same request:</p>
         * <ul> <li> <p>To update the game server's utilization status, identify the game
         * server and game server group and specify the current utilization status. Use
         * this status to identify when game servers are currently hosting games and when
         * they are available to be claimed.</p> </li> <li> <p>To report health status,
         * identify the game server and game server group and set health check to
         * <code>HEALTHY</code>. If a game server does not report health status for a
         * certain length of time, the game server is no longer considered healthy. As a
         * result, it will be eventually deregistered from the game server group to avoid
         * affecting utilization metrics. The best practice is to report health every 60
         * seconds.</p> </li> <li> <p>To change game server metadata, provide updated game
         * server data.</p> </li> </ul> <p>Once a game server is successfully updated, the
         * relevant statuses and timestamps are updated.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>RegisterGameServer</a> </p> </li> <li> <p> <a>ListGameServers</a> </p> </li>
         * <li> <p> <a>ClaimGameServer</a> </p> </li> <li> <p> <a>DescribeGameServer</a>
         * </p> </li> <li> <p> <a>UpdateGameServer</a> </p> </li> <li> <p>
         * <a>DeregisterGameServer</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameServerAsync(const Model::UpdateGameServerRequest& request, const UpdateGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Updates GameLift FleetIQ-specific properties for a
         * game server group. Many Auto Scaling group properties are updated on the Auto
         * Scaling group directly, including the launch template, Auto Scaling policies,
         * and maximum/minimum/desired instance counts.</p> <p>To update the game server
         * group, specify the game server group ID and provide the updated values. Before
         * applying the updates, the new values are validated to ensure that GameLift
         * FleetIQ can continue to perform instance balancing activity. If successful, a
         * <a>GameServerGroup</a> object is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameServerGroupOutcome UpdateGameServerGroup(const Model::UpdateGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Updates GameLift FleetIQ-specific properties for a
         * game server group. Many Auto Scaling group properties are updated on the Auto
         * Scaling group directly, including the launch template, Auto Scaling policies,
         * and maximum/minimum/desired instance counts.</p> <p>To update the game server
         * group, specify the game server group ID and provide the updated values. Before
         * applying the updates, the new values are validated to ensure that GameLift
         * FleetIQ can continue to perform instance balancing activity. If successful, a
         * <a>GameServerGroup</a> object is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServerGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameServerGroupOutcomeCallable UpdateGameServerGroupCallable(const Model::UpdateGameServerGroupRequest& request) const;

        /**
         * <p> <b>This operation is used with the Amazon GameLift FleetIQ solution and game
         * server groups.</b> </p> <p>Updates GameLift FleetIQ-specific properties for a
         * game server group. Many Auto Scaling group properties are updated on the Auto
         * Scaling group directly, including the launch template, Auto Scaling policies,
         * and maximum/minimum/desired instance counts.</p> <p>To update the game server
         * group, specify the game server group ID and provide the updated values. Before
         * applying the updates, the new values are validated to ensure that GameLift
         * FleetIQ can continue to perform instance balancing activity. If successful, a
         * <a>GameServerGroup</a> object is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateGameServerGroup</a> </p> </li> <li> <p> <a>ListGameServerGroups</a>
         * </p> </li> <li> <p> <a>DescribeGameServerGroup</a> </p> </li> <li> <p>
         * <a>UpdateGameServerGroup</a> </p> </li> <li> <p> <a>DeleteGameServerGroup</a>
         * </p> </li> <li> <p> <a>ResumeGameServerGroup</a> </p> </li> <li> <p>
         * <a>SuspendGameServerGroup</a> </p> </li> <li> <p>
         * <a>DescribeGameServerInstances</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServerGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameServerGroupAsync(const Model::UpdateGameServerGroupRequest& request, const UpdateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates game session properties. This includes the session name, maximum
         * player count, protection policy, which controls whether or not an active game
         * session can be terminated during a scale-down event, and the player session
         * creation policy, which controls whether or not new players can join the session.
         * To update a game session, specify the game session ID and the values you want to
         * change. If successful, an updated <a>GameSession</a> object is returned. </p>
         * <ul> <li> <p> <a>CreateGameSession</a> </p> </li> <li> <p>
         * <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * change. If successful, an updated <a>GameSession</a> object is returned. </p>
         * <ul> <li> <p> <a>CreateGameSession</a> </p> </li> <li> <p>
         * <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * change. If successful, an updated <a>GameSession</a> object is returned. </p>
         * <ul> <li> <p> <a>CreateGameSession</a> </p> </li> <li> <p>
         * <a>DescribeGameSessions</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionDetails</a> </p> </li> <li> <p> <a>SearchGameSessions</a>
         * </p> </li> <li> <p> <a>UpdateGameSession</a> </p> </li> <li> <p>
         * <a>GetGameSessionLogUrl</a> </p> </li> <li> <p>Game session placements</p> <ul>
         * <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
         * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * destinations, provide a complete list of destinations. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">
         * Using Multi-Region Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameSessionQueueOutcome UpdateGameSessionQueue(const Model::UpdateGameSessionQueueRequest& request) const;

        /**
         * <p>Updates settings for a game session queue, which determines how new game
         * session requests in the queue are processed. To update settings, specify the
         * queue name to be updated and provide the new settings. When updating
         * destinations, provide a complete list of destinations. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">
         * Using Multi-Region Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * destinations, provide a complete list of destinations. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">
         * Using Multi-Region Queues</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateGameSessionQueue</a> </p> </li> <li> <p>
         * <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
         * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameSessionQueueAsync(const Model::UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates settings for a FlexMatch matchmaking configuration. These changes
         * affect all matches and game sessions that are created after the update. To
         * update settings, specify the configuration name to be updated and provide the
         * new settings. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch Matchmaker</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMatchmakingConfigurationOutcome UpdateMatchmakingConfiguration(const Model::UpdateMatchmakingConfigurationRequest& request) const;

        /**
         * <p>Updates settings for a FlexMatch matchmaking configuration. These changes
         * affect all matches and game sessions that are created after the update. To
         * update settings, specify the configuration name to be updated and provide the
         * new settings. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch Matchmaker</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMatchmakingConfigurationOutcomeCallable UpdateMatchmakingConfigurationCallable(const Model::UpdateMatchmakingConfigurationRequest& request) const;

        /**
         * <p>Updates settings for a FlexMatch matchmaking configuration. These changes
         * affect all matches and game sessions that are created after the update. To
         * update settings, specify the configuration name to be updated and provide the
         * new settings. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch Matchmaker</a> </p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMatchmakingConfigurationAsync(const Model::UpdateMatchmakingConfigurationRequest& request, const UpdateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells Amazon GameLift how to launch server processes on instances in the fleet.
         * You can update a fleet's runtime configuration at any time after the fleet is
         * created; it does not need to be in an <code>ACTIVE</code> status.</p> <p>To
         * update runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> object with an updated set of server process
         * configurations.</p> <p>Each instance in a Amazon GameLift fleet checks regularly
         * for an updated runtime configuration and changes how it launches server
         * processes to comply with the latest version. Existing server processes are not
         * affected by the update; runtime configuration changes are applied gradually as
         * existing processes shut down and new processes are launched during Amazon
         * GameLift's normal process recycling activity.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * <code>RuntimeConfiguration</code> object with an updated set of server process
         * configurations.</p> <p>Each instance in a Amazon GameLift fleet checks regularly
         * for an updated runtime configuration and changes how it launches server
         * processes to comply with the latest version. Existing server processes are not
         * affected by the update; runtime configuration changes are applied gradually as
         * existing processes shut down and new processes are launched during Amazon
         * GameLift's normal process recycling activity.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * <code>RuntimeConfiguration</code> object with an updated set of server process
         * configurations.</p> <p>Each instance in a Amazon GameLift fleet checks regularly
         * for an updated runtime configuration and changes how it launches server
         * processes to comply with the latest version. Existing server processes are not
         * affected by the update; runtime configuration changes are applied gradually as
         * existing processes shut down and new processes are launched during Amazon
         * GameLift's normal process recycling activity.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p>
         * <a>DeleteFleet</a> </p> </li> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
         * <li> <p>Update fleets:</p> <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li>
         * <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
         * <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
         * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>
         * <a>StartFleetActions</a> or <a>StopFleetActions</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateRuntimeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuntimeConfigurationAsync(const Model::UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates Realtime script metadata and content.</p> <p>To update script
         * metadata, specify the script ID and provide updated name and/or version values.
         * </p> <p>To update script content, provide an updated zip file by pointing to
         * either a local file or an Amazon S3 bucket location. You can use either method
         * regardless of how the original script was uploaded. Use the <i>Version</i>
         * parameter to track updates to the script.</p> <p>If the call is successful, the
         * updated metadata is stored in the script record and a revised script is uploaded
         * to the Amazon GameLift service. Once the script is updated and acquired by a
         * fleet instance, the new version is used for all new game sessions. </p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateScript">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScriptOutcome UpdateScript(const Model::UpdateScriptRequest& request) const;

        /**
         * <p>Updates Realtime script metadata and content.</p> <p>To update script
         * metadata, specify the script ID and provide updated name and/or version values.
         * </p> <p>To update script content, provide an updated zip file by pointing to
         * either a local file or an Amazon S3 bucket location. You can use either method
         * regardless of how the original script was uploaded. Use the <i>Version</i>
         * parameter to track updates to the script.</p> <p>If the call is successful, the
         * updated metadata is stored in the script record and a revised script is uploaded
         * to the Amazon GameLift service. Once the script is updated and acquired by a
         * fleet instance, the new version is used for all new game sessions. </p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateScript">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScriptOutcomeCallable UpdateScriptCallable(const Model::UpdateScriptRequest& request) const;

        /**
         * <p>Updates Realtime script metadata and content.</p> <p>To update script
         * metadata, specify the script ID and provide updated name and/or version values.
         * </p> <p>To update script content, provide an updated zip file by pointing to
         * either a local file or an Amazon S3 bucket location. You can use either method
         * regardless of how the original script was uploaded. Use the <i>Version</i>
         * parameter to track updates to the script.</p> <p>If the call is successful, the
         * updated metadata is stored in the script record and a revised script is uploaded
         * to the Amazon GameLift service. Once the script is updated and acquired by a
         * fleet instance, the new version is used for all new game sessions. </p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related operations</b> </p> <ul> <li>
         * <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a> </p> </li> <li>
         * <p> <a>DescribeScript</a> </p> </li> <li> <p> <a>UpdateScript</a> </p> </li>
         * <li> <p> <a>DeleteScript</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateScript">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScriptAsync(const Model::UpdateScriptRequest& request, const UpdateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates the syntax of a matchmaking rule or rule set. This operation checks
         * that the rule set is using syntactically correct JSON and that it conforms to
         * allowed property expressions. To validate syntax, provide a rule set JSON
         * string.</p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ValidateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateMatchmakingRuleSetOutcome ValidateMatchmakingRuleSet(const Model::ValidateMatchmakingRuleSetRequest& request) const;

        /**
         * <p>Validates the syntax of a matchmaking rule or rule set. This operation checks
         * that the rule set is using syntactically correct JSON and that it conforms to
         * allowed property expressions. To validate syntax, provide a rule set JSON
         * string.</p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ValidateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateMatchmakingRuleSetOutcomeCallable ValidateMatchmakingRuleSetCallable(const Model::ValidateMatchmakingRuleSetRequest& request) const;

        /**
         * <p>Validates the syntax of a matchmaking rule or rule set. This operation checks
         * that the rule set is using syntactically correct JSON and that it conforms to
         * allowed property expressions. To validate syntax, provide a rule set JSON
         * string.</p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a Rule Set</a> </p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingConfigurations</a> </p> </li> <li> <p>
         * <a>UpdateMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingConfiguration</a> </p> </li> <li> <p>
         * <a>CreateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DescribeMatchmakingRuleSets</a> </p> </li> <li> <p>
         * <a>ValidateMatchmakingRuleSet</a> </p> </li> <li> <p>
         * <a>DeleteMatchmakingRuleSet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ValidateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateMatchmakingRuleSetAsync(const Model::ValidateMatchmakingRuleSetRequest& request, const ValidateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptMatchAsyncHelper(const Model::AcceptMatchRequest& request, const AcceptMatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ClaimGameServerAsyncHelper(const Model::ClaimGameServerRequest& request, const ClaimGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBuildAsyncHelper(const Model::CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFleetAsyncHelper(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGameServerGroupAsyncHelper(const Model::CreateGameServerGroupRequest& request, const CreateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGameSessionAsyncHelper(const Model::CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGameSessionQueueAsyncHelper(const Model::CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMatchmakingConfigurationAsyncHelper(const Model::CreateMatchmakingConfigurationRequest& request, const CreateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMatchmakingRuleSetAsyncHelper(const Model::CreateMatchmakingRuleSetRequest& request, const CreateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlayerSessionAsyncHelper(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlayerSessionsAsyncHelper(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateScriptAsyncHelper(const Model::CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpcPeeringAuthorizationAsyncHelper(const Model::CreateVpcPeeringAuthorizationRequest& request, const CreateVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpcPeeringConnectionAsyncHelper(const Model::CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBuildAsyncHelper(const Model::DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFleetAsyncHelper(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGameServerGroupAsyncHelper(const Model::DeleteGameServerGroupRequest& request, const DeleteGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGameSessionQueueAsyncHelper(const Model::DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMatchmakingConfigurationAsyncHelper(const Model::DeleteMatchmakingConfigurationRequest& request, const DeleteMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMatchmakingRuleSetAsyncHelper(const Model::DeleteMatchmakingRuleSetRequest& request, const DeleteMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScalingPolicyAsyncHelper(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScriptAsyncHelper(const Model::DeleteScriptRequest& request, const DeleteScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpcPeeringAuthorizationAsyncHelper(const Model::DeleteVpcPeeringAuthorizationRequest& request, const DeleteVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpcPeeringConnectionAsyncHelper(const Model::DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterGameServerAsyncHelper(const Model::DeregisterGameServerRequest& request, const DeregisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAliasAsyncHelper(const Model::DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBuildAsyncHelper(const Model::DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEC2InstanceLimitsAsyncHelper(const Model::DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetAttributesAsyncHelper(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetCapacityAsyncHelper(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetEventsAsyncHelper(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetPortSettingsAsyncHelper(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetUtilizationAsyncHelper(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameServerAsyncHelper(const Model::DescribeGameServerRequest& request, const DescribeGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameServerGroupAsyncHelper(const Model::DescribeGameServerGroupRequest& request, const DescribeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameServerInstancesAsyncHelper(const Model::DescribeGameServerInstancesRequest& request, const DescribeGameServerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionDetailsAsyncHelper(const Model::DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionPlacementAsyncHelper(const Model::DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionQueuesAsyncHelper(const Model::DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGameSessionsAsyncHelper(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancesAsyncHelper(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMatchmakingAsyncHelper(const Model::DescribeMatchmakingRequest& request, const DescribeMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMatchmakingConfigurationsAsyncHelper(const Model::DescribeMatchmakingConfigurationsRequest& request, const DescribeMatchmakingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMatchmakingRuleSetsAsyncHelper(const Model::DescribeMatchmakingRuleSetsRequest& request, const DescribeMatchmakingRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlayerSessionsAsyncHelper(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuntimeConfigurationAsyncHelper(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingPoliciesAsyncHelper(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScriptAsyncHelper(const Model::DescribeScriptRequest& request, const DescribeScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcPeeringAuthorizationsAsyncHelper(const Model::DescribeVpcPeeringAuthorizationsRequest& request, const DescribeVpcPeeringAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcPeeringConnectionsAsyncHelper(const Model::DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGameSessionLogUrlAsyncHelper(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceAccessAsyncHelper(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsAsyncHelper(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFleetsAsyncHelper(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGameServerGroupsAsyncHelper(const Model::ListGameServerGroupsRequest& request, const ListGameServerGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGameServersAsyncHelper(const Model::ListGameServersRequest& request, const ListGameServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListScriptsAsyncHelper(const Model::ListScriptsRequest& request, const ListScriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterGameServerAsyncHelper(const Model::RegisterGameServerRequest& request, const RegisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestUploadCredentialsAsyncHelper(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveAliasAsyncHelper(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeGameServerGroupAsyncHelper(const Model::ResumeGameServerGroupRequest& request, const ResumeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchGameSessionsAsyncHelper(const Model::SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFleetActionsAsyncHelper(const Model::StartFleetActionsRequest& request, const StartFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartGameSessionPlacementAsyncHelper(const Model::StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMatchBackfillAsyncHelper(const Model::StartMatchBackfillRequest& request, const StartMatchBackfillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMatchmakingAsyncHelper(const Model::StartMatchmakingRequest& request, const StartMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopFleetActionsAsyncHelper(const Model::StopFleetActionsRequest& request, const StopFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopGameSessionPlacementAsyncHelper(const Model::StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopMatchmakingAsyncHelper(const Model::StopMatchmakingRequest& request, const StopMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SuspendGameServerGroupAsyncHelper(const Model::SuspendGameServerGroupRequest& request, const SuspendGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBuildAsyncHelper(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetAttributesAsyncHelper(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetCapacityAsyncHelper(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetPortSettingsAsyncHelper(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameServerAsyncHelper(const Model::UpdateGameServerRequest& request, const UpdateGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameServerGroupAsyncHelper(const Model::UpdateGameServerGroupRequest& request, const UpdateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameSessionAsyncHelper(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGameSessionQueueAsyncHelper(const Model::UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMatchmakingConfigurationAsyncHelper(const Model::UpdateMatchmakingConfigurationRequest& request, const UpdateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuntimeConfigurationAsyncHelper(const Model::UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateScriptAsyncHelper(const Model::UpdateScriptRequest& request, const UpdateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidateMatchmakingRuleSetAsyncHelper(const Model::ValidateMatchmakingRuleSetRequest& request, const ValidateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GameLift
} // namespace Aws
