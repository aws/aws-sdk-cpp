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
enum class AccessControlPrincipalType { NOT_SET, USER };

namespace AccessControlPrincipalTypeMapper {
AWS_BEDROCKAGENT_API AccessControlPrincipalType GetAccessControlPrincipalTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForAccessControlPrincipalType(AccessControlPrincipalType value);
}  // namespace AccessControlPrincipalTypeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
