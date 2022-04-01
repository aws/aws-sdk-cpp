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
  enum class M3u8TimedMetadataBehavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace M3u8TimedMetadataBehaviorMapper
{
AWS_MEDIALIVE_API M3u8TimedMetadataBehavior GetM3u8TimedMetadataBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM3u8TimedMetadataBehavior(M3u8TimedMetadataBehavior value);
} // namespace M3u8TimedMetadataBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
