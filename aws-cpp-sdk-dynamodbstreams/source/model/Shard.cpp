/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/Shard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

Shard::Shard() : 
    m_shardIdHasBeenSet(false),
    m_sequenceNumberRangeHasBeenSet(false),
    m_parentShardIdHasBeenSet(false)
{
}

Shard::Shard(JsonView jsonValue) : 
    m_shardIdHasBeenSet(false),
    m_sequenceNumberRangeHasBeenSet(false),
    m_parentShardIdHasBeenSet(false)
{
  *this = jsonValue;
}

Shard& Shard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShardId"))
  {
    m_shardId = jsonValue.GetString("ShardId");

    m_shardIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SequenceNumberRange"))
  {
    m_sequenceNumberRange = jsonValue.GetObject("SequenceNumberRange");

    m_sequenceNumberRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentShardId"))
  {
    m_parentShardId = jsonValue.GetString("ParentShardId");

    m_parentShardIdHasBeenSet = true;
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

  if(m_sequenceNumberRangeHasBeenSet)
  {
   payload.WithObject("SequenceNumberRange", m_sequenceNumberRange.Jsonize());

  }

  if(m_parentShardIdHasBeenSet)
  {
   payload.WithString("ParentShardId", m_parentShardId);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
