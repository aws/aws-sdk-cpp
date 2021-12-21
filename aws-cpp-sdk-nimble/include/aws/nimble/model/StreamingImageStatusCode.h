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
  enum class StreamingImageStatusCode
  {
    NOT_SET,
    STREAMING_IMAGE_CREATE_IN_PROGRESS,
    STREAMING_IMAGE_READY,
    STREAMING_IMAGE_DELETE_IN_PROGRESS,
    STREAMING_IMAGE_DELETED,
    STREAMING_IMAGE_UPDATE_IN_PROGRESS,
    INTERNAL_ERROR,
    ACCESS_DENIED
  };

namespace StreamingImageStatusCodeMapper
{
AWS_NIMBLESTUDIO_API StreamingImageStatusCode GetStreamingImageStatusCodeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingImageStatusCode(StreamingImageStatusCode value);
} // namespace StreamingImageStatusCodeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
