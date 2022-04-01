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
  enum class FeatureStatus
  {
    NOT_SET,
    AVAILABLE,
    UPDATING
  };

namespace FeatureStatusMapper
{
AWS_CLOUDWATCHEVIDENTLY_API FeatureStatus GetFeatureStatusForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForFeatureStatus(FeatureStatus value);
} // namespace FeatureStatusMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
