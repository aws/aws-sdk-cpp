﻿/**
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
  enum class HlsImageBasedTrickPlay
  {
    NOT_SET,
    NONE,
    THUMBNAIL,
    THUMBNAIL_AND_FULLFRAME,
    ADVANCED
  };

namespace HlsImageBasedTrickPlayMapper
{
AWS_MEDIACONVERT_API HlsImageBasedTrickPlay GetHlsImageBasedTrickPlayForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsImageBasedTrickPlay(HlsImageBasedTrickPlay value);
} // namespace HlsImageBasedTrickPlayMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
