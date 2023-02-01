/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PerformanceInsightsMetricsDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

PerformanceInsightsMetricsDetail::PerformanceInsightsMetricsDetail() : 
    m_metricDisplayNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_metricQueryHasBeenSet(false),
    m_referenceDataHasBeenSet(false),
    m_statsAtAnomalyHasBeenSet(false),
    m_statsAtBaselineHasBeenSet(false)
{
}

PerformanceInsightsMetricsDetail::PerformanceInsightsMetricsDetail(JsonView jsonValue) : 
    m_metricDisplayNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_metricQueryHasBeenSet(false),
    m_referenceDataHasBeenSet(false),
    m_statsAtAnomalyHasBeenSet(false),
    m_statsAtBaselineHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceInsightsMetricsDetail& PerformanceInsightsMetricsDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricDisplayName"))
  {
    m_metricDisplayName = jsonValue.GetString("MetricDisplayName");

    m_metricDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricQuery"))
  {
    m_metricQuery = jsonValue.GetObject("MetricQuery");

    m_metricQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceData"))
  {
    Aws::Utils::Array<JsonView> referenceDataJsonList = jsonValue.GetArray("ReferenceData");
    for(unsigned referenceDataIndex = 0; referenceDataIndex < referenceDataJsonList.GetLength(); ++referenceDataIndex)
    {
      m_referenceData.push_back(referenceDataJsonList[referenceDataIndex].AsObject());
    }
    m_referenceDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatsAtAnomaly"))
  {
    Aws::Utils::Array<JsonView> statsAtAnomalyJsonList = jsonValue.GetArray("StatsAtAnomaly");
    for(unsigned statsAtAnomalyIndex = 0; statsAtAnomalyIndex < statsAtAnomalyJsonList.GetLength(); ++statsAtAnomalyIndex)
    {
      m_statsAtAnomaly.push_back(statsAtAnomalyJsonList[statsAtAnomalyIndex].AsObject());
    }
    m_statsAtAnomalyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatsAtBaseline"))
  {
    Aws::Utils::Array<JsonView> statsAtBaselineJsonList = jsonValue.GetArray("StatsAtBaseline");
    for(unsigned statsAtBaselineIndex = 0; statsAtBaselineIndex < statsAtBaselineJsonList.GetLength(); ++statsAtBaselineIndex)
    {
      m_statsAtBaseline.push_back(statsAtBaselineJsonList[statsAtBaselineIndex].AsObject());
    }
    m_statsAtBaselineHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceInsightsMetricsDetail::Jsonize() const
{
  JsonValue payload;

  if(m_metricDisplayNameHasBeenSet)
  {
   payload.WithString("MetricDisplayName", m_metricDisplayName);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  if(m_metricQueryHasBeenSet)
  {
   payload.WithObject("MetricQuery", m_metricQuery.Jsonize());

  }

  if(m_referenceDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referenceDataJsonList(m_referenceData.size());
   for(unsigned referenceDataIndex = 0; referenceDataIndex < referenceDataJsonList.GetLength(); ++referenceDataIndex)
   {
     referenceDataJsonList[referenceDataIndex].AsObject(m_referenceData[referenceDataIndex].Jsonize());
   }
   payload.WithArray("ReferenceData", std::move(referenceDataJsonList));

  }

  if(m_statsAtAnomalyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statsAtAnomalyJsonList(m_statsAtAnomaly.size());
   for(unsigned statsAtAnomalyIndex = 0; statsAtAnomalyIndex < statsAtAnomalyJsonList.GetLength(); ++statsAtAnomalyIndex)
   {
     statsAtAnomalyJsonList[statsAtAnomalyIndex].AsObject(m_statsAtAnomaly[statsAtAnomalyIndex].Jsonize());
   }
   payload.WithArray("StatsAtAnomaly", std::move(statsAtAnomalyJsonList));

  }

  if(m_statsAtBaselineHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statsAtBaselineJsonList(m_statsAtBaseline.size());
   for(unsigned statsAtBaselineIndex = 0; statsAtBaselineIndex < statsAtBaselineJsonList.GetLength(); ++statsAtBaselineIndex)
   {
     statsAtBaselineJsonList[statsAtBaselineIndex].AsObject(m_statsAtBaseline[statsAtBaselineIndex].Jsonize());
   }
   payload.WithArray("StatsAtBaseline", std::move(statsAtBaselineJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
