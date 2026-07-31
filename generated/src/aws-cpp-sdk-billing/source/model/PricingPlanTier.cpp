/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/PricingPlanTier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

PricingPlanTier::PricingPlanTier(JsonView jsonValue) { *this = jsonValue; }

PricingPlanTier& PricingPlanTier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tierMinimum")) {
    m_tierMinimum = jsonValue.GetString("tierMinimum");
    m_tierMinimumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tierMaximum")) {
    m_tierMaximum = jsonValue.GetString("tierMaximum");
    m_tierMaximumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baseCharge")) {
    m_baseCharge = jsonValue.GetString("baseCharge");
    m_baseChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalPercentageOfAggregateCharges")) {
    m_additionalPercentageOfAggregateCharges = jsonValue.GetString("additionalPercentageOfAggregateCharges");
    m_additionalPercentageOfAggregateChargesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aggregateChargesAdjustment")) {
    m_aggregateChargesAdjustment = jsonValue.GetString("aggregateChargesAdjustment");
    m_aggregateChargesAdjustmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("incremental")) {
    m_incremental = jsonValue.GetBool("incremental");
    m_incrementalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("increment")) {
    m_increment = jsonValue.GetString("increment");
    m_incrementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("incrementCharge")) {
    m_incrementCharge = jsonValue.GetString("incrementCharge");
    m_incrementChargeHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingPlanTier::Jsonize() const {
  JsonValue payload;

  if (m_tierMinimumHasBeenSet) {
    payload.WithString("tierMinimum", m_tierMinimum);
  }

  if (m_tierMaximumHasBeenSet) {
    payload.WithString("tierMaximum", m_tierMaximum);
  }

  if (m_baseChargeHasBeenSet) {
    payload.WithString("baseCharge", m_baseCharge);
  }

  if (m_additionalPercentageOfAggregateChargesHasBeenSet) {
    payload.WithString("additionalPercentageOfAggregateCharges", m_additionalPercentageOfAggregateCharges);
  }

  if (m_aggregateChargesAdjustmentHasBeenSet) {
    payload.WithString("aggregateChargesAdjustment", m_aggregateChargesAdjustment);
  }

  if (m_incrementalHasBeenSet) {
    payload.WithBool("incremental", m_incremental);
  }

  if (m_incrementHasBeenSet) {
    payload.WithString("increment", m_increment);
  }

  if (m_incrementChargeHasBeenSet) {
    payload.WithString("incrementCharge", m_incrementCharge);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
