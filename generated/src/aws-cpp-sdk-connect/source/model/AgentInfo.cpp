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

AgentInfo::AgentInfo(JsonView jsonValue)
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
  if(jsonValue.ValueExists("AfterContactWorkDuration"))
  {
    m_afterContactWorkDuration = jsonValue.GetInteger("AfterContactWorkDuration");
    m_afterContactWorkDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AfterContactWorkStartTimestamp"))
  {
    m_afterContactWorkStartTimestamp = jsonValue.GetDouble("AfterContactWorkStartTimestamp");
    m_afterContactWorkStartTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AfterContactWorkEndTimestamp"))
  {
    m_afterContactWorkEndTimestamp = jsonValue.GetDouble("AfterContactWorkEndTimestamp");
    m_afterContactWorkEndTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentInitiatedHoldDuration"))
  {
    m_agentInitiatedHoldDuration = jsonValue.GetInteger("AgentInitiatedHoldDuration");
    m_agentInitiatedHoldDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateTransitions"))
  {
    Aws::Utils::Array<JsonView> stateTransitionsJsonList = jsonValue.GetArray("StateTransitions");
    for(unsigned stateTransitionsIndex = 0; stateTransitionsIndex < stateTransitionsJsonList.GetLength(); ++stateTransitionsIndex)
    {
      m_stateTransitions.push_back(stateTransitionsJsonList[stateTransitionsIndex].AsObject());
    }
    m_stateTransitionsHasBeenSet = true;
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

  if(m_afterContactWorkDurationHasBeenSet)
  {
   payload.WithInteger("AfterContactWorkDuration", m_afterContactWorkDuration);

  }

  if(m_afterContactWorkStartTimestampHasBeenSet)
  {
   payload.WithDouble("AfterContactWorkStartTimestamp", m_afterContactWorkStartTimestamp.SecondsWithMSPrecision());
  }

  if(m_afterContactWorkEndTimestampHasBeenSet)
  {
   payload.WithDouble("AfterContactWorkEndTimestamp", m_afterContactWorkEndTimestamp.SecondsWithMSPrecision());
  }

  if(m_agentInitiatedHoldDurationHasBeenSet)
  {
   payload.WithInteger("AgentInitiatedHoldDuration", m_agentInitiatedHoldDuration);

  }

  if(m_stateTransitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTransitionsJsonList(m_stateTransitions.size());
   for(unsigned stateTransitionsIndex = 0; stateTransitionsIndex < stateTransitionsJsonList.GetLength(); ++stateTransitionsIndex)
   {
     stateTransitionsJsonList[stateTransitionsIndex].AsObject(m_stateTransitions[stateTransitionsIndex].Jsonize());
   }
   payload.WithArray("StateTransitions", std::move(stateTransitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
