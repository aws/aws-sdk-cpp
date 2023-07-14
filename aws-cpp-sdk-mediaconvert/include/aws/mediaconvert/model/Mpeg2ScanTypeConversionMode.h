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
  enum class Mpeg2ScanTypeConversionMode
  {
    NOT_SET,
    INTERLACED,
    INTERLACED_OPTIMIZE
  };

namespace Mpeg2ScanTypeConversionModeMapper
{
AWS_MEDIACONVERT_API Mpeg2ScanTypeConversionMode GetMpeg2ScanTypeConversionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2ScanTypeConversionMode(Mpeg2ScanTypeConversionMode value);
} // namespace Mpeg2ScanTypeConversionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
