/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationSamplingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationSamplingConfig::GenerationSamplingConfig(JsonView jsonValue) { *this = jsonValue; }

GenerationSamplingConfig& GenerationSamplingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxScenarios")) {
    m_maxScenarios = jsonValue.GetInteger("maxScenarios");
    m_maxScenariosHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationSamplingConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxScenariosHasBeenSet) {
    payload.WithInteger("maxScenarios", m_maxScenarios);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
