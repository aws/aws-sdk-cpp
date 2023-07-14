/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class AgentStatusState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AgentStatusStateMapper
{
AWS_CONNECT_API AgentStatusState GetAgentStatusStateForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAgentStatusState(AgentStatusState value);
} // namespace AgentStatusStateMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
