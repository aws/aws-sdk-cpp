/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConnectorTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ConnectorTargetConfiguration::ConnectorTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectorTargetConfiguration& ConnectorTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabled")) {
    Aws::Utils::Array<JsonView> enabledJsonList = jsonValue.GetArray("enabled");
    for (unsigned enabledIndex = 0; enabledIndex < enabledJsonList.GetLength(); ++enabledIndex) {
      m_enabled.push_back(enabledJsonList[enabledIndex].AsString());
    }
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurations")) {
    Aws::Utils::Array<JsonView> configurationsJsonList = jsonValue.GetArray("configurations");
    for (unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex) {
      m_configurations.push_back(configurationsJsonList[configurationsIndex].AsObject());
    }
    m_configurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_enabledHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledJsonList(m_enabled.size());
    for (unsigned enabledIndex = 0; enabledIndex < enabledJsonList.GetLength(); ++enabledIndex) {
      enabledJsonList[enabledIndex].AsString(m_enabled[enabledIndex]);
    }
    payload.WithArray("enabled", std::move(enabledJsonList));
  }

  if (m_configurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
    for (unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex) {
      configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
    }
    payload.WithArray("configurations", std::move(configurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
