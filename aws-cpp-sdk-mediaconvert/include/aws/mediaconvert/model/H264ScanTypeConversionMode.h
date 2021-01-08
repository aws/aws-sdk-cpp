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
  enum class H264ScanTypeConversionMode
  {
    NOT_SET,
    INTERLACED,
    INTERLACED_OPTIMIZE
  };

namespace H264ScanTypeConversionModeMapper
{
AWS_MEDIACONVERT_API H264ScanTypeConversionMode GetH264ScanTypeConversionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264ScanTypeConversionMode(H264ScanTypeConversionMode value);
} // namespace H264ScanTypeConversionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
