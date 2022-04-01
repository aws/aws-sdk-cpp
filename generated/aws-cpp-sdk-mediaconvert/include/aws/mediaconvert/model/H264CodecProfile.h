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
  enum class H264CodecProfile
  {
    NOT_SET,
    BASELINE,
    HIGH,
    HIGH_10BIT,
    HIGH_422,
    HIGH_422_10BIT,
    MAIN
  };

namespace H264CodecProfileMapper
{
AWS_MEDIACONVERT_API H264CodecProfile GetH264CodecProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264CodecProfile(H264CodecProfile value);
} // namespace H264CodecProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
