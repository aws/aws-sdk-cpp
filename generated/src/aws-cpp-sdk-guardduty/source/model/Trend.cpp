/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Trend.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Trend::Trend(JsonView jsonValue) { *this = jsonValue; }

Trend& Trend::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("granularity")) {
    m_granularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("granularity"));
    m_granularityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startedAt = jsonValue.GetDouble("startTime");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endedAt = jsonValue.GetDouble("endTime");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalFindings")) {
    m_totalFindings = jsonValue.GetInt64("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("byTimeWindow")) {
    Aws::Utils::Array<JsonView> byTimeWindowJsonList = jsonValue.GetArray("byTimeWindow");
    for (unsigned byTimeWindowIndex = 0; byTimeWindowIndex < byTimeWindowJsonList.GetLength(); ++byTimeWindowIndex) {
      m_byTimeWindow.push_back(byTimeWindowJsonList[byTimeWindowIndex].AsObject());
    }
    m_byTimeWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue Trend::Jsonize() const {
  JsonValue payload;

  if (m_granularityHasBeenSet) {
    payload.WithString("granularity", TimeGranularityMapper::GetNameForTimeGranularity(m_granularity));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startTime", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endTime", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_totalFindingsHasBeenSet) {
    payload.WithInt64("totalFindings", m_totalFindings);
  }

  if (m_byTimeWindowHasBeenSet) {
    Aws::Utils::Array<JsonValue> byTimeWindowJsonList(m_byTimeWindow.size());
    for (unsigned byTimeWindowIndex = 0; byTimeWindowIndex < byTimeWindowJsonList.GetLength(); ++byTimeWindowIndex) {
      byTimeWindowJsonList[byTimeWindowIndex].AsObject(m_byTimeWindow[byTimeWindowIndex].Jsonize());
    }
    payload.WithArray("byTimeWindow", std::move(byTimeWindowJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
