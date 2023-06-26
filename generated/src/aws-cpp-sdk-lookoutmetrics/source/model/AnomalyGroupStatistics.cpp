/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyGroupStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AnomalyGroupStatistics::AnomalyGroupStatistics() : 
    m_evaluationStartDateHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_itemizedMetricStatsListHasBeenSet(false)
{
}

AnomalyGroupStatistics::AnomalyGroupStatistics(JsonView jsonValue) : 
    m_evaluationStartDateHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_itemizedMetricStatsListHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyGroupStatistics& AnomalyGroupStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationStartDate"))
  {
    m_evaluationStartDate = jsonValue.GetString("EvaluationStartDate");

    m_evaluationStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemizedMetricStatsList"))
  {
    Aws::Utils::Array<JsonView> itemizedMetricStatsListJsonList = jsonValue.GetArray("ItemizedMetricStatsList");
    for(unsigned itemizedMetricStatsListIndex = 0; itemizedMetricStatsListIndex < itemizedMetricStatsListJsonList.GetLength(); ++itemizedMetricStatsListIndex)
    {
      m_itemizedMetricStatsList.push_back(itemizedMetricStatsListJsonList[itemizedMetricStatsListIndex].AsObject());
    }
    m_itemizedMetricStatsListHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyGroupStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationStartDateHasBeenSet)
  {
   payload.WithString("EvaluationStartDate", m_evaluationStartDate);

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInteger("TotalCount", m_totalCount);

  }

  if(m_itemizedMetricStatsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemizedMetricStatsListJsonList(m_itemizedMetricStatsList.size());
   for(unsigned itemizedMetricStatsListIndex = 0; itemizedMetricStatsListIndex < itemizedMetricStatsListJsonList.GetLength(); ++itemizedMetricStatsListIndex)
   {
     itemizedMetricStatsListJsonList[itemizedMetricStatsListIndex].AsObject(m_itemizedMetricStatsList[itemizedMetricStatsListIndex].Jsonize());
   }
   payload.WithArray("ItemizedMetricStatsList", std::move(itemizedMetricStatsListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
