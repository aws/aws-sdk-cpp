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

#include <aws/glue/model/GlueTable.h>
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

GlueTable::GlueTable() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_connectionNameHasBeenSet(false)
{
}

GlueTable::GlueTable(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_connectionNameHasBeenSet(false)
{
  *this = jsonValue;
}

GlueTable& GlueTable::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GlueTable::Jsonize() const
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

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
