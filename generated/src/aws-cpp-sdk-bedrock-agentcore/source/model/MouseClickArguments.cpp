/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MouseClickArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MouseClickArguments::MouseClickArguments(JsonView jsonValue) { *this = jsonValue; }

MouseClickArguments& MouseClickArguments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("x")) {
    m_x = jsonValue.GetInteger("x");
    m_xHasBeenSet = true;
  }
  if (jsonValue.ValueExists("y")) {
    m_y = jsonValue.GetInteger("y");
    m_yHasBeenSet = true;
  }
  if (jsonValue.ValueExists("button")) {
    m_button = MouseButtonMapper::GetMouseButtonForName(jsonValue.GetString("button"));
    m_buttonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clickCount")) {
    m_clickCount = jsonValue.GetInteger("clickCount");
    m_clickCountHasBeenSet = true;
  }
  return *this;
}

JsonValue MouseClickArguments::Jsonize() const {
  JsonValue payload;

  if (m_xHasBeenSet) {
    payload.WithInteger("x", m_x);
  }

  if (m_yHasBeenSet) {
    payload.WithInteger("y", m_y);
  }

  if (m_buttonHasBeenSet) {
    payload.WithString("button", MouseButtonMapper::GetNameForMouseButton(m_button));
  }

  if (m_clickCountHasBeenSet) {
    payload.WithInteger("clickCount", m_clickCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
