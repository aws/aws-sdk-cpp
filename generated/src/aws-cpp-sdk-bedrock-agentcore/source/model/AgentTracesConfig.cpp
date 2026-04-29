/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentTracesConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AgentTracesConfig::AgentTracesConfig(JsonView jsonValue) { *this = jsonValue; }

AgentTracesConfig& AgentTracesConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionSpans")) {
    Aws::Utils::Array<JsonView> sessionSpansJsonList = jsonValue.GetArray("sessionSpans");
    for (unsigned sessionSpansIndex = 0; sessionSpansIndex < sessionSpansJsonList.GetLength(); ++sessionSpansIndex) {
      m_sessionSpans.push_back(sessionSpansJsonList[sessionSpansIndex].AsObject());
    }
    m_sessionSpansHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudwatchLogs")) {
    m_cloudwatchLogs = jsonValue.GetObject("cloudwatchLogs");
    m_cloudwatchLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentTracesConfig::Jsonize() const {
  JsonValue payload;

  if (m_sessionSpansHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionSpansJsonList(m_sessionSpans.size());
    for (unsigned sessionSpansIndex = 0; sessionSpansIndex < sessionSpansJsonList.GetLength(); ++sessionSpansIndex) {
      sessionSpansJsonList[sessionSpansIndex].AsObject(m_sessionSpans[sessionSpansIndex].View());
    }
    payload.WithArray("sessionSpans", std::move(sessionSpansJsonList));
  }

  if (m_cloudwatchLogsHasBeenSet) {
    payload.WithObject("cloudwatchLogs", m_cloudwatchLogs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
