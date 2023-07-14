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
  enum class M2tsEbpPlacement
  {
    NOT_SET,
    VIDEO_AND_AUDIO_PIDS,
    VIDEO_PID
  };

namespace M2tsEbpPlacementMapper
{
AWS_MEDIALIVE_API M2tsEbpPlacement GetM2tsEbpPlacementForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsEbpPlacement(M2tsEbpPlacement value);
} // namespace M2tsEbpPlacementMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
