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
  enum class DesiredStatus
  {
    NOT_SET,
    RUNNING,
    PENDING,
    STOPPED
  };

namespace DesiredStatusMapper
{
AWS_ECS_API DesiredStatus GetDesiredStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDesiredStatus(DesiredStatus value);
} // namespace DesiredStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
