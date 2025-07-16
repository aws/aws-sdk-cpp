/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TargetConfiguration.h>
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

TargetConfiguration::TargetConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetConfiguration& TargetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mcp"))
  {
    m_mcp = jsonValue.GetObject("mcp");
    m_mcpHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_mcpHasBeenSet)
  {
   payload.WithObject("mcp", m_mcp.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
