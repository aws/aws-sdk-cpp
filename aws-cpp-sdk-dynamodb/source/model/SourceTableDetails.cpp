/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/dynamodb/model/SourceTableDetails.h>
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

SourceTableDetails::SourceTableDetails() : 
    m_tableNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_tableSizeBytes(0),
    m_tableSizeBytesHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_tableCreationDateTimeHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false)
{
}

SourceTableDetails::SourceTableDetails(const JsonValue& jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_tableSizeBytes(0),
    m_tableSizeBytesHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_tableCreationDateTimeHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false)
{
  *this = jsonValue;
}

SourceTableDetails& SourceTableDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableId"))
  {
    m_tableId = jsonValue.GetString("TableId");

    m_tableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableArn"))
  {
    m_tableArn = jsonValue.GetString("TableArn");

    m_tableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableSizeBytes"))
  {
    m_tableSizeBytes = jsonValue.GetInt64("TableSizeBytes");

    m_tableSizeBytesHasBeenSet = true;
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

  if(jsonValue.ValueExists("TableCreationDateTime"))
  {
    m_tableCreationDateTime = jsonValue.GetDouble("TableCreationDateTime");

    m_tableCreationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughput"))
  {
    m_provisionedThroughput = jsonValue.GetObject("ProvisionedThroughput");

    m_provisionedThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInt64("ItemCount");

    m_itemCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceTableDetails::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_tableIdHasBeenSet)
  {
   payload.WithString("TableId", m_tableId);

  }

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

  }

  if(m_tableSizeBytesHasBeenSet)
  {
   payload.WithInt64("TableSizeBytes", m_tableSizeBytes);

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

  if(m_tableCreationDateTimeHasBeenSet)
  {
   payload.WithDouble("TableCreationDateTime", m_tableCreationDateTime.SecondsWithMSPrecision());
  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInt64("ItemCount", m_itemCount);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
