/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/Filter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

Filter::Filter(JsonView jsonValue) { *this = jsonValue; }

Filter& Filter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attribute")) {
    m_attribute = jsonValue.GetString("attribute");
    m_attributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intValue")) {
    m_intValue = jsonValue.GetInt64("intValue");
    m_intValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operator")) {
    m_operator = FilterOperatorMapper::GetFilterOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue Filter::Jsonize() const {
  JsonValue payload;

  if (m_attributeHasBeenSet) {
    payload.WithString("attribute", m_attribute);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_intValueHasBeenSet) {
    payload.WithInt64("intValue", m_intValue);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("operator", FilterOperatorMapper::GetNameForFilterOperator(m_operator));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
