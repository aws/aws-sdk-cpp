/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>

namespace Aws {
namespace IoTThingsGraph {
namespace Model {
enum class DeploymentTarget { NOT_SET, GREENGRASS, CLOUD };

namespace DeploymentTargetMapper {
AWS_IOTTHINGSGRAPH_API DeploymentTarget GetDeploymentTargetForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForDeploymentTarget(DeploymentTarget value);
}  // namespace DeploymentTargetMapper
}  // namespace Model
}  // namespace IoTThingsGraph
}  // namespace Aws
