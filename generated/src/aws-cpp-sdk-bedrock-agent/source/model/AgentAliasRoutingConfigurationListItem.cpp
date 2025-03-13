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

AgentAliasRoutingConfigurationListItem::AgentAliasRoutingConfigurationListItem(JsonView jsonValue)
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
  if(jsonValue.ValueExists("provisionedThroughput"))
  {
    m_provisionedThroughput = jsonValue.GetString("provisionedThroughput");
    m_provisionedThroughputHasBeenSet = true;
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

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithString("provisionedThroughput", m_provisionedThroughput);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
