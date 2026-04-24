/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cost-optimization-hub/model/MetricsByTime.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CostOptimizationHub {
namespace Model {

MetricsByTime::MetricsByTime(JsonView jsonValue) { *this = jsonValue; }

MetricsByTime& MetricsByTime::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("score")) {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("savings")) {
    m_savings = jsonValue.GetDouble("savings");
    m_savingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spend")) {
    m_spend = jsonValue.GetDouble("spend");
    m_spendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricsByTime::Jsonize() const {
  JsonValue payload;

  if (m_scoreHasBeenSet) {
    payload.WithDouble("score", m_score);
  }

  if (m_savingsHasBeenSet) {
    payload.WithDouble("savings", m_savings);
  }

  if (m_spendHasBeenSet) {
    payload.WithDouble("spend", m_spend);
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp);
  }

  return payload;
}

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
