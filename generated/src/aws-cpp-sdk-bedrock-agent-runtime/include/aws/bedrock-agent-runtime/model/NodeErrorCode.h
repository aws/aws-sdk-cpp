/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class NodeErrorCode
  {
    NOT_SET,
    VALIDATION,
    DEPENDENCY_FAILED,
    BAD_GATEWAY,
    INTERNAL_SERVER
  };

namespace NodeErrorCodeMapper
{
AWS_BEDROCKAGENTRUNTIME_API NodeErrorCode GetNodeErrorCodeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForNodeErrorCode(NodeErrorCode value);
} // namespace NodeErrorCodeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
