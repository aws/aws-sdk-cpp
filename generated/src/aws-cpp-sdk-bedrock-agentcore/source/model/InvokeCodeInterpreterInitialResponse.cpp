/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

InvokeCodeInterpreterInitialResponse::InvokeCodeInterpreterInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeCodeInterpreterInitialResponse& InvokeCodeInterpreterInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeCodeInterpreterInitialResponse::InvokeCodeInterpreterInitialResponse(const Http::HeaderValueCollection& headers) : InvokeCodeInterpreterInitialResponse()
{
  const auto& sessionIdIter = headers.find("x-amzn-code-interpreter-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
  }

}

JsonValue InvokeCodeInterpreterInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
