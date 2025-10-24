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
enum class ProjectStatus { NOT_SET, ACTIVE, DELETING, DELETE_FAILED, UPDATING, UPDATE_FAILED, MOVING };

namespace ProjectStatusMapper {
AWS_DATAZONE_API ProjectStatus GetProjectStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForProjectStatus(ProjectStatus value);
}  // namespace ProjectStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
