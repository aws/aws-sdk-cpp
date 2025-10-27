/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class TaskStatus { NOT_SET, ACTIVE, INACTIVE };

namespace TaskStatusMapper {
AWS_DATAZONE_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForTaskStatus(TaskStatus value);
}  // namespace TaskStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
