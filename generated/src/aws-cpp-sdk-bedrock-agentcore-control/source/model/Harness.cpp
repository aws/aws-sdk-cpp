/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Harness.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Harness::Harness(JsonView jsonValue) { *this = jsonValue; }

Harness& Harness::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("harnessId")) {
    m_harnessId = jsonValue.GetString("harnessId");
    m_harnessIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("harnessName")) {
    m_harnessName = jsonValue.GetString("harnessName");
    m_harnessNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = HarnessStatusMapper::GetHarnessStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("model")) {
    m_model = jsonValue.GetObject("model");
    m_modelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemPrompt")) {
    Aws::Utils::Array<JsonView> systemPromptJsonList = jsonValue.GetArray("systemPrompt");
    for (unsigned systemPromptIndex = 0; systemPromptIndex < systemPromptJsonList.GetLength(); ++systemPromptIndex) {
      m_systemPrompt.push_back(systemPromptJsonList[systemPromptIndex].AsObject());
    }
    m_systemPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tools")) {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for (unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex) {
      m_tools.push_back(toolsJsonList[toolsIndex].AsObject());
    }
    m_toolsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("skills")) {
    Aws::Utils::Array<JsonView> skillsJsonList = jsonValue.GetArray("skills");
    for (unsigned skillsIndex = 0; skillsIndex < skillsJsonList.GetLength(); ++skillsIndex) {
      m_skills.push_back(skillsJsonList[skillsIndex].AsObject());
    }
    m_skillsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedTools")) {
    Aws::Utils::Array<JsonView> allowedToolsJsonList = jsonValue.GetArray("allowedTools");
    for (unsigned allowedToolsIndex = 0; allowedToolsIndex < allowedToolsJsonList.GetLength(); ++allowedToolsIndex) {
      m_allowedTools.push_back(allowedToolsJsonList[allowedToolsIndex].AsString());
    }
    m_allowedToolsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("truncation")) {
    m_truncation = jsonValue.GetObject("truncation");
    m_truncationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environment")) {
    m_environment = jsonValue.GetObject("environment");
    m_environmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentArtifact")) {
    m_environmentArtifact = jsonValue.GetObject("environmentArtifact");
    m_environmentArtifactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentVariables")) {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for (auto& environmentVariablesItem : environmentVariablesJsonMap) {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizerConfiguration")) {
    m_authorizerConfiguration = jsonValue.GetObject("authorizerConfiguration");
    m_authorizerConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memory")) {
    m_memory = jsonValue.GetObject("memory");
    m_memoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxIterations")) {
    m_maxIterations = jsonValue.GetInteger("maxIterations");
    m_maxIterationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxTokens")) {
    m_maxTokens = jsonValue.GetInteger("maxTokens");
    m_maxTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutSeconds")) {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue Harness::Jsonize() const {
  JsonValue payload;

  if (m_harnessIdHasBeenSet) {
    payload.WithString("harnessId", m_harnessId);
  }

  if (m_harnessNameHasBeenSet) {
    payload.WithString("harnessName", m_harnessName);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", HarnessStatusMapper::GetNameForHarnessStatus(m_status));
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  if (m_truncationHasBeenSet) {
    payload.WithObject("truncation", m_truncation.Jsonize());
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

  if (m_memoryHasBeenSet) {
    payload.WithObject("memory", m_memory.Jsonize());
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

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", m_failureReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
