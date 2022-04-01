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
  enum class LaunchType
  {
    NOT_SET,
    aws_evidently_splits
  };

namespace LaunchTypeMapper
{
AWS_CLOUDWATCHEVIDENTLY_API LaunchType GetLaunchTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForLaunchType(LaunchType value);
} // namespace LaunchTypeMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
