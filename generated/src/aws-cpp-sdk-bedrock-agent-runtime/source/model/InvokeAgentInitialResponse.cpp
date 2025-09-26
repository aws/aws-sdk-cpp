/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeAgentInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

InvokeAgentInitialResponse::InvokeAgentInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeAgentInitialResponse& InvokeAgentInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeAgentInitialResponse::InvokeAgentInitialResponse(const Http::HeaderValueCollection& headers) : InvokeAgentInitialResponse()
{
  const auto& contentTypeIter = headers.find("x-amzn-bedrock-agent-content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& sessionIdIter = headers.find("x-amz-bedrock-agent-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
  }

  const auto& memoryIdIter = headers.find("x-amz-bedrock-agent-memory-id");
  if(memoryIdIter != headers.end())
  {
    m_memoryId = memoryIdIter->second;
    m_memoryIdHasBeenSet = true;
  }

}

JsonValue InvokeAgentInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
