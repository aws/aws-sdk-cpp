/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MouseScrollArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MouseScrollArguments::MouseScrollArguments(JsonView jsonValue) { *this = jsonValue; }

MouseScrollArguments& MouseScrollArguments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("x")) {
    m_x = jsonValue.GetInteger("x");
    m_xHasBeenSet = true;
  }
  if (jsonValue.ValueExists("y")) {
    m_y = jsonValue.GetInteger("y");
    m_yHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deltaX")) {
    m_deltaX = jsonValue.GetInteger("deltaX");
    m_deltaXHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deltaY")) {
    m_deltaY = jsonValue.GetInteger("deltaY");
    m_deltaYHasBeenSet = true;
  }
  return *this;
}

JsonValue MouseScrollArguments::Jsonize() const {
  JsonValue payload;

  if (m_xHasBeenSet) {
    payload.WithInteger("x", m_x);
  }

  if (m_yHasBeenSet) {
    payload.WithInteger("y", m_y);
  }

  if (m_deltaXHasBeenSet) {
    payload.WithInteger("deltaX", m_deltaX);
  }

  if (m_deltaYHasBeenSet) {
    payload.WithInteger("deltaY", m_deltaY);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
