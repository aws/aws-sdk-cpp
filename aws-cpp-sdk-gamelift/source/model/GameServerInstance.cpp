/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

GameServerInstance::GameServerInstance() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerGroupArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStatus(GameServerInstanceStatus::NOT_SET),
    m_instanceStatusHasBeenSet(false)
{
}

GameServerInstance::GameServerInstance(JsonView jsonValue) : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerGroupArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStatus(GameServerInstanceStatus::NOT_SET),
    m_instanceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

GameServerInstance& GameServerInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GameServerGroupName"))
  {
    m_gameServerGroupName = jsonValue.GetString("GameServerGroupName");

    m_gameServerGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameServerGroupArn"))
  {
    m_gameServerGroupArn = jsonValue.GetString("GameServerGroupArn");

    m_gameServerGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceStatus"))
  {
    m_instanceStatus = GameServerInstanceStatusMapper::GetGameServerInstanceStatusForName(jsonValue.GetString("InstanceStatus"));

    m_instanceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue GameServerInstance::Jsonize() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_gameServerGroupArnHasBeenSet)
  {
   payload.WithString("GameServerGroupArn", m_gameServerGroupArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceStatusHasBeenSet)
  {
   payload.WithString("InstanceStatus", GameServerInstanceStatusMapper::GetNameForGameServerInstanceStatus(m_instanceStatus));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
