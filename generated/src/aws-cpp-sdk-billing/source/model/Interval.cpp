/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/Interval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

Interval::Interval(JsonView jsonValue) { *this = jsonValue; }

Interval& Interval::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startDateInclusive")) {
    m_startDateInclusive = jsonValue.GetDouble("startDateInclusive");
    m_startDateInclusiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDateInclusive")) {
    m_endDateInclusive = jsonValue.GetDouble("endDateInclusive");
    m_endDateInclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue Interval::Jsonize() const {
  JsonValue payload;

  if (m_startDateInclusiveHasBeenSet) {
    payload.WithDouble("startDateInclusive", m_startDateInclusive.SecondsWithMSPrecision());
  }

  if (m_endDateInclusiveHasBeenSet) {
    payload.WithDouble("endDateInclusive", m_endDateInclusive.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
