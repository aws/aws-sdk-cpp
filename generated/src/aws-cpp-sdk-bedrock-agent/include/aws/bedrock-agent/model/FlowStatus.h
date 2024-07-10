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
  enum class FlowStatus
  {
    NOT_SET,
    Failed,
    Prepared,
    Preparing,
    NotPrepared
  };

namespace FlowStatusMapper
{
AWS_BEDROCKAGENT_API FlowStatus GetFlowStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForFlowStatus(FlowStatus value);
} // namespace FlowStatusMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
