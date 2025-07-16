/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AutomationStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

AutomationStream::AutomationStream(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationStream& AutomationStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamEndpoint"))
  {
    m_streamEndpoint = jsonValue.GetString("streamEndpoint");
    m_streamEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamStatus"))
  {
    m_streamStatus = AutomationStreamStatusMapper::GetAutomationStreamStatusForName(jsonValue.GetString("streamStatus"));
    m_streamStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationStream::Jsonize() const
{
  JsonValue payload;

  if(m_streamEndpointHasBeenSet)
  {
   payload.WithString("streamEndpoint", m_streamEndpoint);

  }

  if(m_streamStatusHasBeenSet)
  {
   payload.WithString("streamStatus", AutomationStreamStatusMapper::GetNameForAutomationStreamStatus(m_streamStatus));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
