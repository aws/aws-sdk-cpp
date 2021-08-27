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
  enum class InputMaximumBitrate
  {
    NOT_SET,
    MAX_10_MBPS,
    MAX_20_MBPS,
    MAX_50_MBPS
  };

namespace InputMaximumBitrateMapper
{
AWS_MEDIALIVE_API InputMaximumBitrate GetInputMaximumBitrateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputMaximumBitrate(InputMaximumBitrate value);
} // namespace InputMaximumBitrateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
