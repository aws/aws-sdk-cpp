/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/EstimatedMonthlySavings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

EstimatedMonthlySavings::EstimatedMonthlySavings(JsonView jsonValue) { *this = jsonValue; }

EstimatedMonthlySavings& EstimatedMonthlySavings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("currency")) {
    m_currency = jsonValue.GetString("currency");
    m_currencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("beforeDiscountSavings")) {
    m_beforeDiscountSavings = jsonValue.GetDouble("beforeDiscountSavings");
    m_beforeDiscountSavingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterDiscountSavings")) {
    m_afterDiscountSavings = jsonValue.GetDouble("afterDiscountSavings");
    m_afterDiscountSavingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("savingsEstimationMode")) {
    m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(jsonValue.GetString("savingsEstimationMode"));
    m_savingsEstimationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue EstimatedMonthlySavings::Jsonize() const {
  JsonValue payload;

  if (m_currencyHasBeenSet) {
    payload.WithString("currency", m_currency);
  }

  if (m_beforeDiscountSavingsHasBeenSet) {
    payload.WithDouble("beforeDiscountSavings", m_beforeDiscountSavings);
  }

  if (m_afterDiscountSavingsHasBeenSet) {
    payload.WithDouble("afterDiscountSavings", m_afterDiscountSavings);
  }

  if (m_savingsEstimationModeHasBeenSet) {
    payload.WithString("savingsEstimationMode", SavingsEstimationModeMapper::GetNameForSavingsEstimationMode(m_savingsEstimationMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
