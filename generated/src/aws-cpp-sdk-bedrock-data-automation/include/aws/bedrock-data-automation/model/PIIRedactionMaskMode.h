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
enum class PIIRedactionMaskMode { NOT_SET, PII, ENTITY_TYPE };

namespace PIIRedactionMaskModeMapper {
AWS_BEDROCKDATAAUTOMATION_API PIIRedactionMaskMode GetPIIRedactionMaskModeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForPIIRedactionMaskMode(PIIRedactionMaskMode value);
}  // namespace PIIRedactionMaskModeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
