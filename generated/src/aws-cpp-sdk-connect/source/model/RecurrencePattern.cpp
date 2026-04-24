/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RecurrencePattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

RecurrencePattern::RecurrencePattern(JsonView jsonValue) { *this = jsonValue; }

RecurrencePattern& RecurrencePattern::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Frequency")) {
    m_frequency = RecurrenceFrequencyMapper::GetRecurrenceFrequencyForName(jsonValue.GetString("Frequency"));
    m_frequencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Interval")) {
    m_interval = jsonValue.GetInteger("Interval");
    m_intervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ByMonth")) {
    Aws::Utils::Array<JsonView> byMonthJsonList = jsonValue.GetArray("ByMonth");
    for (unsigned byMonthIndex = 0; byMonthIndex < byMonthJsonList.GetLength(); ++byMonthIndex) {
      m_byMonth.push_back(byMonthJsonList[byMonthIndex].AsInteger());
    }
    m_byMonthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ByMonthDay")) {
    Aws::Utils::Array<JsonView> byMonthDayJsonList = jsonValue.GetArray("ByMonthDay");
    for (unsigned byMonthDayIndex = 0; byMonthDayIndex < byMonthDayJsonList.GetLength(); ++byMonthDayIndex) {
      m_byMonthDay.push_back(byMonthDayJsonList[byMonthDayIndex].AsInteger());
    }
    m_byMonthDayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ByWeekdayOccurrence")) {
    Aws::Utils::Array<JsonView> byWeekdayOccurrenceJsonList = jsonValue.GetArray("ByWeekdayOccurrence");
    for (unsigned byWeekdayOccurrenceIndex = 0; byWeekdayOccurrenceIndex < byWeekdayOccurrenceJsonList.GetLength();
         ++byWeekdayOccurrenceIndex) {
      m_byWeekdayOccurrence.push_back(byWeekdayOccurrenceJsonList[byWeekdayOccurrenceIndex].AsInteger());
    }
    m_byWeekdayOccurrenceHasBeenSet = true;
  }
  return *this;
}

JsonValue RecurrencePattern::Jsonize() const {
  JsonValue payload;

  if (m_frequencyHasBeenSet) {
    payload.WithString("Frequency", RecurrenceFrequencyMapper::GetNameForRecurrenceFrequency(m_frequency));
  }

  if (m_intervalHasBeenSet) {
    payload.WithInteger("Interval", m_interval);
  }

  if (m_byMonthHasBeenSet) {
    Aws::Utils::Array<JsonValue> byMonthJsonList(m_byMonth.size());
    for (unsigned byMonthIndex = 0; byMonthIndex < byMonthJsonList.GetLength(); ++byMonthIndex) {
      byMonthJsonList[byMonthIndex].AsInteger(m_byMonth[byMonthIndex]);
    }
    payload.WithArray("ByMonth", std::move(byMonthJsonList));
  }

  if (m_byMonthDayHasBeenSet) {
    Aws::Utils::Array<JsonValue> byMonthDayJsonList(m_byMonthDay.size());
    for (unsigned byMonthDayIndex = 0; byMonthDayIndex < byMonthDayJsonList.GetLength(); ++byMonthDayIndex) {
      byMonthDayJsonList[byMonthDayIndex].AsInteger(m_byMonthDay[byMonthDayIndex]);
    }
    payload.WithArray("ByMonthDay", std::move(byMonthDayJsonList));
  }

  if (m_byWeekdayOccurrenceHasBeenSet) {
    Aws::Utils::Array<JsonValue> byWeekdayOccurrenceJsonList(m_byWeekdayOccurrence.size());
    for (unsigned byWeekdayOccurrenceIndex = 0; byWeekdayOccurrenceIndex < byWeekdayOccurrenceJsonList.GetLength();
         ++byWeekdayOccurrenceIndex) {
      byWeekdayOccurrenceJsonList[byWeekdayOccurrenceIndex].AsInteger(m_byWeekdayOccurrence[byWeekdayOccurrenceIndex]);
    }
    payload.WithArray("ByWeekdayOccurrence", std::move(byWeekdayOccurrenceJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
