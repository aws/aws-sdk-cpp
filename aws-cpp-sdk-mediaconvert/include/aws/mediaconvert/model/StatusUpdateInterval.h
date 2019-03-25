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
  enum class StatusUpdateInterval
  {
    NOT_SET,
    SECONDS_10,
    SECONDS_12,
    SECONDS_15,
    SECONDS_20,
    SECONDS_30,
    SECONDS_60,
    SECONDS_120,
    SECONDS_180,
    SECONDS_240,
    SECONDS_300,
    SECONDS_360,
    SECONDS_420,
    SECONDS_480,
    SECONDS_540,
    SECONDS_600
  };

namespace StatusUpdateIntervalMapper
{
AWS_MEDIACONVERT_API StatusUpdateInterval GetStatusUpdateIntervalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForStatusUpdateInterval(StatusUpdateInterval value);
} // namespace StatusUpdateIntervalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
