/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/model/Forecast.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastQueryService
{
namespace Model
{

Forecast::Forecast() : 
    m_predictionsHasBeenSet(false)
{
}

Forecast::Forecast(JsonView jsonValue) : 
    m_predictionsHasBeenSet(false)
{
  *this = jsonValue;
}

Forecast& Forecast::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Predictions"))
  {
    Aws::Map<Aws::String, JsonView> predictionsJsonMap = jsonValue.GetObject("Predictions").GetAllObjects();
    for(auto& predictionsItem : predictionsJsonMap)
    {
      Aws::Utils::Array<JsonView> timeSeriesJsonList = predictionsItem.second.AsArray();
      Aws::Vector<DataPoint> timeSeriesList;
      timeSeriesList.reserve((size_t)timeSeriesJsonList.GetLength());
      for(unsigned timeSeriesIndex = 0; timeSeriesIndex < timeSeriesJsonList.GetLength(); ++timeSeriesIndex)
      {
        timeSeriesList.push_back(timeSeriesJsonList[timeSeriesIndex].AsObject());
      }
      m_predictions[predictionsItem.first] = std::move(timeSeriesList);
    }
    m_predictionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Forecast::Jsonize() const
{
  JsonValue payload;

  if(m_predictionsHasBeenSet)
  {
   JsonValue predictionsJsonMap;
   for(auto& predictionsItem : m_predictions)
   {
     Aws::Utils::Array<JsonValue> timeSeriesJsonList(predictionsItem.second.size());
     for(unsigned timeSeriesIndex = 0; timeSeriesIndex < timeSeriesJsonList.GetLength(); ++timeSeriesIndex)
     {
       timeSeriesJsonList[timeSeriesIndex].AsObject(predictionsItem.second[timeSeriesIndex].Jsonize());
     }
     predictionsJsonMap.WithArray(predictionsItem.first, std::move(timeSeriesJsonList));
   }
   payload.WithObject("Predictions", std::move(predictionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
