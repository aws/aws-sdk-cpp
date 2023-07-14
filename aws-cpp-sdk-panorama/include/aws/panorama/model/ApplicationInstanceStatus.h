/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class ApplicationInstanceStatus
  {
    NOT_SET,
    DEPLOYMENT_PENDING,
    DEPLOYMENT_REQUESTED,
    DEPLOYMENT_IN_PROGRESS,
    DEPLOYMENT_ERROR,
    DEPLOYMENT_SUCCEEDED,
    REMOVAL_PENDING,
    REMOVAL_REQUESTED,
    REMOVAL_IN_PROGRESS,
    REMOVAL_FAILED,
    REMOVAL_SUCCEEDED,
    DEPLOYMENT_FAILED
  };

namespace ApplicationInstanceStatusMapper
{
AWS_PANORAMA_API ApplicationInstanceStatus GetApplicationInstanceStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForApplicationInstanceStatus(ApplicationInstanceStatus value);
} // namespace ApplicationInstanceStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
