/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/PricingPlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

PricingPlan::PricingPlan(JsonView jsonValue) { *this = jsonValue; }

PricingPlan& PricingPlan::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pricingPlanId")) {
    m_pricingPlanId = jsonValue.GetString("pricingPlanId");
    m_pricingPlanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetDouble("startDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDate")) {
    m_endDate = jsonValue.GetDouble("endDate");
    m_endDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("planDiscountPercent")) {
    m_planDiscountPercent = jsonValue.GetString("planDiscountPercent");
    m_planDiscountPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discountAppliesToMinimumCharge")) {
    m_discountAppliesToMinimumCharge = jsonValue.GetBool("discountAppliesToMinimumCharge");
    m_discountAppliesToMinimumChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumCharge")) {
    m_minimumCharge = jsonValue.GetString("minimumCharge");
    m_minimumChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tiered")) {
    m_tiered = jsonValue.GetString("tiered");
    m_tieredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tiers")) {
    Aws::Utils::Array<JsonView> tiersJsonList = jsonValue.GetArray("tiers");
    for (unsigned tiersIndex = 0; tiersIndex < tiersJsonList.GetLength(); ++tiersIndex) {
      m_tiers.push_back(tiersJsonList[tiersIndex].AsObject());
    }
    m_tiersHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingPlan::Jsonize() const {
  JsonValue payload;

  if (m_pricingPlanIdHasBeenSet) {
    payload.WithString("pricingPlanId", m_pricingPlanId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_startDateHasBeenSet) {
    payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if (m_endDateHasBeenSet) {
    payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  if (m_planDiscountPercentHasBeenSet) {
    payload.WithString("planDiscountPercent", m_planDiscountPercent);
  }

  if (m_discountAppliesToMinimumChargeHasBeenSet) {
    payload.WithBool("discountAppliesToMinimumCharge", m_discountAppliesToMinimumCharge);
  }

  if (m_minimumChargeHasBeenSet) {
    payload.WithString("minimumCharge", m_minimumCharge);
  }

  if (m_tieredHasBeenSet) {
    payload.WithString("tiered", m_tiered);
  }

  if (m_tiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> tiersJsonList(m_tiers.size());
    for (unsigned tiersIndex = 0; tiersIndex < tiersJsonList.GetLength(); ++tiersIndex) {
      tiersJsonList[tiersIndex].AsObject(m_tiers[tiersIndex].Jsonize());
    }
    payload.WithArray("tiers", std::move(tiersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
