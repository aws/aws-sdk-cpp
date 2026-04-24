/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ConnectorProperty.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ConnectorProperty::ConnectorProperty(JsonView jsonValue) { *this = jsonValue; }

ConnectorProperty& ConnectorProperty::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyOverride")) {
    m_keyOverride = jsonValue.GetString("KeyOverride");
    m_keyOverrideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Required")) {
    m_required = jsonValue.GetBool("Required");
    m_requiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultValue")) {
    m_defaultValue = jsonValue.GetString("DefaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedValues")) {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("AllowedValues");
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PropertyLocation")) {
    m_propertyLocation = PropertyLocationMapper::GetPropertyLocationForName(jsonValue.GetString("PropertyLocation"));
    m_propertyLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PropertyType")) {
    m_propertyType = PropertyTypeMapper::GetPropertyTypeForName(jsonValue.GetString("PropertyType"));
    m_propertyTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorProperty::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_keyOverrideHasBeenSet) {
    payload.WithString("KeyOverride", m_keyOverride);
  }

  if (m_requiredHasBeenSet) {
    payload.WithBool("Required", m_required);
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("DefaultValue", m_defaultValue);
  }

  if (m_allowedValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
    }
    payload.WithArray("AllowedValues", std::move(allowedValuesJsonList));
  }

  if (m_propertyLocationHasBeenSet) {
    payload.WithString("PropertyLocation", PropertyLocationMapper::GetNameForPropertyLocation(m_propertyLocation));
  }

  if (m_propertyTypeHasBeenSet) {
    payload.WithString("PropertyType", PropertyTypeMapper::GetNameForPropertyType(m_propertyType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
