/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvocationStepPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

InvocationStepPayload::InvocationStepPayload(JsonView jsonValue)
{
  *this = jsonValue;
}

InvocationStepPayload& InvocationStepPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentBlocks"))
  {
    Aws::Utils::Array<JsonView> contentBlocksJsonList = jsonValue.GetArray("contentBlocks");
    for(unsigned contentBlocksIndex = 0; contentBlocksIndex < contentBlocksJsonList.GetLength(); ++contentBlocksIndex)
    {
      m_contentBlocks.push_back(contentBlocksJsonList[contentBlocksIndex].AsObject());
    }
    m_contentBlocksHasBeenSet = true;
  }
  return *this;
}

JsonValue InvocationStepPayload::Jsonize() const
{
  JsonValue payload;

  if(m_contentBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentBlocksJsonList(m_contentBlocks.size());
   for(unsigned contentBlocksIndex = 0; contentBlocksIndex < contentBlocksJsonList.GetLength(); ++contentBlocksIndex)
   {
     contentBlocksJsonList[contentBlocksIndex].AsObject(m_contentBlocks[contentBlocksIndex].Jsonize());
   }
   payload.WithArray("contentBlocks", std::move(contentBlocksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
