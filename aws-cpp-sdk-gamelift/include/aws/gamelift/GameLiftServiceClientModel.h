/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/gamelift/GameLiftErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/gamelift/GameLiftEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GameLiftClient header */
#include <aws/gamelift/model/AcceptMatchResult.h>
#include <aws/gamelift/model/ClaimGameServerResult.h>
#include <aws/gamelift/model/CreateAliasResult.h>
#include <aws/gamelift/model/CreateBuildResult.h>
#include <aws/gamelift/model/CreateFleetResult.h>
#include <aws/gamelift/model/CreateFleetLocationsResult.h>
#include <aws/gamelift/model/CreateGameServerGroupResult.h>
#include <aws/gamelift/model/CreateGameSessionResult.h>
#include <aws/gamelift/model/CreateGameSessionQueueResult.h>
#include <aws/gamelift/model/CreateLocationResult.h>
#include <aws/gamelift/model/CreateMatchmakingConfigurationResult.h>
#include <aws/gamelift/model/CreateMatchmakingRuleSetResult.h>
#include <aws/gamelift/model/CreatePlayerSessionResult.h>
#include <aws/gamelift/model/CreatePlayerSessionsResult.h>
#include <aws/gamelift/model/CreateScriptResult.h>
#include <aws/gamelift/model/CreateVpcPeeringAuthorizationResult.h>
#include <aws/gamelift/model/CreateVpcPeeringConnectionResult.h>
#include <aws/gamelift/model/DeleteFleetLocationsResult.h>
#include <aws/gamelift/model/DeleteGameServerGroupResult.h>
#include <aws/gamelift/model/DeleteGameSessionQueueResult.h>
#include <aws/gamelift/model/DeleteLocationResult.h>
#include <aws/gamelift/model/DeleteMatchmakingConfigurationResult.h>
#include <aws/gamelift/model/DeleteMatchmakingRuleSetResult.h>
#include <aws/gamelift/model/DeleteVpcPeeringAuthorizationResult.h>
#include <aws/gamelift/model/DeleteVpcPeeringConnectionResult.h>
#include <aws/gamelift/model/DeregisterComputeResult.h>
#include <aws/gamelift/model/DescribeAliasResult.h>
#include <aws/gamelift/model/DescribeBuildResult.h>
#include <aws/gamelift/model/DescribeComputeResult.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsResult.h>
#include <aws/gamelift/model/DescribeFleetAttributesResult.h>
#include <aws/gamelift/model/DescribeFleetCapacityResult.h>
#include <aws/gamelift/model/DescribeFleetEventsResult.h>
#include <aws/gamelift/model/DescribeFleetLocationAttributesResult.h>
#include <aws/gamelift/model/DescribeFleetLocationCapacityResult.h>
#include <aws/gamelift/model/DescribeFleetLocationUtilizationResult.h>
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
#include <aws/gamelift/model/GetComputeAccessResult.h>
#include <aws/gamelift/model/GetComputeAuthTokenResult.h>
#include <aws/gamelift/model/GetGameSessionLogUrlResult.h>
#include <aws/gamelift/model/GetInstanceAccessResult.h>
#include <aws/gamelift/model/ListAliasesResult.h>
#include <aws/gamelift/model/ListBuildsResult.h>
#include <aws/gamelift/model/ListComputeResult.h>
#include <aws/gamelift/model/ListFleetsResult.h>
#include <aws/gamelift/model/ListGameServerGroupsResult.h>
#include <aws/gamelift/model/ListGameServersResult.h>
#include <aws/gamelift/model/ListLocationsResult.h>
#include <aws/gamelift/model/ListScriptsResult.h>
#include <aws/gamelift/model/ListTagsForResourceResult.h>
#include <aws/gamelift/model/PutScalingPolicyResult.h>
#include <aws/gamelift/model/RegisterComputeResult.h>
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
/* End of service model headers required in GameLiftClient header */

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
    using GameLiftClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GameLiftEndpointProviderBase = Aws::GameLift::Endpoint::GameLiftEndpointProviderBase;
    using GameLiftEndpointProvider = Aws::GameLift::Endpoint::GameLiftEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GameLiftClient header */
      class AcceptMatchRequest;
      class ClaimGameServerRequest;
      class CreateAliasRequest;
      class CreateBuildRequest;
      class CreateFleetRequest;
      class CreateFleetLocationsRequest;
      class CreateGameServerGroupRequest;
      class CreateGameSessionRequest;
      class CreateGameSessionQueueRequest;
      class CreateLocationRequest;
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
      class DeleteFleetLocationsRequest;
      class DeleteGameServerGroupRequest;
      class DeleteGameSessionQueueRequest;
      class DeleteLocationRequest;
      class DeleteMatchmakingConfigurationRequest;
      class DeleteMatchmakingRuleSetRequest;
      class DeleteScalingPolicyRequest;
      class DeleteScriptRequest;
      class DeleteVpcPeeringAuthorizationRequest;
      class DeleteVpcPeeringConnectionRequest;
      class DeregisterComputeRequest;
      class DeregisterGameServerRequest;
      class DescribeAliasRequest;
      class DescribeBuildRequest;
      class DescribeComputeRequest;
      class DescribeEC2InstanceLimitsRequest;
      class DescribeFleetAttributesRequest;
      class DescribeFleetCapacityRequest;
      class DescribeFleetEventsRequest;
      class DescribeFleetLocationAttributesRequest;
      class DescribeFleetLocationCapacityRequest;
      class DescribeFleetLocationUtilizationRequest;
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
      class GetComputeAccessRequest;
      class GetComputeAuthTokenRequest;
      class GetGameSessionLogUrlRequest;
      class GetInstanceAccessRequest;
      class ListAliasesRequest;
      class ListBuildsRequest;
      class ListComputeRequest;
      class ListFleetsRequest;
      class ListGameServerGroupsRequest;
      class ListGameServersRequest;
      class ListLocationsRequest;
      class ListScriptsRequest;
      class ListTagsForResourceRequest;
      class PutScalingPolicyRequest;
      class RegisterComputeRequest;
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
      /* End of service model forward declarations required in GameLiftClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptMatchResult, GameLiftError> AcceptMatchOutcome;
      typedef Aws::Utils::Outcome<ClaimGameServerResult, GameLiftError> ClaimGameServerOutcome;
      typedef Aws::Utils::Outcome<CreateAliasResult, GameLiftError> CreateAliasOutcome;
      typedef Aws::Utils::Outcome<CreateBuildResult, GameLiftError> CreateBuildOutcome;
      typedef Aws::Utils::Outcome<CreateFleetResult, GameLiftError> CreateFleetOutcome;
      typedef Aws::Utils::Outcome<CreateFleetLocationsResult, GameLiftError> CreateFleetLocationsOutcome;
      typedef Aws::Utils::Outcome<CreateGameServerGroupResult, GameLiftError> CreateGameServerGroupOutcome;
      typedef Aws::Utils::Outcome<CreateGameSessionResult, GameLiftError> CreateGameSessionOutcome;
      typedef Aws::Utils::Outcome<CreateGameSessionQueueResult, GameLiftError> CreateGameSessionQueueOutcome;
      typedef Aws::Utils::Outcome<CreateLocationResult, GameLiftError> CreateLocationOutcome;
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
      typedef Aws::Utils::Outcome<DeleteFleetLocationsResult, GameLiftError> DeleteFleetLocationsOutcome;
      typedef Aws::Utils::Outcome<DeleteGameServerGroupResult, GameLiftError> DeleteGameServerGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteGameSessionQueueResult, GameLiftError> DeleteGameSessionQueueOutcome;
      typedef Aws::Utils::Outcome<DeleteLocationResult, GameLiftError> DeleteLocationOutcome;
      typedef Aws::Utils::Outcome<DeleteMatchmakingConfigurationResult, GameLiftError> DeleteMatchmakingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteMatchmakingRuleSetResult, GameLiftError> DeleteMatchmakingRuleSetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeleteScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeleteScriptOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcPeeringAuthorizationResult, GameLiftError> DeleteVpcPeeringAuthorizationOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcPeeringConnectionResult, GameLiftError> DeleteVpcPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<DeregisterComputeResult, GameLiftError> DeregisterComputeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftError> DeregisterGameServerOutcome;
      typedef Aws::Utils::Outcome<DescribeAliasResult, GameLiftError> DescribeAliasOutcome;
      typedef Aws::Utils::Outcome<DescribeBuildResult, GameLiftError> DescribeBuildOutcome;
      typedef Aws::Utils::Outcome<DescribeComputeResult, GameLiftError> DescribeComputeOutcome;
      typedef Aws::Utils::Outcome<DescribeEC2InstanceLimitsResult, GameLiftError> DescribeEC2InstanceLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetAttributesResult, GameLiftError> DescribeFleetAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetCapacityResult, GameLiftError> DescribeFleetCapacityOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetEventsResult, GameLiftError> DescribeFleetEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetLocationAttributesResult, GameLiftError> DescribeFleetLocationAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetLocationCapacityResult, GameLiftError> DescribeFleetLocationCapacityOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetLocationUtilizationResult, GameLiftError> DescribeFleetLocationUtilizationOutcome;
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
      typedef Aws::Utils::Outcome<GetComputeAccessResult, GameLiftError> GetComputeAccessOutcome;
      typedef Aws::Utils::Outcome<GetComputeAuthTokenResult, GameLiftError> GetComputeAuthTokenOutcome;
      typedef Aws::Utils::Outcome<GetGameSessionLogUrlResult, GameLiftError> GetGameSessionLogUrlOutcome;
      typedef Aws::Utils::Outcome<GetInstanceAccessResult, GameLiftError> GetInstanceAccessOutcome;
      typedef Aws::Utils::Outcome<ListAliasesResult, GameLiftError> ListAliasesOutcome;
      typedef Aws::Utils::Outcome<ListBuildsResult, GameLiftError> ListBuildsOutcome;
      typedef Aws::Utils::Outcome<ListComputeResult, GameLiftError> ListComputeOutcome;
      typedef Aws::Utils::Outcome<ListFleetsResult, GameLiftError> ListFleetsOutcome;
      typedef Aws::Utils::Outcome<ListGameServerGroupsResult, GameLiftError> ListGameServerGroupsOutcome;
      typedef Aws::Utils::Outcome<ListGameServersResult, GameLiftError> ListGameServersOutcome;
      typedef Aws::Utils::Outcome<ListLocationsResult, GameLiftError> ListLocationsOutcome;
      typedef Aws::Utils::Outcome<ListScriptsResult, GameLiftError> ListScriptsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, GameLiftError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutScalingPolicyResult, GameLiftError> PutScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<RegisterComputeResult, GameLiftError> RegisterComputeOutcome;
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptMatchOutcome> AcceptMatchOutcomeCallable;
      typedef std::future<ClaimGameServerOutcome> ClaimGameServerOutcomeCallable;
      typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
      typedef std::future<CreateBuildOutcome> CreateBuildOutcomeCallable;
      typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
      typedef std::future<CreateFleetLocationsOutcome> CreateFleetLocationsOutcomeCallable;
      typedef std::future<CreateGameServerGroupOutcome> CreateGameServerGroupOutcomeCallable;
      typedef std::future<CreateGameSessionOutcome> CreateGameSessionOutcomeCallable;
      typedef std::future<CreateGameSessionQueueOutcome> CreateGameSessionQueueOutcomeCallable;
      typedef std::future<CreateLocationOutcome> CreateLocationOutcomeCallable;
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
      typedef std::future<DeleteFleetLocationsOutcome> DeleteFleetLocationsOutcomeCallable;
      typedef std::future<DeleteGameServerGroupOutcome> DeleteGameServerGroupOutcomeCallable;
      typedef std::future<DeleteGameSessionQueueOutcome> DeleteGameSessionQueueOutcomeCallable;
      typedef std::future<DeleteLocationOutcome> DeleteLocationOutcomeCallable;
      typedef std::future<DeleteMatchmakingConfigurationOutcome> DeleteMatchmakingConfigurationOutcomeCallable;
      typedef std::future<DeleteMatchmakingRuleSetOutcome> DeleteMatchmakingRuleSetOutcomeCallable;
      typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
      typedef std::future<DeleteScriptOutcome> DeleteScriptOutcomeCallable;
      typedef std::future<DeleteVpcPeeringAuthorizationOutcome> DeleteVpcPeeringAuthorizationOutcomeCallable;
      typedef std::future<DeleteVpcPeeringConnectionOutcome> DeleteVpcPeeringConnectionOutcomeCallable;
      typedef std::future<DeregisterComputeOutcome> DeregisterComputeOutcomeCallable;
      typedef std::future<DeregisterGameServerOutcome> DeregisterGameServerOutcomeCallable;
      typedef std::future<DescribeAliasOutcome> DescribeAliasOutcomeCallable;
      typedef std::future<DescribeBuildOutcome> DescribeBuildOutcomeCallable;
      typedef std::future<DescribeComputeOutcome> DescribeComputeOutcomeCallable;
      typedef std::future<DescribeEC2InstanceLimitsOutcome> DescribeEC2InstanceLimitsOutcomeCallable;
      typedef std::future<DescribeFleetAttributesOutcome> DescribeFleetAttributesOutcomeCallable;
      typedef std::future<DescribeFleetCapacityOutcome> DescribeFleetCapacityOutcomeCallable;
      typedef std::future<DescribeFleetEventsOutcome> DescribeFleetEventsOutcomeCallable;
      typedef std::future<DescribeFleetLocationAttributesOutcome> DescribeFleetLocationAttributesOutcomeCallable;
      typedef std::future<DescribeFleetLocationCapacityOutcome> DescribeFleetLocationCapacityOutcomeCallable;
      typedef std::future<DescribeFleetLocationUtilizationOutcome> DescribeFleetLocationUtilizationOutcomeCallable;
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
      typedef std::future<GetComputeAccessOutcome> GetComputeAccessOutcomeCallable;
      typedef std::future<GetComputeAuthTokenOutcome> GetComputeAuthTokenOutcomeCallable;
      typedef std::future<GetGameSessionLogUrlOutcome> GetGameSessionLogUrlOutcomeCallable;
      typedef std::future<GetInstanceAccessOutcome> GetInstanceAccessOutcomeCallable;
      typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
      typedef std::future<ListBuildsOutcome> ListBuildsOutcomeCallable;
      typedef std::future<ListComputeOutcome> ListComputeOutcomeCallable;
      typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
      typedef std::future<ListGameServerGroupsOutcome> ListGameServerGroupsOutcomeCallable;
      typedef std::future<ListGameServersOutcome> ListGameServersOutcomeCallable;
      typedef std::future<ListLocationsOutcome> ListLocationsOutcomeCallable;
      typedef std::future<ListScriptsOutcome> ListScriptsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
      typedef std::future<RegisterComputeOutcome> RegisterComputeOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GameLiftClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GameLiftClient*, const Model::AcceptMatchRequest&, const Model::AcceptMatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptMatchResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ClaimGameServerRequest&, const Model::ClaimGameServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClaimGameServerResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateBuildRequest&, const Model::CreateBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateFleetLocationsRequest&, const Model::CreateFleetLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetLocationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameServerGroupRequest&, const Model::CreateGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameSessionRequest&, const Model::CreateGameSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateGameSessionQueueRequest&, const Model::CreateGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGameSessionQueueResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::CreateLocationRequest&, const Model::CreateLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationResponseReceivedHandler;
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
    typedef std::function<void(const GameLiftClient*, const Model::DeleteFleetLocationsRequest&, const Model::DeleteFleetLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetLocationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteGameServerGroupRequest&, const Model::DeleteGameServerGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGameServerGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteGameSessionQueueRequest&, const Model::DeleteGameSessionQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGameSessionQueueResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteLocationRequest&, const Model::DeleteLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteMatchmakingConfigurationRequest&, const Model::DeleteMatchmakingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMatchmakingConfigurationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteMatchmakingRuleSetRequest&, const Model::DeleteMatchmakingRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMatchmakingRuleSetResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteScalingPolicyRequest&, const Model::DeleteScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteScriptRequest&, const Model::DeleteScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScriptResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteVpcPeeringAuthorizationRequest&, const Model::DeleteVpcPeeringAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcPeeringAuthorizationResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeleteVpcPeeringConnectionRequest&, const Model::DeleteVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeregisterComputeRequest&, const Model::DeregisterComputeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterComputeResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DeregisterGameServerRequest&, const Model::DeregisterGameServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterGameServerResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeAliasRequest&, const Model::DescribeAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAliasResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeBuildRequest&, const Model::DescribeBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBuildResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeComputeRequest&, const Model::DescribeComputeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComputeResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeEC2InstanceLimitsRequest&, const Model::DescribeEC2InstanceLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEC2InstanceLimitsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetAttributesRequest&, const Model::DescribeFleetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetCapacityRequest&, const Model::DescribeFleetCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetEventsRequest&, const Model::DescribeFleetEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetEventsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetLocationAttributesRequest&, const Model::DescribeFleetLocationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetLocationAttributesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetLocationCapacityRequest&, const Model::DescribeFleetLocationCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetLocationCapacityResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::DescribeFleetLocationUtilizationRequest&, const Model::DescribeFleetLocationUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetLocationUtilizationResponseReceivedHandler;
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
    typedef std::function<void(const GameLiftClient*, const Model::GetComputeAccessRequest&, const Model::GetComputeAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComputeAccessResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetComputeAuthTokenRequest&, const Model::GetComputeAuthTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComputeAuthTokenResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetGameSessionLogUrlRequest&, const Model::GetGameSessionLogUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGameSessionLogUrlResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::GetInstanceAccessRequest&, const Model::GetInstanceAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceAccessResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListBuildsRequest&, const Model::ListBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListComputeRequest&, const Model::ListComputeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComputeResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListGameServerGroupsRequest&, const Model::ListGameServerGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGameServerGroupsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListGameServersRequest&, const Model::ListGameServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGameServersResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListLocationsRequest&, const Model::ListLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLocationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListScriptsRequest&, const Model::ListScriptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScriptsResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const GameLiftClient*, const Model::RegisterComputeRequest&, const Model::RegisterComputeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterComputeResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace GameLift
} // namespace Aws
