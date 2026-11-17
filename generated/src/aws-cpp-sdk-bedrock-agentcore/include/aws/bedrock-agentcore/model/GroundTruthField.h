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
enum class GroundTruthField { NOT_SET, expected_response, expected_trajectory };

namespace GroundTruthFieldMapper {
AWS_BEDROCKAGENTCORE_API GroundTruthField GetGroundTruthFieldForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForGroundTruthField(GroundTruthField value);
}  // namespace GroundTruthFieldMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
