/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/MetricSetDimensionFilter.h>
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

MetricSetDimensionFilter::MetricSetDimensionFilter() : 
    m_nameHasBeenSet(false),
    m_filterListHasBeenSet(false)
{
}

MetricSetDimensionFilter::MetricSetDimensionFilter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_filterListHasBeenSet(false)
{
  *this = jsonValue;
}

MetricSetDimensionFilter& MetricSetDimensionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterList"))
  {
    Aws::Utils::Array<JsonView> filterListJsonList = jsonValue.GetArray("FilterList");
    for(unsigned filterListIndex = 0; filterListIndex < filterListJsonList.GetLength(); ++filterListIndex)
    {
      m_filterList.push_back(filterListJsonList[filterListIndex].AsObject());
    }
    m_filterListHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricSetDimensionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_filterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterListJsonList(m_filterList.size());
   for(unsigned filterListIndex = 0; filterListIndex < filterListJsonList.GetLength(); ++filterListIndex)
   {
     filterListJsonList[filterListIndex].AsObject(m_filterList[filterListIndex].Jsonize());
   }
   payload.WithArray("FilterList", std::move(filterListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
