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
  enum class ManagedAgentName
  {
    NOT_SET,
    ExecuteCommandAgent
  };

namespace ManagedAgentNameMapper
{
AWS_ECS_API ManagedAgentName GetManagedAgentNameForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForManagedAgentName(ManagedAgentName value);
} // namespace ManagedAgentNameMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
