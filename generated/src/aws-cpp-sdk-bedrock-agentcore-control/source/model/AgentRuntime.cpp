/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentRuntime.h>
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

AgentRuntime::AgentRuntime(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentRuntime& AgentRuntime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentRuntimeArn"))
  {
    m_agentRuntimeArn = jsonValue.GetString("agentRuntimeArn");
    m_agentRuntimeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeId"))
  {
    m_agentRuntimeId = jsonValue.GetString("agentRuntimeId");
    m_agentRuntimeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeVersion"))
  {
    m_agentRuntimeVersion = jsonValue.GetString("agentRuntimeVersion");
    m_agentRuntimeVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentRuntimeName"))
  {
    m_agentRuntimeName = jsonValue.GetString("agentRuntimeName");
    m_agentRuntimeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AgentRuntimeStatusMapper::GetAgentRuntimeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentRuntime::Jsonize() const
{
  JsonValue payload;

  if(m_agentRuntimeArnHasBeenSet)
  {
   payload.WithString("agentRuntimeArn", m_agentRuntimeArn);

  }

  if(m_agentRuntimeIdHasBeenSet)
  {
   payload.WithString("agentRuntimeId", m_agentRuntimeId);

  }

  if(m_agentRuntimeVersionHasBeenSet)
  {
   payload.WithString("agentRuntimeVersion", m_agentRuntimeVersion);

  }

  if(m_agentRuntimeNameHasBeenSet)
  {
   payload.WithString("agentRuntimeName", m_agentRuntimeName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AgentRuntimeStatusMapper::GetNameForAgentRuntimeStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
