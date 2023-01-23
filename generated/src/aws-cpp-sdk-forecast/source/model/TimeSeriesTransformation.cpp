/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimeSeriesTransformation.h>
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

TimeSeriesTransformation::TimeSeriesTransformation() : 
    m_actionHasBeenSet(false),
    m_timeSeriesConditionsHasBeenSet(false)
{
}

TimeSeriesTransformation::TimeSeriesTransformation(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_timeSeriesConditionsHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesTransformation& TimeSeriesTransformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeSeriesConditions"))
  {
    Aws::Utils::Array<JsonView> timeSeriesConditionsJsonList = jsonValue.GetArray("TimeSeriesConditions");
    for(unsigned timeSeriesConditionsIndex = 0; timeSeriesConditionsIndex < timeSeriesConditionsJsonList.GetLength(); ++timeSeriesConditionsIndex)
    {
      m_timeSeriesConditions.push_back(timeSeriesConditionsJsonList[timeSeriesConditionsIndex].AsObject());
    }
    m_timeSeriesConditionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesTransformation::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_timeSeriesConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timeSeriesConditionsJsonList(m_timeSeriesConditions.size());
   for(unsigned timeSeriesConditionsIndex = 0; timeSeriesConditionsIndex < timeSeriesConditionsJsonList.GetLength(); ++timeSeriesConditionsIndex)
   {
     timeSeriesConditionsJsonList[timeSeriesConditionsIndex].AsObject(m_timeSeriesConditions[timeSeriesConditionsIndex].Jsonize());
   }
   payload.WithArray("TimeSeriesConditions", std::move(timeSeriesConditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
