/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessMemoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessMemoryConfiguration::HarnessMemoryConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessMemoryConfiguration& HarnessMemoryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentCoreMemoryConfiguration")) {
    m_agentCoreMemoryConfiguration = jsonValue.GetObject("agentCoreMemoryConfiguration");
    m_agentCoreMemoryConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessMemoryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_agentCoreMemoryConfigurationHasBeenSet) {
    payload.WithObject("agentCoreMemoryConfiguration", m_agentCoreMemoryConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
