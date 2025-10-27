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
enum class InstalledComponentLifecycleState { NOT_SET, NEW_, INSTALLED, STARTING, RUNNING, STOPPING, ERRORED, BROKEN, FINISHED };

namespace InstalledComponentLifecycleStateMapper {
AWS_GREENGRASSV2_API InstalledComponentLifecycleState GetInstalledComponentLifecycleStateForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForInstalledComponentLifecycleState(InstalledComponentLifecycleState value);
}  // namespace InstalledComponentLifecycleStateMapper
}  // namespace Model
}  // namespace GreengrassV2
}  // namespace Aws
