/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/LinkedAccountCharge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

LinkedAccountCharge::LinkedAccountCharge(JsonView jsonValue) { *this = jsonValue; }

LinkedAccountCharge& LinkedAccountCharge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("payerAccountId")) {
    m_payerAccountId = jsonValue.GetString("payerAccountId");
    m_payerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountType")) {
    m_accountType = jsonValue.GetString("accountType");
    m_accountTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billableSeconds")) {
    m_billableSeconds = jsonValue.GetInt64("billableSeconds");
    m_billableSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSeconds")) {
    m_totalSeconds = jsonValue.GetInt64("totalSeconds");
    m_totalSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleSpend")) {
    m_totalSupportEligibleSpend = jsonValue.GetString("totalSupportEligibleSpend");
    m_totalSupportEligibleSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("proratedTotalSupportEligibleSpend")) {
    m_proratedTotalSupportEligibleSpend = jsonValue.GetString("proratedTotalSupportEligibleSpend");
    m_proratedTotalSupportEligibleSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkedTimePeriods")) {
    Aws::Utils::Array<JsonView> linkedTimePeriodsJsonList = jsonValue.GetArray("linkedTimePeriods");
    for (unsigned linkedTimePeriodsIndex = 0; linkedTimePeriodsIndex < linkedTimePeriodsJsonList.GetLength(); ++linkedTimePeriodsIndex) {
      m_linkedTimePeriods.push_back(linkedTimePeriodsJsonList[linkedTimePeriodsIndex].AsObject());
    }
    m_linkedTimePeriodsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionTimePeriods")) {
    Aws::Utils::Array<JsonView> subscriptionTimePeriodsJsonList = jsonValue.GetArray("subscriptionTimePeriods");
    for (unsigned subscriptionTimePeriodsIndex = 0; subscriptionTimePeriodsIndex < subscriptionTimePeriodsJsonList.GetLength();
         ++subscriptionTimePeriodsIndex) {
      m_subscriptionTimePeriods.push_back(subscriptionTimePeriodsJsonList[subscriptionTimePeriodsIndex].AsObject());
    }
    m_subscriptionTimePeriodsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleReservedInstanceSpend")) {
    m_totalSupportEligibleReservedInstanceSpend = jsonValue.GetString("totalSupportEligibleReservedInstanceSpend");
    m_totalSupportEligibleReservedInstanceSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleSavingsPlanSpend")) {
    m_totalSupportEligibleSavingsPlanSpend = jsonValue.GetString("totalSupportEligibleSavingsPlanSpend");
    m_totalSupportEligibleSavingsPlanSpendHasBeenSet = true;
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

JsonValue LinkedAccountCharge::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_payerAccountIdHasBeenSet) {
    payload.WithString("payerAccountId", m_payerAccountId);
  }

  if (m_accountTypeHasBeenSet) {
    payload.WithString("accountType", m_accountType);
  }

  if (m_billableSecondsHasBeenSet) {
    payload.WithInt64("billableSeconds", m_billableSeconds);
  }

  if (m_totalSecondsHasBeenSet) {
    payload.WithInt64("totalSeconds", m_totalSeconds);
  }

  if (m_totalSupportEligibleSpendHasBeenSet) {
    payload.WithString("totalSupportEligibleSpend", m_totalSupportEligibleSpend);
  }

  if (m_proratedTotalSupportEligibleSpendHasBeenSet) {
    payload.WithString("proratedTotalSupportEligibleSpend", m_proratedTotalSupportEligibleSpend);
  }

  if (m_linkedTimePeriodsHasBeenSet) {
    Aws::Utils::Array<JsonValue> linkedTimePeriodsJsonList(m_linkedTimePeriods.size());
    for (unsigned linkedTimePeriodsIndex = 0; linkedTimePeriodsIndex < linkedTimePeriodsJsonList.GetLength(); ++linkedTimePeriodsIndex) {
      linkedTimePeriodsJsonList[linkedTimePeriodsIndex].AsObject(m_linkedTimePeriods[linkedTimePeriodsIndex].Jsonize());
    }
    payload.WithArray("linkedTimePeriods", std::move(linkedTimePeriodsJsonList));
  }

  if (m_subscriptionTimePeriodsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subscriptionTimePeriodsJsonList(m_subscriptionTimePeriods.size());
    for (unsigned subscriptionTimePeriodsIndex = 0; subscriptionTimePeriodsIndex < subscriptionTimePeriodsJsonList.GetLength();
         ++subscriptionTimePeriodsIndex) {
      subscriptionTimePeriodsJsonList[subscriptionTimePeriodsIndex].AsObject(
          m_subscriptionTimePeriods[subscriptionTimePeriodsIndex].Jsonize());
    }
    payload.WithArray("subscriptionTimePeriods", std::move(subscriptionTimePeriodsJsonList));
  }

  if (m_totalSupportEligibleReservedInstanceSpendHasBeenSet) {
    payload.WithString("totalSupportEligibleReservedInstanceSpend", m_totalSupportEligibleReservedInstanceSpend);
  }

  if (m_totalSupportEligibleSavingsPlanSpendHasBeenSet) {
    payload.WithString("totalSupportEligibleSavingsPlanSpend", m_totalSupportEligibleSavingsPlanSpend);
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
