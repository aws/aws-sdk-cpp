/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationAnswerData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationAnswerData::EvaluationAnswerData(JsonView jsonValue) { *this = jsonValue; }

EvaluationAnswerData& EvaluationAnswerData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringValue")) {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumericValue")) {
    m_numericValue = jsonValue.GetDouble("NumericValue");
    m_numericValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringValues")) {
    Aws::Utils::Array<JsonView> stringValuesJsonList = jsonValue.GetArray("StringValues");
    for (unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex) {
      m_stringValues.push_back(stringValuesJsonList[stringValuesIndex].AsString());
    }
    m_stringValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateTimeValue")) {
    m_dateTimeValue = jsonValue.GetString("DateTimeValue");
    m_dateTimeValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotApplicable")) {
    m_notApplicable = jsonValue.GetBool("NotApplicable");
    m_notApplicableHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationAnswerData::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("StringValue", m_stringValue);
  }

  if (m_numericValueHasBeenSet) {
    payload.WithDouble("NumericValue", m_numericValue);
  }

  if (m_stringValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringValuesJsonList(m_stringValues.size());
    for (unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex) {
      stringValuesJsonList[stringValuesIndex].AsString(m_stringValues[stringValuesIndex]);
    }
    payload.WithArray("StringValues", std::move(stringValuesJsonList));
  }

  if (m_dateTimeValueHasBeenSet) {
    payload.WithString("DateTimeValue", m_dateTimeValue);
  }

  if (m_notApplicableHasBeenSet) {
    payload.WithBool("NotApplicable", m_notApplicable);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
