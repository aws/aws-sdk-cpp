/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class SigningAlgorithm { NOT_SET, RS256, PS256, ES256 };

namespace SigningAlgorithmMapper {
AWS_BEDROCKAGENTCORECONTROL_API SigningAlgorithm GetSigningAlgorithmForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForSigningAlgorithm(SigningAlgorithm value);
}  // namespace SigningAlgorithmMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
