/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableEvaluatedValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

DataTableEvaluatedValue::DataTableEvaluatedValue(JsonView jsonValue) { *this = jsonValue; }

DataTableEvaluatedValue& DataTableEvaluatedValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecordId")) {
    m_recordId = jsonValue.GetString("RecordId");
    m_recordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryValues")) {
    Aws::Utils::Array<JsonView> primaryValuesJsonList = jsonValue.GetArray("PrimaryValues");
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      m_primaryValues.push_back(primaryValuesJsonList[primaryValuesIndex].AsObject());
    }
    m_primaryValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeName")) {
    m_attributeName = jsonValue.GetString("AttributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValueType")) {
    m_valueType = DataTableAttributeValueTypeMapper::GetDataTableAttributeValueTypeForName(jsonValue.GetString("ValueType"));
    m_valueTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Found")) {
    m_found = jsonValue.GetBool("Found");
    m_foundHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetBool("Error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluatedValue")) {
    m_evaluatedValue = jsonValue.GetString("EvaluatedValue");
    m_evaluatedValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataTableEvaluatedValue::Jsonize() const {
  JsonValue payload;

  if (m_recordIdHasBeenSet) {
    payload.WithString("RecordId", m_recordId);
  }

  if (m_primaryValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> primaryValuesJsonList(m_primaryValues.size());
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      primaryValuesJsonList[primaryValuesIndex].AsObject(m_primaryValues[primaryValuesIndex].Jsonize());
    }
    payload.WithArray("PrimaryValues", std::move(primaryValuesJsonList));
  }

  if (m_attributeNameHasBeenSet) {
    payload.WithString("AttributeName", m_attributeName);
  }

  if (m_valueTypeHasBeenSet) {
    payload.WithString("ValueType", DataTableAttributeValueTypeMapper::GetNameForDataTableAttributeValueType(m_valueType));
  }

  if (m_foundHasBeenSet) {
    payload.WithBool("Found", m_found);
  }

  if (m_errorHasBeenSet) {
    payload.WithBool("Error", m_error);
  }

  if (m_evaluatedValueHasBeenSet) {
    payload.WithString("EvaluatedValue", m_evaluatedValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
