/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class AdvancedPromptOptimizationJobStatus { NOT_SET, InProgress, Completed, Failed, PartiallyCompleted, Stopping, Stopped, Deleting };

namespace AdvancedPromptOptimizationJobStatusMapper {
AWS_BEDROCK_API AdvancedPromptOptimizationJobStatus GetAdvancedPromptOptimizationJobStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAdvancedPromptOptimizationJobStatus(AdvancedPromptOptimizationJobStatus value);
}  // namespace AdvancedPromptOptimizationJobStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
