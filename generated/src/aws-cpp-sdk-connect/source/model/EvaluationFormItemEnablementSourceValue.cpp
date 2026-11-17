/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementSourceValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormItemEnablementSourceValue::EvaluationFormItemEnablementSourceValue(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormItemEnablementSourceValue& EvaluationFormItemEnablementSourceValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = EvaluationFormItemEnablementSourceValueTypeMapper::GetEvaluationFormItemEnablementSourceValueTypeForName(
        jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefId")) {
    m_refId = jsonValue.GetString("RefId");
    m_refIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringValue")) {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumericValue")) {
    m_numericValue = jsonValue.GetDouble("NumericValue");
    m_numericValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BooleanValue")) {
    m_booleanValue = jsonValue.GetBool("BooleanValue");
    m_booleanValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateTimeValue")) {
    m_dateTimeValue = jsonValue.GetDouble("DateTimeValue");
    m_dateTimeValueHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormItemEnablementSourceValue::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type",
                       EvaluationFormItemEnablementSourceValueTypeMapper::GetNameForEvaluationFormItemEnablementSourceValueType(m_type));
  }

  if (m_refIdHasBeenSet) {
    payload.WithString("RefId", m_refId);
  }

  if (m_stringValueHasBeenSet) {
    payload.WithString("StringValue", m_stringValue);
  }

  if (m_numericValueHasBeenSet) {
    payload.WithDouble("NumericValue", m_numericValue);
  }

  if (m_booleanValueHasBeenSet) {
    payload.WithBool("BooleanValue", m_booleanValue);
  }

  if (m_dateTimeValueHasBeenSet) {
    payload.WithDouble("DateTimeValue", m_dateTimeValue.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
