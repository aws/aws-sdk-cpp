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
  enum class Mpeg2CodecProfile
  {
    NOT_SET,
    MAIN,
    PROFILE_422
  };

namespace Mpeg2CodecProfileMapper
{
AWS_MEDIACONVERT_API Mpeg2CodecProfile GetMpeg2CodecProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2CodecProfile(Mpeg2CodecProfile value);
} // namespace Mpeg2CodecProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
