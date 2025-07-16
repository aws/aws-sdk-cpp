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
  enum class ExceptionLevel
  {
    NOT_SET,
    DEBUG_
  };

namespace ExceptionLevelMapper
{
AWS_BEDROCKAGENTCORECONTROL_API ExceptionLevel GetExceptionLevelForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForExceptionLevel(ExceptionLevel value);
} // namespace ExceptionLevelMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
