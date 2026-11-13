/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LifecycleHook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LifecycleHook::LifecycleHook(JsonView jsonValue) { *this = jsonValue; }

LifecycleHook& LifecycleHook::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("action")) {
    m_action = jsonValue.GetObject("action");
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecycleHook::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithObject("action", m_action.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
