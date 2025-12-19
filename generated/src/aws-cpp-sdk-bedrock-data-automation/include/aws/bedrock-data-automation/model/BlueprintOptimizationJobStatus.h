/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
enum class BlueprintOptimizationJobStatus { NOT_SET, Created, InProgress, Success, ServiceError, ClientError };

namespace BlueprintOptimizationJobStatusMapper {
AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationJobStatus GetBlueprintOptimizationJobStatusForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForBlueprintOptimizationJobStatus(BlueprintOptimizationJobStatus value);
}  // namespace BlueprintOptimizationJobStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
