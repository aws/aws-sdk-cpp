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
enum class PrincipalMatchOperator { NOT_SET, StringEquals, StringLike };

namespace PrincipalMatchOperatorMapper {
AWS_BEDROCKAGENTCORECONTROL_API PrincipalMatchOperator GetPrincipalMatchOperatorForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPrincipalMatchOperator(PrincipalMatchOperator value);
}  // namespace PrincipalMatchOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
