/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeHarnessRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String InvokeHarnessRequest::SerializePayload() const {
  JsonValue payload;

  if (m_messagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
    }
    payload.WithArray("messages", std::move(messagesJsonList));
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

  if (m_maxIterationsHasBeenSet) {
    payload.WithInteger("maxIterations", m_maxIterations);
  }

  if (m_maxTokensHasBeenSet) {
    payload.WithInteger("maxTokens", m_maxTokens);
  }

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInteger("timeoutSeconds", m_timeoutSeconds);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InvokeHarnessRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_runtimeSessionIdHasBeenSet) {
    ss << m_runtimeSessionId;
    headers.emplace("x-amzn-bedrock-agentcore-runtime-session-id", ss.str());
    ss.str("");
  }

  return headers;
}

void InvokeHarnessRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_harnessArnHasBeenSet) {
    ss << m_harnessArn;
    uri.AddQueryStringParameter("harnessArn", ss.str());
    ss.str("");
  }
}
