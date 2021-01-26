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
  enum class M2tsAudioInterval
  {
    NOT_SET,
    VIDEO_AND_FIXED_INTERVALS,
    VIDEO_INTERVAL
  };

namespace M2tsAudioIntervalMapper
{
AWS_MEDIALIVE_API M2tsAudioInterval GetM2tsAudioIntervalForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsAudioInterval(M2tsAudioInterval value);
} // namespace M2tsAudioIntervalMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
