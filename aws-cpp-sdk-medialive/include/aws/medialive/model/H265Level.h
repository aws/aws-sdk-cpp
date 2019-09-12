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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class H265Level
  {
    NOT_SET,
    H265_LEVEL_1,
    H265_LEVEL_2,
    H265_LEVEL_2_1,
    H265_LEVEL_3,
    H265_LEVEL_3_1,
    H265_LEVEL_4,
    H265_LEVEL_4_1,
    H265_LEVEL_5,
    H265_LEVEL_5_1,
    H265_LEVEL_5_2,
    H265_LEVEL_6,
    H265_LEVEL_6_1,
    H265_LEVEL_6_2,
    H265_LEVEL_AUTO
  };

namespace H265LevelMapper
{
AWS_MEDIALIVE_API H265Level GetH265LevelForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265Level(H265Level value);
} // namespace H265LevelMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
