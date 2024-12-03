/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class OverallDeploymentStatus
  {
    NOT_SET,
    PENDING_DEPLOYMENT,
    IN_PROGRESS,
    SUCCESSFUL,
    FAILED_VALIDATION,
    FAILED_DEPLOYMENT
  };

namespace OverallDeploymentStatusMapper
{
AWS_DATAZONE_API OverallDeploymentStatus GetOverallDeploymentStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForOverallDeploymentStatus(OverallDeploymentStatus value);
} // namespace OverallDeploymentStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
