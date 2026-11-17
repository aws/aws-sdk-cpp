/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationResults::GenerationResults(JsonView jsonValue) { *this = jsonValue; }

GenerationResults& GenerationResults::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionsMatched")) {
    m_sessionsMatched = jsonValue.GetInteger("sessionsMatched");
    m_sessionsMatchedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionsSelected")) {
    m_sessionsSelected = jsonValue.GetInteger("sessionsSelected");
    m_sessionsSelectedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionsUnscored")) {
    m_sessionsUnscored = jsonValue.GetInteger("sessionsUnscored");
    m_sessionsUnscoredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionsFailed")) {
    m_sessionsFailed = jsonValue.GetInteger("sessionsFailed");
    m_sessionsFailedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scenariosGenerated")) {
    m_scenariosGenerated = jsonValue.GetInteger("scenariosGenerated");
    m_scenariosGeneratedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scenariosDeduplicated")) {
    m_scenariosDeduplicated = jsonValue.GetInteger("scenariosDeduplicated");
    m_scenariosDeduplicatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("examplesWritten")) {
    m_examplesWritten = jsonValue.GetInteger("examplesWritten");
    m_examplesWrittenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("examplesWithGroundTruth")) {
    m_examplesWithGroundTruth = jsonValue.GetInteger("examplesWithGroundTruth");
    m_examplesWithGroundTruthHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationResults::Jsonize() const {
  JsonValue payload;

  if (m_sessionsMatchedHasBeenSet) {
    payload.WithInteger("sessionsMatched", m_sessionsMatched);
  }

  if (m_sessionsSelectedHasBeenSet) {
    payload.WithInteger("sessionsSelected", m_sessionsSelected);
  }

  if (m_sessionsUnscoredHasBeenSet) {
    payload.WithInteger("sessionsUnscored", m_sessionsUnscored);
  }

  if (m_sessionsFailedHasBeenSet) {
    payload.WithInteger("sessionsFailed", m_sessionsFailed);
  }

  if (m_scenariosGeneratedHasBeenSet) {
    payload.WithInteger("scenariosGenerated", m_scenariosGenerated);
  }

  if (m_scenariosDeduplicatedHasBeenSet) {
    payload.WithInteger("scenariosDeduplicated", m_scenariosDeduplicated);
  }

  if (m_examplesWrittenHasBeenSet) {
    payload.WithInteger("examplesWritten", m_examplesWritten);
  }

  if (m_examplesWithGroundTruthHasBeenSet) {
    payload.WithInteger("examplesWithGroundTruth", m_examplesWithGroundTruth);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
