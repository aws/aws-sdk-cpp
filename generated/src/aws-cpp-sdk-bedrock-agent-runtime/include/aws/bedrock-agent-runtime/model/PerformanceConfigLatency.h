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
  enum class PerformanceConfigLatency
  {
    NOT_SET,
    standard,
    optimized
  };

namespace PerformanceConfigLatencyMapper
{
AWS_BEDROCKAGENTRUNTIME_API PerformanceConfigLatency GetPerformanceConfigLatencyForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForPerformanceConfigLatency(PerformanceConfigLatency value);
} // namespace PerformanceConfigLatencyMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
