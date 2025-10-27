/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MessageBasedTriggerInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

MessageBasedTriggerInput::MessageBasedTriggerInput(JsonView jsonValue) { *this = jsonValue; }

MessageBasedTriggerInput& MessageBasedTriggerInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("messageCount")) {
    m_messageCount = jsonValue.GetInteger("messageCount");
    m_messageCountHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageBasedTriggerInput::Jsonize() const {
  JsonValue payload;

  if (m_messageCountHasBeenSet) {
    payload.WithInteger("messageCount", m_messageCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
