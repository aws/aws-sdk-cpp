/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/AgentListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

AgentListEntry::AgentListEntry() : 
    m_agentArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(AgentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_platformHasBeenSet(false)
{
}

AgentListEntry::AgentListEntry(JsonView jsonValue) : 
    m_agentArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(AgentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_platformHasBeenSet(false)
{
  *this = jsonValue;
}

AgentListEntry& AgentListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentArn"))
  {
    m_agentArn = jsonValue.GetString("AgentArn");

    m_agentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetObject("Platform");

    m_platformHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_agentArnHasBeenSet)
  {
   payload.WithString("AgentArn", m_agentArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AgentStatusMapper::GetNameForAgentStatus(m_status));
  }

  if(m_platformHasBeenSet)
  {
   payload.WithObject("Platform", m_platform.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
