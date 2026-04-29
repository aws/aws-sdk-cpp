/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GroundTruthTurnInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GroundTruthTurnInput::GroundTruthTurnInput(JsonView jsonValue) { *this = jsonValue; }

GroundTruthTurnInput& GroundTruthTurnInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("prompt")) {
    m_prompt = jsonValue.GetString("prompt");
    m_promptHasBeenSet = true;
  }
  return *this;
}

JsonValue GroundTruthTurnInput::Jsonize() const {
  JsonValue payload;

  if (m_promptHasBeenSet) {
    payload.WithString("prompt", m_prompt);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
