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
  enum class BrowserStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    READY,
    DELETING,
    DELETE_FAILED,
    DELETED
  };

namespace BrowserStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API BrowserStatus GetBrowserStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForBrowserStatus(BrowserStatus value);
} // namespace BrowserStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
