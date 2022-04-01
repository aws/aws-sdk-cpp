/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class APIName
  {
    NOT_SET,
    PUT_MEDIA,
    GET_MEDIA,
    LIST_FRAGMENTS,
    GET_MEDIA_FOR_FRAGMENT_LIST,
    GET_HLS_STREAMING_SESSION_URL,
    GET_DASH_STREAMING_SESSION_URL,
    GET_CLIP
  };

namespace APINameMapper
{
AWS_KINESISVIDEO_API APIName GetAPINameForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForAPIName(APIName value);
} // namespace APINameMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
