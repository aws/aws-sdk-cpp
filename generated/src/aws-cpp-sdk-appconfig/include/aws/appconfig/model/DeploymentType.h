/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppConfig {
namespace Model {
enum class DeploymentType { NOT_SET, USER, MANAGED };

namespace DeploymentTypeMapper {
AWS_APPCONFIG_API DeploymentType GetDeploymentTypeForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForDeploymentType(DeploymentType value);
}  // namespace DeploymentTypeMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
