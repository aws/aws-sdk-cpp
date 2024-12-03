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
  enum class PayloadType
  {
    NOT_SET,
    TEXT,
    RETURN_CONTROL
  };

namespace PayloadTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API PayloadType GetPayloadTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForPayloadType(PayloadType value);
} // namespace PayloadTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
