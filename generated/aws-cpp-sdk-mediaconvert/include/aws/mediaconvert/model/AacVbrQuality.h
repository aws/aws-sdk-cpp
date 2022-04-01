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
  enum class AacVbrQuality
  {
    NOT_SET,
    LOW,
    MEDIUM_LOW,
    MEDIUM_HIGH,
    HIGH
  };

namespace AacVbrQualityMapper
{
AWS_MEDIACONVERT_API AacVbrQuality GetAacVbrQualityForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAacVbrQuality(AacVbrQuality value);
} // namespace AacVbrQualityMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
