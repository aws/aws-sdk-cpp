/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kinesis/model/Shard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kinesis
{
namespace Model
{

Shard::Shard() : 
    m_shardIdHasBeenSet(false),
    m_parentShardIdHasBeenSet(false),
    m_adjacentParentShardIdHasBeenSet(false),
    m_hashKeyRangeHasBeenSet(false),
    m_sequenceNumberRangeHasBeenSet(false)
{
}

Shard::Shard(const JsonValue& jsonValue) : 
    m_shardIdHasBeenSet(false),
    m_parentShardIdHasBeenSet(false),
    m_adjacentParentShardIdHasBeenSet(false),
    m_hashKeyRangeHasBeenSet(false),
    m_sequenceNumberRangeHasBeenSet(false)
{
  *this = jsonValue;
}

Shard& Shard::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ShardId"))
  {
    m_shardId = jsonValue.GetString("ShardId");

    m_shardIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentShardId"))
  {
    m_parentShardId = jsonValue.GetString("ParentShardId");

    m_parentShardIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdjacentParentShardId"))
  {
    m_adjacentParentShardId = jsonValue.GetString("AdjacentParentShardId");

    m_adjacentParentShardIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HashKeyRange"))
  {
    m_hashKeyRange = jsonValue.GetObject("HashKeyRange");

    m_hashKeyRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SequenceNumberRange"))
  {
    m_sequenceNumberRange = jsonValue.GetObject("SequenceNumberRange");

    m_sequenceNumberRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue Shard::Jsonize() const
{
  JsonValue payload;

  if(m_shardIdHasBeenSet)
  {
   payload.WithString("ShardId", m_shardId);

  }

  if(m_parentShardIdHasBeenSet)
  {
   payload.WithString("ParentShardId", m_parentShardId);

  }

  if(m_adjacentParentShardIdHasBeenSet)
  {
   payload.WithString("AdjacentParentShardId", m_adjacentParentShardId);

  }

  if(m_hashKeyRangeHasBeenSet)
  {
   payload.WithObject("HashKeyRange", m_hashKeyRange.Jsonize());

  }

  if(m_sequenceNumberRangeHasBeenSet)
  {
   payload.WithObject("SequenceNumberRange", m_sequenceNumberRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws