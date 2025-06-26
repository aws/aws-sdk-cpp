/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/ShardFilter.h>
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

ShardFilter::ShardFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ShardFilter& ShardFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ShardFilterTypeMapper::GetShardFilterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shardId"))
  {
    m_shardId = jsonValue.GetString("shardId");
    m_shardIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ShardFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ShardFilterTypeMapper::GetNameForShardFilterType(m_type));
  }

  if(m_shardIdHasBeenSet)
  {
   payload.WithString("shardId", m_shardId);

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
