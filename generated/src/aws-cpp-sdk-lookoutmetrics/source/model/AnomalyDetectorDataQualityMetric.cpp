/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyDetectorDataQualityMetric.h>
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

AnomalyDetectorDataQualityMetric::AnomalyDetectorDataQualityMetric() : 
    m_startTimestampHasBeenSet(false),
    m_metricSetDataQualityMetricListHasBeenSet(false)
{
}

AnomalyDetectorDataQualityMetric::AnomalyDetectorDataQualityMetric(JsonView jsonValue) : 
    m_startTimestampHasBeenSet(false),
    m_metricSetDataQualityMetricListHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyDetectorDataQualityMetric& AnomalyDetectorDataQualityMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricSetDataQualityMetricList"))
  {
    Aws::Utils::Array<JsonView> metricSetDataQualityMetricListJsonList = jsonValue.GetArray("MetricSetDataQualityMetricList");
    for(unsigned metricSetDataQualityMetricListIndex = 0; metricSetDataQualityMetricListIndex < metricSetDataQualityMetricListJsonList.GetLength(); ++metricSetDataQualityMetricListIndex)
    {
      m_metricSetDataQualityMetricList.push_back(metricSetDataQualityMetricListJsonList[metricSetDataQualityMetricListIndex].AsObject());
    }
    m_metricSetDataQualityMetricListHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyDetectorDataQualityMetric::Jsonize() const
{
  JsonValue payload;

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_metricSetDataQualityMetricListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricSetDataQualityMetricListJsonList(m_metricSetDataQualityMetricList.size());
   for(unsigned metricSetDataQualityMetricListIndex = 0; metricSetDataQualityMetricListIndex < metricSetDataQualityMetricListJsonList.GetLength(); ++metricSetDataQualityMetricListIndex)
   {
     metricSetDataQualityMetricListJsonList[metricSetDataQualityMetricListIndex].AsObject(m_metricSetDataQualityMetricList[metricSetDataQualityMetricListIndex].Jsonize());
   }
   payload.WithArray("MetricSetDataQualityMetricList", std::move(metricSetDataQualityMetricListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
