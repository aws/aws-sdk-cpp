/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/Shard.h>
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

Shard::Shard(JsonView jsonValue)
{
  *this = jsonValue;
}

Shard& Shard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("shardId"))
  {
    m_shardId = jsonValue.GetString("shardId");
    m_shardIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sequenceNumberRange"))
  {
    m_sequenceNumberRange = jsonValue.GetObject("sequenceNumberRange");
    m_sequenceNumberRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentShardIds"))
  {
    Aws::Utils::Array<JsonView> parentShardIdsJsonList = jsonValue.GetArray("parentShardIds");
    for(unsigned parentShardIdsIndex = 0; parentShardIdsIndex < parentShardIdsJsonList.GetLength(); ++parentShardIdsIndex)
    {
      m_parentShardIds.push_back(parentShardIdsJsonList[parentShardIdsIndex].AsString());
    }
    m_parentShardIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue Shard::Jsonize() const
{
  JsonValue payload;

  if(m_shardIdHasBeenSet)
  {
   payload.WithString("shardId", m_shardId);

  }

  if(m_sequenceNumberRangeHasBeenSet)
  {
   payload.WithObject("sequenceNumberRange", m_sequenceNumberRange.Jsonize());

  }

  if(m_parentShardIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parentShardIdsJsonList(m_parentShardIds.size());
   for(unsigned parentShardIdsIndex = 0; parentShardIdsIndex < parentShardIdsJsonList.GetLength(); ++parentShardIdsIndex)
   {
     parentShardIdsJsonList[parentShardIdsIndex].AsString(m_parentShardIds[parentShardIdsIndex]);
   }
   payload.WithArray("parentShardIds", std::move(parentShardIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
