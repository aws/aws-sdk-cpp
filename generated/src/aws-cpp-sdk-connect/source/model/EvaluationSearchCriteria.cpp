/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSearchCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationSearchCriteria::EvaluationSearchCriteria(JsonView jsonValue) { *this = jsonValue; }

EvaluationSearchCriteria& EvaluationSearchCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OrConditions")) {
    Aws::Utils::Array<JsonView> orConditionsJsonList = jsonValue.GetArray("OrConditions");
    for (unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex) {
      m_orConditions.push_back(orConditionsJsonList[orConditionsIndex].AsObject());
    }
    m_orConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AndConditions")) {
    Aws::Utils::Array<JsonView> andConditionsJsonList = jsonValue.GetArray("AndConditions");
    for (unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex) {
      m_andConditions.push_back(andConditionsJsonList[andConditionsIndex].AsObject());
    }
    m_andConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringCondition")) {
    m_stringCondition = jsonValue.GetObject("StringCondition");
    m_stringConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumberCondition")) {
    m_numberCondition = jsonValue.GetObject("NumberCondition");
    m_numberConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BooleanCondition")) {
    m_booleanCondition = jsonValue.GetObject("BooleanCondition");
    m_booleanConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateTimeCondition")) {
    m_dateTimeCondition = jsonValue.GetObject("DateTimeCondition");
    m_dateTimeConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DecimalCondition")) {
    m_decimalCondition = jsonValue.GetObject("DecimalCondition");
    m_decimalConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationSearchCriteria::Jsonize() const {
  JsonValue payload;

  if (m_orConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> orConditionsJsonList(m_orConditions.size());
    for (unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex) {
      orConditionsJsonList[orConditionsIndex].AsObject(m_orConditions[orConditionsIndex].Jsonize());
    }
    payload.WithArray("OrConditions", std::move(orConditionsJsonList));
  }

  if (m_andConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> andConditionsJsonList(m_andConditions.size());
    for (unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex) {
      andConditionsJsonList[andConditionsIndex].AsObject(m_andConditions[andConditionsIndex].Jsonize());
    }
    payload.WithArray("AndConditions", std::move(andConditionsJsonList));
  }

  if (m_stringConditionHasBeenSet) {
    payload.WithObject("StringCondition", m_stringCondition.Jsonize());
  }

  if (m_numberConditionHasBeenSet) {
    payload.WithObject("NumberCondition", m_numberCondition.Jsonize());
  }

  if (m_booleanConditionHasBeenSet) {
    payload.WithObject("BooleanCondition", m_booleanCondition.Jsonize());
  }

  if (m_dateTimeConditionHasBeenSet) {
    payload.WithObject("DateTimeCondition", m_dateTimeCondition.Jsonize());
  }

  if (m_decimalConditionHasBeenSet) {
    payload.WithObject("DecimalCondition", m_decimalCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
