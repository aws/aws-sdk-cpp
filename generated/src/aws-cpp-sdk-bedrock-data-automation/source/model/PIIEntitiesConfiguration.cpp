/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/PIIEntitiesConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

PIIEntitiesConfiguration::PIIEntitiesConfiguration(JsonView jsonValue) { *this = jsonValue; }

PIIEntitiesConfiguration& PIIEntitiesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("piiEntityTypes")) {
    Aws::Utils::Array<JsonView> piiEntityTypesJsonList = jsonValue.GetArray("piiEntityTypes");
    for (unsigned piiEntityTypesIndex = 0; piiEntityTypesIndex < piiEntityTypesJsonList.GetLength(); ++piiEntityTypesIndex) {
      m_piiEntityTypes.push_back(PIIEntityTypeMapper::GetPIIEntityTypeForName(piiEntityTypesJsonList[piiEntityTypesIndex].AsString()));
    }
    m_piiEntityTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redactionMaskMode")) {
    m_redactionMaskMode = PIIRedactionMaskModeMapper::GetPIIRedactionMaskModeForName(jsonValue.GetString("redactionMaskMode"));
    m_redactionMaskModeHasBeenSet = true;
  }
  return *this;
}

JsonValue PIIEntitiesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_piiEntityTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> piiEntityTypesJsonList(m_piiEntityTypes.size());
    for (unsigned piiEntityTypesIndex = 0; piiEntityTypesIndex < piiEntityTypesJsonList.GetLength(); ++piiEntityTypesIndex) {
      piiEntityTypesJsonList[piiEntityTypesIndex].AsString(
          PIIEntityTypeMapper::GetNameForPIIEntityType(m_piiEntityTypes[piiEntityTypesIndex]));
    }
    payload.WithArray("piiEntityTypes", std::move(piiEntityTypesJsonList));
  }

  if (m_redactionMaskModeHasBeenSet) {
    payload.WithString("redactionMaskMode", PIIRedactionMaskModeMapper::GetNameForPIIRedactionMaskMode(m_redactionMaskMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
