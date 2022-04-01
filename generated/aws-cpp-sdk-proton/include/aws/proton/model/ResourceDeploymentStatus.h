/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class ResourceDeploymentStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    SUCCEEDED
  };

namespace ResourceDeploymentStatusMapper
{
AWS_PROTON_API ResourceDeploymentStatus GetResourceDeploymentStatusForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForResourceDeploymentStatus(ResourceDeploymentStatus value);
} // namespace ResourceDeploymentStatusMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
