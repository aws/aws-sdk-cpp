/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RFTHyperParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

RFTHyperParameters::RFTHyperParameters(JsonView jsonValue) { *this = jsonValue; }

RFTHyperParameters& RFTHyperParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("epochCount")) {
    m_epochCount = jsonValue.GetInteger("epochCount");
    m_epochCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchSize")) {
    m_batchSize = jsonValue.GetInteger("batchSize");
    m_batchSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("learningRate")) {
    m_learningRate = jsonValue.GetDouble("learningRate");
    m_learningRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxPromptLength")) {
    m_maxPromptLength = jsonValue.GetInteger("maxPromptLength");
    m_maxPromptLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trainingSamplePerPrompt")) {
    m_trainingSamplePerPrompt = jsonValue.GetInteger("trainingSamplePerPrompt");
    m_trainingSamplePerPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inferenceMaxTokens")) {
    m_inferenceMaxTokens = jsonValue.GetInteger("inferenceMaxTokens");
    m_inferenceMaxTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasoningEffort")) {
    m_reasoningEffort = ReasoningEffortMapper::GetReasoningEffortForName(jsonValue.GetString("reasoningEffort"));
    m_reasoningEffortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evalInterval")) {
    m_evalInterval = jsonValue.GetInteger("evalInterval");
    m_evalIntervalHasBeenSet = true;
  }
  return *this;
}

JsonValue RFTHyperParameters::Jsonize() const {
  JsonValue payload;

  if (m_epochCountHasBeenSet) {
    payload.WithInteger("epochCount", m_epochCount);
  }

  if (m_batchSizeHasBeenSet) {
    payload.WithInteger("batchSize", m_batchSize);
  }

  if (m_learningRateHasBeenSet) {
    payload.WithDouble("learningRate", m_learningRate);
  }

  if (m_maxPromptLengthHasBeenSet) {
    payload.WithInteger("maxPromptLength", m_maxPromptLength);
  }

  if (m_trainingSamplePerPromptHasBeenSet) {
    payload.WithInteger("trainingSamplePerPrompt", m_trainingSamplePerPrompt);
  }

  if (m_inferenceMaxTokensHasBeenSet) {
    payload.WithInteger("inferenceMaxTokens", m_inferenceMaxTokens);
  }

  if (m_reasoningEffortHasBeenSet) {
    payload.WithString("reasoningEffort", ReasoningEffortMapper::GetNameForReasoningEffort(m_reasoningEffort));
  }

  if (m_evalIntervalHasBeenSet) {
    payload.WithInteger("evalInterval", m_evalInterval);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
