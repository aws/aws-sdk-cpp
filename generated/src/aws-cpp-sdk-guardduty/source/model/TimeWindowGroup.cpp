/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/TimeWindowGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

TimeWindowGroup::TimeWindowGroup(JsonView jsonValue) { *this = jsonValue; }

TimeWindowGroup& TimeWindowGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingCount")) {
    m_findingCount = jsonValue.GetInteger("findingCount");
    m_findingCountHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeWindowGroup::Jsonize() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_findingCountHasBeenSet) {
    payload.WithInteger("findingCount", m_findingCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
