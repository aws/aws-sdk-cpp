/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MetricFilter::MetricFilter(JsonView jsonValue) { *this = jsonValue; }

MetricFilter& MetricFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetricFilterKey")) {
    m_metricFilterKey = jsonValue.GetString("MetricFilterKey");
    m_metricFilterKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Negate")) {
    m_negate = jsonValue.GetBool("Negate");
    m_negateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumberCondition")) {
    m_numberCondition = jsonValue.GetObject("NumberCondition");
    m_numberConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringCondition")) {
    m_stringCondition = jsonValue.GetObject("StringCondition");
    m_stringConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BooleanCondition")) {
    m_booleanCondition = jsonValue.GetObject("BooleanCondition");
    m_booleanConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricFilter::Jsonize() const {
  JsonValue payload;

  if (m_metricFilterKeyHasBeenSet) {
    payload.WithString("MetricFilterKey", m_metricFilterKey);
  }

  if (m_negateHasBeenSet) {
    payload.WithBool("Negate", m_negate);
  }

  if (m_numberConditionHasBeenSet) {
    payload.WithObject("NumberCondition", m_numberCondition.Jsonize());
  }

  if (m_stringConditionHasBeenSet) {
    payload.WithObject("StringCondition", m_stringCondition.Jsonize());
  }

  if (m_booleanConditionHasBeenSet) {
    payload.WithObject("BooleanCondition", m_booleanCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
