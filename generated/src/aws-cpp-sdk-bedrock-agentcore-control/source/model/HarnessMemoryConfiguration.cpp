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
  if (jsonValue.ValueExists("managedMemoryConfiguration")) {
    m_managedMemoryConfiguration = jsonValue.GetObject("managedMemoryConfiguration");
    m_managedMemoryConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disabled")) {
    m_disabled = jsonValue.GetObject("disabled");
    m_disabledHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessMemoryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_agentCoreMemoryConfigurationHasBeenSet) {
    payload.WithObject("agentCoreMemoryConfiguration", m_agentCoreMemoryConfiguration.Jsonize());
  }

  if (m_managedMemoryConfigurationHasBeenSet) {
    payload.WithObject("managedMemoryConfiguration", m_managedMemoryConfiguration.Jsonize());
  }

  if (m_disabledHasBeenSet) {
    payload.WithObject("disabled", m_disabled.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
