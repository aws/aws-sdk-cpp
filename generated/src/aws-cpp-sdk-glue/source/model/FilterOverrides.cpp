/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/FilterOverrides.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

FilterOverrides::FilterOverrides(JsonView jsonValue) { *this = jsonValue; }

FilterOverrides& FilterOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldName")) {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OperatorMappings")) {
    Aws::Map<Aws::String, JsonView> operatorMappingsJsonMap = jsonValue.GetObject("OperatorMappings").GetAllObjects();
    for (auto& operatorMappingsItem : operatorMappingsJsonMap) {
      m_operatorMappings[operatorMappingsItem.first] = operatorMappingsItem.second.AsString();
    }
    m_operatorMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BetweenConfiguration")) {
    m_betweenConfiguration = jsonValue.GetObject("BetweenConfiguration");
    m_betweenConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateTimeFormat")) {
    m_dateTimeFormat = jsonValue.GetString("DateTimeFormat");
    m_dateTimeFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterOverrides::Jsonize() const {
  JsonValue payload;

  if (m_fieldNameHasBeenSet) {
    payload.WithString("FieldName", m_fieldName);
  }

  if (m_operatorMappingsHasBeenSet) {
    JsonValue operatorMappingsJsonMap;
    for (auto& operatorMappingsItem : m_operatorMappings) {
      operatorMappingsJsonMap.WithString(operatorMappingsItem.first, operatorMappingsItem.second);
    }
    payload.WithObject("OperatorMappings", std::move(operatorMappingsJsonMap));
  }

  if (m_betweenConfigurationHasBeenSet) {
    payload.WithObject("BetweenConfiguration", m_betweenConfiguration.Jsonize());
  }

  if (m_dateTimeFormatHasBeenSet) {
    payload.WithString("DateTimeFormat", m_dateTimeFormat);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
