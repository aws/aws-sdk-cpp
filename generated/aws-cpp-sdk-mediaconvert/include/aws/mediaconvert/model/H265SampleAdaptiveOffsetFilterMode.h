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
  enum class H265SampleAdaptiveOffsetFilterMode
  {
    NOT_SET,
    DEFAULT,
    ADAPTIVE,
    OFF
  };

namespace H265SampleAdaptiveOffsetFilterModeMapper
{
AWS_MEDIACONVERT_API H265SampleAdaptiveOffsetFilterMode GetH265SampleAdaptiveOffsetFilterModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265SampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode value);
} // namespace H265SampleAdaptiveOffsetFilterModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
