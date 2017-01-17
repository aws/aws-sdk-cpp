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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class HistoryEventType
  {
    NOT_SET,
    ActivityFailed,
    ActivityScheduleFailed,
    ActivityScheduled,
    ActivityStarted,
    ActivitySucceeded,
    ActivityTimedOut,
    ChoiceStateEntered,
    ChoiceStateExited,
    ExecutionFailed,
    ExecutionStarted,
    ExecutionSucceeded,
    ExecutionAborted,
    ExecutionTimedOut,
    FailStateEntered,
    LambdaFunctionFailed,
    LambdaFunctionScheduleFailed,
    LambdaFunctionScheduled,
    LambdaFunctionStartFailed,
    LambdaFunctionStarted,
    LambdaFunctionSucceeded,
    LambdaFunctionTimedOut,
    SucceedStateEntered,
    SucceedStateExited,
    TaskStateEntered,
    TaskStateExited,
    PassStateEntered,
    PassStateExited,
    ParallelStateEntered,
    ParallelStateExited,
    WaitStateEntered,
    WaitStateExited
  };

namespace HistoryEventTypeMapper
{
AWS_SFN_API HistoryEventType GetHistoryEventTypeForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForHistoryEventType(HistoryEventType value);
} // namespace HistoryEventTypeMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
