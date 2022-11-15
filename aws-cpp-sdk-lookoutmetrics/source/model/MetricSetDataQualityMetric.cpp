/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/MetricSetDataQualityMetric.h>
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

MetricSetDataQualityMetric::MetricSetDataQualityMetric() : 
    m_metricSetArnHasBeenSet(false),
    m_dataQualityMetricListHasBeenSet(false)
{
}

MetricSetDataQualityMetric::MetricSetDataQualityMetric(JsonView jsonValue) : 
    m_metricSetArnHasBeenSet(false),
    m_dataQualityMetricListHasBeenSet(false)
{
  *this = jsonValue;
}

MetricSetDataQualityMetric& MetricSetDataQualityMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricSetArn"))
  {
    m_metricSetArn = jsonValue.GetString("MetricSetArn");

    m_metricSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataQualityMetricList"))
  {
    Aws::Utils::Array<JsonView> dataQualityMetricListJsonList = jsonValue.GetArray("DataQualityMetricList");
    for(unsigned dataQualityMetricListIndex = 0; dataQualityMetricListIndex < dataQualityMetricListJsonList.GetLength(); ++dataQualityMetricListIndex)
    {
      m_dataQualityMetricList.push_back(dataQualityMetricListJsonList[dataQualityMetricListIndex].AsObject());
    }
    m_dataQualityMetricListHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricSetDataQualityMetric::Jsonize() const
{
  JsonValue payload;

  if(m_metricSetArnHasBeenSet)
  {
   payload.WithString("MetricSetArn", m_metricSetArn);

  }

  if(m_dataQualityMetricListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataQualityMetricListJsonList(m_dataQualityMetricList.size());
   for(unsigned dataQualityMetricListIndex = 0; dataQualityMetricListIndex < dataQualityMetricListJsonList.GetLength(); ++dataQualityMetricListIndex)
   {
     dataQualityMetricListJsonList[dataQualityMetricListIndex].AsObject(m_dataQualityMetricList[dataQualityMetricListIndex].Jsonize());
   }
   payload.WithArray("DataQualityMetricList", std::move(dataQualityMetricListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
