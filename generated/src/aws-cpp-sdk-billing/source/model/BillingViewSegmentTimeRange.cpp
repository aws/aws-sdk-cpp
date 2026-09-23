/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewSegmentTimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BillingViewSegmentTimeRange::BillingViewSegmentTimeRange(JsonView jsonValue) { *this = jsonValue; }

BillingViewSegmentTimeRange& BillingViewSegmentTimeRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("beginDateInclusive")) {
    m_beginDateInclusive = jsonValue.GetDouble("beginDateInclusive");
    m_beginDateInclusiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDateExclusive")) {
    m_endDateExclusive = jsonValue.GetDouble("endDateExclusive");
    m_endDateExclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingViewSegmentTimeRange::Jsonize() const {
  JsonValue payload;

  if (m_beginDateInclusiveHasBeenSet) {
    payload.WithDouble("beginDateInclusive", m_beginDateInclusive.SecondsWithMSPrecision());
  }

  if (m_endDateExclusiveHasBeenSet) {
    payload.WithDouble("endDateExclusive", m_endDateExclusive.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
