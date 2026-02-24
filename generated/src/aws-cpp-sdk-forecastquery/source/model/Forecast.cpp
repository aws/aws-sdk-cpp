/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/forecastquery/model/Forecast.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ForecastQueryService {
namespace Model {

Forecast::Forecast(JsonView jsonValue) { *this = jsonValue; }

Forecast& Forecast::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Predictions")) {
    Aws::Map<Aws::String, JsonView> predictionsJsonMap = jsonValue.GetObject("Predictions").GetAllObjects();
    for (auto& predictionsItem : predictionsJsonMap) {
      Aws::Utils::Array<JsonView> timeSeries2JsonList = predictionsItem.second.AsArray();
      Aws::Vector<DataPoint> timeSeries2List;
      timeSeries2List.reserve((size_t)timeSeries2JsonList.GetLength());
      for (unsigned timeSeries2Index = 0; timeSeries2Index < timeSeries2JsonList.GetLength(); ++timeSeries2Index) {
        timeSeries2List.push_back(timeSeries2JsonList[timeSeries2Index].AsObject());
      }
      m_predictions[predictionsItem.first] = std::move(timeSeries2List);
    }
    m_predictionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Forecast::Jsonize() const {
  JsonValue payload;

  if (m_predictionsHasBeenSet) {
    JsonValue predictionsJsonMap;
    for (auto& predictionsItem : m_predictions) {
      Aws::Utils::Array<JsonValue> timeSeriesJsonList(predictionsItem.second.size());
      for (unsigned timeSeriesIndex = 0; timeSeriesIndex < timeSeriesJsonList.GetLength(); ++timeSeriesIndex) {
        timeSeriesJsonList[timeSeriesIndex].AsObject(predictionsItem.second[timeSeriesIndex].Jsonize());
      }
      predictionsJsonMap.WithArray(predictionsItem.first, std::move(timeSeriesJsonList));
    }
    payload.WithObject("Predictions", std::move(predictionsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ForecastQueryService
}  // namespace Aws
