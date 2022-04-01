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
  enum class Xavc4kProfileQualityTuningLevel
  {
    NOT_SET,
    SINGLE_PASS,
    SINGLE_PASS_HQ,
    MULTI_PASS_HQ
  };

namespace Xavc4kProfileQualityTuningLevelMapper
{
AWS_MEDIACONVERT_API Xavc4kProfileQualityTuningLevel GetXavc4kProfileQualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavc4kProfileQualityTuningLevel(Xavc4kProfileQualityTuningLevel value);
} // namespace Xavc4kProfileQualityTuningLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
