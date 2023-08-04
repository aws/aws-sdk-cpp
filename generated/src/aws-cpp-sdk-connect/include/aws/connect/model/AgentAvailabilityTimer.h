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
  enum class AgentAvailabilityTimer
  {
    NOT_SET,
    TIME_SINCE_LAST_ACTIVITY,
    TIME_SINCE_LAST_INBOUND
  };

namespace AgentAvailabilityTimerMapper
{
AWS_CONNECT_API AgentAvailabilityTimer GetAgentAvailabilityTimerForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAgentAvailabilityTimer(AgentAvailabilityTimer value);
} // namespace AgentAvailabilityTimerMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
