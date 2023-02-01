/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_connectionNameHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false)
{
}

GlueTable::GlueTable(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false)
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

  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalOptionsJsonMap = jsonValue.GetObject("AdditionalOptions").GetAllObjects();
    for(auto& additionalOptionsItem : additionalOptionsJsonMap)
    {
      m_additionalOptions[additionalOptionsItem.first] = additionalOptionsItem.second.AsString();
    }
    m_additionalOptionsHasBeenSet = true;
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

  if(m_additionalOptionsHasBeenSet)
  {
   JsonValue additionalOptionsJsonMap;
   for(auto& additionalOptionsItem : m_additionalOptions)
   {
     additionalOptionsJsonMap.WithString(additionalOptionsItem.first, additionalOptionsItem.second);
   }
   payload.WithObject("AdditionalOptions", std::move(additionalOptionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
