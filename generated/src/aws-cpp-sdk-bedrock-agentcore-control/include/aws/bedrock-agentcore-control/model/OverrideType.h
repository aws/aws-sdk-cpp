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
  enum class OverrideType
  {
    NOT_SET,
    SEMANTIC_OVERRIDE,
    SUMMARY_OVERRIDE,
    USER_PREFERENCE_OVERRIDE
  };

namespace OverrideTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API OverrideType GetOverrideTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForOverrideType(OverrideType value);
} // namespace OverrideTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
