/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class VoiceConnectorAwsRegion
  {
    NOT_SET,
    us_east_1,
    us_west_2
  };

namespace VoiceConnectorAwsRegionMapper
{
AWS_CHIME_API VoiceConnectorAwsRegion GetVoiceConnectorAwsRegionForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForVoiceConnectorAwsRegion(VoiceConnectorAwsRegion value);
} // namespace VoiceConnectorAwsRegionMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
