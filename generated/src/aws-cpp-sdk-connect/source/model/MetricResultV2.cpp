/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricResultV2.h>
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

MetricResultV2::MetricResultV2() : 
    m_dimensionsHasBeenSet(false),
    m_metricIntervalHasBeenSet(false),
    m_collectionsHasBeenSet(false)
{
}

MetricResultV2::MetricResultV2(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_metricIntervalHasBeenSet(false),
    m_collectionsHasBeenSet(false)
{
  *this = jsonValue;
}

MetricResultV2& MetricResultV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for(auto& dimensionsItem : dimensionsJsonMap)
    {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricInterval"))
  {
    m_metricInterval = jsonValue.GetObject("MetricInterval");

    m_metricIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Collections"))
  {
    Aws::Utils::Array<JsonView> collectionsJsonList = jsonValue.GetArray("Collections");
    for(unsigned collectionsIndex = 0; collectionsIndex < collectionsJsonList.GetLength(); ++collectionsIndex)
    {
      m_collections.push_back(collectionsJsonList[collectionsIndex].AsObject());
    }
    m_collectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricResultV2::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   JsonValue dimensionsJsonMap;
   for(auto& dimensionsItem : m_dimensions)
   {
     dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
   }
   payload.WithObject("Dimensions", std::move(dimensionsJsonMap));

  }

  if(m_metricIntervalHasBeenSet)
  {
   payload.WithObject("MetricInterval", m_metricInterval.Jsonize());

  }

  if(m_collectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> collectionsJsonList(m_collections.size());
   for(unsigned collectionsIndex = 0; collectionsIndex < collectionsJsonList.GetLength(); ++collectionsIndex)
   {
     collectionsJsonList[collectionsIndex].AsObject(m_collections[collectionsIndex].Jsonize());
   }
   payload.WithArray("Collections", std::move(collectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
