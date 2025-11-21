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
enum class SensitiveDataDetectionMode { NOT_SET, DETECTION, DETECTION_AND_REDACTION };

namespace SensitiveDataDetectionModeMapper {
AWS_BEDROCKDATAAUTOMATION_API SensitiveDataDetectionMode GetSensitiveDataDetectionModeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForSensitiveDataDetectionMode(SensitiveDataDetectionMode value);
}  // namespace SensitiveDataDetectionModeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
