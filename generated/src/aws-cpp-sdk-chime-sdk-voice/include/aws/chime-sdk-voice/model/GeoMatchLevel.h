/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{
  enum class GeoMatchLevel
  {
    NOT_SET,
    Country,
    AreaCode
  };

namespace GeoMatchLevelMapper
{
AWS_CHIMESDKVOICE_API GeoMatchLevel GetGeoMatchLevelForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForGeoMatchLevel(GeoMatchLevel value);
} // namespace GeoMatchLevelMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
