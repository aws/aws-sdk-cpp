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
  enum class ManagedTerminationProtection
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ManagedTerminationProtectionMapper
{
AWS_ECS_API ManagedTerminationProtection GetManagedTerminationProtectionForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForManagedTerminationProtection(ManagedTerminationProtection value);
} // namespace ManagedTerminationProtectionMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
