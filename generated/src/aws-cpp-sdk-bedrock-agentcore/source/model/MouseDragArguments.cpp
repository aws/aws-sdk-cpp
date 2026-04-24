/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MouseDragArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MouseDragArguments::MouseDragArguments(JsonView jsonValue) { *this = jsonValue; }

MouseDragArguments& MouseDragArguments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endX")) {
    m_endX = jsonValue.GetInteger("endX");
    m_endXHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endY")) {
    m_endY = jsonValue.GetInteger("endY");
    m_endYHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startX")) {
    m_startX = jsonValue.GetInteger("startX");
    m_startXHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startY")) {
    m_startY = jsonValue.GetInteger("startY");
    m_startYHasBeenSet = true;
  }
  if (jsonValue.ValueExists("button")) {
    m_button = MouseButtonMapper::GetMouseButtonForName(jsonValue.GetString("button"));
    m_buttonHasBeenSet = true;
  }
  return *this;
}

JsonValue MouseDragArguments::Jsonize() const {
  JsonValue payload;

  if (m_endXHasBeenSet) {
    payload.WithInteger("endX", m_endX);
  }

  if (m_endYHasBeenSet) {
    payload.WithInteger("endY", m_endY);
  }

  if (m_startXHasBeenSet) {
    payload.WithInteger("startX", m_startX);
  }

  if (m_startYHasBeenSet) {
    payload.WithInteger("startY", m_startY);
  }

  if (m_buttonHasBeenSet) {
    payload.WithString("button", MouseButtonMapper::GetNameForMouseButton(m_button));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
