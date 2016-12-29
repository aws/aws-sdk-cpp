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
#include <aws/dynamodb/model/GlobalSecondaryIndexDescription.h>
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

GlobalSecondaryIndexDescription::GlobalSecondaryIndexDescription() : 
    m_indexNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_projectionHasBeenSet(false),
    m_indexStatus(IndexStatus::NOT_SET),
    m_indexStatusHasBeenSet(false),
    m_backfilling(false),
    m_backfillingHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_indexSizeBytes(0),
    m_indexSizeBytesHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_indexArnHasBeenSet(false)
{
}

GlobalSecondaryIndexDescription::GlobalSecondaryIndexDescription(const JsonValue& jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_projectionHasBeenSet(false),
    m_indexStatus(IndexStatus::NOT_SET),
    m_indexStatusHasBeenSet(false),
    m_backfilling(false),
    m_backfillingHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_indexSizeBytes(0),
    m_indexSizeBytesHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_indexArnHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalSecondaryIndexDescription& GlobalSecondaryIndexDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("Projection"))
  {
    m_projection = jsonValue.GetObject("Projection");

    m_projectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));

    m_indexStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Backfilling"))
  {
    m_backfilling = jsonValue.GetBool("Backfilling");

    m_backfillingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughput"))
  {
    m_provisionedThroughput = jsonValue.GetObject("ProvisionedThroughput");

    m_provisionedThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexSizeBytes"))
  {
    m_indexSizeBytes = jsonValue.GetInt64("IndexSizeBytes");

    m_indexSizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInt64("ItemCount");

    m_itemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexArn"))
  {
    m_indexArn = jsonValue.GetString("IndexArn");

    m_indexArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GlobalSecondaryIndexDescription::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

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

  if(m_projectionHasBeenSet)
  {
   payload.WithObject("Projection", m_projection.Jsonize());

  }

  if(m_indexStatusHasBeenSet)
  {
   payload.WithString("IndexStatus", IndexStatusMapper::GetNameForIndexStatus(m_indexStatus));
  }

  if(m_backfillingHasBeenSet)
  {
   payload.WithBool("Backfilling", m_backfilling);

  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_indexSizeBytesHasBeenSet)
  {
   payload.WithInt64("IndexSizeBytes", m_indexSizeBytes);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInt64("ItemCount", m_itemCount);

  }

  if(m_indexArnHasBeenSet)
  {
   payload.WithString("IndexArn", m_indexArn);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws