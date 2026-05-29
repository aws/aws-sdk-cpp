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
enum class SecretSourceType { NOT_SET, MANAGED, EXTERNAL };

namespace SecretSourceTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API SecretSourceType GetSecretSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForSecretSourceType(SecretSourceType value);
}  // namespace SecretSourceTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
