/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BillingPeriod::BillingPeriod(JsonView jsonValue) { *this = jsonValue; }

BillingPeriod& BillingPeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("year")) {
    m_year = jsonValue.GetInteger("year");
    m_yearHasBeenSet = true;
  }
  if (jsonValue.ValueExists("month")) {
    m_month = jsonValue.GetInteger("month");
    m_monthHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingPeriod::Jsonize() const {
  JsonValue payload;

  if (m_yearHasBeenSet) {
    payload.WithInteger("year", m_year);
  }

  if (m_monthHasBeenSet) {
    payload.WithInteger("month", m_month);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
