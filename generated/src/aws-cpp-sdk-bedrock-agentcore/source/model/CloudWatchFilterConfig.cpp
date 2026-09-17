/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CloudWatchFilterConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CloudWatchFilterConfig::CloudWatchFilterConfig(JsonView jsonValue) { *this = jsonValue; }

CloudWatchFilterConfig& CloudWatchFilterConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionIds")) {
    Aws::Utils::Array<JsonView> sessionIdsJsonList = jsonValue.GetArray("sessionIds");
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      m_sessionIds.push_back(sessionIdsJsonList[sessionIdsIndex].AsString());
    }
    m_sessionIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeRange")) {
    m_timeRange = jsonValue.GetObject("timeRange");
    m_timeRangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionTraceIds")) {
    Aws::Utils::Array<JsonView> sessionTraceIdsJsonList = jsonValue.GetArray("sessionTraceIds");
    for (unsigned sessionTraceIdsIndex = 0; sessionTraceIdsIndex < sessionTraceIdsJsonList.GetLength(); ++sessionTraceIdsIndex) {
      m_sessionTraceIds.push_back(sessionTraceIdsJsonList[sessionTraceIdsIndex].AsObject());
    }
    m_sessionTraceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchFilterConfig::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionIdsJsonList(m_sessionIds.size());
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      sessionIdsJsonList[sessionIdsIndex].AsString(m_sessionIds[sessionIdsIndex]);
    }
    payload.WithArray("sessionIds", std::move(sessionIdsJsonList));
  }

  if (m_timeRangeHasBeenSet) {
    payload.WithObject("timeRange", m_timeRange.Jsonize());
  }

  if (m_sessionTraceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionTraceIdsJsonList(m_sessionTraceIds.size());
    for (unsigned sessionTraceIdsIndex = 0; sessionTraceIdsIndex < sessionTraceIdsJsonList.GetLength(); ++sessionTraceIdsIndex) {
      sessionTraceIdsJsonList[sessionTraceIdsIndex].AsObject(m_sessionTraceIds[sessionTraceIdsIndex].Jsonize());
    }
    payload.WithArray("sessionTraceIds", std::move(sessionTraceIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
