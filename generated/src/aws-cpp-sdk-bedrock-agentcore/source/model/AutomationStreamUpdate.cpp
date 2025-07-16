/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AutomationStreamUpdate.h>
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

AutomationStreamUpdate::AutomationStreamUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationStreamUpdate& AutomationStreamUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamStatus"))
  {
    m_streamStatus = AutomationStreamStatusMapper::GetAutomationStreamStatusForName(jsonValue.GetString("streamStatus"));
    m_streamStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationStreamUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_streamStatusHasBeenSet)
  {
   payload.WithString("streamStatus", AutomationStreamStatusMapper::GetNameForAutomationStreamStatus(m_streamStatus));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
