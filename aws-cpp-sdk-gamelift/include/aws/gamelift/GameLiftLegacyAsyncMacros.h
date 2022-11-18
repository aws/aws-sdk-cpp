/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptMatchAsync(...)  SubmitAsync(&GameLiftClient::AcceptMatch, __VA_ARGS__)
#define AcceptMatchCallable(REQUEST)  SubmitCallable(&GameLiftClient::AcceptMatch, REQUEST)

#define ClaimGameServerAsync(...)  SubmitAsync(&GameLiftClient::ClaimGameServer, __VA_ARGS__)
#define ClaimGameServerCallable(REQUEST)  SubmitCallable(&GameLiftClient::ClaimGameServer, REQUEST)

#define CreateAliasAsync(...)  SubmitAsync(&GameLiftClient::CreateAlias, __VA_ARGS__)
#define CreateAliasCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateAlias, REQUEST)

#define CreateBuildAsync(...)  SubmitAsync(&GameLiftClient::CreateBuild, __VA_ARGS__)
#define CreateBuildCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateBuild, REQUEST)

#define CreateFleetAsync(...)  SubmitAsync(&GameLiftClient::CreateFleet, __VA_ARGS__)
#define CreateFleetCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateFleet, REQUEST)

#define CreateFleetLocationsAsync(...)  SubmitAsync(&GameLiftClient::CreateFleetLocations, __VA_ARGS__)
#define CreateFleetLocationsCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateFleetLocations, REQUEST)

#define CreateGameServerGroupAsync(...)  SubmitAsync(&GameLiftClient::CreateGameServerGroup, __VA_ARGS__)
#define CreateGameServerGroupCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateGameServerGroup, REQUEST)

#define CreateGameSessionAsync(...)  SubmitAsync(&GameLiftClient::CreateGameSession, __VA_ARGS__)
#define CreateGameSessionCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateGameSession, REQUEST)

#define CreateGameSessionQueueAsync(...)  SubmitAsync(&GameLiftClient::CreateGameSessionQueue, __VA_ARGS__)
#define CreateGameSessionQueueCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateGameSessionQueue, REQUEST)

#define CreateMatchmakingConfigurationAsync(...)  SubmitAsync(&GameLiftClient::CreateMatchmakingConfiguration, __VA_ARGS__)
#define CreateMatchmakingConfigurationCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateMatchmakingConfiguration, REQUEST)

#define CreateMatchmakingRuleSetAsync(...)  SubmitAsync(&GameLiftClient::CreateMatchmakingRuleSet, __VA_ARGS__)
#define CreateMatchmakingRuleSetCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateMatchmakingRuleSet, REQUEST)

#define CreatePlayerSessionAsync(...)  SubmitAsync(&GameLiftClient::CreatePlayerSession, __VA_ARGS__)
#define CreatePlayerSessionCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreatePlayerSession, REQUEST)

#define CreatePlayerSessionsAsync(...)  SubmitAsync(&GameLiftClient::CreatePlayerSessions, __VA_ARGS__)
#define CreatePlayerSessionsCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreatePlayerSessions, REQUEST)

#define CreateScriptAsync(...)  SubmitAsync(&GameLiftClient::CreateScript, __VA_ARGS__)
#define CreateScriptCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateScript, REQUEST)

#define CreateVpcPeeringAuthorizationAsync(...)  SubmitAsync(&GameLiftClient::CreateVpcPeeringAuthorization, __VA_ARGS__)
#define CreateVpcPeeringAuthorizationCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateVpcPeeringAuthorization, REQUEST)

#define CreateVpcPeeringConnectionAsync(...)  SubmitAsync(&GameLiftClient::CreateVpcPeeringConnection, __VA_ARGS__)
#define CreateVpcPeeringConnectionCallable(REQUEST)  SubmitCallable(&GameLiftClient::CreateVpcPeeringConnection, REQUEST)

#define DeleteAliasAsync(...)  SubmitAsync(&GameLiftClient::DeleteAlias, __VA_ARGS__)
#define DeleteAliasCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteAlias, REQUEST)

#define DeleteBuildAsync(...)  SubmitAsync(&GameLiftClient::DeleteBuild, __VA_ARGS__)
#define DeleteBuildCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteBuild, REQUEST)

#define DeleteFleetAsync(...)  SubmitAsync(&GameLiftClient::DeleteFleet, __VA_ARGS__)
#define DeleteFleetCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteFleet, REQUEST)

