/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MultiSelectQuestionRuleCategoryAutomation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MultiSelectQuestionRuleCategoryAutomation::MultiSelectQuestionRuleCategoryAutomation(JsonView jsonValue) { *this = jsonValue; }

MultiSelectQuestionRuleCategoryAutomation& MultiSelectQuestionRuleCategoryAutomation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Condition")) {
    m_condition = MultiSelectQuestionRuleCategoryAutomationConditionMapper::GetMultiSelectQuestionRuleCategoryAutomationConditionForName(
        jsonValue.GetString("Condition"));
    m_conditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptionRefIds")) {
    Aws::Utils::Array<JsonView> optionRefIdsJsonList = jsonValue.GetArray("OptionRefIds");
    for (unsigned optionRefIdsIndex = 0; optionRefIdsIndex < optionRefIdsJsonList.GetLength(); ++optionRefIdsIndex) {
      m_optionRefIds.push_back(optionRefIdsJsonList[optionRefIdsIndex].AsString());
    }
    m_optionRefIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiSelectQuestionRuleCategoryAutomation::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
  }

  if (m_conditionHasBeenSet) {
    payload.WithString(
        "Condition", MultiSelectQuestionRuleCategoryAutomationConditionMapper::GetNameForMultiSelectQuestionRuleCategoryAutomationCondition(
                         m_condition));
  }

  if (m_optionRefIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> optionRefIdsJsonList(m_optionRefIds.size());
    for (unsigned optionRefIdsIndex = 0; optionRefIdsIndex < optionRefIdsJsonList.GetLength(); ++optionRefIdsIndex) {
      optionRefIdsJsonList[optionRefIdsIndex].AsString(m_optionRefIds[optionRefIdsIndex]);
    }
    payload.WithArray("OptionRefIds", std::move(optionRefIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
