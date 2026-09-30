/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgent {
namespace Model {
enum class VpcResolutionMode { NOT_SET, PUBLIC_, IN_VPC };

namespace VpcResolutionModeMapper {
AWS_BEDROCKAGENT_API VpcResolutionMode GetVpcResolutionModeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForVpcResolutionMode(VpcResolutionMode value);
}  // namespace VpcResolutionModeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
