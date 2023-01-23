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
  enum class StabilityStatus
  {
    NOT_SET,
    STEADY_STATE,
    STABILIZING
  };

namespace StabilityStatusMapper
{
AWS_ECS_API StabilityStatus GetStabilityStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForStabilityStatus(StabilityStatus value);
} // namespace StabilityStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
