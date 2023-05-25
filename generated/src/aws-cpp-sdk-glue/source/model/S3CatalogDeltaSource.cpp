/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3CatalogDeltaSource.h>
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

S3CatalogDeltaSource::S3CatalogDeltaSource() : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_additionalDeltaOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
}

S3CatalogDeltaSource::S3CatalogDeltaSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_additionalDeltaOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
  *this = jsonValue;
}

S3CatalogDeltaSource& S3CatalogDeltaSource::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AdditionalDeltaOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalDeltaOptionsJsonMap = jsonValue.GetObject("AdditionalDeltaOptions").GetAllObjects();
    for(auto& additionalDeltaOptionsItem : additionalDeltaOptionsJsonMap)
    {
      m_additionalDeltaOptions[additionalDeltaOptionsItem.first] = additionalDeltaOptionsItem.second.AsString();
    }
    m_additionalDeltaOptionsHasBeenSet = true;
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

JsonValue S3CatalogDeltaSource::Jsonize() const
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

  if(m_additionalDeltaOptionsHasBeenSet)
  {
   JsonValue additionalDeltaOptionsJsonMap;
   for(auto& additionalDeltaOptionsItem : m_additionalDeltaOptions)
   {
     additionalDeltaOptionsJsonMap.WithString(additionalDeltaOptionsItem.first, additionalDeltaOptionsItem.second);
   }
   payload.WithObject("AdditionalDeltaOptions", std::move(additionalDeltaOptionsJsonMap));

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
