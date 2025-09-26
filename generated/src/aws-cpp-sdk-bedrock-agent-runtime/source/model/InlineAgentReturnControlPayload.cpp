/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InlineAgentReturnControlPayload.h>
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

InlineAgentReturnControlPayload::InlineAgentReturnControlPayload(JsonView jsonValue)
{
  *this = jsonValue;
}

InlineAgentReturnControlPayload& InlineAgentReturnControlPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invocationInputs"))
  {
    Aws::Utils::Array<JsonView> invocationInputsJsonList = jsonValue.GetArray("invocationInputs");
    for(unsigned invocationInputsIndex = 0; invocationInputsIndex < invocationInputsJsonList.GetLength(); ++invocationInputsIndex)
    {
      m_invocationInputs.push_back(invocationInputsJsonList[invocationInputsIndex].AsObject());
    }
    m_invocationInputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationId"))
  {
    m_invocationId = jsonValue.GetString("invocationId");
    m_invocationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineAgentReturnControlPayload::Jsonize() const
{
  JsonValue payload;

  if(m_invocationInputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invocationInputsJsonList(m_invocationInputs.size());
   for(unsigned invocationInputsIndex = 0; invocationInputsIndex < invocationInputsJsonList.GetLength(); ++invocationInputsIndex)
   {
     invocationInputsJsonList[invocationInputsIndex].AsObject(m_invocationInputs[invocationInputsIndex].Jsonize());
   }
   payload.WithArray("invocationInputs", std::move(invocationInputsJsonList));

  }

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("invocationId", m_invocationId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
