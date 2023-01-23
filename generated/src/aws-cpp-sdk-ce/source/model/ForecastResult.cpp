/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ForecastResult::ForecastResult() : 
    m_timePeriodHasBeenSet(false),
    m_meanValueHasBeenSet(false),
    m_predictionIntervalLowerBoundHasBeenSet(false),
    m_predictionIntervalUpperBoundHasBeenSet(false)
{
}

ForecastResult::ForecastResult(JsonView jsonValue) : 
    m_timePeriodHasBeenSet(false),
    m_meanValueHasBeenSet(false),
    m_predictionIntervalLowerBoundHasBeenSet(false),
    m_predictionIntervalUpperBoundHasBeenSet(false)
{
  *this = jsonValue;
}

ForecastResult& ForecastResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

    m_timePeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeanValue"))
  {
    m_meanValue = jsonValue.GetString("MeanValue");

    m_meanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictionIntervalLowerBound"))
  {
    m_predictionIntervalLowerBound = jsonValue.GetString("PredictionIntervalLowerBound");

    m_predictionIntervalLowerBoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictionIntervalUpperBound"))
  {
    m_predictionIntervalUpperBound = jsonValue.GetString("PredictionIntervalUpperBound");

    m_predictionIntervalUpperBoundHasBeenSet = true;
  }

  return *this;
}

JsonValue ForecastResult::Jsonize() const
{
  JsonValue payload;

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_meanValueHasBeenSet)
  {
   payload.WithString("MeanValue", m_meanValue);

  }

  if(m_predictionIntervalLowerBoundHasBeenSet)
  {
   payload.WithString("PredictionIntervalLowerBound", m_predictionIntervalLowerBound);

  }

  if(m_predictionIntervalUpperBoundHasBeenSet)
  {
   payload.WithString("PredictionIntervalUpperBound", m_predictionIntervalUpperBound);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
