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
enum class RegistryRecordOAuthGrantType { NOT_SET, CLIENT_CREDENTIALS };

namespace RegistryRecordOAuthGrantTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordOAuthGrantType GetRegistryRecordOAuthGrantTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForRegistryRecordOAuthGrantType(RegistryRecordOAuthGrantType value);
}  // namespace RegistryRecordOAuthGrantTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
