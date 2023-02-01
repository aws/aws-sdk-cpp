/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/LocalSecondaryIndexDescription.h>
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

LocalSecondaryIndexDescription::LocalSecondaryIndexDescription() : 
    m_indexNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_projectionHasBeenSet(false),
    m_indexSizeBytes(0),
    m_indexSizeBytesHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_indexArnHasBeenSet(false)
{
}

LocalSecondaryIndexDescription::LocalSecondaryIndexDescription(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_projectionHasBeenSet(false),
    m_indexSizeBytes(0),
    m_indexSizeBytesHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_indexArnHasBeenSet(false)
{
  *this = jsonValue;
}

LocalSecondaryIndexDescription& LocalSecondaryIndexDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySchema"))
  {
    Aws::Utils::Array<JsonView> keySchemaJsonList = jsonValue.GetArray("KeySchema");
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

JsonValue LocalSecondaryIndexDescription::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_keySchemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keySchemaJsonList(m_keySchema.size());
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
