/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentVersionSummary.h>
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

AgentVersionSummary::AgentVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentVersionSummary& AgentVersionSummary::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");
    m_agentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailConfiguration"))
  {
    m_guardrailConfiguration = jsonValue.GetObject("guardrailConfiguration");
    m_guardrailConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("agentName", m_agentName);

  }

  if(m_agentStatusHasBeenSet)
  {
   payload.WithString("agentStatus", AgentStatusMapper::GetNameForAgentStatus(m_agentStatus));
  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_guardrailConfigurationHasBeenSet)
  {
   payload.WithObject("guardrailConfiguration", m_guardrailConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
