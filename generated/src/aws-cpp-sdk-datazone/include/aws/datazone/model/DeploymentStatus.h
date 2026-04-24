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
enum class DeploymentStatus { NOT_SET, IN_PROGRESS, SUCCESSFUL, FAILED, PENDING_DEPLOYMENT };

namespace DeploymentStatusMapper {
AWS_DATAZONE_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
}  // namespace DeploymentStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
