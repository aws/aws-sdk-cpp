/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BusinessSupportTierCharge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BusinessSupportTierCharge::BusinessSupportTierCharge(JsonView jsonValue) { *this = jsonValue; }

BusinessSupportTierCharge& BusinessSupportTierCharge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tierDescription")) {
    m_tierDescription = jsonValue.GetString("tierDescription");
    m_tierDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tierRate")) {
    m_tierRate = jsonValue.GetString("tierRate");
    m_tierRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageSlice")) {
    m_usageSlice = jsonValue.GetString("usageSlice");
    m_usageSliceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tierCharge")) {
    m_tierCharge = jsonValue.GetString("tierCharge");
    m_tierChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargePeriodStartDate")) {
    m_chargePeriodStartDate = jsonValue.GetDouble("chargePeriodStartDate");
    m_chargePeriodStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargePeriodEndDate")) {
    m_chargePeriodEndDate = jsonValue.GetDouble("chargePeriodEndDate");
    m_chargePeriodEndDateHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessSupportTierCharge::Jsonize() const {
  JsonValue payload;

  if (m_tierDescriptionHasBeenSet) {
    payload.WithString("tierDescription", m_tierDescription);
  }

  if (m_tierRateHasBeenSet) {
    payload.WithString("tierRate", m_tierRate);
  }

  if (m_usageSliceHasBeenSet) {
    payload.WithString("usageSlice", m_usageSlice);
  }

  if (m_tierChargeHasBeenSet) {
    payload.WithString("tierCharge", m_tierCharge);
  }

  if (m_chargePeriodStartDateHasBeenSet) {
    payload.WithDouble("chargePeriodStartDate", m_chargePeriodStartDate.SecondsWithMSPrecision());
  }

  if (m_chargePeriodEndDateHasBeenSet) {
    payload.WithDouble("chargePeriodEndDate", m_chargePeriodEndDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
