/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StartSessionsStatisticsAggregationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSessionsStatisticsAggregationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdsHasBeenSet)
  {
   payload.WithObject("resourceIds", m_resourceIds.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("timezone", m_timezone);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithString("period", PeriodMapper::GetNameForPeriod(m_period));
  }

  if(m_groupByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
   for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
   {
     groupByJsonList[groupByIndex].AsString(UsageGroupByFieldMapper::GetNameForUsageGroupByField(m_groupBy[groupByIndex]));
   }
   payload.WithArray("groupBy", std::move(groupByJsonList));

  }

  if(m_statisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsString(UsageStatisticMapper::GetNameForUsageStatistic(m_statistics[statisticsIndex]));
   }
   payload.WithArray("statistics", std::move(statisticsJsonList));

  }

  return payload.View().WriteReadable();
}




