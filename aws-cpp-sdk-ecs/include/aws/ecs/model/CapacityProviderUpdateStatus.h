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
  enum class CapacityProviderUpdateStatus
  {
    NOT_SET,
    DELETE_IN_PROGRESS,
    DELETE_COMPLETE,
    DELETE_FAILED,
    UPDATE_IN_PROGRESS,
    UPDATE_COMPLETE,
    UPDATE_FAILED
  };

namespace CapacityProviderUpdateStatusMapper
{
AWS_ECS_API CapacityProviderUpdateStatus GetCapacityProviderUpdateStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCapacityProviderUpdateStatus(CapacityProviderUpdateStatus value);
} // namespace CapacityProviderUpdateStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
