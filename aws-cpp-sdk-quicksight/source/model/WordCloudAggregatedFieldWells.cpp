/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudAggregatedFieldWells.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

WordCloudAggregatedFieldWells::WordCloudAggregatedFieldWells() : 
    m_groupByHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

WordCloudAggregatedFieldWells::WordCloudAggregatedFieldWells(JsonView jsonValue) : 
    m_groupByHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

WordCloudAggregatedFieldWells& WordCloudAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupBy"))
  {
    Aws::Utils::Array<JsonView> groupByJsonList = jsonValue.GetArray("GroupBy");
    for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
    {
      m_groupBy.push_back(groupByJsonList[groupByIndex].AsObject());
    }
    m_groupByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    Aws::Utils::Array<JsonView> sizeJsonList = jsonValue.GetArray("Size");
    for(unsigned sizeIndex = 0; sizeIndex < sizeJsonList.GetLength(); ++sizeIndex)
    {
      m_size.push_back(sizeJsonList[sizeIndex].AsObject());
    }
    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue WordCloudAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_groupByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
   for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
   {
     groupByJsonList[groupByIndex].AsObject(m_groupBy[groupByIndex].Jsonize());
   }
   payload.WithArray("GroupBy", std::move(groupByJsonList));

  }

  if(m_sizeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sizeJsonList(m_size.size());
   for(unsigned sizeIndex = 0; sizeIndex < sizeJsonList.GetLength(); ++sizeIndex)
   {
     sizeJsonList[sizeIndex].AsObject(m_size[sizeIndex].Jsonize());
   }
   payload.WithArray("Size", std::move(sizeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
