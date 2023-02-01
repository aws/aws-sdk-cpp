/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HistoricalMetricResult.h>
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

HistoricalMetricResult::HistoricalMetricResult() : 
    m_dimensionsHasBeenSet(false),
    m_collectionsHasBeenSet(false)
{
}

HistoricalMetricResult::HistoricalMetricResult(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_collectionsHasBeenSet(false)
{
  *this = jsonValue;
}

HistoricalMetricResult& HistoricalMetricResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
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

JsonValue HistoricalMetricResult::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

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
