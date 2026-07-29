/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/FilterConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

FilterConfiguration::FilterConfiguration(JsonView jsonValue) { *this = jsonValue; }

FilterConfiguration& FilterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FilterMode")) {
    m_filterMode = FilterModeMapper::GetFilterModeForName(jsonValue.GetString("FilterMode"));
    m_filterModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OperatorMappings")) {
    Aws::Map<Aws::String, JsonView> operatorMappingsJsonMap = jsonValue.GetObject("OperatorMappings").GetAllObjects();
    for (auto& operatorMappingsItem : operatorMappingsJsonMap) {
      m_operatorMappings[operatorMappingsItem.first] = operatorMappingsItem.second.AsString();
    }
    m_operatorMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateTimeFormat")) {
    m_dateTimeFormat = jsonValue.GetString("DateTimeFormat");
    m_dateTimeFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StripQuotes")) {
    m_stripQuotes = jsonValue.GetBool("StripQuotes");
    m_stripQuotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BetweenConfiguration")) {
    m_betweenConfiguration = jsonValue.GetObject("BetweenConfiguration");
    m_betweenConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilterStringConfiguration")) {
    m_filterStringConfiguration = jsonValue.GetObject("FilterStringConfiguration");
    m_filterStringConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_filterModeHasBeenSet) {
    payload.WithString("FilterMode", FilterModeMapper::GetNameForFilterMode(m_filterMode));
  }

  if (m_operatorMappingsHasBeenSet) {
    JsonValue operatorMappingsJsonMap;
    for (auto& operatorMappingsItem : m_operatorMappings) {
      operatorMappingsJsonMap.WithString(operatorMappingsItem.first, operatorMappingsItem.second);
    }
    payload.WithObject("OperatorMappings", std::move(operatorMappingsJsonMap));
  }

  if (m_dateTimeFormatHasBeenSet) {
    payload.WithString("DateTimeFormat", m_dateTimeFormat);
  }

  if (m_stripQuotesHasBeenSet) {
    payload.WithBool("StripQuotes", m_stripQuotes);
  }

  if (m_betweenConfigurationHasBeenSet) {
    payload.WithObject("BetweenConfiguration", m_betweenConfiguration.Jsonize());
  }

  if (m_filterStringConfigurationHasBeenSet) {
    payload.WithObject("FilterStringConfiguration", m_filterStringConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
