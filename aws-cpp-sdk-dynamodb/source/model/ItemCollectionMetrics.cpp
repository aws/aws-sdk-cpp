/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

ItemCollectionMetrics::ItemCollectionMetrics(const JsonValue& jsonValue) : 
    m_itemCollectionKeyHasBeenSet(false),
    m_sizeEstimateRangeGBHasBeenSet(false)
{
  *this = jsonValue;
}

ItemCollectionMetrics& ItemCollectionMetrics::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ItemCollectionKey"))
  {
    Aws::Map<Aws::String, JsonValue> itemCollectionKeyJsonMap = jsonValue.GetObject("ItemCollectionKey").GetAllObjects();
    for(auto& itemCollectionKeyItem : itemCollectionKeyJsonMap)
    {
      m_itemCollectionKey[itemCollectionKeyItem.first] = itemCollectionKeyItem.second.AsObject();
    }
    m_itemCollectionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeEstimateRangeGB"))
  {
    Array<JsonValue> sizeEstimateRangeGBJsonList = jsonValue.GetArray("SizeEstimateRangeGB");
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
   Array<JsonValue> sizeEstimateRangeGBJsonList(m_sizeEstimateRangeGB.size());
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