/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateHarnessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateHarnessRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_environmentHasBeenSet) {
    payload.WithObject("environment", m_environment.Jsonize());
  }

  if (m_environmentArtifactHasBeenSet) {
    payload.WithObject("environmentArtifact", m_environmentArtifact.Jsonize());
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));
  }

  if (m_authorizerConfigurationHasBeenSet) {
    payload.WithObject("authorizerConfiguration", m_authorizerConfiguration.Jsonize());
  }

  if (m_modelHasBeenSet) {
    payload.WithObject("model", m_model.Jsonize());
  }

  if (m_systemPromptHasBeenSet) {
    Aws::Utils::Array<JsonValue> systemPromptJsonList(m_systemPrompt.size());
    for (unsigned systemPromptIndex = 0; systemPromptIndex < systemPromptJsonList.GetLength(); ++systemPromptIndex) {
      systemPromptJsonList[systemPromptIndex].AsObject(m_systemPrompt[systemPromptIndex].Jsonize());
    }
    payload.WithArray("systemPrompt", std::move(systemPromptJsonList));
  }

  if (m_toolsHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolsJsonList(m_tools.size());
    for (unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex) {
      toolsJsonList[toolsIndex].AsObject(m_tools[toolsIndex].Jsonize());
    }
    payload.WithArray("tools", std::move(toolsJsonList));
  }

  if (m_skillsHasBeenSet) {
    Aws::Utils::Array<JsonValue> skillsJsonList(m_skills.size());
    for (unsigned skillsIndex = 0; skillsIndex < skillsJsonList.GetLength(); ++skillsIndex) {
      skillsJsonList[skillsIndex].AsObject(m_skills[skillsIndex].Jsonize());
    }
    payload.WithArray("skills", std::move(skillsJsonList));
  }

  if (m_allowedToolsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedToolsJsonList(m_allowedTools.size());
    for (unsigned allowedToolsIndex = 0; allowedToolsIndex < allowedToolsJsonList.GetLength(); ++allowedToolsIndex) {
      allowedToolsJsonList[allowedToolsIndex].AsString(m_allowedTools[allowedToolsIndex]);
    }
    payload.WithArray("allowedTools", std::move(allowedToolsJsonList));
  }

  if (m_memoryHasBeenSet) {
    payload.WithObject("memory", m_memory.Jsonize());
  }

  if (m_truncationHasBeenSet) {
    payload.WithObject("truncation", m_truncation.Jsonize());
  }

  if (m_maxIterationsHasBeenSet) {
    payload.WithInteger("maxIterations", m_maxIterations);
  }

  if (m_maxTokensHasBeenSet) {
    payload.WithInteger("maxTokens", m_maxTokens);
  }

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInteger("timeoutSeconds", m_timeoutSeconds);
  }

  return payload.View().WriteReadable();
}
