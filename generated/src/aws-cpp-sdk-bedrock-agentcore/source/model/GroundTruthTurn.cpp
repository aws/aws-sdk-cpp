/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GroundTruthTurn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GroundTruthTurn::GroundTruthTurn(JsonView jsonValue) { *this = jsonValue; }

GroundTruthTurn& GroundTruthTurn::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("input")) {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedResponse")) {
    m_expectedResponse = jsonValue.GetObject("expectedResponse");
    m_expectedResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue GroundTruthTurn::Jsonize() const {
  JsonValue payload;

  if (m_inputHasBeenSet) {
    payload.WithObject("input", m_input.Jsonize());
  }

  if (m_expectedResponseHasBeenSet) {
    payload.WithObject("expectedResponse", m_expectedResponse.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
