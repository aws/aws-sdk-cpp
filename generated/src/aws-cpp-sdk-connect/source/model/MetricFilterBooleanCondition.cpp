/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricFilterBooleanCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MetricFilterBooleanCondition::MetricFilterBooleanCondition(JsonView jsonValue) { *this = jsonValue; }

MetricFilterBooleanCondition& MetricFilterBooleanCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Comparison")) {
    m_comparison =
        MetricFilterBooleanConditionComparisonMapper::GetMetricFilterBooleanConditionComparisonForName(jsonValue.GetString("Comparison"));
    m_comparisonHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricFilterBooleanCondition::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("Comparison",
                       MetricFilterBooleanConditionComparisonMapper::GetNameForMetricFilterBooleanConditionComparison(m_comparison));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
