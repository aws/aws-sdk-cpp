/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class AgentStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY,
    RUNNING,
    UNKNOWN,
    BLACKLISTED,
    SHUTDOWN
  };

namespace AgentStatusMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API AgentStatus GetAgentStatusForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForAgentStatus(AgentStatus value);
} // namespace AgentStatusMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
