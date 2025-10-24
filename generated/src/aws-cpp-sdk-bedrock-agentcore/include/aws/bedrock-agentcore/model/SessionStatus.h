/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class SessionStatus { NOT_SET, IN_PROGRESS, FAILED };

namespace SessionStatusMapper {
AWS_BEDROCKAGENTCORE_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForSessionStatus(SessionStatus value);
}  // namespace SessionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
