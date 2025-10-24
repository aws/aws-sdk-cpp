/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>

namespace Aws {
namespace MainframeModernization {
namespace Model {
enum class ApplicationDeploymentLifecycle { NOT_SET, Deploying, Deployed };

namespace ApplicationDeploymentLifecycleMapper {
AWS_MAINFRAMEMODERNIZATION_API ApplicationDeploymentLifecycle GetApplicationDeploymentLifecycleForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForApplicationDeploymentLifecycle(ApplicationDeploymentLifecycle value);
}  // namespace ApplicationDeploymentLifecycleMapper
}  // namespace Model
}  // namespace MainframeModernization
}  // namespace Aws
