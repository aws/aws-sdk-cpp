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
enum class DatasetGenerationStatus { NOT_SET, IN_PROGRESS, COMPLETED, COMPLETED_WITH_ERRORS, FAILED, DELETING };

namespace DatasetGenerationStatusMapper {
AWS_BEDROCKAGENTCORE_API DatasetGenerationStatus GetDatasetGenerationStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForDatasetGenerationStatus(DatasetGenerationStatus value);
}  // namespace DatasetGenerationStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
