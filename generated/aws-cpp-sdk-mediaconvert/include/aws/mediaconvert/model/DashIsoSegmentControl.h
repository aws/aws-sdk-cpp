/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DashIsoSegmentControl
  {
    NOT_SET,
    SINGLE_FILE,
    SEGMENTED_FILES
  };

namespace DashIsoSegmentControlMapper
{
AWS_MEDIACONVERT_API DashIsoSegmentControl GetDashIsoSegmentControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoSegmentControl(DashIsoSegmentControl value);
} // namespace DashIsoSegmentControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
