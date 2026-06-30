/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/FlagValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

FlagValue::FlagValue(JsonView jsonValue) { *this = jsonValue; }

FlagValue& FlagValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeValues")) {
    Aws::Map<Aws::String, JsonView> attributeValuesJsonMap = jsonValue.GetObject("AttributeValues").GetAllObjects();
    for (auto& attributeValuesItem : attributeValuesJsonMap) {
      m_attributeValues[attributeValuesItem.first] = attributeValuesItem.second.AsObject();
    }
    m_attributeValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue FlagValue::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_attributeValuesHasBeenSet) {
    JsonValue attributeValuesJsonMap;
    for (auto& attributeValuesItem : m_attributeValues) {
      attributeValuesJsonMap.WithObject(attributeValuesItem.first, attributeValuesItem.second.Jsonize());
    }
    payload.WithObject("AttributeValues", std::move(attributeValuesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
