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
enum class BatchEvaluationStatus { NOT_SET, PENDING, IN_PROGRESS, COMPLETED, COMPLETED_WITH_ERRORS, FAILED, STOPPING, STOPPED, DELETING };

namespace BatchEvaluationStatusMapper {
AWS_BEDROCKAGENTCORE_API BatchEvaluationStatus GetBatchEvaluationStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForBatchEvaluationStatus(BatchEvaluationStatus value);
}  // namespace BatchEvaluationStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
