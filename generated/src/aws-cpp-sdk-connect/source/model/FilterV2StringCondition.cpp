/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FilterV2StringCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

FilterV2StringCondition::FilterV2StringCondition(JsonView jsonValue) { *this = jsonValue; }

FilterV2StringCondition& FilterV2StringCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Comparison")) {
    m_comparison = FilterV2StringConditionComparisonOperatorMapper::GetFilterV2StringConditionComparisonOperatorForName(
        jsonValue.GetString("Comparison"));
    m_comparisonHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterV2StringCondition::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("Comparison",
                       FilterV2StringConditionComparisonOperatorMapper::GetNameForFilterV2StringConditionComparisonOperator(m_comparison));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
