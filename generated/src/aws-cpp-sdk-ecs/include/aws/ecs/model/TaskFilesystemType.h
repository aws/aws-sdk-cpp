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
  enum class TaskFilesystemType
  {
    NOT_SET,
    ext3,
    ext4,
    xfs
  };

namespace TaskFilesystemTypeMapper
{
AWS_ECS_API TaskFilesystemType GetTaskFilesystemTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskFilesystemType(TaskFilesystemType value);
} // namespace TaskFilesystemTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
