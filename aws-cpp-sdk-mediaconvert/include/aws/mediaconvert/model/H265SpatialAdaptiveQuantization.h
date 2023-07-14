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
  enum class H265SpatialAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265SpatialAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API H265SpatialAdaptiveQuantization GetH265SpatialAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265SpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization value);
} // namespace H265SpatialAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
