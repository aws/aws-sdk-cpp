/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessMessageStartEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessMessageStartEvent::HarnessMessageStartEvent(JsonView jsonValue) { *this = jsonValue; }

HarnessMessageStartEvent& HarnessMessageStartEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("role")) {
    m_role = HarnessConversationRoleMapper::GetHarnessConversationRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessMessageStartEvent::Jsonize() const {
  JsonValue payload;

  if (m_roleHasBeenSet) {
    payload.WithString("role", HarnessConversationRoleMapper::GetNameForHarnessConversationRole(m_role));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
