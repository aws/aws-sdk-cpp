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
  enum class StreamingSessionStatusCode
  {
    NOT_SET,
    STREAMING_SESSION_READY,
    STREAMING_SESSION_DELETED,
    STREAMING_SESSION_CREATE_IN_PROGRESS,
    STREAMING_SESSION_DELETE_IN_PROGRESS,
    INTERNAL_ERROR,
    INSUFFICIENT_CAPACITY,
    ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR,
    NETWORK_CONNECTION_ERROR,
    INITIALIZATION_SCRIPT_ERROR,
    DECRYPT_STREAMING_IMAGE_ERROR,
    NETWORK_INTERFACE_ERROR,
    STREAMING_SESSION_STOPPED,
    STREAMING_SESSION_STARTED,
    STREAMING_SESSION_STOP_IN_PROGRESS,
    STREAMING_SESSION_START_IN_PROGRESS,
    AMI_VALIDATION_ERROR
  };

namespace StreamingSessionStatusCodeMapper
{
AWS_NIMBLESTUDIO_API StreamingSessionStatusCode GetStreamingSessionStatusCodeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingSessionStatusCode(StreamingSessionStatusCode value);
} // namespace StreamingSessionStatusCodeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