#define DeleteFleetLocationsAsync(...)  SubmitAsync(&GameLiftClient::DeleteFleetLocations, __VA_ARGS__)
#define DeleteFleetLocationsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteFleetLocations, REQUEST)

#define DeleteGameServerGroupAsync(...)  SubmitAsync(&GameLiftClient::DeleteGameServerGroup, __VA_ARGS__)
#define DeleteGameServerGroupCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteGameServerGroup, REQUEST)

#define DeleteGameSessionQueueAsync(...)  SubmitAsync(&GameLiftClient::DeleteGameSessionQueue, __VA_ARGS__)
#define DeleteGameSessionQueueCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteGameSessionQueue, REQUEST)

#define DeleteMatchmakingConfigurationAsync(...)  SubmitAsync(&GameLiftClient::DeleteMatchmakingConfiguration, __VA_ARGS__)
#define DeleteMatchmakingConfigurationCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteMatchmakingConfiguration, REQUEST)

#define DeleteMatchmakingRuleSetAsync(...)  SubmitAsync(&GameLiftClient::DeleteMatchmakingRuleSet, __VA_ARGS__)
#define DeleteMatchmakingRuleSetCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteMatchmakingRuleSet, REQUEST)

#define DeleteScalingPolicyAsync(...)  SubmitAsync(&GameLiftClient::DeleteScalingPolicy, __VA_ARGS__)
#define DeleteScalingPolicyCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteScalingPolicy, REQUEST)

#define DeleteScriptAsync(...)  SubmitAsync(&GameLiftClient::DeleteScript, __VA_ARGS__)
#define DeleteScriptCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteScript, REQUEST)

#define DeleteVpcPeeringAuthorizationAsync(...)  SubmitAsync(&GameLiftClient::DeleteVpcPeeringAuthorization, __VA_ARGS__)
#define DeleteVpcPeeringAuthorizationCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteVpcPeeringAuthorization, REQUEST)

#define DeleteVpcPeeringConnectionAsync(...)  SubmitAsync(&GameLiftClient::DeleteVpcPeeringConnection, __VA_ARGS__)
#define DeleteVpcPeeringConnectionCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeleteVpcPeeringConnection, REQUEST)

#define DeregisterGameServerAsync(...)  SubmitAsync(&GameLiftClient::DeregisterGameServer, __VA_ARGS__)
#define DeregisterGameServerCallable(REQUEST)  SubmitCallable(&GameLiftClient::DeregisterGameServer, REQUEST)

#define DescribeAliasAsync(...)  SubmitAsync(&GameLiftClient::DescribeAlias, __VA_ARGS__)
#define DescribeAliasCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeAlias, REQUEST)

#define DescribeBuildAsync(...)  SubmitAsync(&GameLiftClient::DescribeBuild, __VA_ARGS__)
#define DescribeBuildCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeBuild, REQUEST)

#define DescribeEC2InstanceLimitsAsync(...)  SubmitAsync(&GameLiftClient::DescribeEC2InstanceLimits, __VA_ARGS__)
#define DescribeEC2InstanceLimitsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeEC2InstanceLimits, REQUEST)

#define DescribeFleetAttributesAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetAttributes, __VA_ARGS__)
#define DescribeFleetAttributesCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetAttributes, REQUEST)

#define DescribeFleetCapacityAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetCapacity, __VA_ARGS__)
#define DescribeFleetCapacityCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetCapacity, REQUEST)

#define DescribeFleetEventsAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetEvents, __VA_ARGS__)
#define DescribeFleetEventsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetEvents, REQUEST)

#define DescribeFleetLocationAttributesAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetLocationAttributes, __VA_ARGS__)
#define DescribeFleetLocationAttributesCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetLocationAttributes, REQUEST)

#define DescribeFleetLocationCapacityAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetLocationCapacity, __VA_ARGS__)
#define DescribeFleetLocationCapacityCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetLocationCapacity, REQUEST)

#define DescribeFleetLocationUtilizationAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetLocationUtilization, __VA_ARGS__)
#define DescribeFleetLocationUtilizationCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetLocationUtilization, REQUEST)

#define DescribeFleetPortSettingsAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetPortSettings, __VA_ARGS__)
#define DescribeFleetPortSettingsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetPortSettings, REQUEST)

#define DescribeFleetUtilizationAsync(...)  SubmitAsync(&GameLiftClient::DescribeFleetUtilization, __VA_ARGS__)
#define DescribeFleetUtilizationCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeFleetUtilization, REQUEST)

