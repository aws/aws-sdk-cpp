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
  enum class M3u8DataPtsControl
  {
    NOT_SET,
    AUTO,
    ALIGN_TO_VIDEO
  };

namespace M3u8DataPtsControlMapper
{
AWS_MEDIACONVERT_API M3u8DataPtsControl GetM3u8DataPtsControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM3u8DataPtsControl(M3u8DataPtsControl value);
} // namespace M3u8DataPtsControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
