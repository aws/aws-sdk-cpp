/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ItemCollectionMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ItemCollectionMetrics::ItemCollectionMetrics() : 
    m_itemCollectionKeyHasBeenSet(false),
    m_sizeEstimateRangeGBHasBeenSet(false)
{
}

ItemCollectionMetrics::ItemCollectionMetrics(JsonView jsonValue) : 
    m_itemCollectionKeyHasBeenSet(false),
    m_sizeEstimateRangeGBHasBeenSet(false)
{
  *this = jsonValue;
}

ItemCollectionMetrics& ItemCollectionMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ItemCollectionKey"))
  {
    Aws::Map<Aws::String, JsonView> itemCollectionKeyJsonMap = jsonValue.GetObject("ItemCollectionKey").GetAllObjects();
    for(auto& itemCollectionKeyItem : itemCollectionKeyJsonMap)
    {
      m_itemCollectionKey[itemCollectionKeyItem.first] = itemCollectionKeyItem.second.AsObject();
    }
    m_itemCollectionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeEstimateRangeGB"))
  {
    Aws::Utils::Array<JsonView> sizeEstimateRangeGBJsonList = jsonValue.GetArray("SizeEstimateRangeGB");
    for(unsigned sizeEstimateRangeGBIndex = 0; sizeEstimateRangeGBIndex < sizeEstimateRangeGBJsonList.GetLength(); ++sizeEstimateRangeGBIndex)
    {
      m_sizeEstimateRangeGB.push_back(sizeEstimateRangeGBJsonList[sizeEstimateRangeGBIndex].AsDouble());
    }
    m_sizeEstimateRangeGBHasBeenSet = true;
  }

  return *this;
}

JsonValue ItemCollectionMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_itemCollectionKeyHasBeenSet)
  {
   JsonValue itemCollectionKeyJsonMap;
   for(auto& itemCollectionKeyItem : m_itemCollectionKey)
   {
     itemCollectionKeyJsonMap.WithObject(itemCollectionKeyItem.first, itemCollectionKeyItem.second.Jsonize());
   }
   payload.WithObject("ItemCollectionKey", std::move(itemCollectionKeyJsonMap));

  }

  if(m_sizeEstimateRangeGBHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sizeEstimateRangeGBJsonList(m_sizeEstimateRangeGB.size());
   for(unsigned sizeEstimateRangeGBIndex = 0; sizeEstimateRangeGBIndex < sizeEstimateRangeGBJsonList.GetLength(); ++sizeEstimateRangeGBIndex)
   {
     sizeEstimateRangeGBJsonList[sizeEstimateRangeGBIndex].AsDouble(m_sizeEstimateRangeGB[sizeEstimateRangeGBIndex]);
   }
   payload.WithArray("SizeEstimateRangeGB", std::move(sizeEstimateRangeGBJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
