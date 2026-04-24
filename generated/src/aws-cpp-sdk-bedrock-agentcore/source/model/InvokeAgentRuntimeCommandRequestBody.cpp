/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeCommandRequestBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InvokeAgentRuntimeCommandRequestBody::InvokeAgentRuntimeCommandRequestBody(JsonView jsonValue) { *this = jsonValue; }

InvokeAgentRuntimeCommandRequestBody& InvokeAgentRuntimeCommandRequestBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("command")) {
    m_command = jsonValue.GetString("command");
    m_commandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeout")) {
    m_timeout = jsonValue.GetInteger("timeout");
    m_timeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue InvokeAgentRuntimeCommandRequestBody::Jsonize() const {
  JsonValue payload;

  if (m_commandHasBeenSet) {
    payload.WithString("command", m_command);
  }

  if (m_timeoutHasBeenSet) {
    payload.WithInteger("timeout", m_timeout);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
