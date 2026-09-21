/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessAfterInvocationHook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessAfterInvocationHook::HarnessAfterInvocationHook(JsonView jsonValue) { *this = jsonValue; }

HarnessAfterInvocationHook& HarnessAfterInvocationHook::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessAfterInvocationHook::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
