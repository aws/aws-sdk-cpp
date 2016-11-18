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
#include <aws/dynamodb/model/ConsumedCapacity.h>
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

ConsumedCapacity::ConsumedCapacity() : 
    m_tableNameHasBeenSet(false),
    m_capacityUnits(0.0),
    m_capacityUnitsHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
}

ConsumedCapacity::ConsumedCapacity(const JsonValue& jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_capacityUnits(0.0),
    m_capacityUnitsHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
  *this = jsonValue;
}

ConsumedCapacity& ConsumedCapacity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityUnits"))
  {
    m_capacityUnits = jsonValue.GetDouble("CapacityUnits");

    m_capacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalSecondaryIndexes"))
  {
    Aws::Map<Aws::String, JsonValue> localSecondaryIndexesJsonMap = jsonValue.GetObject("LocalSecondaryIndexes").GetAllObjects();
    for(auto& localSecondaryIndexesItem : localSecondaryIndexesJsonMap)
    {
      m_localSecondaryIndexes[localSecondaryIndexesItem.first] = localSecondaryIndexesItem.second.AsObject();
    }
    m_localSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Aws::Map<Aws::String, JsonValue> globalSecondaryIndexesJsonMap = jsonValue.GetObject("GlobalSecondaryIndexes").GetAllObjects();
    for(auto& globalSecondaryIndexesItem : globalSecondaryIndexesJsonMap)
    {
      m_globalSecondaryIndexes[globalSecondaryIndexesItem.first] = globalSecondaryIndexesItem.second.AsObject();
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConsumedCapacity::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_capacityUnitsHasBeenSet)
  {
   payload.WithDouble("CapacityUnits", m_capacityUnits);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithObject("Table", m_table.Jsonize());

  }

  if(m_localSecondaryIndexesHasBeenSet)
  {
   JsonValue localSecondaryIndexesJsonMap;
   for(auto& localSecondaryIndexesItem : m_localSecondaryIndexes)
   {
     localSecondaryIndexesJsonMap.WithObject(localSecondaryIndexesItem.first, localSecondaryIndexesItem.second.Jsonize());
   }
   payload.WithObject("LocalSecondaryIndexes", std::move(localSecondaryIndexesJsonMap));

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   JsonValue globalSecondaryIndexesJsonMap;
   for(auto& globalSecondaryIndexesItem : m_globalSecondaryIndexes)
   {
     globalSecondaryIndexesJsonMap.WithObject(globalSecondaryIndexesItem.first, globalSecondaryIndexesItem.second.Jsonize());
   }
   payload.WithObject("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws