/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{
  enum class StreamStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED
  };

namespace StreamStatusMapper
{
AWS_KEYSPACESSTREAMS_API StreamStatus GetStreamStatusForName(const Aws::String& name);

AWS_KEYSPACESSTREAMS_API Aws::String GetNameForStreamStatus(StreamStatus value);
} // namespace StreamStatusMapper
} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
