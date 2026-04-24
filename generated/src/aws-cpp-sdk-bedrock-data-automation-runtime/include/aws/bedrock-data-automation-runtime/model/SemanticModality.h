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
enum class SemanticModality { NOT_SET, DOCUMENT, IMAGE, AUDIO, VIDEO };

namespace SemanticModalityMapper {
AWS_BEDROCKDATAAUTOMATIONRUNTIME_API SemanticModality GetSemanticModalityForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::String GetNameForSemanticModality(SemanticModality value);
}  // namespace SemanticModalityMapper
}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
