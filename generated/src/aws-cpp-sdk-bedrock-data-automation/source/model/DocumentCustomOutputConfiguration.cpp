/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentCustomOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DocumentCustomOutputConfiguration::DocumentCustomOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

DocumentCustomOutputConfiguration& DocumentCustomOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fallbackBlueprints")) {
    Aws::Utils::Array<JsonView> fallbackBlueprintsJsonList = jsonValue.GetArray("fallbackBlueprints");
    for (unsigned fallbackBlueprintsIndex = 0; fallbackBlueprintsIndex < fallbackBlueprintsJsonList.GetLength();
         ++fallbackBlueprintsIndex) {
      m_fallbackBlueprints.push_back(fallbackBlueprintsJsonList[fallbackBlueprintsIndex].AsObject());
    }
    m_fallbackBlueprintsHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentCustomOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fallbackBlueprintsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fallbackBlueprintsJsonList(m_fallbackBlueprints.size());
    for (unsigned fallbackBlueprintsIndex = 0; fallbackBlueprintsIndex < fallbackBlueprintsJsonList.GetLength();
         ++fallbackBlueprintsIndex) {
      fallbackBlueprintsJsonList[fallbackBlueprintsIndex].AsObject(m_fallbackBlueprints[fallbackBlueprintsIndex].Jsonize());
    }
    payload.WithArray("fallbackBlueprints", std::move(fallbackBlueprintsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
