/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockDataAutomationRuntime {
namespace Model {
enum class CustomOutputStatus { NOT_SET, MATCH, NO_MATCH };

namespace CustomOutputStatusMapper {
AWS_BEDROCKDATAAUTOMATIONRUNTIME_API CustomOutputStatus GetCustomOutputStatusForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::String GetNameForCustomOutputStatus(CustomOutputStatus value);
}  // namespace CustomOutputStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
