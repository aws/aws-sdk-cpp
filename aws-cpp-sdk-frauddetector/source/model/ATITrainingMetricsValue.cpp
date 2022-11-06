/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ATITrainingMetricsValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ATITrainingMetricsValue::ATITrainingMetricsValue() : 
    m_metricDataPointsHasBeenSet(false),
    m_modelPerformanceHasBeenSet(false)
{
}

ATITrainingMetricsValue::ATITrainingMetricsValue(JsonView jsonValue) : 
    m_metricDataPointsHasBeenSet(false),
    m_modelPerformanceHasBeenSet(false)
{
  *this = jsonValue;
}

ATITrainingMetricsValue& ATITrainingMetricsValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricDataPoints"))
  {
    Aws::Utils::Array<JsonView> metricDataPointsJsonList = jsonValue.GetArray("metricDataPoints");
    for(unsigned metricDataPointsIndex = 0; metricDataPointsIndex < metricDataPointsJsonList.GetLength(); ++metricDataPointsIndex)
    {
      m_metricDataPoints.push_back(metricDataPointsJsonList[metricDataPointsIndex].AsObject());
    }
    m_metricDataPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelPerformance"))
  {
    m_modelPerformance = jsonValue.GetObject("modelPerformance");

    m_modelPerformanceHasBeenSet = true;
  }

  return *this;
}

JsonValue ATITrainingMetricsValue::Jsonize() const
{
  JsonValue payload;

  if(m_metricDataPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricDataPointsJsonList(m_metricDataPoints.size());
   for(unsigned metricDataPointsIndex = 0; metricDataPointsIndex < metricDataPointsJsonList.GetLength(); ++metricDataPointsIndex)
   {
     metricDataPointsJsonList[metricDataPointsIndex].AsObject(m_metricDataPoints[metricDataPointsIndex].Jsonize());
   }
   payload.WithArray("metricDataPoints", std::move(metricDataPointsJsonList));

  }

  if(m_modelPerformanceHasBeenSet)
  {
   payload.WithObject("modelPerformance", m_modelPerformance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