#define DescribeGameServerAsync(...)  SubmitAsync(&GameLiftClient::DescribeGameServer, __VA_ARGS__)
#define DescribeGameServerCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeGameServer, REQUEST)

#define DescribeGameServerGroupAsync(...)  SubmitAsync(&GameLiftClient::DescribeGameServerGroup, __VA_ARGS__)
#define DescribeGameServerGroupCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeGameServerGroup, REQUEST)

#define DescribeGameServerInstancesAsync(...)  SubmitAsync(&GameLiftClient::DescribeGameServerInstances, __VA_ARGS__)
#define DescribeGameServerInstancesCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeGameServerInstances, REQUEST)

#define DescribeGameSessionDetailsAsync(...)  SubmitAsync(&GameLiftClient::DescribeGameSessionDetails, __VA_ARGS__)
#define DescribeGameSessionDetailsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeGameSessionDetails, REQUEST)

#define DescribeGameSessionPlacementAsync(...)  SubmitAsync(&GameLiftClient::DescribeGameSessionPlacement, __VA_ARGS__)
#define DescribeGameSessionPlacementCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeGameSessionPlacement, REQUEST)

#define DescribeGameSessionQueuesAsync(...)  SubmitAsync(&GameLiftClient::DescribeGameSessionQueues, __VA_ARGS__)
#define DescribeGameSessionQueuesCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeGameSessionQueues, REQUEST)

#define DescribeGameSessionsAsync(...)  SubmitAsync(&GameLiftClient::DescribeGameSessions, __VA_ARGS__)
#define DescribeGameSessionsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeGameSessions, REQUEST)

#define DescribeInstancesAsync(...)  SubmitAsync(&GameLiftClient::DescribeInstances, __VA_ARGS__)
#define DescribeInstancesCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeInstances, REQUEST)

#define DescribeMatchmakingAsync(...)  SubmitAsync(&GameLiftClient::DescribeMatchmaking, __VA_ARGS__)
#define DescribeMatchmakingCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeMatchmaking, REQUEST)

#define DescribeMatchmakingConfigurationsAsync(...)  SubmitAsync(&GameLiftClient::DescribeMatchmakingConfigurations, __VA_ARGS__)
#define DescribeMatchmakingConfigurationsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeMatchmakingConfigurations, REQUEST)

#define DescribeMatchmakingRuleSetsAsync(...)  SubmitAsync(&GameLiftClient::DescribeMatchmakingRuleSets, __VA_ARGS__)
#define DescribeMatchmakingRuleSetsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeMatchmakingRuleSets, REQUEST)

#define DescribePlayerSessionsAsync(...)  SubmitAsync(&GameLiftClient::DescribePlayerSessions, __VA_ARGS__)
#define DescribePlayerSessionsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribePlayerSessions, REQUEST)

#define DescribeRuntimeConfigurationAsync(...)  SubmitAsync(&GameLiftClient::DescribeRuntimeConfiguration, __VA_ARGS__)
#define DescribeRuntimeConfigurationCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeRuntimeConfiguration, REQUEST)

#define DescribeScalingPoliciesAsync(...)  SubmitAsync(&GameLiftClient::DescribeScalingPolicies, __VA_ARGS__)
#define DescribeScalingPoliciesCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeScalingPolicies, REQUEST)

#define DescribeScriptAsync(...)  SubmitAsync(&GameLiftClient::DescribeScript, __VA_ARGS__)
#define DescribeScriptCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeScript, REQUEST)

#define DescribeVpcPeeringAuthorizationsAsync(...)  SubmitAsync(&GameLiftClient::DescribeVpcPeeringAuthorizations, __VA_ARGS__)
#define DescribeVpcPeeringAuthorizationsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeVpcPeeringAuthorizations, REQUEST)

#define DescribeVpcPeeringConnectionsAsync(...)  SubmitAsync(&GameLiftClient::DescribeVpcPeeringConnections, __VA_ARGS__)
#define DescribeVpcPeeringConnectionsCallable(REQUEST)  SubmitCallable(&GameLiftClient::DescribeVpcPeeringConnections, REQUEST)

#define GetGameSessionLogUrlAsync(...)  SubmitAsync(&GameLiftClient::GetGameSessionLogUrl, __VA_ARGS__)
#define GetGameSessionLogUrlCallable(REQUEST)  SubmitCallable(&GameLiftClient::GetGameSessionLogUrl, REQUEST)

