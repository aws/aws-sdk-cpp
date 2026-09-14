/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomTier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {

CustomTier::CustomTier(JsonView jsonValue) { *this = jsonValue; }

CustomTier& CustomTier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BeginRangeInclusive")) {
    m_beginRangeInclusive = jsonValue.GetDouble("BeginRangeInclusive");
    m_beginRangeInclusiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndRangeExclusive")) {
    m_endRangeExclusive = jsonValue.GetDouble("EndRangeExclusive");
    m_endRangeExclusiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RateValue")) {
    m_rateValue = jsonValue.GetDouble("RateValue");
    m_rateValueHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomTier::Jsonize() const {
  JsonValue payload;

  if (m_beginRangeInclusiveHasBeenSet) {
    payload.WithDouble("BeginRangeInclusive", m_beginRangeInclusive);
  }

  if (m_endRangeExclusiveHasBeenSet) {
    payload.WithDouble("EndRangeExclusive", m_endRangeExclusive);
  }

  if (m_rateValueHasBeenSet) {
    payload.WithDouble("RateValue", m_rateValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
