/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{
  enum class ModelHostingStatus
  {
    NOT_SET,
    STARTING_HOSTING,
    HOSTED,
    HOSTING_FAILED,
    STOPPING_HOSTING,
    SYSTEM_UPDATING
  };

namespace ModelHostingStatusMapper
{
AWS_LOOKOUTFORVISION_API ModelHostingStatus GetModelHostingStatusForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForModelHostingStatus(ModelHostingStatus value);
} // namespace ModelHostingStatusMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
