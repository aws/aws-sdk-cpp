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
enum class BrowserEnterprisePolicyType { NOT_SET, MANAGED, RECOMMENDED };

namespace BrowserEnterprisePolicyTypeMapper {
AWS_BEDROCKAGENTCORE_API BrowserEnterprisePolicyType GetBrowserEnterprisePolicyTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForBrowserEnterprisePolicyType(BrowserEnterprisePolicyType value);
}  // namespace BrowserEnterprisePolicyTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
