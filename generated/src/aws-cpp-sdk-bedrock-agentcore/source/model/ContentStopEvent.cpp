/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ContentStopEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ContentStopEvent::ContentStopEvent(JsonView jsonValue) { *this = jsonValue; }

ContentStopEvent& ContentStopEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exitCode")) {
    m_exitCode = jsonValue.GetInteger("exitCode");
    m_exitCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CommandExecutionStatusMapper::GetCommandExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentStopEvent::Jsonize() const {
  JsonValue payload;

  if (m_exitCodeHasBeenSet) {
    payload.WithInteger("exitCode", m_exitCode);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CommandExecutionStatusMapper::GetNameForCommandExecutionStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
