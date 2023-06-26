/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerGroup.h>
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

GameServerGroup::GameServerGroup() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerGroupArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_instanceDefinitionsHasBeenSet(false),
    m_balancingStrategy(BalancingStrategy::NOT_SET),
    m_balancingStrategyHasBeenSet(false),
    m_gameServerProtectionPolicy(GameServerProtectionPolicy::NOT_SET),
    m_gameServerProtectionPolicyHasBeenSet(false),
    m_autoScalingGroupArnHasBeenSet(false),
    m_status(GameServerGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_suspendedActionsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

GameServerGroup::GameServerGroup(JsonView jsonValue) : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerGroupArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_instanceDefinitionsHasBeenSet(false),
    m_balancingStrategy(BalancingStrategy::NOT_SET),
    m_balancingStrategyHasBeenSet(false),
    m_gameServerProtectionPolicy(GameServerProtectionPolicy::NOT_SET),
    m_gameServerProtectionPolicyHasBeenSet(false),
    m_autoScalingGroupArnHasBeenSet(false),
    m_status(GameServerGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_suspendedActionsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

GameServerGroup& GameServerGroup::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceDefinitions"))
  {
    Aws::Utils::Array<JsonView> instanceDefinitionsJsonList = jsonValue.GetArray("InstanceDefinitions");
    for(unsigned instanceDefinitionsIndex = 0; instanceDefinitionsIndex < instanceDefinitionsJsonList.GetLength(); ++instanceDefinitionsIndex)
    {
      m_instanceDefinitions.push_back(instanceDefinitionsJsonList[instanceDefinitionsIndex].AsObject());
    }
    m_instanceDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BalancingStrategy"))
  {
    m_balancingStrategy = BalancingStrategyMapper::GetBalancingStrategyForName(jsonValue.GetString("BalancingStrategy"));

    m_balancingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameServerProtectionPolicy"))
  {
    m_gameServerProtectionPolicy = GameServerProtectionPolicyMapper::GetGameServerProtectionPolicyForName(jsonValue.GetString("GameServerProtectionPolicy"));

    m_gameServerProtectionPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingGroupArn"))
  {
    m_autoScalingGroupArn = jsonValue.GetString("AutoScalingGroupArn");

    m_autoScalingGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GameServerGroupStatusMapper::GetGameServerGroupStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SuspendedActions"))
  {
    Aws::Utils::Array<JsonView> suspendedActionsJsonList = jsonValue.GetArray("SuspendedActions");
    for(unsigned suspendedActionsIndex = 0; suspendedActionsIndex < suspendedActionsJsonList.GetLength(); ++suspendedActionsIndex)
    {
      m_suspendedActions.push_back(GameServerGroupActionMapper::GetGameServerGroupActionForName(suspendedActionsJsonList[suspendedActionsIndex].AsString()));
    }
    m_suspendedActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue GameServerGroup::Jsonize() const
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_instanceDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceDefinitionsJsonList(m_instanceDefinitions.size());
   for(unsigned instanceDefinitionsIndex = 0; instanceDefinitionsIndex < instanceDefinitionsJsonList.GetLength(); ++instanceDefinitionsIndex)
   {
     instanceDefinitionsJsonList[instanceDefinitionsIndex].AsObject(m_instanceDefinitions[instanceDefinitionsIndex].Jsonize());
   }
   payload.WithArray("InstanceDefinitions", std::move(instanceDefinitionsJsonList));

  }

  if(m_balancingStrategyHasBeenSet)
  {
   payload.WithString("BalancingStrategy", BalancingStrategyMapper::GetNameForBalancingStrategy(m_balancingStrategy));
  }

  if(m_gameServerProtectionPolicyHasBeenSet)
  {
   payload.WithString("GameServerProtectionPolicy", GameServerProtectionPolicyMapper::GetNameForGameServerProtectionPolicy(m_gameServerProtectionPolicy));
  }

  if(m_autoScalingGroupArnHasBeenSet)
  {
   payload.WithString("AutoScalingGroupArn", m_autoScalingGroupArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GameServerGroupStatusMapper::GetNameForGameServerGroupStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_suspendedActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suspendedActionsJsonList(m_suspendedActions.size());
   for(unsigned suspendedActionsIndex = 0; suspendedActionsIndex < suspendedActionsJsonList.GetLength(); ++suspendedActionsIndex)
   {
     suspendedActionsJsonList[suspendedActionsIndex].AsString(GameServerGroupActionMapper::GetNameForGameServerGroupAction(m_suspendedActions[suspendedActionsIndex]));
   }
   payload.WithArray("SuspendedActions", std::move(suspendedActionsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
