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
  enum class CodeInterpreterStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    READY,
    DELETING,
    DELETE_FAILED,
    DELETED
  };

namespace CodeInterpreterStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterStatus GetCodeInterpreterStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCodeInterpreterStatus(CodeInterpreterStatus value);
} // namespace CodeInterpreterStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
