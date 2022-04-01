/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class DeploymentState
  {
    NOT_SET,
    BAKING,
    VALIDATING,
    DEPLOYING,
    COMPLETE,
    ROLLING_BACK,
    ROLLED_BACK
  };

namespace DeploymentStateMapper
{
AWS_APPCONFIG_API DeploymentState GetDeploymentStateForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForDeploymentState(DeploymentState value);
} // namespace DeploymentStateMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
