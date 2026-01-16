/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>

namespace Aws {
namespace LaunchWizard {
namespace Model {
enum class DeploymentPatternVersionFilterKey { NOT_SET, updateFromVersion };

namespace DeploymentPatternVersionFilterKeyMapper {
AWS_LAUNCHWIZARD_API DeploymentPatternVersionFilterKey GetDeploymentPatternVersionFilterKeyForName(const Aws::String& name);

AWS_LAUNCHWIZARD_API Aws::String GetNameForDeploymentPatternVersionFilterKey(DeploymentPatternVersionFilterKey value);
}  // namespace DeploymentPatternVersionFilterKeyMapper
}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
