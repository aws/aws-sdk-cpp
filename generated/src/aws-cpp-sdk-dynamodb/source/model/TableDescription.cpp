/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TableDescription.h>
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

TableDescription::TableDescription() : 
    m_tableNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_tableStatus(TableStatus::NOT_SET),
    m_tableStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_tableSizeBytes(0),
    m_tableSizeBytesHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false)
{
}

TableDescription::TableDescription(JsonView jsonValue)
  : TableDescription()
{
  *this = jsonValue;
}

TableDescription& TableDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySchema"))
  {
    m_keySchema = jsonValue.GetObject("KeySchema");

    m_keySchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableStatus"))
  {
    m_tableStatus = TableStatusMapper::GetTableStatusForName(jsonValue.GetString("TableStatus"));

    m_tableStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

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

  return *this;
}

JsonValue TableDescription::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_keySchemaHasBeenSet)
  {
   payload.WithObject("KeySchema", m_keySchema.Jsonize());

  }

  if(m_tableStatusHasBeenSet)
  {
   payload.WithString("TableStatus", TableStatusMapper::GetNameForTableStatus(m_tableStatus));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
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

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
