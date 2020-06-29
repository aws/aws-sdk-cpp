/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/TableToReload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

TableToReload::TableToReload() : 
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

TableToReload::TableToReload(JsonView jsonValue) : 
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
  *this = jsonValue;
}

TableToReload& TableToReload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TableToReload::Jsonize() const
{
  JsonValue payload;

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
