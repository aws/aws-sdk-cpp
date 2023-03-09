/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricV2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

MetricV2::MetricV2() : 
    m_nameHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_metricFiltersHasBeenSet(false)
{
}

MetricV2::MetricV2(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_metricFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

MetricV2& MetricV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    Aws::Utils::Array<JsonView> thresholdJsonList = jsonValue.GetArray("Threshold");
    for(unsigned thresholdIndex = 0; thresholdIndex < thresholdJsonList.GetLength(); ++thresholdIndex)
    {
      m_threshold.push_back(thresholdJsonList[thresholdIndex].AsObject());
    }
    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricFilters"))
  {
    Aws::Utils::Array<JsonView> metricFiltersJsonList = jsonValue.GetArray("MetricFilters");
    for(unsigned metricFiltersIndex = 0; metricFiltersIndex < metricFiltersJsonList.GetLength(); ++metricFiltersIndex)
    {
      m_metricFilters.push_back(metricFiltersJsonList[metricFiltersIndex].AsObject());
    }
    m_metricFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricV2::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_thresholdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thresholdJsonList(m_threshold.size());
   for(unsigned thresholdIndex = 0; thresholdIndex < thresholdJsonList.GetLength(); ++thresholdIndex)
   {
     thresholdJsonList[thresholdIndex].AsObject(m_threshold[thresholdIndex].Jsonize());
   }
   payload.WithArray("Threshold", std::move(thresholdJsonList));

  }

  if(m_metricFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricFiltersJsonList(m_metricFilters.size());
   for(unsigned metricFiltersIndex = 0; metricFiltersIndex < metricFiltersJsonList.GetLength(); ++metricFiltersIndex)
   {
     metricFiltersJsonList[metricFiltersIndex].AsObject(m_metricFilters[metricFiltersIndex].Jsonize());
   }
   payload.WithArray("MetricFilters", std::move(metricFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
