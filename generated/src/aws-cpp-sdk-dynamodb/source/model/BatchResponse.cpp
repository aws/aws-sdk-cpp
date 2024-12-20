/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchResponse.h>
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

BatchResponse::BatchResponse() : 
    m_itemsHasBeenSet(false),
    m_consumedCapacityUnits(0.0),
    m_consumedCapacityUnitsHasBeenSet(false)
{
}

BatchResponse::BatchResponse(JsonView jsonValue)
  : BatchResponse()
{
  *this = jsonValue;
}

BatchResponse& BatchResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      Aws::Map<Aws::String, JsonView> attributeMapJsonMap = itemsJsonList[itemsIndex].GetAllObjects();
      Aws::Map<Aws::String, AttributeValue> attributeMapMap;
      for(auto& attributeMapItem : attributeMapJsonMap)
      {
        attributeMapMap[attributeMapItem.first] = attributeMapItem.second.AsObject();
      }
      m_items.push_back(std::move(attributeMapMap));
    }
    m_itemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedCapacityUnits"))
  {
    m_consumedCapacityUnits = jsonValue.GetDouble("ConsumedCapacityUnits");

    m_consumedCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchResponse::Jsonize() const
{
  JsonValue payload;

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     JsonValue attributeMapJsonMap;
     for(auto& attributeMapItem : m_items[itemsIndex])
     {
       attributeMapJsonMap.WithObject(attributeMapItem.first, attributeMapItem.second.Jsonize());
     }
     itemsJsonList[itemsIndex].AsObject(std::move(attributeMapJsonMap));
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  if(m_consumedCapacityUnitsHasBeenSet)
  {
   payload.WithDouble("ConsumedCapacityUnits", m_consumedCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
