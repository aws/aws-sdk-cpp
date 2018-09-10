﻿/*
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

#include <aws/pi/model/MetricQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

MetricQuery::MetricQuery() : 
    m_metricHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

MetricQuery::MetricQuery(JsonView jsonValue) : 
    m_metricHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_filterHasBeenSet(false)
{
  *this = jsonValue;
}

MetricQuery& MetricQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetString("Metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupBy"))
  {
    m_groupBy = jsonValue.GetObject("GroupBy");

    m_groupByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filter"))
  {
    Aws::Map<Aws::String, JsonView> filterJsonMap = jsonValue.GetObject("Filter").GetAllObjects();
    for(auto& filterItem : filterJsonMap)
    {
      m_filter[filterItem.first] = filterItem.second.AsString();
    }
    m_filterHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricQuery::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", m_metric);

  }

  if(m_groupByHasBeenSet)
  {
   payload.WithObject("GroupBy", m_groupBy.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithString(filterItem.first, filterItem.second);
   }
   payload.WithObject("Filter", std::move(filterJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
