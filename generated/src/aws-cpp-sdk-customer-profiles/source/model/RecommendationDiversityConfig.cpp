/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommendationDiversityConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommendationDiversityConfig::RecommendationDiversityConfig(JsonView jsonValue) { *this = jsonValue; }

RecommendationDiversityConfig& RecommendationDiversityConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Values")) {
    Aws::Map<Aws::String, JsonView> valuesJsonMap = jsonValue.GetObject("Values").GetAllObjects();
    for (auto& valuesItem : valuesJsonMap) {
      m_values[valuesItem.first] = valuesItem.second.AsInteger();
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationDiversityConfig::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_valuesHasBeenSet) {
    JsonValue valuesJsonMap;
    for (auto& valuesItem : m_values) {
      valuesJsonMap.WithInteger(valuesItem.first, valuesItem.second);
    }
    payload.WithObject("Values", std::move(valuesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
