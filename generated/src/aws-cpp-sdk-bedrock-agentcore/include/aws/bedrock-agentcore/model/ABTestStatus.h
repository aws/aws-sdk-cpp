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
enum class ABTestStatus { NOT_SET, CREATING, ACTIVE, CREATE_FAILED, UPDATING, UPDATE_FAILED, DELETING, DELETE_FAILED, FAILED };

namespace ABTestStatusMapper {
AWS_BEDROCKAGENTCORE_API ABTestStatus GetABTestStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForABTestStatus(ABTestStatus value);
}  // namespace ABTestStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