#define GetInstanceAccessAsync(...)  SubmitAsync(&GameLiftClient::GetInstanceAccess, __VA_ARGS__)
#define GetInstanceAccessCallable(REQUEST)  SubmitCallable(&GameLiftClient::GetInstanceAccess, REQUEST)

#define ListAliasesAsync(...)  SubmitAsync(&GameLiftClient::ListAliases, __VA_ARGS__)
#define ListAliasesCallable(REQUEST)  SubmitCallable(&GameLiftClient::ListAliases, REQUEST)

#define ListBuildsAsync(...)  SubmitAsync(&GameLiftClient::ListBuilds, __VA_ARGS__)
#define ListBuildsCallable(REQUEST)  SubmitCallable(&GameLiftClient::ListBuilds, REQUEST)

#define ListFleetsAsync(...)  SubmitAsync(&GameLiftClient::ListFleets, __VA_ARGS__)
#define ListFleetsCallable(REQUEST)  SubmitCallable(&GameLiftClient::ListFleets, REQUEST)

#define ListGameServerGroupsAsync(...)  SubmitAsync(&GameLiftClient::ListGameServerGroups, __VA_ARGS__)
#define ListGameServerGroupsCallable(REQUEST)  SubmitCallable(&GameLiftClient::ListGameServerGroups, REQUEST)

#define ListGameServersAsync(...)  SubmitAsync(&GameLiftClient::ListGameServers, __VA_ARGS__)
#define ListGameServersCallable(REQUEST)  SubmitCallable(&GameLiftClient::ListGameServers, REQUEST)

#define ListScriptsAsync(...)  SubmitAsync(&GameLiftClient::ListScripts, __VA_ARGS__)
#define ListScriptsCallable(REQUEST)  SubmitCallable(&GameLiftClient::ListScripts, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GameLiftClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GameLiftClient::ListTagsForResource, REQUEST)

#define PutScalingPolicyAsync(...)  SubmitAsync(&GameLiftClient::PutScalingPolicy, __VA_ARGS__)
#define PutScalingPolicyCallable(REQUEST)  SubmitCallable(&GameLiftClient::PutScalingPolicy, REQUEST)

#define RegisterGameServerAsync(...)  SubmitAsync(&GameLiftClient::RegisterGameServer, __VA_ARGS__)
#define RegisterGameServerCallable(REQUEST)  SubmitCallable(&GameLiftClient::RegisterGameServer, REQUEST)

#define RequestUploadCredentialsAsync(...)  SubmitAsync(&GameLiftClient::RequestUploadCredentials, __VA_ARGS__)
#define RequestUploadCredentialsCallable(REQUEST)  SubmitCallable(&GameLiftClient::RequestUploadCredentials, REQUEST)

#define ResolveAliasAsync(...)  SubmitAsync(&GameLiftClient::ResolveAlias, __VA_ARGS__)
#define ResolveAliasCallable(REQUEST)  SubmitCallable(&GameLiftClient::ResolveAlias, REQUEST)

#define ResumeGameServerGroupAsync(...)  SubmitAsync(&GameLiftClient::ResumeGameServerGroup, __VA_ARGS__)
#define ResumeGameServerGroupCallable(REQUEST)  SubmitCallable(&GameLiftClient::ResumeGameServerGroup, REQUEST)

#define SearchGameSessionsAsync(...)  SubmitAsync(&GameLiftClient::SearchGameSessions, __VA_ARGS__)
#define SearchGameSessionsCallable(REQUEST)  SubmitCallable(&GameLiftClient::SearchGameSessions, REQUEST)

#define StartFleetActionsAsync(...)  SubmitAsync(&GameLiftClient::StartFleetActions, __VA_ARGS__)
#define StartFleetActionsCallable(REQUEST)  SubmitCallable(&GameLiftClient::StartFleetActions, REQUEST)

#define StartGameSessionPlacementAsync(...)  SubmitAsync(&GameLiftClient::StartGameSessionPlacement, __VA_ARGS__)
#define StartGameSessionPlacementCallable(REQUEST)  SubmitCallable(&GameLiftClient::StartGameSessionPlacement, REQUEST)

#define StartMatchBackfillAsync(...)  SubmitAsync(&GameLiftClient::StartMatchBackfill, __VA_ARGS__)
#define StartMatchBackfillCallable(REQUEST)  SubmitCallable(&GameLiftClient::StartMatchBackfill, REQUEST)

#define StartMatchmakingAsync(...)  SubmitAsync(&GameLiftClient::StartMatchmaking, __VA_ARGS__)
#define StartMatchmakingCallable(REQUEST)  SubmitCallable(&GameLiftClient::StartMatchmaking, REQUEST)

