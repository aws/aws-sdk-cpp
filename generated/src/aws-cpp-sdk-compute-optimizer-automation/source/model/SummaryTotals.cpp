/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/SummaryTotals.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

SummaryTotals::SummaryTotals(JsonView jsonValue) { *this = jsonValue; }

SummaryTotals& SummaryTotals::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("automationEventCount")) {
    m_automationEventCount = jsonValue.GetInteger("automationEventCount");
    m_automationEventCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedMonthlySavings")) {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");
    m_estimatedMonthlySavingsHasBeenSet = true;
  }
  return *this;
}

JsonValue SummaryTotals::Jsonize() const {
  JsonValue payload;

  if (m_automationEventCountHasBeenSet) {
    payload.WithInteger("automationEventCount", m_automationEventCount);
  }

  if (m_estimatedMonthlySavingsHasBeenSet) {
    payload.WithObject("estimatedMonthlySavings", m_estimatedMonthlySavings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
