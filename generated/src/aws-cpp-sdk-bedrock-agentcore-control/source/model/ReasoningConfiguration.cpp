/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ReasoningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ReasoningConfiguration::ReasoningConfiguration(JsonView jsonValue) { *this = jsonValue; }

ReasoningConfiguration& ReasoningConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("effort")) {
    m_effort = jsonValue.GetString("effort");
    m_effortHasBeenSet = true;
  }
  return *this;
}

JsonValue ReasoningConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_effortHasBeenSet) {
    payload.WithString("effort", m_effort);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
