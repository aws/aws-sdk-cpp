/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ComponentStatusData.h>
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

ComponentStatusData::ComponentStatusData() : 
    m_bytesReceived(0),
    m_bytesReceivedHasBeenSet(false),
    m_bytesSent(0),
    m_bytesSentHasBeenSet(false),
    m_capabilityArnHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_dataflowIdHasBeenSet(false),
    m_packetsDropped(0),
    m_packetsDroppedHasBeenSet(false),
    m_status(AgentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ComponentStatusData::ComponentStatusData(JsonView jsonValue) : 
    m_bytesReceived(0),
    m_bytesReceivedHasBeenSet(false),
    m_bytesSent(0),
    m_bytesSentHasBeenSet(false),
    m_capabilityArnHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_dataflowIdHasBeenSet(false),
    m_packetsDropped(0),
    m_packetsDroppedHasBeenSet(false),
    m_status(AgentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentStatusData& ComponentStatusData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bytesReceived"))
  {
    m_bytesReceived = jsonValue.GetInt64("bytesReceived");

    m_bytesReceivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bytesSent"))
  {
    m_bytesSent = jsonValue.GetInt64("bytesSent");

    m_bytesSentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capabilityArn"))
  {
    m_capabilityArn = jsonValue.GetString("capabilityArn");

    m_capabilityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentType"))
  {
    m_componentType = jsonValue.GetString("componentType");

    m_componentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataflowId"))
  {
    m_dataflowId = jsonValue.GetString("dataflowId");

    m_dataflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packetsDropped"))
  {
    m_packetsDropped = jsonValue.GetInt64("packetsDropped");

    m_packetsDroppedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentStatusData::Jsonize() const
{
  JsonValue payload;

  if(m_bytesReceivedHasBeenSet)
  {
   payload.WithInt64("bytesReceived", m_bytesReceived);

  }

  if(m_bytesSentHasBeenSet)
  {
   payload.WithInt64("bytesSent", m_bytesSent);

  }

  if(m_capabilityArnHasBeenSet)
  {
   payload.WithString("capabilityArn", m_capabilityArn);

  }

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("componentType", m_componentType);

  }

  if(m_dataflowIdHasBeenSet)
  {
   payload.WithString("dataflowId", m_dataflowId);

  }

  if(m_packetsDroppedHasBeenSet)
  {
   payload.WithInt64("packetsDropped", m_packetsDropped);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AgentStatusMapper::GetNameForAgentStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
