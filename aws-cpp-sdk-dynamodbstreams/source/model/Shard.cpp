/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

Shard::Shard(const JsonValue& jsonValue) : 
    m_shardIdHasBeenSet(false),
    m_sequenceNumberRangeHasBeenSet(false),
    m_parentShardIdHasBeenSet(false)
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
