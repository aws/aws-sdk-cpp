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
  enum class Mpeg2AdaptiveQuantization
  {
    NOT_SET,
    AUTO,
    HIGH,
    LOW,
    MEDIUM,
    OFF
  };

namespace Mpeg2AdaptiveQuantizationMapper
{
AWS_MEDIALIVE_API Mpeg2AdaptiveQuantization GetMpeg2AdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2AdaptiveQuantization(Mpeg2AdaptiveQuantization value);
} // namespace Mpeg2AdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
