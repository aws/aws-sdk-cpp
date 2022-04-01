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
  enum class StreamingImageState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    READY,
    DELETE_IN_PROGRESS,
    DELETED,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace StreamingImageStateMapper
{
AWS_NIMBLESTUDIO_API StreamingImageState GetStreamingImageStateForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingImageState(StreamingImageState value);
} // namespace StreamingImageStateMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
