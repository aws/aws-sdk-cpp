/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingPreferenceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BillingPreferenceSummary::BillingPreferenceSummary(JsonView jsonValue) { *this = jsonValue; }

BillingPreferenceSummary& BillingPreferenceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("feature")) {
    m_feature = BillingFeatureMapper::GetBillingFeatureForName(jsonValue.GetString("feature"));
    m_featureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = PreferenceValueMapper::GetPreferenceValueForName(jsonValue.GetString("value"));
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountName")) {
    m_accountName = jsonValue.GetString("accountName");
    m_accountNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingPeriod")) {
    m_billingPeriod = jsonValue.GetObject("billingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingPreferenceSummary::Jsonize() const {
  JsonValue payload;

  if (m_featureHasBeenSet) {
    payload.WithString("feature", BillingFeatureMapper::GetNameForBillingFeature(m_feature));
  }

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", PreferenceValueMapper::GetNameForPreferenceValue(m_value));
  }

  if (m_accountNameHasBeenSet) {
    payload.WithString("accountName", m_accountName);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_billingPeriodHasBeenSet) {
    payload.WithObject("billingPeriod", m_billingPeriod.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
