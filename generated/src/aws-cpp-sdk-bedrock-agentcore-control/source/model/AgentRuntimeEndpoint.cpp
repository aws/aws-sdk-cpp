/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentRuntimeEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

AgentRuntimeEndpoint::AgentRuntimeEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentRuntimeEndpoint& AgentRuntimeEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("liveVersion"))
  {
    m_liveVersion = jsonValue.GetString("liveVersion");
    m_liveVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetVersion"))
  {
    m_targetVersion = jsonValue.GetString("targetVersion");
    m_targetVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeEndpointArn"))
  {
    m_agentRuntimeEndpointArn = jsonValue.GetString("agentRuntimeEndpointArn");
    m_agentRuntimeEndpointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeArn"))
  {
    m_agentRuntimeArn = jsonValue.GetString("agentRuntimeArn");
    m_agentRuntimeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AgentRuntimeEndpointStatusMapper::GetAgentRuntimeEndpointStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentRuntimeEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_liveVersionHasBeenSet)
  {
   payload.WithString("liveVersion", m_liveVersion);

  }

  if(m_targetVersionHasBeenSet)
  {
   payload.WithString("targetVersion", m_targetVersion);

  }

  if(m_agentRuntimeEndpointArnHasBeenSet)
  {
   payload.WithString("agentRuntimeEndpointArn", m_agentRuntimeEndpointArn);

  }

  if(m_agentRuntimeArnHasBeenSet)
  {
   payload.WithString("agentRuntimeArn", m_agentRuntimeArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AgentRuntimeEndpointStatusMapper::GetNameForAgentRuntimeEndpointStatus(m_status));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
