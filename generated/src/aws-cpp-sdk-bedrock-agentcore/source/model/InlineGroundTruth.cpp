/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InlineGroundTruth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InlineGroundTruth::InlineGroundTruth(JsonView jsonValue) { *this = jsonValue; }

InlineGroundTruth& InlineGroundTruth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assertions")) {
    Aws::Utils::Array<JsonView> assertionsJsonList = jsonValue.GetArray("assertions");
    for (unsigned assertionsIndex = 0; assertionsIndex < assertionsJsonList.GetLength(); ++assertionsIndex) {
      m_assertions.push_back(assertionsJsonList[assertionsIndex].AsObject());
    }
    m_assertionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedTrajectory")) {
    m_expectedTrajectory = jsonValue.GetObject("expectedTrajectory");
    m_expectedTrajectoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("turns")) {
    Aws::Utils::Array<JsonView> turnsJsonList = jsonValue.GetArray("turns");
    for (unsigned turnsIndex = 0; turnsIndex < turnsJsonList.GetLength(); ++turnsIndex) {
      m_turns.push_back(turnsJsonList[turnsIndex].AsObject());
    }
    m_turnsHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineGroundTruth::Jsonize() const {
  JsonValue payload;

  if (m_assertionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assertionsJsonList(m_assertions.size());
    for (unsigned assertionsIndex = 0; assertionsIndex < assertionsJsonList.GetLength(); ++assertionsIndex) {
      assertionsJsonList[assertionsIndex].AsObject(m_assertions[assertionsIndex].Jsonize());
    }
    payload.WithArray("assertions", std::move(assertionsJsonList));
  }

  if (m_expectedTrajectoryHasBeenSet) {
    payload.WithObject("expectedTrajectory", m_expectedTrajectory.Jsonize());
  }

  if (m_turnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> turnsJsonList(m_turns.size());
    for (unsigned turnsIndex = 0; turnsIndex < turnsJsonList.GetLength(); ++turnsIndex) {
      turnsJsonList[turnsIndex].AsObject(m_turns[turnsIndex].Jsonize());
    }
    payload.WithArray("turns", std::move(turnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
