/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class RtmpCaptionData
  {
    NOT_SET,
    ALL,
    FIELD1_608,
    FIELD1_AND_FIELD2_608
  };

namespace RtmpCaptionDataMapper
{
AWS_MEDIALIVE_API RtmpCaptionData GetRtmpCaptionDataForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForRtmpCaptionData(RtmpCaptionData value);
} // namespace RtmpCaptionDataMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
