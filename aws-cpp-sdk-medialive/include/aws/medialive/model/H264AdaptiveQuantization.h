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
  enum class H264AdaptiveQuantization
  {
    NOT_SET,
    HIGH,
    HIGHER,
    LOW,
    MAX,
    MEDIUM,
    OFF
  };

namespace H264AdaptiveQuantizationMapper
{
AWS_MEDIALIVE_API H264AdaptiveQuantization GetH264AdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264AdaptiveQuantization(H264AdaptiveQuantization value);
} // namespace H264AdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
