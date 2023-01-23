/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/TimeSeries.h>
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

TimeSeries::TimeSeries() : 
    m_timeSeriesIdHasBeenSet(false),
    m_dimensionListHasBeenSet(false),
    m_metricValueListHasBeenSet(false)
{
}

TimeSeries::TimeSeries(JsonView jsonValue) : 
    m_timeSeriesIdHasBeenSet(false),
    m_dimensionListHasBeenSet(false),
    m_metricValueListHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeries& TimeSeries::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeSeriesId"))
  {
    m_timeSeriesId = jsonValue.GetString("TimeSeriesId");

    m_timeSeriesIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionList"))
  {
    Aws::Utils::Array<JsonView> dimensionListJsonList = jsonValue.GetArray("DimensionList");
    for(unsigned dimensionListIndex = 0; dimensionListIndex < dimensionListJsonList.GetLength(); ++dimensionListIndex)
    {
      m_dimensionList.push_back(dimensionListJsonList[dimensionListIndex].AsObject());
    }
    m_dimensionListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricValueList"))
  {
    Aws::Utils::Array<JsonView> metricValueListJsonList = jsonValue.GetArray("MetricValueList");
    for(unsigned metricValueListIndex = 0; metricValueListIndex < metricValueListJsonList.GetLength(); ++metricValueListIndex)
    {
      m_metricValueList.push_back(metricValueListJsonList[metricValueListIndex].AsDouble());
    }
    m_metricValueListHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeries::Jsonize() const
{
  JsonValue payload;

  if(m_timeSeriesIdHasBeenSet)
  {
   payload.WithString("TimeSeriesId", m_timeSeriesId);

  }

  if(m_dimensionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionListJsonList(m_dimensionList.size());
   for(unsigned dimensionListIndex = 0; dimensionListIndex < dimensionListJsonList.GetLength(); ++dimensionListIndex)
   {
     dimensionListJsonList[dimensionListIndex].AsObject(m_dimensionList[dimensionListIndex].Jsonize());
   }
   payload.WithArray("DimensionList", std::move(dimensionListJsonList));

  }

  if(m_metricValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricValueListJsonList(m_metricValueList.size());
   for(unsigned metricValueListIndex = 0; metricValueListIndex < metricValueListJsonList.GetLength(); ++metricValueListIndex)
   {
     metricValueListJsonList[metricValueListIndex].AsDouble(m_metricValueList[metricValueListIndex]);
   }
   payload.WithArray("MetricValueList", std::move(metricValueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
