/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

namespace Aws {
namespace GreengrassV2 {
namespace Model {
enum class DeploymentHistoryFilter { NOT_SET, ALL, LATEST_ONLY };

namespace DeploymentHistoryFilterMapper {
AWS_GREENGRASSV2_API DeploymentHistoryFilter GetDeploymentHistoryFilterForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForDeploymentHistoryFilter(DeploymentHistoryFilter value);
}  // namespace DeploymentHistoryFilterMapper
}  // namespace Model
}  // namespace GreengrassV2
}  // namespace Aws
