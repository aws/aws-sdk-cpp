/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreMemoryRetrievalConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessAgentCoreMemoryRetrievalConfig::HarnessAgentCoreMemoryRetrievalConfig(JsonView jsonValue) { *this = jsonValue; }

HarnessAgentCoreMemoryRetrievalConfig& HarnessAgentCoreMemoryRetrievalConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("topK")) {
    m_topK = jsonValue.GetInteger("topK");
    m_topKHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relevanceScore")) {
    m_relevanceScore = jsonValue.GetDouble("relevanceScore");
    m_relevanceScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("strategyId")) {
    m_strategyId = jsonValue.GetString("strategyId");
    m_strategyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessAgentCoreMemoryRetrievalConfig::Jsonize() const {
  JsonValue payload;

  if (m_topKHasBeenSet) {
    payload.WithInteger("topK", m_topK);
  }

  if (m_relevanceScoreHasBeenSet) {
    payload.WithDouble("relevanceScore", m_relevanceScore);
  }

  if (m_strategyIdHasBeenSet) {
    payload.WithString("strategyId", m_strategyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
