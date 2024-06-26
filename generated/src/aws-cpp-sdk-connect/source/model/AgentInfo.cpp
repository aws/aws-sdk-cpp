/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AgentInfo::AgentInfo() : 
    m_idHasBeenSet(false),
    m_connectedToAgentTimestampHasBeenSet(false),
    m_agentPauseDurationInSeconds(0),
    m_agentPauseDurationInSecondsHasBeenSet(false),
    m_hierarchyGroupsHasBeenSet(false),
    m_deviceInfoHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

AgentInfo::AgentInfo(JsonView jsonValue)
  : AgentInfo()
{
  *this = jsonValue;
}

AgentInfo& AgentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedToAgentTimestamp"))
  {
    m_connectedToAgentTimestamp = jsonValue.GetDouble("ConnectedToAgentTimestamp");

    m_connectedToAgentTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentPauseDurationInSeconds"))
  {
    m_agentPauseDurationInSeconds = jsonValue.GetInteger("AgentPauseDurationInSeconds");

    m_agentPauseDurationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HierarchyGroups"))
  {
    m_hierarchyGroups = jsonValue.GetObject("HierarchyGroups");

    m_hierarchyGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceInfo"))
  {
    m_deviceInfo = jsonValue.GetObject("DeviceInfo");

    m_deviceInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");

    m_capabilitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_connectedToAgentTimestampHasBeenSet)
  {
   payload.WithDouble("ConnectedToAgentTimestamp", m_connectedToAgentTimestamp.SecondsWithMSPrecision());
  }

  if(m_agentPauseDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("AgentPauseDurationInSeconds", m_agentPauseDurationInSeconds);

  }

  if(m_hierarchyGroupsHasBeenSet)
  {
   payload.WithObject("HierarchyGroups", m_hierarchyGroups.Jsonize());

  }

  if(m_deviceInfoHasBeenSet)
  {
   payload.WithObject("DeviceInfo", m_deviceInfo.Jsonize());

  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
