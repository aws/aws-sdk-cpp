/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/EnterpriseSupportTimePeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

EnterpriseSupportTimePeriod::EnterpriseSupportTimePeriod(JsonView jsonValue) { *this = jsonValue; }

EnterpriseSupportTimePeriod& EnterpriseSupportTimePeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("beginDate")) {
    m_beginDate = jsonValue.GetDouble("beginDate");
    m_beginDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDate")) {
    m_endDate = jsonValue.GetDouble("endDate");
    m_endDateHasBeenSet = true;
  }
  return *this;
}

JsonValue EnterpriseSupportTimePeriod::Jsonize() const {
  JsonValue payload;

  if (m_beginDateHasBeenSet) {
    payload.WithDouble("beginDate", m_beginDate.SecondsWithMSPrecision());
  }

  if (m_endDateHasBeenSet) {
    payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
