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
  enum class ColorSpace
  {
    NOT_SET,
    FOLLOW,
    REC_601,
    REC_709,
    HDR10,
    HLG_2020,
    P3DCI,
    P3D65_SDR
  };

namespace ColorSpaceMapper
{
AWS_MEDIACONVERT_API ColorSpace GetColorSpaceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForColorSpace(ColorSpace value);
} // namespace ColorSpaceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
