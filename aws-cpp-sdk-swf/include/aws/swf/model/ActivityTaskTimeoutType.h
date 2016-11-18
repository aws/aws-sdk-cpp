﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class ActivityTaskTimeoutType
  {
    NOT_SET,
    START_TO_CLOSE,
    SCHEDULE_TO_START,
    SCHEDULE_TO_CLOSE,
    HEARTBEAT
  };

namespace ActivityTaskTimeoutTypeMapper
{
AWS_SWF_API ActivityTaskTimeoutType GetActivityTaskTimeoutTypeForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForActivityTaskTimeoutType(ActivityTaskTimeoutType value);
} // namespace ActivityTaskTimeoutTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
