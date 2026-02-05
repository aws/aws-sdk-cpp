/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ExtractedParameter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ExtractedParameter::ExtractedParameter(JsonView jsonValue) { *this = jsonValue; }

ExtractedParameter& ExtractedParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Key")) {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultValue")) {
    m_defaultValue = jsonValue.GetString("DefaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PropertyLocation")) {
    m_propertyLocation = PropertyLocationMapper::GetPropertyLocationForName(jsonValue.GetString("PropertyLocation"));
    m_propertyLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractedParameter::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("Key", m_key);
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("DefaultValue", m_defaultValue);
  }

  if (m_propertyLocationHasBeenSet) {
    payload.WithString("PropertyLocation", PropertyLocationMapper::GetNameForPropertyLocation(m_propertyLocation));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
