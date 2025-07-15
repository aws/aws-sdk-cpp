/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/ShardFilter.h>
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

ShardFilter::ShardFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ShardFilter& ShardFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ShardFilterTypeMapper::GetShardFilterTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShardId"))
  {
    m_shardId = jsonValue.GetString("ShardId");
    m_shardIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ShardFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ShardFilterTypeMapper::GetNameForShardFilterType(m_type));
  }

  if(m_shardIdHasBeenSet)
  {
   payload.WithString("ShardId", m_shardId);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
