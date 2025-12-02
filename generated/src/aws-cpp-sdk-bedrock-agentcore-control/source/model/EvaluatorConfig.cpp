/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluatorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EvaluatorConfig::EvaluatorConfig(JsonView jsonValue) { *this = jsonValue; }

EvaluatorConfig& EvaluatorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("llmAsAJudge")) {
    m_llmAsAJudge = jsonValue.GetObject("llmAsAJudge");
    m_llmAsAJudgeHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorConfig::Jsonize() const {
  JsonValue payload;

  if (m_llmAsAJudgeHasBeenSet) {
    payload.WithObject("llmAsAJudge", m_llmAsAJudge.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
