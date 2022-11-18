/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateGameAsync(...)  SubmitAsync(&GameSparksClient::CreateGame, __VA_ARGS__)
#define CreateGameCallable(REQUEST)  SubmitCallable(&GameSparksClient::CreateGame, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&GameSparksClient::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&GameSparksClient::CreateSnapshot, REQUEST)

#define CreateStageAsync(...)  SubmitAsync(&GameSparksClient::CreateStage, __VA_ARGS__)
#define CreateStageCallable(REQUEST)  SubmitCallable(&GameSparksClient::CreateStage, REQUEST)

#define DeleteGameAsync(...)  SubmitAsync(&GameSparksClient::DeleteGame, __VA_ARGS__)
#define DeleteGameCallable(REQUEST)  SubmitCallable(&GameSparksClient::DeleteGame, REQUEST)

#define DeleteStageAsync(...)  SubmitAsync(&GameSparksClient::DeleteStage, __VA_ARGS__)
#define DeleteStageCallable(REQUEST)  SubmitCallable(&GameSparksClient::DeleteStage, REQUEST)

#define DisconnectPlayerAsync(...)  SubmitAsync(&GameSparksClient::DisconnectPlayer, __VA_ARGS__)
#define DisconnectPlayerCallable(REQUEST)  SubmitCallable(&GameSparksClient::DisconnectPlayer, REQUEST)

#define ExportSnapshotAsync(...)  SubmitAsync(&GameSparksClient::ExportSnapshot, __VA_ARGS__)
#define ExportSnapshotCallable(REQUEST)  SubmitCallable(&GameSparksClient::ExportSnapshot, REQUEST)

#define GetExtensionAsync(...)  SubmitAsync(&GameSparksClient::GetExtension, __VA_ARGS__)
#define GetExtensionCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetExtension, REQUEST)

#define GetExtensionVersionAsync(...)  SubmitAsync(&GameSparksClient::GetExtensionVersion, __VA_ARGS__)
#define GetExtensionVersionCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetExtensionVersion, REQUEST)

#define GetGameAsync(...)  SubmitAsync(&GameSparksClient::GetGame, __VA_ARGS__)
#define GetGameCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetGame, REQUEST)

#define GetGameConfigurationAsync(...)  SubmitAsync(&GameSparksClient::GetGameConfiguration, __VA_ARGS__)
#define GetGameConfigurationCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetGameConfiguration, REQUEST)

#define GetGeneratedCodeJobAsync(...)  SubmitAsync(&GameSparksClient::GetGeneratedCodeJob, __VA_ARGS__)
#define GetGeneratedCodeJobCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetGeneratedCodeJob, REQUEST)

#define GetPlayerConnectionStatusAsync(...)  SubmitAsync(&GameSparksClient::GetPlayerConnectionStatus, __VA_ARGS__)
#define GetPlayerConnectionStatusCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetPlayerConnectionStatus, REQUEST)

#define GetSnapshotAsync(...)  SubmitAsync(&GameSparksClient::GetSnapshot, __VA_ARGS__)
#define GetSnapshotCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetSnapshot, REQUEST)

#define GetStageAsync(...)  SubmitAsync(&GameSparksClient::GetStage, __VA_ARGS__)
#define GetStageCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetStage, REQUEST)

#define GetStageDeploymentAsync(...)  SubmitAsync(&GameSparksClient::GetStageDeployment, __VA_ARGS__)
#define GetStageDeploymentCallable(REQUEST)  SubmitCallable(&GameSparksClient::GetStageDeployment, REQUEST)

#define ImportGameConfigurationAsync(...)  SubmitAsync(&GameSparksClient::ImportGameConfiguration, __VA_ARGS__)
#define ImportGameConfigurationCallable(REQUEST)  SubmitCallable(&GameSparksClient::ImportGameConfiguration, REQUEST)

#define ListExtensionVersionsAsync(...)  SubmitAsync(&GameSparksClient::ListExtensionVersions, __VA_ARGS__)
#define ListExtensionVersionsCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListExtensionVersions, REQUEST)

#define ListExtensionsAsync(...)  SubmitAsync(&GameSparksClient::ListExtensions, __VA_ARGS__)
#define ListExtensionsCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListExtensions, REQUEST)

#define ListGamesAsync(...)  SubmitAsync(&GameSparksClient::ListGames, __VA_ARGS__)
#define ListGamesCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListGames, REQUEST)

#define ListGeneratedCodeJobsAsync(...)  SubmitAsync(&GameSparksClient::ListGeneratedCodeJobs, __VA_ARGS__)
#define ListGeneratedCodeJobsCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListGeneratedCodeJobs, REQUEST)

#define ListSnapshotsAsync(...)  SubmitAsync(&GameSparksClient::ListSnapshots, __VA_ARGS__)
#define ListSnapshotsCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListSnapshots, REQUEST)

#define ListStageDeploymentsAsync(...)  SubmitAsync(&GameSparksClient::ListStageDeployments, __VA_ARGS__)
#define ListStageDeploymentsCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListStageDeployments, REQUEST)

#define ListStagesAsync(...)  SubmitAsync(&GameSparksClient::ListStages, __VA_ARGS__)
#define ListStagesCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListStages, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GameSparksClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GameSparksClient::ListTagsForResource, REQUEST)

#define StartGeneratedCodeJobAsync(...)  SubmitAsync(&GameSparksClient::StartGeneratedCodeJob, __VA_ARGS__)
#define StartGeneratedCodeJobCallable(REQUEST)  SubmitCallable(&GameSparksClient::StartGeneratedCodeJob, REQUEST)

#define StartStageDeploymentAsync(...)  SubmitAsync(&GameSparksClient::StartStageDeployment, __VA_ARGS__)
#define StartStageDeploymentCallable(REQUEST)  SubmitCallable(&GameSparksClient::StartStageDeployment, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GameSparksClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GameSparksClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GameSparksClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GameSparksClient::UntagResource, REQUEST)

#define UpdateGameAsync(...)  SubmitAsync(&GameSparksClient::UpdateGame, __VA_ARGS__)
#define UpdateGameCallable(REQUEST)  SubmitCallable(&GameSparksClient::UpdateGame, REQUEST)

#define UpdateGameConfigurationAsync(...)  SubmitAsync(&GameSparksClient::UpdateGameConfiguration, __VA_ARGS__)
#define UpdateGameConfigurationCallable(REQUEST)  SubmitCallable(&GameSparksClient::UpdateGameConfiguration, REQUEST)

#define UpdateSnapshotAsync(...)  SubmitAsync(&GameSparksClient::UpdateSnapshot, __VA_ARGS__)
#define UpdateSnapshotCallable(REQUEST)  SubmitCallable(&GameSparksClient::UpdateSnapshot, REQUEST)

#define UpdateStageAsync(...)  SubmitAsync(&GameSparksClient::UpdateStage, __VA_ARGS__)
#define UpdateStageCallable(REQUEST)  SubmitCallable(&GameSparksClient::UpdateStage, REQUEST)

