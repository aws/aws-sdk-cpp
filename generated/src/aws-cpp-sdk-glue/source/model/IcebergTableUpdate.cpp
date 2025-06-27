/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergTableUpdate.h>
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

IcebergTableUpdate::IcebergTableUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergTableUpdate& IcebergTableUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetObject("Schema");
    m_schemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionSpec"))
  {
    m_partitionSpec = jsonValue.GetObject("PartitionSpec");
    m_partitionSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SortOrder"))
  {
    m_sortOrder = jsonValue.GetObject("SortOrder");
    m_sortOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergTableUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("Schema", m_schema.Jsonize());

  }

  if(m_partitionSpecHasBeenSet)
  {
   payload.WithObject("PartitionSpec", m_partitionSpec.Jsonize());

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithObject("SortOrder", m_sortOrder.Jsonize());

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("Properties", std::move(propertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
