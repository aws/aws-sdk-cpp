/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessToolResultBlockStart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessToolResultBlockStart::HarnessToolResultBlockStart(JsonView jsonValue) { *this = jsonValue; }

HarnessToolResultBlockStart& HarnessToolResultBlockStart::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolUseId")) {
    m_toolUseId = jsonValue.GetString("toolUseId");
    m_toolUseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = HarnessToolUseStatusMapper::GetHarnessToolUseStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessToolResultBlockStart::Jsonize() const {
  JsonValue payload;

  if (m_toolUseIdHasBeenSet) {
    payload.WithString("toolUseId", m_toolUseId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", HarnessToolUseStatusMapper::GetNameForHarnessToolUseStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
