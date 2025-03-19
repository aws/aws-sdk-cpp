/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentInitialResponse.h>
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

InvokeInlineAgentInitialResponse::InvokeInlineAgentInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeInlineAgentInitialResponse& InvokeInlineAgentInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeInlineAgentInitialResponse::InvokeInlineAgentInitialResponse(const Http::HeaderValueCollection& headers) : InvokeInlineAgentInitialResponse()
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

}

JsonValue InvokeInlineAgentInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
