/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BusinessSupportAccountCharge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BusinessSupportAccountCharge::BusinessSupportAccountCharge(JsonView jsonValue) { *this = jsonValue; }

BusinessSupportAccountCharge& BusinessSupportAccountCharge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportPlanName")) {
    m_supportPlanName = jsonValue.GetString("supportPlanName");
    m_supportPlanNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalCharge")) {
    m_totalCharge = jsonValue.GetString("totalCharge");
    m_totalChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalUsageBasis")) {
    m_totalUsageBasis = jsonValue.GetString("totalUsageBasis");
    m_totalUsageBasisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tierCharges")) {
    Aws::Utils::Array<JsonView> tierChargesJsonList = jsonValue.GetArray("tierCharges");
    for (unsigned tierChargesIndex = 0; tierChargesIndex < tierChargesJsonList.GetLength(); ++tierChargesIndex) {
      m_tierCharges.push_back(tierChargesJsonList[tierChargesIndex].AsObject());
    }
    m_tierChargesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportDiscount")) {
    m_supportDiscount = jsonValue.GetObject("supportDiscount");
    m_supportDiscountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportEligibleSpendByService")) {
    Aws::Utils::Array<JsonView> supportEligibleSpendByServiceJsonList = jsonValue.GetArray("supportEligibleSpendByService");
    for (unsigned supportEligibleSpendByServiceIndex = 0;
         supportEligibleSpendByServiceIndex < supportEligibleSpendByServiceJsonList.GetLength(); ++supportEligibleSpendByServiceIndex) {
      m_supportEligibleSpendByService.push_back(supportEligibleSpendByServiceJsonList[supportEligibleSpendByServiceIndex].AsObject());
    }
    m_supportEligibleSpendByServiceHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessSupportAccountCharge::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_supportPlanNameHasBeenSet) {
    payload.WithString("supportPlanName", m_supportPlanName);
  }

  if (m_totalChargeHasBeenSet) {
    payload.WithString("totalCharge", m_totalCharge);
  }

  if (m_totalUsageBasisHasBeenSet) {
    payload.WithString("totalUsageBasis", m_totalUsageBasis);
  }

  if (m_tierChargesHasBeenSet) {
    Aws::Utils::Array<JsonValue> tierChargesJsonList(m_tierCharges.size());
    for (unsigned tierChargesIndex = 0; tierChargesIndex < tierChargesJsonList.GetLength(); ++tierChargesIndex) {
      tierChargesJsonList[tierChargesIndex].AsObject(m_tierCharges[tierChargesIndex].Jsonize());
    }
    payload.WithArray("tierCharges", std::move(tierChargesJsonList));
  }

  if (m_supportDiscountHasBeenSet) {
    payload.WithObject("supportDiscount", m_supportDiscount.Jsonize());
  }

  if (m_supportEligibleSpendByServiceHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportEligibleSpendByServiceJsonList(m_supportEligibleSpendByService.size());
    for (unsigned supportEligibleSpendByServiceIndex = 0;
         supportEligibleSpendByServiceIndex < supportEligibleSpendByServiceJsonList.GetLength(); ++supportEligibleSpendByServiceIndex) {
      supportEligibleSpendByServiceJsonList[supportEligibleSpendByServiceIndex].AsObject(
          m_supportEligibleSpendByService[supportEligibleSpendByServiceIndex].Jsonize());
    }
    payload.WithArray("supportEligibleSpendByService", std::move(supportEligibleSpendByServiceJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
