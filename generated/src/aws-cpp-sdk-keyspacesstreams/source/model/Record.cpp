/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/Record.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

Record::Record(JsonView jsonValue)
{
  *this = jsonValue;
}

Record& Record::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventVersion"))
  {
    m_eventVersion = jsonValue.GetString("eventVersion");
    m_eventVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("origin"))
  {
    m_origin = OriginTypeMapper::GetOriginTypeForName(jsonValue.GetString("origin"));
    m_originHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partitionKeys"))
  {
    Aws::Map<Aws::String, JsonView> partitionKeysJsonMap = jsonValue.GetObject("partitionKeys").GetAllObjects();
    for(auto& partitionKeysItem : partitionKeysJsonMap)
    {
      m_partitionKeys[partitionKeysItem.first] = partitionKeysItem.second.AsObject();
    }
    m_partitionKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusteringKeys"))
  {
    Aws::Map<Aws::String, JsonView> clusteringKeysJsonMap = jsonValue.GetObject("clusteringKeys").GetAllObjects();
    for(auto& clusteringKeysItem : clusteringKeysJsonMap)
    {
      m_clusteringKeys[clusteringKeysItem.first] = clusteringKeysItem.second.AsObject();
    }
    m_clusteringKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("newImage"))
  {
    m_newImage = jsonValue.GetObject("newImage");
    m_newImageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oldImage"))
  {
    m_oldImage = jsonValue.GetObject("oldImage");
    m_oldImageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sequenceNumber"))
  {
    m_sequenceNumber = jsonValue.GetString("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue Record::Jsonize() const
{
  JsonValue payload;

  if(m_eventVersionHasBeenSet)
  {
   payload.WithString("eventVersion", m_eventVersion);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_originHasBeenSet)
  {
   payload.WithString("origin", OriginTypeMapper::GetNameForOriginType(m_origin));
  }

  if(m_partitionKeysHasBeenSet)
  {
   JsonValue partitionKeysJsonMap;
   for(auto& partitionKeysItem : m_partitionKeys)
   {
     partitionKeysJsonMap.WithObject(partitionKeysItem.first, partitionKeysItem.second.Jsonize());
   }
   payload.WithObject("partitionKeys", std::move(partitionKeysJsonMap));

  }

  if(m_clusteringKeysHasBeenSet)
  {
   JsonValue clusteringKeysJsonMap;
   for(auto& clusteringKeysItem : m_clusteringKeys)
   {
     clusteringKeysJsonMap.WithObject(clusteringKeysItem.first, clusteringKeysItem.second.Jsonize());
   }
   payload.WithObject("clusteringKeys", std::move(clusteringKeysJsonMap));

  }

  if(m_newImageHasBeenSet)
  {
   payload.WithObject("newImage", m_newImage.Jsonize());

  }

  if(m_oldImageHasBeenSet)
  {
   payload.WithObject("oldImage", m_oldImage.Jsonize());

  }

  if(m_sequenceNumberHasBeenSet)
  {
   payload.WithString("sequenceNumber", m_sequenceNumber);

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
