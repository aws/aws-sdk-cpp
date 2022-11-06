/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/SchemaDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

SchemaDefinition::SchemaDefinition() : 
    m_allColumnsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_clusteringKeysHasBeenSet(false),
    m_staticColumnsHasBeenSet(false)
{
}

SchemaDefinition::SchemaDefinition(JsonView jsonValue) : 
    m_allColumnsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_clusteringKeysHasBeenSet(false),
    m_staticColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaDefinition& SchemaDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allColumns"))
  {
    Aws::Utils::Array<JsonView> allColumnsJsonList = jsonValue.GetArray("allColumns");
    for(unsigned allColumnsIndex = 0; allColumnsIndex < allColumnsJsonList.GetLength(); ++allColumnsIndex)
    {
      m_allColumns.push_back(allColumnsJsonList[allColumnsIndex].AsObject());
    }
    m_allColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partitionKeys"))
  {
    Aws::Utils::Array<JsonView> partitionKeysJsonList = jsonValue.GetArray("partitionKeys");
    for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
    {
      m_partitionKeys.push_back(partitionKeysJsonList[partitionKeysIndex].AsObject());
    }
    m_partitionKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusteringKeys"))
  {
    Aws::Utils::Array<JsonView> clusteringKeysJsonList = jsonValue.GetArray("clusteringKeys");
    for(unsigned clusteringKeysIndex = 0; clusteringKeysIndex < clusteringKeysJsonList.GetLength(); ++clusteringKeysIndex)
    {
      m_clusteringKeys.push_back(clusteringKeysJsonList[clusteringKeysIndex].AsObject());
    }
    m_clusteringKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("staticColumns"))
  {
    Aws::Utils::Array<JsonView> staticColumnsJsonList = jsonValue.GetArray("staticColumns");
    for(unsigned staticColumnsIndex = 0; staticColumnsIndex < staticColumnsJsonList.GetLength(); ++staticColumnsIndex)
    {
      m_staticColumns.push_back(staticColumnsJsonList[staticColumnsIndex].AsObject());
    }
    m_staticColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_allColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allColumnsJsonList(m_allColumns.size());
   for(unsigned allColumnsIndex = 0; allColumnsIndex < allColumnsJsonList.GetLength(); ++allColumnsIndex)
   {
     allColumnsJsonList[allColumnsIndex].AsObject(m_allColumns[allColumnsIndex].Jsonize());
   }
   payload.WithArray("allColumns", std::move(allColumnsJsonList));

  }

  if(m_partitionKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionKeysJsonList(m_partitionKeys.size());
   for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
   {
     partitionKeysJsonList[partitionKeysIndex].AsObject(m_partitionKeys[partitionKeysIndex].Jsonize());
   }
   payload.WithArray("partitionKeys", std::move(partitionKeysJsonList));

  }

  if(m_clusteringKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusteringKeysJsonList(m_clusteringKeys.size());
   for(unsigned clusteringKeysIndex = 0; clusteringKeysIndex < clusteringKeysJsonList.GetLength(); ++clusteringKeysIndex)
   {
     clusteringKeysJsonList[clusteringKeysIndex].AsObject(m_clusteringKeys[clusteringKeysIndex].Jsonize());
   }
   payload.WithArray("clusteringKeys", std::move(clusteringKeysJsonList));

  }

  if(m_staticColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> staticColumnsJsonList(m_staticColumns.size());
   for(unsigned staticColumnsIndex = 0; staticColumnsIndex < staticColumnsJsonList.GetLength(); ++staticColumnsIndex)
   {
     staticColumnsJsonList[staticColumnsIndex].AsObject(m_staticColumns[staticColumnsIndex].Jsonize());
   }
   payload.WithArray("staticColumns", std::move(staticColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
