/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/PredictorBaseline.h>
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

PredictorBaseline::PredictorBaseline() : 
    m_baselineMetricsHasBeenSet(false)
{
}

PredictorBaseline::PredictorBaseline(JsonView jsonValue) : 
    m_baselineMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

PredictorBaseline& PredictorBaseline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaselineMetrics"))
  {
    Aws::Utils::Array<JsonView> baselineMetricsJsonList = jsonValue.GetArray("BaselineMetrics");
    for(unsigned baselineMetricsIndex = 0; baselineMetricsIndex < baselineMetricsJsonList.GetLength(); ++baselineMetricsIndex)
    {
      m_baselineMetrics.push_back(baselineMetricsJsonList[baselineMetricsIndex].AsObject());
    }
    m_baselineMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictorBaseline::Jsonize() const
{
  JsonValue payload;

  if(m_baselineMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> baselineMetricsJsonList(m_baselineMetrics.size());
   for(unsigned baselineMetricsIndex = 0; baselineMetricsIndex < baselineMetricsJsonList.GetLength(); ++baselineMetricsIndex)
   {
     baselineMetricsJsonList[baselineMetricsIndex].AsObject(m_baselineMetrics[baselineMetricsIndex].Jsonize());
   }
   payload.WithArray("BaselineMetrics", std::move(baselineMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
