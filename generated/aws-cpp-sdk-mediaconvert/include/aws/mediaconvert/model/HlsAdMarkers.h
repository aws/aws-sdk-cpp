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
  enum class HlsAdMarkers
  {
    NOT_SET,
    ELEMENTAL,
    ELEMENTAL_SCTE35
  };

namespace HlsAdMarkersMapper
{
AWS_MEDIACONVERT_API HlsAdMarkers GetHlsAdMarkersForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsAdMarkers(HlsAdMarkers value);
} // namespace HlsAdMarkersMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
