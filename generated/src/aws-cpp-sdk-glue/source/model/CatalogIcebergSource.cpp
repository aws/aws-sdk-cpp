/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogIcebergSource.h>
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

CatalogIcebergSource::CatalogIcebergSource(JsonView jsonValue)
{
  *this = jsonValue;
}

CatalogIcebergSource& CatalogIcebergSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");
    m_tableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalIcebergOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalIcebergOptionsJsonMap = jsonValue.GetObject("AdditionalIcebergOptions").GetAllObjects();
    for(auto& additionalIcebergOptionsItem : additionalIcebergOptionsJsonMap)
    {
      m_additionalIcebergOptions[additionalIcebergOptionsItem.first] = additionalIcebergOptionsItem.second.AsString();
    }
    m_additionalIcebergOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputSchemas"))
  {
    Aws::Utils::Array<JsonView> outputSchemasJsonList = jsonValue.GetArray("OutputSchemas");
    for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
    {
      m_outputSchemas.push_back(outputSchemasJsonList[outputSchemasIndex].AsObject());
    }
    m_outputSchemasHasBeenSet = true;
  }
  return *this;
}

JsonValue CatalogIcebergSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_additionalIcebergOptionsHasBeenSet)
  {
   JsonValue additionalIcebergOptionsJsonMap;
   for(auto& additionalIcebergOptionsItem : m_additionalIcebergOptions)
   {
     additionalIcebergOptionsJsonMap.WithString(additionalIcebergOptionsItem.first, additionalIcebergOptionsItem.second);
   }
   payload.WithObject("AdditionalIcebergOptions", std::move(additionalIcebergOptionsJsonMap));

  }

  if(m_outputSchemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputSchemasJsonList(m_outputSchemas.size());
   for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
   {
     outputSchemasJsonList[outputSchemasIndex].AsObject(m_outputSchemas[outputSchemasIndex].Jsonize());
   }
   payload.WithArray("OutputSchemas", std::move(outputSchemasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
