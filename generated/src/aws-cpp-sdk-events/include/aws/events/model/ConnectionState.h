/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{
  enum class ConnectionState
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    AUTHORIZED,
    DEAUTHORIZED,
    AUTHORIZING,
    DEAUTHORIZING
  };

namespace ConnectionStateMapper
{
AWS_CLOUDWATCHEVENTS_API ConnectionState GetConnectionStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForConnectionState(ConnectionState value);
} // namespace ConnectionStateMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
