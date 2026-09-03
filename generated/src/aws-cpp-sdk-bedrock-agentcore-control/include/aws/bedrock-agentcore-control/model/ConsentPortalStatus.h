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
enum class ConsentPortalStatus { NOT_SET, CREATING, ACTIVE, UPDATING, UPDATE_FAILED, DELETING, FAILED };

namespace ConsentPortalStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API ConsentPortalStatus GetConsentPortalStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForConsentPortalStatus(ConsentPortalStatus value);
}  // namespace ConsentPortalStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
