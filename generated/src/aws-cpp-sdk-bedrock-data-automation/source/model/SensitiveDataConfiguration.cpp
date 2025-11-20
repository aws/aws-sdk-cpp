/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/SensitiveDataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

SensitiveDataConfiguration::SensitiveDataConfiguration(JsonView jsonValue) { *this = jsonValue; }

SensitiveDataConfiguration& SensitiveDataConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("detectionMode")) {
    m_detectionMode = SensitiveDataDetectionModeMapper::GetSensitiveDataDetectionModeForName(jsonValue.GetString("detectionMode"));
    m_detectionModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detectionScope")) {
    Aws::Utils::Array<JsonView> detectionScopeJsonList = jsonValue.GetArray("detectionScope");
    for (unsigned detectionScopeIndex = 0; detectionScopeIndex < detectionScopeJsonList.GetLength(); ++detectionScopeIndex) {
      m_detectionScope.push_back(SensitiveDataDetectionScopeTypeMapper::GetSensitiveDataDetectionScopeTypeForName(
          detectionScopeJsonList[detectionScopeIndex].AsString()));
    }
    m_detectionScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("piiEntitiesConfiguration")) {
    m_piiEntitiesConfiguration = jsonValue.GetObject("piiEntitiesConfiguration");
    m_piiEntitiesConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SensitiveDataConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_detectionModeHasBeenSet) {
    payload.WithString("detectionMode", SensitiveDataDetectionModeMapper::GetNameForSensitiveDataDetectionMode(m_detectionMode));
  }

  if (m_detectionScopeHasBeenSet) {
    Aws::Utils::Array<JsonValue> detectionScopeJsonList(m_detectionScope.size());
    for (unsigned detectionScopeIndex = 0; detectionScopeIndex < detectionScopeJsonList.GetLength(); ++detectionScopeIndex) {
      detectionScopeJsonList[detectionScopeIndex].AsString(
          SensitiveDataDetectionScopeTypeMapper::GetNameForSensitiveDataDetectionScopeType(m_detectionScope[detectionScopeIndex]));
    }
    payload.WithArray("detectionScope", std::move(detectionScopeJsonList));
  }

  if (m_piiEntitiesConfigurationHasBeenSet) {
    payload.WithObject("piiEntitiesConfiguration", m_piiEntitiesConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
