/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class StopReason
  {
    NOT_SET,
    end_turn,
    tool_use,
    max_tokens,
    stop_sequence,
    guardrail_intervened,
    content_filtered
  };

namespace StopReasonMapper
{
AWS_BEDROCKRUNTIME_API StopReason GetStopReasonForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForStopReason(StopReason value);
} // namespace StopReasonMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
