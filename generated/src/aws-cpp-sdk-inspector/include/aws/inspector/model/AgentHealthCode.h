/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class AgentHealthCode
  {
    NOT_SET,
    IDLE,
    RUNNING,
    SHUTDOWN,
    UNHEALTHY,
    THROTTLED,
    UNKNOWN
  };

namespace AgentHealthCodeMapper
{
AWS_INSPECTOR_API AgentHealthCode GetAgentHealthCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForAgentHealthCode(AgentHealthCode value);
} // namespace AgentHealthCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
