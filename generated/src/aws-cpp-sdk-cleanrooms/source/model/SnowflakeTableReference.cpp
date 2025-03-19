/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SnowflakeTableReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

SnowflakeTableReference::SnowflakeTableReference(JsonView jsonValue)
{
  *this = jsonValue;
}

SnowflakeTableReference& SnowflakeTableReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountIdentifier"))
  {
    m_accountIdentifier = jsonValue.GetString("accountIdentifier");
    m_accountIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");
    m_schemaNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableSchema"))
  {
    m_tableSchema = jsonValue.GetObject("tableSchema");
    m_tableSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakeTableReference::Jsonize() const
{
  JsonValue payload;

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_accountIdentifierHasBeenSet)
  {
   payload.WithString("accountIdentifier", m_accountIdentifier);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  if(m_tableSchemaHasBeenSet)
  {
   payload.WithObject("tableSchema", m_tableSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
