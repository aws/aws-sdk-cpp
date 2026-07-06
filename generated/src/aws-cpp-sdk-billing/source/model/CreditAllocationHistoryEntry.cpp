/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/CreditAllocationHistoryEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

CreditAllocationHistoryEntry::CreditAllocationHistoryEntry(JsonView jsonValue) { *this = jsonValue; }

CreditAllocationHistoryEntry& CreditAllocationHistoryEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("creditId")) {
    m_creditId = jsonValue.GetString("creditId");
    m_creditIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creditAmount")) {
    m_creditAmount = jsonValue.GetObject("creditAmount");
    m_creditAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appliedServiceName")) {
    m_appliedServiceName = jsonValue.GetString("appliedServiceName");
    m_appliedServiceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingMonth")) {
    m_billingMonth = jsonValue.GetString("billingMonth");
    m_billingMonthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isEstimatedBill")) {
    m_isEstimatedBill = jsonValue.GetBool("isEstimatedBill");
    m_isEstimatedBillHasBeenSet = true;
  }
  return *this;
}

JsonValue CreditAllocationHistoryEntry::Jsonize() const {
  JsonValue payload;

  if (m_creditIdHasBeenSet) {
    payload.WithString("creditId", m_creditId);
  }

  if (m_creditAmountHasBeenSet) {
    payload.WithObject("creditAmount", m_creditAmount.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_appliedServiceNameHasBeenSet) {
    payload.WithString("appliedServiceName", m_appliedServiceName);
  }

  if (m_billingMonthHasBeenSet) {
    payload.WithString("billingMonth", m_billingMonth);
  }

  if (m_isEstimatedBillHasBeenSet) {
    payload.WithBool("isEstimatedBill", m_isEstimatedBill);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
