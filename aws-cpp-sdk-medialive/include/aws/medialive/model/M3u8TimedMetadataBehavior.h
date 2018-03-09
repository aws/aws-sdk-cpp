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
  enum class M3u8TimedMetadataBehavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace M3u8TimedMetadataBehaviorMapper
{
AWS_MEDIALIVE_API M3u8TimedMetadataBehavior GetM3u8TimedMetadataBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM3u8TimedMetadataBehavior(M3u8TimedMetadataBehavior value);
} // namespace M3u8TimedMetadataBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
