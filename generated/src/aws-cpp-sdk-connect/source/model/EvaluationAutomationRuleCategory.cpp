/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationAutomationRuleCategory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationAutomationRuleCategory::EvaluationAutomationRuleCategory(JsonView jsonValue) { *this = jsonValue; }

EvaluationAutomationRuleCategory& EvaluationAutomationRuleCategory::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Condition")) {
    m_condition =
        QuestionRuleCategoryAutomationConditionMapper::GetQuestionRuleCategoryAutomationConditionForName(jsonValue.GetString("Condition"));
    m_conditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PointsOfInterest")) {
    Aws::Utils::Array<JsonView> pointsOfInterestJsonList = jsonValue.GetArray("PointsOfInterest");
    for (unsigned pointsOfInterestIndex = 0; pointsOfInterestIndex < pointsOfInterestJsonList.GetLength(); ++pointsOfInterestIndex) {
      m_pointsOfInterest.push_back(pointsOfInterestJsonList[pointsOfInterestIndex].AsObject());
    }
    m_pointsOfInterestHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationAutomationRuleCategory::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
  }

  if (m_conditionHasBeenSet) {
    payload.WithString("Condition",
                       QuestionRuleCategoryAutomationConditionMapper::GetNameForQuestionRuleCategoryAutomationCondition(m_condition));
  }

  if (m_pointsOfInterestHasBeenSet) {
    Aws::Utils::Array<JsonValue> pointsOfInterestJsonList(m_pointsOfInterest.size());
    for (unsigned pointsOfInterestIndex = 0; pointsOfInterestIndex < pointsOfInterestJsonList.GetLength(); ++pointsOfInterestIndex) {
      pointsOfInterestJsonList[pointsOfInterestIndex].AsObject(m_pointsOfInterest[pointsOfInterestIndex].Jsonize());
    }
    payload.WithArray("PointsOfInterest", std::move(pointsOfInterestJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
