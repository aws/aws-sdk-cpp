/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class AgentUpdateStatus
  {
    NOT_SET,
    PENDING,
    STAGING,
    STAGED,
    UPDATING,
    UPDATED,
    FAILED
  };

namespace AgentUpdateStatusMapper
{
AWS_ECS_API AgentUpdateStatus GetAgentUpdateStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForAgentUpdateStatus(AgentUpdateStatus value);
} // namespace AgentUpdateStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
