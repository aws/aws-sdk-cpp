/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricFilterNumberCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MetricFilterNumberCondition::MetricFilterNumberCondition(JsonView jsonValue) { *this = jsonValue; }

MetricFilterNumberCondition& MetricFilterNumberCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Comparison")) {
    m_comparison =
        MetricFilterNumberConditionComparisonMapper::GetMetricFilterNumberConditionComparisonForName(jsonValue.GetString("Comparison"));
    m_comparisonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsDouble());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricFilterNumberCondition::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("Comparison",
                       MetricFilterNumberConditionComparisonMapper::GetNameForMetricFilterNumberConditionComparison(m_comparison));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsDouble(m_values[valuesIndex]);
    }
    payload.WithArray("Values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
