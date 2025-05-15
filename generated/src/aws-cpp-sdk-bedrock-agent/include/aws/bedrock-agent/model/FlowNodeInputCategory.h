/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class FlowNodeInputCategory
  {
    NOT_SET,
    LoopCondition,
    ReturnValueToLoopStart,
    ExitLoop
  };

namespace FlowNodeInputCategoryMapper
{
AWS_BEDROCKAGENT_API FlowNodeInputCategory GetFlowNodeInputCategoryForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForFlowNodeInputCategory(FlowNodeInputCategory value);
} // namespace FlowNodeInputCategoryMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
