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
  enum class AgentHealth
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY,
    UNKNOWN
  };

namespace AgentHealthMapper
{
AWS_INSPECTOR_API AgentHealth GetAgentHealthForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForAgentHealth(AgentHealth value);
} // namespace AgentHealthMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
