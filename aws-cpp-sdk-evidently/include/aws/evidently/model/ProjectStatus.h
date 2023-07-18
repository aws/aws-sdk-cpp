/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{
  enum class ProjectStatus
  {
    NOT_SET,
    AVAILABLE,
    UPDATING
  };

namespace ProjectStatusMapper
{
AWS_CLOUDWATCHEVIDENTLY_API ProjectStatus GetProjectStatusForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForProjectStatus(ProjectStatus value);
} // namespace ProjectStatusMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
