/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      Array<JsonView> timeSeriesJsonList = predictionsItem.second.AsArray();
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
     Array<JsonValue> timeSeriesJsonList(predictionsItem.second.size());
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
