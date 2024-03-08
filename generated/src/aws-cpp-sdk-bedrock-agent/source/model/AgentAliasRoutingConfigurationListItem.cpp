/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentAliasRoutingConfigurationListItem.h>
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

AgentAliasRoutingConfigurationListItem::AgentAliasRoutingConfigurationListItem() : 
    m_agentVersionHasBeenSet(false)
{
}

AgentAliasRoutingConfigurationListItem::AgentAliasRoutingConfigurationListItem(JsonView jsonValue) : 
    m_agentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AgentAliasRoutingConfigurationListItem& AgentAliasRoutingConfigurationListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");

    m_agentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentAliasRoutingConfigurationListItem::Jsonize() const
{
  JsonValue payload;

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
