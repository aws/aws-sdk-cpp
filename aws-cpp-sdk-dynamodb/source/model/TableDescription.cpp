/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/TableDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TableDescription::TableDescription() : 
    m_attributeDefinitionsHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_tableStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_tableSizeBytes(0),
    m_tableSizeBytesHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
}

TableDescription::TableDescription(const JsonValue& jsonValue) : 
    m_attributeDefinitionsHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_tableStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_tableSizeBytes(0),
    m_tableSizeBytesHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
  *this = jsonValue;
}

TableDescription& TableDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AttributeDefinitions"))
  {
    Array<JsonValue> attributeDefinitionsJsonList = jsonValue.GetArray("AttributeDefinitions");
    for(unsigned attributeDefinitionsIndex = 0; attributeDefinitionsIndex < attributeDefinitionsJsonList.GetLength(); ++attributeDefinitionsIndex)
    {
      m_attributeDefinitions.push_back(attributeDefinitionsJsonList[attributeDefinitionsIndex].AsObject());
    }
    m_attributeDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySchema"))
  {
    Array<JsonValue> keySchemaJsonList = jsonValue.GetArray("KeySchema");
    for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
    {
      m_keySchema.push_back(keySchemaJsonList[keySchemaIndex].AsObject());
    }
    m_keySchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableStatus"))
  {
    m_tableStatus = TableStatusMapper::GetTableStatusForName(jsonValue.GetString("TableStatus"));

    m_tableStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetString("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughput"))
  {
    m_provisionedThroughput = jsonValue.GetObject("ProvisionedThroughput");

    m_provisionedThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableSizeBytes"))
  {
    m_tableSizeBytes = jsonValue.GetInt64("TableSizeBytes");

    m_tableSizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInt64("ItemCount");

    m_itemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalSecondaryIndexes"))
  {
    Array<JsonValue> localSecondaryIndexesJsonList = jsonValue.GetArray("LocalSecondaryIndexes");
    for(unsigned localSecondaryIndexesIndex = 0; localSecondaryIndexesIndex < localSecondaryIndexesJsonList.GetLength(); ++localSecondaryIndexesIndex)
    {
      m_localSecondaryIndexes.push_back(localSecondaryIndexesJsonList[localSecondaryIndexesIndex].AsObject());
    }
    m_localSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Array<JsonValue> globalSecondaryIndexesJsonList = jsonValue.GetArray("GlobalSecondaryIndexes");
    for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
    {
      m_globalSecondaryIndexes.push_back(globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject());
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }

  return *this;
}

JsonValue TableDescription::Jsonize() const
{
  JsonValue payload;

  if(m_attributeDefinitionsHasBeenSet)
  {
   Array<JsonValue> attributeDefinitionsJsonList(m_attributeDefinitions.size());
   for(unsigned attributeDefinitionsIndex = 0; attributeDefinitionsIndex < attributeDefinitionsJsonList.GetLength(); ++attributeDefinitionsIndex)
   {
     attributeDefinitionsJsonList[attributeDefinitionsIndex].AsObject(m_attributeDefinitions[attributeDefinitionsIndex].Jsonize());
   }
   payload.WithArray("AttributeDefinitions", std::move(attributeDefinitionsJsonList));

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_keySchemaHasBeenSet)
  {
   Array<JsonValue> keySchemaJsonList(m_keySchema.size());
   for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
   {
     keySchemaJsonList[keySchemaIndex].AsObject(m_keySchema[keySchemaIndex].Jsonize());
   }
   payload.WithArray("KeySchema", std::move(keySchemaJsonList));

  }

  if(m_tableStatusHasBeenSet)
  {
   payload.WithString("TableStatus", TableStatusMapper::GetNameForTableStatus(m_tableStatus));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithString("CreationDateTime", m_creationDateTime);

  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_tableSizeBytesHasBeenSet)
  {
   payload.WithInt64("TableSizeBytes", m_tableSizeBytes);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInt64("ItemCount", m_itemCount);

  }

  if(m_localSecondaryIndexesHasBeenSet)
  {
   Array<JsonValue> localSecondaryIndexesJsonList(m_localSecondaryIndexes.size());
   for(unsigned localSecondaryIndexesIndex = 0; localSecondaryIndexesIndex < localSecondaryIndexesJsonList.GetLength(); ++localSecondaryIndexesIndex)
   {
     localSecondaryIndexesJsonList[localSecondaryIndexesIndex].AsObject(m_localSecondaryIndexes[localSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("LocalSecondaryIndexes", std::move(localSecondaryIndexesJsonList));

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  return std::move(payload);
}