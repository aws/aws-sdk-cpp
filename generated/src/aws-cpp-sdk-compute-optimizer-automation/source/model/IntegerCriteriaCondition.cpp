/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/IntegerCriteriaCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

IntegerCriteriaCondition::IntegerCriteriaCondition(JsonView jsonValue) { *this = jsonValue; }

IntegerCriteriaCondition& IntegerCriteriaCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comparison")) {
    m_comparison = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("comparison"));
    m_comparisonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsInteger());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegerCriteriaCondition::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("comparison", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparison));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsInteger(m_values[valuesIndex]);
    }
    payload.WithArray("values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
