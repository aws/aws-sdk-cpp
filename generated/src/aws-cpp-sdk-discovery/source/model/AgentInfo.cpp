/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/AgentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

AgentInfo::AgentInfo() : 
    m_agentIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_agentNetworkInfoListHasBeenSet(false),
    m_connectorIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_health(AgentStatus::NOT_SET),
    m_healthHasBeenSet(false),
    m_lastHealthPingTimeHasBeenSet(false),
    m_collectionStatusHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_registeredTimeHasBeenSet(false)
{
}

AgentInfo::AgentInfo(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_agentNetworkInfoListHasBeenSet(false),
    m_connectorIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_health(AgentStatus::NOT_SET),
    m_healthHasBeenSet(false),
    m_lastHealthPingTimeHasBeenSet(false),
    m_collectionStatusHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_registeredTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AgentInfo& AgentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostName"))
  {
    m_hostName = jsonValue.GetString("hostName");

    m_hostNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentNetworkInfoList"))
  {
    Aws::Utils::Array<JsonView> agentNetworkInfoListJsonList = jsonValue.GetArray("agentNetworkInfoList");
    for(unsigned agentNetworkInfoListIndex = 0; agentNetworkInfoListIndex < agentNetworkInfoListJsonList.GetLength(); ++agentNetworkInfoListIndex)
    {
      m_agentNetworkInfoList.push_back(agentNetworkInfoListJsonList[agentNetworkInfoListIndex].AsObject());
    }
    m_agentNetworkInfoListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorId"))
  {
    m_connectorId = jsonValue.GetString("connectorId");

    m_connectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("health"))
  {
    m_health = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("health"));

    m_healthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastHealthPingTime"))
  {
    m_lastHealthPingTime = jsonValue.GetString("lastHealthPingTime");

    m_lastHealthPingTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collectionStatus"))
  {
    m_collectionStatus = jsonValue.GetString("collectionStatus");

    m_collectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentType"))
  {
    m_agentType = jsonValue.GetString("agentType");

    m_agentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredTime"))
  {
    m_registeredTime = jsonValue.GetString("registeredTime");

    m_registeredTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("hostName", m_hostName);

  }

  if(m_agentNetworkInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentNetworkInfoListJsonList(m_agentNetworkInfoList.size());
   for(unsigned agentNetworkInfoListIndex = 0; agentNetworkInfoListIndex < agentNetworkInfoListJsonList.GetLength(); ++agentNetworkInfoListIndex)
   {
     agentNetworkInfoListJsonList[agentNetworkInfoListIndex].AsObject(m_agentNetworkInfoList[agentNetworkInfoListIndex].Jsonize());
   }
   payload.WithArray("agentNetworkInfoList", std::move(agentNetworkInfoListJsonList));

  }

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("connectorId", m_connectorId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_healthHasBeenSet)
  {
   payload.WithString("health", AgentStatusMapper::GetNameForAgentStatus(m_health));
  }

  if(m_lastHealthPingTimeHasBeenSet)
  {
   payload.WithString("lastHealthPingTime", m_lastHealthPingTime);

  }

  if(m_collectionStatusHasBeenSet)
  {
   payload.WithString("collectionStatus", m_collectionStatus);

  }

  if(m_agentTypeHasBeenSet)
  {
   payload.WithString("agentType", m_agentType);

  }

  if(m_registeredTimeHasBeenSet)
  {
   payload.WithString("registeredTime", m_registeredTime);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
