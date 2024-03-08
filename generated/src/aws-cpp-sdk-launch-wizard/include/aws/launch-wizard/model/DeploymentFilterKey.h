/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{
  enum class DeploymentFilterKey
  {
    NOT_SET,
    WORKLOAD_NAME,
    DEPLOYMENT_STATUS
  };

namespace DeploymentFilterKeyMapper
{
AWS_LAUNCHWIZARD_API DeploymentFilterKey GetDeploymentFilterKeyForName(const Aws::String& name);

AWS_LAUNCHWIZARD_API Aws::String GetNameForDeploymentFilterKey(DeploymentFilterKey value);
} // namespace DeploymentFilterKeyMapper
} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
