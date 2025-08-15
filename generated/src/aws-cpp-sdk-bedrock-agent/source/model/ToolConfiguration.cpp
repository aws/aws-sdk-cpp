/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ToolConfiguration.h>
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

ToolConfiguration::ToolConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolConfiguration& ToolConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tools"))
  {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
    {
      m_tools.push_back(toolsJsonList[toolsIndex].AsObject());
    }
    m_toolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toolChoice"))
  {
    m_toolChoice = jsonValue.GetObject("toolChoice");
    m_toolChoiceHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_toolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toolsJsonList(m_tools.size());
   for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
   {
     toolsJsonList[toolsIndex].AsObject(m_tools[toolsIndex].Jsonize());
   }
   payload.WithArray("tools", std::move(toolsJsonList));

  }

  if(m_toolChoiceHasBeenSet)
  {
   payload.WithObject("toolChoice", m_toolChoice.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
