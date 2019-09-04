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
    ActivityScheduled,
    ActivityScheduleFailed,
    ActivityStarted,
    ActivitySucceeded,
    ActivityTimedOut,
    ChoiceStateEntered,
    ChoiceStateExited,
    ExecutionAborted,
    ExecutionFailed,
    ExecutionStarted,
    ExecutionSucceeded,
    ExecutionTimedOut,
    FailStateEntered,
    LambdaFunctionFailed,
    LambdaFunctionScheduled,
    LambdaFunctionScheduleFailed,
    LambdaFunctionStarted,
    LambdaFunctionStartFailed,
    LambdaFunctionSucceeded,
    LambdaFunctionTimedOut,
    MapIterationAborted,
    MapIterationFailed,
    MapIterationStarted,
    MapIterationSucceeded,
    MapStateAborted,
    MapStateEntered,
    MapStateExited,
    MapStateFailed,
    MapStateStarted,
    MapStateSucceeded,
    ParallelStateAborted,
    ParallelStateEntered,
    ParallelStateExited,
    ParallelStateFailed,
    ParallelStateStarted,
    ParallelStateSucceeded,
    PassStateEntered,
    PassStateExited,
    SucceedStateEntered,
    SucceedStateExited,
    TaskFailed,
    TaskScheduled,
    TaskStarted,
    TaskStartFailed,
    TaskStateAborted,
    TaskStateEntered,
    TaskStateExited,
    TaskSubmitFailed,
    TaskSubmitted,
    TaskSucceeded,
    TaskTimedOut,
    WaitStateAborted,
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
