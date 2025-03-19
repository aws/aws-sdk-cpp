/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ReturnControlResults.h>
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

ReturnControlResults::ReturnControlResults(JsonView jsonValue)
{
  *this = jsonValue;
}

ReturnControlResults& ReturnControlResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invocationId"))
  {
    m_invocationId = jsonValue.GetString("invocationId");
    m_invocationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("returnControlInvocationResults"))
  {
    Aws::Utils::Array<JsonView> returnControlInvocationResultsJsonList = jsonValue.GetArray("returnControlInvocationResults");
    for(unsigned returnControlInvocationResultsIndex = 0; returnControlInvocationResultsIndex < returnControlInvocationResultsJsonList.GetLength(); ++returnControlInvocationResultsIndex)
    {
      m_returnControlInvocationResults.push_back(returnControlInvocationResultsJsonList[returnControlInvocationResultsIndex].AsObject());
    }
    m_returnControlInvocationResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReturnControlResults::Jsonize() const
{
  JsonValue payload;

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("invocationId", m_invocationId);

  }

  if(m_returnControlInvocationResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> returnControlInvocationResultsJsonList(m_returnControlInvocationResults.size());
   for(unsigned returnControlInvocationResultsIndex = 0; returnControlInvocationResultsIndex < returnControlInvocationResultsJsonList.GetLength(); ++returnControlInvocationResultsIndex)
   {
     returnControlInvocationResultsJsonList[returnControlInvocationResultsIndex].AsObject(m_returnControlInvocationResults[returnControlInvocationResultsIndex].Jsonize());
   }
   payload.WithArray("returnControlInvocationResults", std::move(returnControlInvocationResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
