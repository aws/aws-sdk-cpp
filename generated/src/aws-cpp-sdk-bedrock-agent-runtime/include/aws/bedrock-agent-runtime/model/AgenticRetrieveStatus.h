/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class AgenticRetrieveStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace AgenticRetrieveStatusMapper {
AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStatus GetAgenticRetrieveStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForAgenticRetrieveStatus(AgenticRetrieveStatus value);
}  // namespace AgenticRetrieveStatusMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
