/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{
  enum class DestinationState
  {
    NOT_SET,
    STARTING,
    ACTIVE,
    STOPPING,
    RECONNECTING,
    FAILED,
    STOPPED
  };

namespace DestinationStateMapper
{
AWS_IVSREALTIME_API DestinationState GetDestinationStateForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForDestinationState(DestinationState value);
} // namespace DestinationStateMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
