/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{
  enum class TargetStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    UPDATE_UNSUCCESSFUL,
    DELETING,
    READY,
    FAILED
  };

namespace TargetStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API TargetStatus GetTargetStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForTargetStatus(TargetStatus value);
} // namespace TargetStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
