/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
namespace Model {
enum class AutoDeploymentMode { NOT_SET, LatestRevision, Disabled };

namespace AutoDeploymentModeMapper {
AWS_LAMBDAWEB_API AutoDeploymentMode GetAutoDeploymentModeForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForAutoDeploymentMode(AutoDeploymentMode value);
}  // namespace AutoDeploymentModeMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
