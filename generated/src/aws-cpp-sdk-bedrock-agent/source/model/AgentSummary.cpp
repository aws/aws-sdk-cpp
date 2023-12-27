/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

AgentSummary::AgentSummary() : 
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentStatus(AgentStatus::NOT_SET),
    m_agentStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_latestAgentVersionHasBeenSet(false)
{
}

AgentSummary::AgentSummary(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentStatus(AgentStatus::NOT_SET),
    m_agentStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_latestAgentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AgentSummary& AgentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentName"))
  {
    m_agentName = jsonValue.GetString("agentName");

    m_agentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentStatus"))
  {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("agentStatus"));

    m_agentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestAgentVersion"))
  {
    m_latestAgentVersion = jsonValue.GetString("latestAgentVersion");

    m_latestAgentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("agentName", m_agentName);

  }

  if(m_agentStatusHasBeenSet)
  {
   payload.WithString("agentStatus", AgentStatusMapper::GetNameForAgentStatus(m_agentStatus));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_latestAgentVersionHasBeenSet)
  {
   payload.WithString("latestAgentVersion", m_latestAgentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
