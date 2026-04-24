/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TokenBasedTrigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

TokenBasedTrigger::TokenBasedTrigger(JsonView jsonValue) { *this = jsonValue; }

TokenBasedTrigger& TokenBasedTrigger::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tokenCount")) {
    m_tokenCount = jsonValue.GetInteger("tokenCount");
    m_tokenCountHasBeenSet = true;
  }
  return *this;
}

JsonValue TokenBasedTrigger::Jsonize() const {
  JsonValue payload;

  if (m_tokenCountHasBeenSet) {
    payload.WithInteger("tokenCount", m_tokenCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
