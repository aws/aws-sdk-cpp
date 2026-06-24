/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrievePolicyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrievePolicyConfiguration::AgenticRetrievePolicyConfiguration(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrievePolicyConfiguration& AgenticRetrievePolicyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bedrockGuardrailConfiguration")) {
    m_bedrockGuardrailConfiguration = jsonValue.GetObject("bedrockGuardrailConfiguration");
    m_bedrockGuardrailConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrievePolicyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bedrockGuardrailConfigurationHasBeenSet) {
    payload.WithObject("bedrockGuardrailConfiguration", m_bedrockGuardrailConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
