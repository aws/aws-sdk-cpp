/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewSegmentsListElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BillingViewSegmentsListElement::BillingViewSegmentsListElement(JsonView jsonValue) { *this = jsonValue; }

BillingViewSegmentsListElement& BillingViewSegmentsListElement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domain")) {
    m_domain = BillingDomainMapper::GetBillingDomainForName(jsonValue.GetString("domain"));
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeRange")) {
    m_timeRange = jsonValue.GetObject("timeRange");
    m_timeRangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingTransferAccountId")) {
    m_billingTransferAccountId = jsonValue.GetString("billingTransferAccountId");
    m_billingTransferAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managementAccountId")) {
    m_managementAccountId = jsonValue.GetString("managementAccountId");
    m_managementAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingGroupPrimaryAccountId")) {
    m_billingGroupPrimaryAccountId = jsonValue.GetString("billingGroupPrimaryAccountId");
    m_billingGroupPrimaryAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingViewSegmentsListElement::Jsonize() const {
  JsonValue payload;

  if (m_domainHasBeenSet) {
    payload.WithString("domain", BillingDomainMapper::GetNameForBillingDomain(m_domain));
  }

  if (m_timeRangeHasBeenSet) {
    payload.WithObject("timeRange", m_timeRange.Jsonize());
  }

  if (m_billingTransferAccountIdHasBeenSet) {
    payload.WithString("billingTransferAccountId", m_billingTransferAccountId);
  }

  if (m_managementAccountIdHasBeenSet) {
    payload.WithString("managementAccountId", m_managementAccountId);
  }

  if (m_billingGroupPrimaryAccountIdHasBeenSet) {
    payload.WithString("billingGroupPrimaryAccountId", m_billingGroupPrimaryAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
