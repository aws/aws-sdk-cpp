/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class StreamingSessionState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    READY,
    DELETED,
    CREATE_FAILED,
    DELETE_FAILED,
    STOP_IN_PROGRESS,
    START_IN_PROGRESS,
    STOPPED,
    STOP_FAILED,
    START_FAILED
  };

namespace StreamingSessionStateMapper
{
AWS_NIMBLESTUDIO_API StreamingSessionState GetStreamingSessionStateForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingSessionState(StreamingSessionState value);
} // namespace StreamingSessionStateMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
