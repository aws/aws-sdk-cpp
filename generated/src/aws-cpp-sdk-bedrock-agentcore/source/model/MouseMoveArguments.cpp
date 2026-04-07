/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MouseMoveArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MouseMoveArguments::MouseMoveArguments(JsonView jsonValue) { *this = jsonValue; }

MouseMoveArguments& MouseMoveArguments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("x")) {
    m_x = jsonValue.GetInteger("x");
    m_xHasBeenSet = true;
  }
  if (jsonValue.ValueExists("y")) {
    m_y = jsonValue.GetInteger("y");
    m_yHasBeenSet = true;
  }
  return *this;
}

JsonValue MouseMoveArguments::Jsonize() const {
  JsonValue payload;

  if (m_xHasBeenSet) {
    payload.WithInteger("x", m_x);
  }

  if (m_yHasBeenSet) {
    payload.WithInteger("y", m_y);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
