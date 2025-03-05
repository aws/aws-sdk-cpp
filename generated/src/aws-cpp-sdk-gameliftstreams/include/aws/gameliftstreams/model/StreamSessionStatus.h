/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{
  enum class StreamSessionStatus
  {
    NOT_SET,
    ACTIVATING,
    ACTIVE,
    CONNECTED,
    PENDING_CLIENT_RECONNECTION,
    RECONNECTING,
    TERMINATING,
    TERMINATED,
    ERROR_
  };

namespace StreamSessionStatusMapper
{
AWS_GAMELIFTSTREAMS_API StreamSessionStatus GetStreamSessionStatusForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForStreamSessionStatus(StreamSessionStatus value);
} // namespace StreamSessionStatusMapper
} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
