/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/GetUsageLinesEstimatedCostEstimatedCost.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {

GetUsageLinesEstimatedCostEstimatedCost::GetUsageLinesEstimatedCostEstimatedCost(JsonView jsonValue) { *this = jsonValue; }

GetUsageLinesEstimatedCostEstimatedCost& GetUsageLinesEstimatedCostEstimatedCost::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("usageAmount")) {
    m_usageAmount = jsonValue.GetDouble("usageAmount");
    m_usageAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageUnit")) {
    m_usageUnit = jsonValue.GetString("usageUnit");
    m_usageUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cost")) {
    m_cost = jsonValue.GetDouble("cost");
    m_costHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currency")) {
    m_currency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue GetUsageLinesEstimatedCostEstimatedCost::Jsonize() const {
  JsonValue payload;

  if (m_usageAmountHasBeenSet) {
    payload.WithDouble("usageAmount", m_usageAmount);
  }

  if (m_usageUnitHasBeenSet) {
    payload.WithString("usageUnit", m_usageUnit);
  }

  if (m_costHasBeenSet) {
    payload.WithDouble("cost", m_cost);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("currency", CurrencyCodeMapper::GetNameForCurrencyCode(m_currency));
  }

  return payload;
}

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
