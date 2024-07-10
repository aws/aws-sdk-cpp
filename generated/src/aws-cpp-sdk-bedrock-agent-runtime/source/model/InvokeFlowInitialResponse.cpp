/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeFlowInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

InvokeFlowInitialResponse::InvokeFlowInitialResponse()
{
}

InvokeFlowInitialResponse::InvokeFlowInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeFlowInitialResponse& InvokeFlowInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeFlowInitialResponse::InvokeFlowInitialResponse(const Http::HeaderValueCollection& headers) : InvokeFlowInitialResponse()
{
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue InvokeFlowInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
