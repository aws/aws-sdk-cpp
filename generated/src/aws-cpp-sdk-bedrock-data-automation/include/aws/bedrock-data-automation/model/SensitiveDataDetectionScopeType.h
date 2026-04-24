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
enum class SensitiveDataDetectionScopeType { NOT_SET, STANDARD, CUSTOM };

namespace SensitiveDataDetectionScopeTypeMapper {
AWS_BEDROCKDATAAUTOMATION_API SensitiveDataDetectionScopeType GetSensitiveDataDetectionScopeTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForSensitiveDataDetectionScopeType(SensitiveDataDetectionScopeType value);
}  // namespace SensitiveDataDetectionScopeTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
