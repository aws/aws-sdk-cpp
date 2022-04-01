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
  enum class Av1SpatialAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Av1SpatialAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API Av1SpatialAdaptiveQuantization GetAv1SpatialAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1SpatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization value);
} // namespace Av1SpatialAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
