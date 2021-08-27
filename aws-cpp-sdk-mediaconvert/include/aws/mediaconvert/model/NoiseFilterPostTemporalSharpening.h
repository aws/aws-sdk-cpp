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
  enum class NoiseFilterPostTemporalSharpening
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    AUTO
  };

namespace NoiseFilterPostTemporalSharpeningMapper
{
AWS_MEDIACONVERT_API NoiseFilterPostTemporalSharpening GetNoiseFilterPostTemporalSharpeningForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForNoiseFilterPostTemporalSharpening(NoiseFilterPostTemporalSharpening value);
} // namespace NoiseFilterPostTemporalSharpeningMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
