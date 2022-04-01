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
  enum class WatermarkingStrength
  {
    NOT_SET,
    LIGHTEST,
    LIGHTER,
    DEFAULT,
    STRONGER,
    STRONGEST
  };

namespace WatermarkingStrengthMapper
{
AWS_MEDIACONVERT_API WatermarkingStrength GetWatermarkingStrengthForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForWatermarkingStrength(WatermarkingStrength value);
} // namespace WatermarkingStrengthMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
