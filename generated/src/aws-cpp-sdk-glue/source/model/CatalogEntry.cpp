/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CatalogEntry::CatalogEntry() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

CatalogEntry::CatalogEntry(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogEntry& CatalogEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogEntry::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
