/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeAgentInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

InvokeAgentInitialResponse::InvokeAgentInitialResponse() : 
    m_sessionIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

InvokeAgentInitialResponse::InvokeAgentInitialResponse(JsonView jsonValue) : 
    m_sessionIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InvokeAgentInitialResponse& InvokeAgentInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue InvokeAgentInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
