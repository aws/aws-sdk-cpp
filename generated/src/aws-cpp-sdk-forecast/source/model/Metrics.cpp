/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Metrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

Metrics::Metrics() : 
    m_weightedQuantileLossesHasBeenSet(false),
    m_errorMetricsHasBeenSet(false),
    m_averageWeightedQuantileLoss(0.0),
    m_averageWeightedQuantileLossHasBeenSet(false)
{
}

Metrics::Metrics(JsonView jsonValue) : 
    m_weightedQuantileLossesHasBeenSet(false),
    m_errorMetricsHasBeenSet(false),
    m_averageWeightedQuantileLoss(0.0),
    m_averageWeightedQuantileLossHasBeenSet(false)
{
  *this = jsonValue;
}

Metrics& Metrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeightedQuantileLosses"))
  {
    Aws::Utils::Array<JsonView> weightedQuantileLossesJsonList = jsonValue.GetArray("WeightedQuantileLosses");
    for(unsigned weightedQuantileLossesIndex = 0; weightedQuantileLossesIndex < weightedQuantileLossesJsonList.GetLength(); ++weightedQuantileLossesIndex)
    {
      m_weightedQuantileLosses.push_back(weightedQuantileLossesJsonList[weightedQuantileLossesIndex].AsObject());
    }
    m_weightedQuantileLossesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMetrics"))
  {
    Aws::Utils::Array<JsonView> errorMetricsJsonList = jsonValue.GetArray("ErrorMetrics");
    for(unsigned errorMetricsIndex = 0; errorMetricsIndex < errorMetricsJsonList.GetLength(); ++errorMetricsIndex)
    {
      m_errorMetrics.push_back(errorMetricsJsonList[errorMetricsIndex].AsObject());
    }
    m_errorMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageWeightedQuantileLoss"))
  {
    m_averageWeightedQuantileLoss = jsonValue.GetDouble("AverageWeightedQuantileLoss");

    m_averageWeightedQuantileLossHasBeenSet = true;
  }

  return *this;
}

JsonValue Metrics::Jsonize() const
{
  JsonValue payload;

  if(m_weightedQuantileLossesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> weightedQuantileLossesJsonList(m_weightedQuantileLosses.size());
   for(unsigned weightedQuantileLossesIndex = 0; weightedQuantileLossesIndex < weightedQuantileLossesJsonList.GetLength(); ++weightedQuantileLossesIndex)
   {
     weightedQuantileLossesJsonList[weightedQuantileLossesIndex].AsObject(m_weightedQuantileLosses[weightedQuantileLossesIndex].Jsonize());
   }
   payload.WithArray("WeightedQuantileLosses", std::move(weightedQuantileLossesJsonList));

  }

  if(m_errorMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorMetricsJsonList(m_errorMetrics.size());
   for(unsigned errorMetricsIndex = 0; errorMetricsIndex < errorMetricsJsonList.GetLength(); ++errorMetricsIndex)
   {
     errorMetricsJsonList[errorMetricsIndex].AsObject(m_errorMetrics[errorMetricsIndex].Jsonize());
   }
   payload.WithArray("ErrorMetrics", std::move(errorMetricsJsonList));

  }

  if(m_averageWeightedQuantileLossHasBeenSet)
  {
   payload.WithDouble("AverageWeightedQuantileLoss", m_averageWeightedQuantileLoss);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
