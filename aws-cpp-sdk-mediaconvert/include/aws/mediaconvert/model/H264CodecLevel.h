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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class H264CodecLevel
  {
    NOT_SET,
    AUTO,
    LEVEL_1,
    LEVEL_1_1,
    LEVEL_1_2,
    LEVEL_1_3,
    LEVEL_2,
    LEVEL_2_1,
    LEVEL_2_2,
    LEVEL_3,
    LEVEL_3_1,
    LEVEL_3_2,
    LEVEL_4,
    LEVEL_4_1,
    LEVEL_4_2,
    LEVEL_5,
    LEVEL_5_1,
    LEVEL_5_2
  };

namespace H264CodecLevelMapper
{
AWS_MEDIACONVERT_API H264CodecLevel GetH264CodecLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264CodecLevel(H264CodecLevel value);
} // namespace H264CodecLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
