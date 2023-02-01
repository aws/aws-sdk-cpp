/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyGroup.h>
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

AnomalyGroup::AnomalyGroup() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_anomalyGroupIdHasBeenSet(false),
    m_anomalyGroupScore(0.0),
    m_anomalyGroupScoreHasBeenSet(false),
    m_primaryMetricNameHasBeenSet(false),
    m_metricLevelImpactListHasBeenSet(false)
{
}

AnomalyGroup::AnomalyGroup(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_anomalyGroupIdHasBeenSet(false),
    m_anomalyGroupScore(0.0),
    m_anomalyGroupScoreHasBeenSet(false),
    m_primaryMetricNameHasBeenSet(false),
    m_metricLevelImpactListHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyGroup& AnomalyGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyGroupId"))
  {
    m_anomalyGroupId = jsonValue.GetString("AnomalyGroupId");

    m_anomalyGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyGroupScore"))
  {
    m_anomalyGroupScore = jsonValue.GetDouble("AnomalyGroupScore");

    m_anomalyGroupScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryMetricName"))
  {
    m_primaryMetricName = jsonValue.GetString("PrimaryMetricName");

    m_primaryMetricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricLevelImpactList"))
  {
    Aws::Utils::Array<JsonView> metricLevelImpactListJsonList = jsonValue.GetArray("MetricLevelImpactList");
    for(unsigned metricLevelImpactListIndex = 0; metricLevelImpactListIndex < metricLevelImpactListJsonList.GetLength(); ++metricLevelImpactListIndex)
    {
      m_metricLevelImpactList.push_back(metricLevelImpactListJsonList[metricLevelImpactListIndex].AsObject());
    }
    m_metricLevelImpactListHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyGroup::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime);

  }

  if(m_anomalyGroupIdHasBeenSet)
  {
   payload.WithString("AnomalyGroupId", m_anomalyGroupId);

  }

  if(m_anomalyGroupScoreHasBeenSet)
  {
   payload.WithDouble("AnomalyGroupScore", m_anomalyGroupScore);

  }

  if(m_primaryMetricNameHasBeenSet)
  {
   payload.WithString("PrimaryMetricName", m_primaryMetricName);

  }

  if(m_metricLevelImpactListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricLevelImpactListJsonList(m_metricLevelImpactList.size());
   for(unsigned metricLevelImpactListIndex = 0; metricLevelImpactListIndex < metricLevelImpactListJsonList.GetLength(); ++metricLevelImpactListIndex)
   {
     metricLevelImpactListJsonList[metricLevelImpactListIndex].AsObject(m_metricLevelImpactList[metricLevelImpactListIndex].Jsonize());
   }
   payload.WithArray("MetricLevelImpactList", std::move(metricLevelImpactListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
