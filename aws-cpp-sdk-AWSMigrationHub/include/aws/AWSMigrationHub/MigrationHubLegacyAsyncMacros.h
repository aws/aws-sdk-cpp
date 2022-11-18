/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateCreatedArtifactAsync(...)  SubmitAsync(&MigrationHubClient::AssociateCreatedArtifact, __VA_ARGS__)
#define AssociateCreatedArtifactCallable(REQUEST)  SubmitCallable(&MigrationHubClient::AssociateCreatedArtifact, REQUEST)

#define AssociateDiscoveredResourceAsync(...)  SubmitAsync(&MigrationHubClient::AssociateDiscoveredResource, __VA_ARGS__)
#define AssociateDiscoveredResourceCallable(REQUEST)  SubmitCallable(&MigrationHubClient::AssociateDiscoveredResource, REQUEST)

#define CreateProgressUpdateStreamAsync(...)  SubmitAsync(&MigrationHubClient::CreateProgressUpdateStream, __VA_ARGS__)
#define CreateProgressUpdateStreamCallable(REQUEST)  SubmitCallable(&MigrationHubClient::CreateProgressUpdateStream, REQUEST)

#define DeleteProgressUpdateStreamAsync(...)  SubmitAsync(&MigrationHubClient::DeleteProgressUpdateStream, __VA_ARGS__)
#define DeleteProgressUpdateStreamCallable(REQUEST)  SubmitCallable(&MigrationHubClient::DeleteProgressUpdateStream, REQUEST)

#define DescribeApplicationStateAsync(...)  SubmitAsync(&MigrationHubClient::DescribeApplicationState, __VA_ARGS__)
#define DescribeApplicationStateCallable(REQUEST)  SubmitCallable(&MigrationHubClient::DescribeApplicationState, REQUEST)

#define DescribeMigrationTaskAsync(...)  SubmitAsync(&MigrationHubClient::DescribeMigrationTask, __VA_ARGS__)
#define DescribeMigrationTaskCallable(REQUEST)  SubmitCallable(&MigrationHubClient::DescribeMigrationTask, REQUEST)

#define DisassociateCreatedArtifactAsync(...)  SubmitAsync(&MigrationHubClient::DisassociateCreatedArtifact, __VA_ARGS__)
#define DisassociateCreatedArtifactCallable(REQUEST)  SubmitCallable(&MigrationHubClient::DisassociateCreatedArtifact, REQUEST)

#define DisassociateDiscoveredResourceAsync(...)  SubmitAsync(&MigrationHubClient::DisassociateDiscoveredResource, __VA_ARGS__)
#define DisassociateDiscoveredResourceCallable(REQUEST)  SubmitCallable(&MigrationHubClient::DisassociateDiscoveredResource, REQUEST)

#define ImportMigrationTaskAsync(...)  SubmitAsync(&MigrationHubClient::ImportMigrationTask, __VA_ARGS__)
#define ImportMigrationTaskCallable(REQUEST)  SubmitCallable(&MigrationHubClient::ImportMigrationTask, REQUEST)

#define ListApplicationStatesAsync(...)  SubmitAsync(&MigrationHubClient::ListApplicationStates, __VA_ARGS__)
#define ListApplicationStatesCallable(REQUEST)  SubmitCallable(&MigrationHubClient::ListApplicationStates, REQUEST)

#define ListCreatedArtifactsAsync(...)  SubmitAsync(&MigrationHubClient::ListCreatedArtifacts, __VA_ARGS__)
#define ListCreatedArtifactsCallable(REQUEST)  SubmitCallable(&MigrationHubClient::ListCreatedArtifacts, REQUEST)

#define ListDiscoveredResourcesAsync(...)  SubmitAsync(&MigrationHubClient::ListDiscoveredResources, __VA_ARGS__)
#define ListDiscoveredResourcesCallable(REQUEST)  SubmitCallable(&MigrationHubClient::ListDiscoveredResources, REQUEST)

#define ListMigrationTasksAsync(...)  SubmitAsync(&MigrationHubClient::ListMigrationTasks, __VA_ARGS__)
#define ListMigrationTasksCallable(REQUEST)  SubmitCallable(&MigrationHubClient::ListMigrationTasks, REQUEST)

#define ListProgressUpdateStreamsAsync(...)  SubmitAsync(&MigrationHubClient::ListProgressUpdateStreams, __VA_ARGS__)
#define ListProgressUpdateStreamsCallable(REQUEST)  SubmitCallable(&MigrationHubClient::ListProgressUpdateStreams, REQUEST)

#define NotifyApplicationStateAsync(...)  SubmitAsync(&MigrationHubClient::NotifyApplicationState, __VA_ARGS__)
#define NotifyApplicationStateCallable(REQUEST)  SubmitCallable(&MigrationHubClient::NotifyApplicationState, REQUEST)

#define NotifyMigrationTaskStateAsync(...)  SubmitAsync(&MigrationHubClient::NotifyMigrationTaskState, __VA_ARGS__)
#define NotifyMigrationTaskStateCallable(REQUEST)  SubmitCallable(&MigrationHubClient::NotifyMigrationTaskState, REQUEST)

#define PutResourceAttributesAsync(...)  SubmitAsync(&MigrationHubClient::PutResourceAttributes, __VA_ARGS__)
#define PutResourceAttributesCallable(REQUEST)  SubmitCallable(&MigrationHubClient::PutResourceAttributes, REQUEST)

