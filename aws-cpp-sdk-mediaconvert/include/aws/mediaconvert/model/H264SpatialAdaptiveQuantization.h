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
  enum class H264SpatialAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264SpatialAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API H264SpatialAdaptiveQuantization GetH264SpatialAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264SpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization value);
} // namespace H264SpatialAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
