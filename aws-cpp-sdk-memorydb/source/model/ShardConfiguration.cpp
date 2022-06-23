/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ShardConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ShardConfiguration::ShardConfiguration() : 
    m_slotsHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false)
{
}

ShardConfiguration::ShardConfiguration(JsonView jsonValue) : 
    m_slotsHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false)
{
  *this = jsonValue;
}

ShardConfiguration& ShardConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Slots"))
  {
    m_slots = jsonValue.GetString("Slots");

    m_slotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaCount"))
  {
    m_replicaCount = jsonValue.GetInteger("ReplicaCount");

    m_replicaCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ShardConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_slotsHasBeenSet)
  {
   payload.WithString("Slots", m_slots);

  }

  if(m_replicaCountHasBeenSet)
  {
   payload.WithInteger("ReplicaCount", m_replicaCount);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
