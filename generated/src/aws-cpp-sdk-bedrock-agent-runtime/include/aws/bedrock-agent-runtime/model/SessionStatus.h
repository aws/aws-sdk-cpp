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
  enum class SessionStatus
  {
    NOT_SET,
    ACTIVE,
    EXPIRED,
    ENDED
  };

namespace SessionStatusMapper
{
AWS_BEDROCKAGENTRUNTIME_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForSessionStatus(SessionStatus value);
} // namespace SessionStatusMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
