/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FetchCriterion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FetchCriterion::FetchCriterion(JsonView jsonValue) { *this = jsonValue; }

FetchCriterion& FetchCriterion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("field")) {
    m_field = jsonValue.GetString("field");
    m_fieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("condition")) {
    m_condition = FetchCriterionConditionMapper::GetFetchCriterionConditionForName(jsonValue.GetString("condition"));
    m_conditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue FetchCriterion::Jsonize() const {
  JsonValue payload;

  if (m_fieldHasBeenSet) {
    payload.WithString("field", m_field);
  }

  if (m_conditionHasBeenSet) {
    payload.WithString("condition", FetchCriterionConditionMapper::GetNameForFetchCriterionCondition(m_condition));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
    }
    payload.WithArray("values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
