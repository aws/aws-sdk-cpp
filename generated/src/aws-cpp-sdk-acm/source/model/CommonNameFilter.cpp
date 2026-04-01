/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CommonNameFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

CommonNameFilter::CommonNameFilter(JsonView jsonValue) { *this = jsonValue; }

CommonNameFilter& CommonNameFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComparisonOperator")) {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));
    m_comparisonOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue CommonNameFilter::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_comparisonOperatorHasBeenSet) {
    payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