#define StopFleetActionsAsync(...)  SubmitAsync(&GameLiftClient::StopFleetActions, __VA_ARGS__)
#define StopFleetActionsCallable(REQUEST)  SubmitCallable(&GameLiftClient::StopFleetActions, REQUEST)

#define StopGameSessionPlacementAsync(...)  SubmitAsync(&GameLiftClient::StopGameSessionPlacement, __VA_ARGS__)
#define StopGameSessionPlacementCallable(REQUEST)  SubmitCallable(&GameLiftClient::StopGameSessionPlacement, REQUEST)

#define StopMatchmakingAsync(...)  SubmitAsync(&GameLiftClient::StopMatchmaking, __VA_ARGS__)
#define StopMatchmakingCallable(REQUEST)  SubmitCallable(&GameLiftClient::StopMatchmaking, REQUEST)

#define SuspendGameServerGroupAsync(...)  SubmitAsync(&GameLiftClient::SuspendGameServerGroup, __VA_ARGS__)
#define SuspendGameServerGroupCallable(REQUEST)  SubmitCallable(&GameLiftClient::SuspendGameServerGroup, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GameLiftClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GameLiftClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GameLiftClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GameLiftClient::UntagResource, REQUEST)

#define UpdateAliasAsync(...)  SubmitAsync(&GameLiftClient::UpdateAlias, __VA_ARGS__)
#define UpdateAliasCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateAlias, REQUEST)

#define UpdateBuildAsync(...)  SubmitAsync(&GameLiftClient::UpdateBuild, __VA_ARGS__)
#define UpdateBuildCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateBuild, REQUEST)

#define UpdateFleetAttributesAsync(...)  SubmitAsync(&GameLiftClient::UpdateFleetAttributes, __VA_ARGS__)
#define UpdateFleetAttributesCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateFleetAttributes, REQUEST)

#define UpdateFleetCapacityAsync(...)  SubmitAsync(&GameLiftClient::UpdateFleetCapacity, __VA_ARGS__)
#define UpdateFleetCapacityCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateFleetCapacity, REQUEST)

#define UpdateFleetPortSettingsAsync(...)  SubmitAsync(&GameLiftClient::UpdateFleetPortSettings, __VA_ARGS__)
#define UpdateFleetPortSettingsCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateFleetPortSettings, REQUEST)

#define UpdateGameServerAsync(...)  SubmitAsync(&GameLiftClient::UpdateGameServer, __VA_ARGS__)
#define UpdateGameServerCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateGameServer, REQUEST)

#define UpdateGameServerGroupAsync(...)  SubmitAsync(&GameLiftClient::UpdateGameServerGroup, __VA_ARGS__)
#define UpdateGameServerGroupCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateGameServerGroup, REQUEST)

#define UpdateGameSessionAsync(...)  SubmitAsync(&GameLiftClient::UpdateGameSession, __VA_ARGS__)
#define UpdateGameSessionCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateGameSession, REQUEST)

#define UpdateGameSessionQueueAsync(...)  SubmitAsync(&GameLiftClient::UpdateGameSessionQueue, __VA_ARGS__)
#define UpdateGameSessionQueueCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateGameSessionQueue, REQUEST)

#define UpdateMatchmakingConfigurationAsync(...)  SubmitAsync(&GameLiftClient::UpdateMatchmakingConfiguration, __VA_ARGS__)
#define UpdateMatchmakingConfigurationCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateMatchmakingConfiguration, REQUEST)

#define UpdateRuntimeConfigurationAsync(...)  SubmitAsync(&GameLiftClient::UpdateRuntimeConfiguration, __VA_ARGS__)
#define UpdateRuntimeConfigurationCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateRuntimeConfiguration, REQUEST)

#define UpdateScriptAsync(...)  SubmitAsync(&GameLiftClient::UpdateScript, __VA_ARGS__)
#define UpdateScriptCallable(REQUEST)  SubmitCallable(&GameLiftClient::UpdateScript, REQUEST)

#define ValidateMatchmakingRuleSetAsync(...)  SubmitAsync(&GameLiftClient::ValidateMatchmakingRuleSet, __VA_ARGS__)
#define ValidateMatchmakingRuleSetCallable(REQUEST)  SubmitCallable(&GameLiftClient::ValidateMatchmakingRuleSet, REQUEST)

