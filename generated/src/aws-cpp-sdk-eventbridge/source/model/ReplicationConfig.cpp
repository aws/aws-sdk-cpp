/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ReplicationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

ReplicationConfig::ReplicationConfig() : 
    m_state(ReplicationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ReplicationConfig::ReplicationConfig(JsonView jsonValue) : 
    m_state(ReplicationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationConfig& ReplicationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = ReplicationStateMapper::GetReplicationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ReplicationStateMapper::GetNameForReplicationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
