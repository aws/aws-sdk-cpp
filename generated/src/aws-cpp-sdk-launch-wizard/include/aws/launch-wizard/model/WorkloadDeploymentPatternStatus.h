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
  enum class WorkloadDeploymentPatternStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    DISABLED,
    DELETED
  };

namespace WorkloadDeploymentPatternStatusMapper
{
AWS_LAUNCHWIZARD_API WorkloadDeploymentPatternStatus GetWorkloadDeploymentPatternStatusForName(const Aws::String& name);

AWS_LAUNCHWIZARD_API Aws::String GetNameForWorkloadDeploymentPatternStatus(WorkloadDeploymentPatternStatus value);
} // namespace WorkloadDeploymentPatternStatusMapper
} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
