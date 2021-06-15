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
  enum class StreamingSessionStreamState
  {
    NOT_SET,
    READY,
    CREATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    DELETED,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace StreamingSessionStreamStateMapper
{
AWS_NIMBLESTUDIO_API StreamingSessionStreamState GetStreamingSessionStreamStateForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingSessionStreamState(StreamingSessionStreamState value);
} // namespace StreamingSessionStreamStateMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
