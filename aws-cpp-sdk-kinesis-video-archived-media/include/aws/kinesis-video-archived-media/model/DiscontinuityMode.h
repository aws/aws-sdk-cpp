﻿/*
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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{
  enum class DiscontinuityMode
  {
    NOT_SET,
    ALWAYS,
    NEVER
  };

namespace DiscontinuityModeMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API DiscontinuityMode GetDiscontinuityModeForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForDiscontinuityMode(DiscontinuityMode value);
} // namespace DiscontinuityModeMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
