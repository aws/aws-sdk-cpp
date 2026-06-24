/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveBedrockGuardrailConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveBedrockGuardrailConfiguration::AgenticRetrieveBedrockGuardrailConfiguration(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveBedrockGuardrailConfiguration& AgenticRetrieveBedrockGuardrailConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("guardrailId")) {
    m_guardrailId = jsonValue.GetString("guardrailId");
    m_guardrailIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailVersion")) {
    m_guardrailVersion = jsonValue.GetString("guardrailVersion");
    m_guardrailVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveBedrockGuardrailConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_guardrailIdHasBeenSet) {
    payload.WithString("guardrailId", m_guardrailId);
  }

  if (m_guardrailVersionHasBeenSet) {
    payload.WithString("guardrailVersion", m_guardrailVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
