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
enum class CapacityProviderSessionStatus { NOT_SET, Provisioning, Deprovisioning, Active, Deleting, Deleted, Stopped };

namespace CapacityProviderSessionStatusMapper {
AWS_BEDROCKAGENTCORE_API CapacityProviderSessionStatus GetCapacityProviderSessionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForCapacityProviderSessionStatus(CapacityProviderSessionStatus value);
}  // namespace CapacityProviderSessionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
