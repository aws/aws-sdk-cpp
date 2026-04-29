/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SessionMetadataShape.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SessionMetadataShape::SessionMetadataShape(JsonView jsonValue) { *this = jsonValue; }

SessionMetadataShape& SessionMetadataShape::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testScenarioId")) {
    m_testScenarioId = jsonValue.GetString("testScenarioId");
    m_testScenarioIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groundTruth")) {
    m_groundTruth = jsonValue.GetObject("groundTruth");
    m_groundTruthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionMetadataShape::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_testScenarioIdHasBeenSet) {
    payload.WithString("testScenarioId", m_testScenarioId);
  }

  if (m_groundTruthHasBeenSet) {
    payload.WithObject("groundTruth", m_groundTruth.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
