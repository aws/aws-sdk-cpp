/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveWarning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveWarning::AgenticRetrieveWarning(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveWarning& AgenticRetrieveWarning::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("guardrail")) {
    m_guardrail = jsonValue.GetObject("guardrail");
    m_guardrailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetObject("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveWarning::Jsonize() const {
  JsonValue payload;

  if (m_guardrailHasBeenSet) {
    payload.WithObject("guardrail", m_guardrail.Jsonize());
  }

  if (m_messageHasBeenSet) {
    payload.WithObject("message", m_message.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
