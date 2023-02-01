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
  enum class VoiceConnectorAwsRegion
  {
    NOT_SET,
    us_east_1,
    us_west_2,
    ca_central_1,
    eu_central_1,
    eu_west_1,
    eu_west_2,
    ap_northeast_2,
    ap_northeast_1,
    ap_southeast_1,
    ap_southeast_2
  };

namespace VoiceConnectorAwsRegionMapper
{
AWS_CHIMESDKVOICE_API VoiceConnectorAwsRegion GetVoiceConnectorAwsRegionForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForVoiceConnectorAwsRegion(VoiceConnectorAwsRegion value);
} // namespace VoiceConnectorAwsRegionMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
