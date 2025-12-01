/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PrimaryAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PrimaryAttributeValue::PrimaryAttributeValue(JsonView jsonValue) { *this = jsonValue; }

PrimaryAttributeValue& PrimaryAttributeValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("AccessType"));
    m_accessTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeName")) {
    m_attributeName = jsonValue.GetString("AttributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue PrimaryAttributeValue::Jsonize() const {
  JsonValue payload;

  if (m_accessTypeHasBeenSet) {
    payload.WithString("AccessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  if (m_attributeNameHasBeenSet) {
    payload.WithString("AttributeName", m_attributeName);
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
    }
    payload.WithArray("Values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
