/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiSelectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ApiSelectionConfiguration::ApiSelectionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ApiSelectionConfiguration& ApiSelectionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiSelectionMode")) {
    m_apiSelectionMode = ApiSelectionModeMapper::GetApiSelectionModeForName(jsonValue.GetString("apiSelectionMode"));
    m_apiSelectionModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleFilters")) {
    Aws::Utils::Array<JsonView> ruleFiltersJsonList = jsonValue.GetArray("ruleFilters");
    for (unsigned ruleFiltersIndex = 0; ruleFiltersIndex < ruleFiltersJsonList.GetLength(); ++ruleFiltersIndex) {
      m_ruleFilters.push_back(ruleFiltersJsonList[ruleFiltersIndex].AsObject());
    }
    m_ruleFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiSelectionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_apiSelectionModeHasBeenSet) {
    payload.WithString("apiSelectionMode", ApiSelectionModeMapper::GetNameForApiSelectionMode(m_apiSelectionMode));
  }

  if (m_ruleFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleFiltersJsonList(m_ruleFilters.size());
    for (unsigned ruleFiltersIndex = 0; ruleFiltersIndex < ruleFiltersJsonList.GetLength(); ++ruleFiltersIndex) {
      ruleFiltersJsonList[ruleFiltersIndex].AsObject(m_ruleFilters[ruleFiltersIndex].Jsonize());
    }
    payload.WithArray("ruleFilters", std::move(ruleFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
