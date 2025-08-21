/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityGlueTable.h>
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

DataQualityGlueTable::DataQualityGlueTable(JsonView jsonValue)
{
  *this = jsonValue;
}

DataQualityGlueTable& DataQualityGlueTable::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("PreProcessingQuery"))
  {
    m_preProcessingQuery = jsonValue.GetString("PreProcessingQuery");
    m_preProcessingQueryHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityGlueTable::Jsonize() const
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

  if(m_preProcessingQueryHasBeenSet)
  {
   payload.WithString("PreProcessingQuery", m_preProcessingQuery);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
