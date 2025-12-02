/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluatorModelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EvaluatorModelConfig::EvaluatorModelConfig(JsonView jsonValue) { *this = jsonValue; }

EvaluatorModelConfig& EvaluatorModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bedrockEvaluatorModelConfig")) {
    m_bedrockEvaluatorModelConfig = jsonValue.GetObject("bedrockEvaluatorModelConfig");
    m_bedrockEvaluatorModelConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_bedrockEvaluatorModelConfigHasBeenSet) {
    payload.WithObject("bedrockEvaluatorModelConfig", m_bedrockEvaluatorModelConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
