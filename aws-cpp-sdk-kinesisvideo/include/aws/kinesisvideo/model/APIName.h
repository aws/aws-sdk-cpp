/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    GET_DASH_STREAMING_SESSION_URL
  };

namespace APINameMapper
{
AWS_KINESISVIDEO_API APIName GetAPINameForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForAPIName(APIName value);
} // namespace APINameMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
