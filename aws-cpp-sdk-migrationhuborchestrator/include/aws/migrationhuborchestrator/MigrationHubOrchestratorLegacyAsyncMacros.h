/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateWorkflowAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::CreateWorkflow, __VA_ARGS__)
#define CreateWorkflowCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::CreateWorkflow, REQUEST)

#define CreateWorkflowStepAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::CreateWorkflowStep, __VA_ARGS__)
#define CreateWorkflowStepCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::CreateWorkflowStep, REQUEST)

#define CreateWorkflowStepGroupAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::CreateWorkflowStepGroup, __VA_ARGS__)
#define CreateWorkflowStepGroupCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::CreateWorkflowStepGroup, REQUEST)

#define DeleteWorkflowAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::DeleteWorkflow, __VA_ARGS__)
#define DeleteWorkflowCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::DeleteWorkflow, REQUEST)

#define DeleteWorkflowStepAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::DeleteWorkflowStep, __VA_ARGS__)
#define DeleteWorkflowStepCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::DeleteWorkflowStep, REQUEST)

#define DeleteWorkflowStepGroupAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::DeleteWorkflowStepGroup, __VA_ARGS__)
#define DeleteWorkflowStepGroupCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::DeleteWorkflowStepGroup, REQUEST)

#define GetTemplateAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::GetTemplate, __VA_ARGS__)
#define GetTemplateCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::GetTemplate, REQUEST)

#define GetTemplateStepAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::GetTemplateStep, __VA_ARGS__)
#define GetTemplateStepCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::GetTemplateStep, REQUEST)

#define GetTemplateStepGroupAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::GetTemplateStepGroup, __VA_ARGS__)
#define GetTemplateStepGroupCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::GetTemplateStepGroup, REQUEST)

#define GetWorkflowAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::GetWorkflow, __VA_ARGS__)
#define GetWorkflowCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::GetWorkflow, REQUEST)

#define GetWorkflowStepAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::GetWorkflowStep, __VA_ARGS__)
#define GetWorkflowStepCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::GetWorkflowStep, REQUEST)

#define GetWorkflowStepGroupAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::GetWorkflowStepGroup, __VA_ARGS__)
#define GetWorkflowStepGroupCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::GetWorkflowStepGroup, REQUEST)

#define ListPluginsAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListPlugins, __VA_ARGS__)
#define ListPluginsCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListPlugins, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListTagsForResource, REQUEST)

#define ListTemplateStepGroupsAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListTemplateStepGroups, __VA_ARGS__)
#define ListTemplateStepGroupsCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListTemplateStepGroups, REQUEST)

#define ListTemplateStepsAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListTemplateSteps, __VA_ARGS__)
#define ListTemplateStepsCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListTemplateSteps, REQUEST)

#define ListTemplatesAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListTemplates, __VA_ARGS__)
#define ListTemplatesCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListTemplates, REQUEST)

#define ListWorkflowStepGroupsAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListWorkflowStepGroups, __VA_ARGS__)
#define ListWorkflowStepGroupsCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListWorkflowStepGroups, REQUEST)

#define ListWorkflowStepsAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListWorkflowSteps, __VA_ARGS__)
#define ListWorkflowStepsCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListWorkflowSteps, REQUEST)

#define ListWorkflowsAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::ListWorkflows, __VA_ARGS__)
#define ListWorkflowsCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::ListWorkflows, REQUEST)

#define RetryWorkflowStepAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::RetryWorkflowStep, __VA_ARGS__)
#define RetryWorkflowStepCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::RetryWorkflowStep, REQUEST)

#define StartWorkflowAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::StartWorkflow, __VA_ARGS__)
#define StartWorkflowCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::StartWorkflow, REQUEST)

#define StopWorkflowAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::StopWorkflow, __VA_ARGS__)
#define StopWorkflowCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::StopWorkflow, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::UntagResource, REQUEST)

#define UpdateWorkflowAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::UpdateWorkflow, __VA_ARGS__)
#define UpdateWorkflowCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::UpdateWorkflow, REQUEST)

#define UpdateWorkflowStepAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::UpdateWorkflowStep, __VA_ARGS__)
#define UpdateWorkflowStepCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::UpdateWorkflowStep, REQUEST)

#define UpdateWorkflowStepGroupAsync(...)  SubmitAsync(&MigrationHubOrchestratorClient::UpdateWorkflowStepGroup, __VA_ARGS__)
#define UpdateWorkflowStepGroupCallable(REQUEST)  SubmitCallable(&MigrationHubOrchestratorClient::UpdateWorkflowStepGroup, REQUEST)

