/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class TaskFilterName { NOT_SET, LocationId, CreationTime };

namespace TaskFilterNameMapper {
AWS_DATASYNC_API TaskFilterName GetTaskFilterNameForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForTaskFilterName(TaskFilterName value);
}  // namespace TaskFilterNameMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
