/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_readCapacityUnits(0.0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0.0),
    m_writeCapacityUnitsHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
}

ConsumedCapacity::ConsumedCapacity(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_capacityUnits(0.0),
    m_capacityUnitsHasBeenSet(false),
    m_readCapacityUnits(0.0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0.0),
    m_writeCapacityUnitsHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
  *this = jsonValue;
}

ConsumedCapacity& ConsumedCapacity::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ReadCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetDouble("ReadCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteCapacityUnits"))
  {
    m_writeCapacityUnits = jsonValue.GetDouble("WriteCapacityUnits");

    m_writeCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalSecondaryIndexes"))
  {
    Aws::Map<Aws::String, JsonView> localSecondaryIndexesJsonMap = jsonValue.GetObject("LocalSecondaryIndexes").GetAllObjects();
    for(auto& localSecondaryIndexesItem : localSecondaryIndexesJsonMap)
    {
      m_localSecondaryIndexes[localSecondaryIndexesItem.first] = localSecondaryIndexesItem.second.AsObject();
    }
    m_localSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Aws::Map<Aws::String, JsonView> globalSecondaryIndexesJsonMap = jsonValue.GetObject("GlobalSecondaryIndexes").GetAllObjects();
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

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithDouble("ReadCapacityUnits", m_readCapacityUnits);

  }

  if(m_writeCapacityUnitsHasBeenSet)
  {
   payload.WithDouble("WriteCapacityUnits", m_writeCapacityUnits);

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
