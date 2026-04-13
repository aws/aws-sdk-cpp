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
enum class RegistryRecordStatus { NOT_SET, DRAFT, PENDING_APPROVAL, APPROVED, REJECTED, DEPRECATED };

namespace RegistryRecordStatusMapper {
AWS_BEDROCKAGENTCORE_API RegistryRecordStatus GetRegistryRecordStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForRegistryRecordStatus(RegistryRecordStatus value);
}  // namespace RegistryRecordStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
