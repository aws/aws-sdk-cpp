/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateStreamInitialResponse.h>
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

RetrieveAndGenerateStreamInitialResponse::RetrieveAndGenerateStreamInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrieveAndGenerateStreamInitialResponse& RetrieveAndGenerateStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

RetrieveAndGenerateStreamInitialResponse::RetrieveAndGenerateStreamInitialResponse(const Http::HeaderValueCollection& headers) : RetrieveAndGenerateStreamInitialResponse()
{
  const auto& sessionIdIter = headers.find("x-amzn-bedrock-knowledge-base-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
  }

}

JsonValue RetrieveAndGenerateStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
