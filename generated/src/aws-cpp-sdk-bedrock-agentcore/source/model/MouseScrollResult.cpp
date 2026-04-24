/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MouseScrollResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MouseScrollResult::MouseScrollResult(JsonView jsonValue) { *this = jsonValue; }

MouseScrollResult& MouseScrollResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = BrowserActionStatusMapper::GetBrowserActionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue MouseScrollResult::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", BrowserActionStatusMapper::GetNameForBrowserActionStatus(m_status));
  }

  if (m_errorHasBeenSet) {
    payload.WithString("error", m_error);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
