/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Partition.h>
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

Partition::Partition() : 
    m_valuesHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_storageDescriptorHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_lastAnalyzedTimeHasBeenSet(false),
    m_catalogIdHasBeenSet(false)
{
}

Partition::Partition(JsonView jsonValue) : 
    m_valuesHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_storageDescriptorHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_lastAnalyzedTimeHasBeenSet(false),
    m_catalogIdHasBeenSet(false)
{
  *this = jsonValue;
}

Partition& Partition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAccessTime"))
  {
    m_lastAccessTime = jsonValue.GetDouble("LastAccessTime");

    m_lastAccessTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageDescriptor"))
  {
    m_storageDescriptor = jsonValue.GetObject("StorageDescriptor");

    m_storageDescriptorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAnalyzedTime"))
  {
    m_lastAnalyzedTime = jsonValue.GetDouble("LastAnalyzedTime");

    m_lastAnalyzedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Partition::Jsonize() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastAccessTimeHasBeenSet)
  {
   payload.WithDouble("LastAccessTime", m_lastAccessTime.SecondsWithMSPrecision());
  }

  if(m_storageDescriptorHasBeenSet)
  {
   payload.WithObject("StorageDescriptor", m_storageDescriptor.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_lastAnalyzedTimeHasBeenSet)
  {
   payload.WithDouble("LastAnalyzedTime", m_lastAnalyzedTime.SecondsWithMSPrecision());
  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
