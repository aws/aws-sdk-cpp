/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AgentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

AgentDetails::AgentDetails() : 
    m_agentCpuCoresHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_componentVersionsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_reservedCpuCoresHasBeenSet(false)
{
}

AgentDetails::AgentDetails(JsonView jsonValue) : 
    m_agentCpuCoresHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_componentVersionsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_reservedCpuCoresHasBeenSet(false)
{
  *this = jsonValue;
}

AgentDetails& AgentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentCpuCores"))
  {
    Aws::Utils::Array<JsonView> agentCpuCoresJsonList = jsonValue.GetArray("agentCpuCores");
    for(unsigned agentCpuCoresIndex = 0; agentCpuCoresIndex < agentCpuCoresJsonList.GetLength(); ++agentCpuCoresIndex)
    {
      m_agentCpuCores.push_back(agentCpuCoresJsonList[agentCpuCoresIndex].AsInteger());
    }
    m_agentCpuCoresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentVersions"))
  {
    Aws::Utils::Array<JsonView> componentVersionsJsonList = jsonValue.GetArray("componentVersions");
    for(unsigned componentVersionsIndex = 0; componentVersionsIndex < componentVersionsJsonList.GetLength(); ++componentVersionsIndex)
    {
      m_componentVersions.push_back(componentVersionsJsonList[componentVersionsIndex].AsObject());
    }
    m_componentVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reservedCpuCores"))
  {
    Aws::Utils::Array<JsonView> reservedCpuCoresJsonList = jsonValue.GetArray("reservedCpuCores");
    for(unsigned reservedCpuCoresIndex = 0; reservedCpuCoresIndex < reservedCpuCoresJsonList.GetLength(); ++reservedCpuCoresIndex)
    {
      m_reservedCpuCores.push_back(reservedCpuCoresJsonList[reservedCpuCoresIndex].AsInteger());
    }
    m_reservedCpuCoresHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_agentCpuCoresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentCpuCoresJsonList(m_agentCpuCores.size());
   for(unsigned agentCpuCoresIndex = 0; agentCpuCoresIndex < agentCpuCoresJsonList.GetLength(); ++agentCpuCoresIndex)
   {
     agentCpuCoresJsonList[agentCpuCoresIndex].AsInteger(m_agentCpuCores[agentCpuCoresIndex]);
   }
   payload.WithArray("agentCpuCores", std::move(agentCpuCoresJsonList));

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_componentVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentVersionsJsonList(m_componentVersions.size());
   for(unsigned componentVersionsIndex = 0; componentVersionsIndex < componentVersionsJsonList.GetLength(); ++componentVersionsIndex)
   {
     componentVersionsJsonList[componentVersionsIndex].AsObject(m_componentVersions[componentVersionsIndex].Jsonize());
   }
   payload.WithArray("componentVersions", std::move(componentVersionsJsonList));

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_reservedCpuCoresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reservedCpuCoresJsonList(m_reservedCpuCores.size());
   for(unsigned reservedCpuCoresIndex = 0; reservedCpuCoresIndex < reservedCpuCoresJsonList.GetLength(); ++reservedCpuCoresIndex)
   {
     reservedCpuCoresJsonList[reservedCpuCoresIndex].AsInteger(m_reservedCpuCores[reservedCpuCoresIndex]);
   }
   payload.WithArray("reservedCpuCores", std::move(reservedCpuCoresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
