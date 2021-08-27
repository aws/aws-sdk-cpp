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
  enum class CapacityProviderStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace CapacityProviderStatusMapper
{
AWS_ECS_API CapacityProviderStatus GetCapacityProviderStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCapacityProviderStatus(CapacityProviderStatus value);
} // namespace CapacityProviderStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
