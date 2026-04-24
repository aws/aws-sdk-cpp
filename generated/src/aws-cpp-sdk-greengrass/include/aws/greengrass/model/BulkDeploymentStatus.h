/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/Greengrass_EXPORTS.h>

namespace Aws {
namespace Greengrass {
namespace Model {
enum class BulkDeploymentStatus { NOT_SET, Initializing, Running, Completed, Stopping, Stopped, Failed };

namespace BulkDeploymentStatusMapper {
AWS_GREENGRASS_API BulkDeploymentStatus GetBulkDeploymentStatusForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForBulkDeploymentStatus(BulkDeploymentStatus value);
}  // namespace BulkDeploymentStatusMapper
}  // namespace Model
}  // namespace Greengrass
}  // namespace Aws
