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
  enum class StartTimerFailedCause
  {
    NOT_SET,
    TIMER_ID_ALREADY_IN_USE,
    OPEN_TIMERS_LIMIT_EXCEEDED,
    TIMER_CREATION_RATE_EXCEEDED,
    OPERATION_NOT_PERMITTED
  };

namespace StartTimerFailedCauseMapper
{
AWS_SWF_API StartTimerFailedCause GetStartTimerFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForStartTimerFailedCause(StartTimerFailedCause value);
} // namespace StartTimerFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
