/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/TimePeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

TimePeriod::TimePeriod(JsonView jsonValue) { *this = jsonValue; }

TimePeriod& TimePeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startTimeInclusive")) {
    m_startTimeInclusive = jsonValue.GetDouble("startTimeInclusive");
    m_startTimeInclusiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTimeExclusive")) {
    m_endTimeExclusive = jsonValue.GetDouble("endTimeExclusive");
    m_endTimeExclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue TimePeriod::Jsonize() const {
  JsonValue payload;

  if (m_startTimeInclusiveHasBeenSet) {
    payload.WithDouble("startTimeInclusive", m_startTimeInclusive.SecondsWithMSPrecision());
  }

  if (m_endTimeExclusiveHasBeenSet) {
    payload.WithDouble("endTimeExclusive", m_endTimeExclusive.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
