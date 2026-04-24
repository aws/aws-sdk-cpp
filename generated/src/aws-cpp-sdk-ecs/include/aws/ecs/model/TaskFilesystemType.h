/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class TaskFilesystemType { NOT_SET, ext3, ext4, xfs, ntfs };

namespace TaskFilesystemTypeMapper {
AWS_ECS_API TaskFilesystemType GetTaskFilesystemTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskFilesystemType(TaskFilesystemType value);
}  // namespace TaskFilesystemTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
