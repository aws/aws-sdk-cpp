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
  enum class M3u8Scte35Behavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace M3u8Scte35BehaviorMapper
{
AWS_MEDIALIVE_API M3u8Scte35Behavior GetM3u8Scte35BehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM3u8Scte35Behavior(M3u8Scte35Behavior value);
} // namespace M3u8Scte35BehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
