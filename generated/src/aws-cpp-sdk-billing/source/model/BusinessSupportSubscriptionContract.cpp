/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BusinessSupportSubscriptionContract.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BusinessSupportSubscriptionContract::BusinessSupportSubscriptionContract(JsonView jsonValue) { *this = jsonValue; }

BusinessSupportSubscriptionContract& BusinessSupportSubscriptionContract::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("planName")) {
    m_planName = jsonValue.GetString("planName");
    m_planNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractStartDate")) {
    m_contractStartDate = jsonValue.GetDouble("contractStartDate");
    m_contractStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractEndDate")) {
    m_contractEndDate = jsonValue.GetDouble("contractEndDate");
    m_contractEndDateHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessSupportSubscriptionContract::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_planNameHasBeenSet) {
    payload.WithString("planName", m_planName);
  }

  if (m_contractStartDateHasBeenSet) {
    payload.WithDouble("contractStartDate", m_contractStartDate.SecondsWithMSPrecision());
  }

  if (m_contractEndDateHasBeenSet) {
    payload.WithDouble("contractEndDate", m_contractEndDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
