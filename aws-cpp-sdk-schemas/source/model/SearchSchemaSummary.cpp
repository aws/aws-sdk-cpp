/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/SearchSchemaSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Schemas
{
namespace Model
{

SearchSchemaSummary::SearchSchemaSummary() : 
    m_registryNameHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaVersionsHasBeenSet(false)
{
}

SearchSchemaSummary::SearchSchemaSummary(JsonView jsonValue) : 
    m_registryNameHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

SearchSchemaSummary& SearchSchemaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

    m_registryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersions"))
  {
    Aws::Utils::Array<JsonView> schemaVersionsJsonList = jsonValue.GetArray("SchemaVersions");
    for(unsigned schemaVersionsIndex = 0; schemaVersionsIndex < schemaVersionsJsonList.GetLength(); ++schemaVersionsIndex)
    {
      m_schemaVersions.push_back(schemaVersionsJsonList[schemaVersionsIndex].AsObject());
    }
    m_schemaVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchSchemaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_registryNameHasBeenSet)
  {
   payload.WithString("RegistryName", m_registryName);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_schemaVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaVersionsJsonList(m_schemaVersions.size());
   for(unsigned schemaVersionsIndex = 0; schemaVersionsIndex < schemaVersionsJsonList.GetLength(); ++schemaVersionsIndex)
   {
     schemaVersionsJsonList[schemaVersionsIndex].AsObject(m_schemaVersions[schemaVersionsIndex].Jsonize());
   }
   payload.WithArray("SchemaVersions", std::move(schemaVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Schemas
} // namespace Aws
