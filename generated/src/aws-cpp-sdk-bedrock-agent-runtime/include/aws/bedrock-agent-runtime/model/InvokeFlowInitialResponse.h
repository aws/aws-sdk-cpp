/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/http/HttpTypes.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  class InvokeFlowInitialResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvokeFlowInitialResponse();
    AWS_BEDROCKAGENTRUNTIME_API InvokeFlowInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvokeFlowInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvokeFlowInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
