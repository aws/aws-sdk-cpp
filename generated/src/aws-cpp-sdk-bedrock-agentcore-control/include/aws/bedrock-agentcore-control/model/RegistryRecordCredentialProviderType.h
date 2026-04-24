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
enum class RegistryRecordCredentialProviderType { NOT_SET, OAUTH, IAM };

namespace RegistryRecordCredentialProviderTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordCredentialProviderType
GetRegistryRecordCredentialProviderTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForRegistryRecordCredentialProviderType(RegistryRecordCredentialProviderType value);
}  // namespace RegistryRecordCredentialProviderTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
