/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessHook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessHook::HarnessHook(JsonView jsonValue) { *this = jsonValue; }

HarnessHook& HarnessHook::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("beforeInvocation")) {
    m_beforeInvocation = jsonValue.GetObject("beforeInvocation");
    m_beforeInvocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterInvocation")) {
    m_afterInvocation = jsonValue.GetObject("afterInvocation");
    m_afterInvocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("beforeToolCall")) {
    m_beforeToolCall = jsonValue.GetObject("beforeToolCall");
    m_beforeToolCallHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterToolCall")) {
    m_afterToolCall = jsonValue.GetObject("afterToolCall");
    m_afterToolCallHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessHook::Jsonize() const {
  JsonValue payload;

  if (m_beforeInvocationHasBeenSet) {
    payload.WithObject("beforeInvocation", m_beforeInvocation.Jsonize());
  }

  if (m_afterInvocationHasBeenSet) {
    payload.WithObject("afterInvocation", m_afterInvocation.Jsonize());
  }

  if (m_beforeToolCallHasBeenSet) {
    payload.WithObject("beforeToolCall", m_beforeToolCall.Jsonize());
  }

  if (m_afterToolCallHasBeenSet) {
    payload.WithObject("afterToolCall", m_afterToolCall.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
