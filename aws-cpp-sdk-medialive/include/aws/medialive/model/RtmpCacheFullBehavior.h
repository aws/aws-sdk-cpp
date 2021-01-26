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
  enum class RtmpCacheFullBehavior
  {
    NOT_SET,
    DISCONNECT_IMMEDIATELY,
    WAIT_FOR_SERVER
  };

namespace RtmpCacheFullBehaviorMapper
{
AWS_MEDIALIVE_API RtmpCacheFullBehavior GetRtmpCacheFullBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForRtmpCacheFullBehavior(RtmpCacheFullBehavior value);
} // namespace RtmpCacheFullBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
