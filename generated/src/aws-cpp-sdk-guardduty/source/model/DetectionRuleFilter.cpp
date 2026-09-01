/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DetectionRuleFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DetectionRuleFilter::DetectionRuleFilter(JsonView jsonValue) { *this = jsonValue; }

DetectionRuleFilter& DetectionRuleFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = FilterFieldNameMapper::GetFilterFieldNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("condition")) {
    m_condition = DetectionRuleFilterConditionMapper::GetDetectionRuleFilterConditionForName(jsonValue.GetString("condition"));
    m_conditionHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectionRuleFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", FilterFieldNameMapper::GetNameForFilterFieldName(m_name));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
    }
    payload.WithArray("values", std::move(valuesJsonList));
  }

  if (m_conditionHasBeenSet) {
    payload.WithString("condition", DetectionRuleFilterConditionMapper::GetNameForDetectionRuleFilterCondition(m_condition));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
