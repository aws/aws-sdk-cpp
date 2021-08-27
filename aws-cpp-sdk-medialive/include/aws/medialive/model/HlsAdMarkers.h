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
  enum class HlsAdMarkers
  {
    NOT_SET,
    ADOBE,
    ELEMENTAL,
    ELEMENTAL_SCTE35
  };

namespace HlsAdMarkersMapper
{
AWS_MEDIALIVE_API HlsAdMarkers GetHlsAdMarkersForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsAdMarkers(HlsAdMarkers value);
} // namespace HlsAdMarkersMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
