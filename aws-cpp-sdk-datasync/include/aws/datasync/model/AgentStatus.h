/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class AgentStatus
  {
    NOT_SET,
    ONLINE,
    OFFLINE
  };

namespace AgentStatusMapper
{
AWS_DATASYNC_API AgentStatus GetAgentStatusForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForAgentStatus(AgentStatus value);
} // namespace AgentStatusMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
