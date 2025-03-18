/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OptimizePromptInitialResponse.h>
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

OptimizePromptInitialResponse::OptimizePromptInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizePromptInitialResponse& OptimizePromptInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

OptimizePromptInitialResponse::OptimizePromptInitialResponse(const Http::HeaderValueCollection& headers) : OptimizePromptInitialResponse()
{
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue OptimizePromptInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
