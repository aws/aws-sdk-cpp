/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AlertFilters.h>
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

AlertFilters::AlertFilters() : 
    m_metricListHasBeenSet(false),
    m_dimensionFilterListHasBeenSet(false)
{
}

AlertFilters::AlertFilters(JsonView jsonValue) : 
    m_metricListHasBeenSet(false),
    m_dimensionFilterListHasBeenSet(false)
{
  *this = jsonValue;
}

AlertFilters& AlertFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricList"))
  {
    Aws::Utils::Array<JsonView> metricListJsonList = jsonValue.GetArray("MetricList");
    for(unsigned metricListIndex = 0; metricListIndex < metricListJsonList.GetLength(); ++metricListIndex)
    {
      m_metricList.push_back(metricListJsonList[metricListIndex].AsString());
    }
    m_metricListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionFilterList"))
  {
    Aws::Utils::Array<JsonView> dimensionFilterListJsonList = jsonValue.GetArray("DimensionFilterList");
    for(unsigned dimensionFilterListIndex = 0; dimensionFilterListIndex < dimensionFilterListJsonList.GetLength(); ++dimensionFilterListIndex)
    {
      m_dimensionFilterList.push_back(dimensionFilterListJsonList[dimensionFilterListIndex].AsObject());
    }
    m_dimensionFilterListHasBeenSet = true;
  }

  return *this;
}

JsonValue AlertFilters::Jsonize() const
{
  JsonValue payload;

  if(m_metricListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricListJsonList(m_metricList.size());
   for(unsigned metricListIndex = 0; metricListIndex < metricListJsonList.GetLength(); ++metricListIndex)
   {
     metricListJsonList[metricListIndex].AsString(m_metricList[metricListIndex]);
   }
   payload.WithArray("MetricList", std::move(metricListJsonList));

  }

  if(m_dimensionFilterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionFilterListJsonList(m_dimensionFilterList.size());
   for(unsigned dimensionFilterListIndex = 0; dimensionFilterListIndex < dimensionFilterListJsonList.GetLength(); ++dimensionFilterListIndex)
   {
     dimensionFilterListJsonList[dimensionFilterListIndex].AsObject(m_dimensionFilterList[dimensionFilterListIndex].Jsonize());
   }
   payload.WithArray("DimensionFilterList", std::move(dimensionFilterListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
