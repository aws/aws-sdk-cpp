/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/DatasetInputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

DatasetInputConfig::DatasetInputConfig() : 
    m_dataSourceHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
}

DatasetInputConfig::DatasetInputConfig(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetInputConfig& DatasetInputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetObject("dataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schema"))
  {
    Aws::Utils::Array<JsonView> schemaJsonList = jsonValue.GetArray("schema");
    for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
    {
      m_schema.push_back(schemaJsonList[schemaIndex].AsObject());
    }
    m_schemaHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetInputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  if(m_schemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaJsonList(m_schema.size());
   for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
   {
     schemaJsonList[schemaIndex].AsObject(m_schema[schemaIndex].Jsonize());
   }
   payload.WithArray("schema", std::move(schemaJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
