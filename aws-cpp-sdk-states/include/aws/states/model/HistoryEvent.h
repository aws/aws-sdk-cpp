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
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/HistoryEventType.h>
#include <aws/states/model/ActivityFailedEventDetails.h>
#include <aws/states/model/ActivityScheduleFailedEventDetails.h>
#include <aws/states/model/ActivityScheduledEventDetails.h>
#include <aws/states/model/ActivityStartedEventDetails.h>
#include <aws/states/model/ActivitySucceededEventDetails.h>
#include <aws/states/model/ActivityTimedOutEventDetails.h>
#include <aws/states/model/ExecutionFailedEventDetails.h>
#include <aws/states/model/ExecutionStartedEventDetails.h>
#include <aws/states/model/ExecutionSucceededEventDetails.h>
#include <aws/states/model/ExecutionAbortedEventDetails.h>
#include <aws/states/model/ExecutionTimedOutEventDetails.h>
#include <aws/states/model/LambdaFunctionFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionScheduleFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionScheduledEventDetails.h>
#include <aws/states/model/LambdaFunctionStartFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionSucceededEventDetails.h>
#include <aws/states/model/LambdaFunctionTimedOutEventDetails.h>
#include <aws/states/model/StateEnteredEventDetails.h>
#include <aws/states/model/StateExitedEventDetails.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{

  class AWS_SFN_API HistoryEvent
  {
  public:
    HistoryEvent();
    HistoryEvent(const Aws::Utils::Json::JsonValue& jsonValue);
    HistoryEvent& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The date the event occured.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The date the event occured.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The date the event occured.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The date the event occured.</p>
     */
    inline HistoryEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The date the event occured.</p>
     */
    inline HistoryEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The type of the event.</p>
     */
    inline const HistoryEventType& GetType() const{ return m_type; }

    /**
     * <p>The type of the event.</p>
     */
    inline void SetType(const HistoryEventType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the event.</p>
     */
    inline void SetType(HistoryEventType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the event.</p>
     */
    inline HistoryEvent& WithType(const HistoryEventType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the event.</p>
     */
    inline HistoryEvent& WithType(HistoryEventType&& value) { SetType(value); return *this;}

    /**
     * <p>The id of the event. Events are numbered sequentially, starting at one.</p>
     */
    inline long long GetId() const{ return m_id; }

    /**
     * <p>The id of the event. Events are numbered sequentially, starting at one.</p>
     */
    inline void SetId(long long value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The id of the event. Events are numbered sequentially, starting at one.</p>
     */
    inline HistoryEvent& WithId(long long value) { SetId(value); return *this;}

    /**
     * <p>The id of the previous event.</p>
     */
    inline long long GetPreviousEventId() const{ return m_previousEventId; }

    /**
     * <p>The id of the previous event.</p>
     */
    inline void SetPreviousEventId(long long value) { m_previousEventIdHasBeenSet = true; m_previousEventId = value; }

    /**
     * <p>The id of the previous event.</p>
     */
    inline HistoryEvent& WithPreviousEventId(long long value) { SetPreviousEventId(value); return *this;}

    
    inline const ActivityFailedEventDetails& GetActivityFailedEventDetails() const{ return m_activityFailedEventDetails; }

    
    inline void SetActivityFailedEventDetails(const ActivityFailedEventDetails& value) { m_activityFailedEventDetailsHasBeenSet = true; m_activityFailedEventDetails = value; }

    
    inline void SetActivityFailedEventDetails(ActivityFailedEventDetails&& value) { m_activityFailedEventDetailsHasBeenSet = true; m_activityFailedEventDetails = value; }

    
    inline HistoryEvent& WithActivityFailedEventDetails(const ActivityFailedEventDetails& value) { SetActivityFailedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithActivityFailedEventDetails(ActivityFailedEventDetails&& value) { SetActivityFailedEventDetails(value); return *this;}

    
    inline const ActivityScheduleFailedEventDetails& GetActivityScheduleFailedEventDetails() const{ return m_activityScheduleFailedEventDetails; }

    
    inline void SetActivityScheduleFailedEventDetails(const ActivityScheduleFailedEventDetails& value) { m_activityScheduleFailedEventDetailsHasBeenSet = true; m_activityScheduleFailedEventDetails = value; }

    
    inline void SetActivityScheduleFailedEventDetails(ActivityScheduleFailedEventDetails&& value) { m_activityScheduleFailedEventDetailsHasBeenSet = true; m_activityScheduleFailedEventDetails = value; }

    
    inline HistoryEvent& WithActivityScheduleFailedEventDetails(const ActivityScheduleFailedEventDetails& value) { SetActivityScheduleFailedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithActivityScheduleFailedEventDetails(ActivityScheduleFailedEventDetails&& value) { SetActivityScheduleFailedEventDetails(value); return *this;}

    
    inline const ActivityScheduledEventDetails& GetActivityScheduledEventDetails() const{ return m_activityScheduledEventDetails; }

    
    inline void SetActivityScheduledEventDetails(const ActivityScheduledEventDetails& value) { m_activityScheduledEventDetailsHasBeenSet = true; m_activityScheduledEventDetails = value; }

    
    inline void SetActivityScheduledEventDetails(ActivityScheduledEventDetails&& value) { m_activityScheduledEventDetailsHasBeenSet = true; m_activityScheduledEventDetails = value; }

    
    inline HistoryEvent& WithActivityScheduledEventDetails(const ActivityScheduledEventDetails& value) { SetActivityScheduledEventDetails(value); return *this;}

    
    inline HistoryEvent& WithActivityScheduledEventDetails(ActivityScheduledEventDetails&& value) { SetActivityScheduledEventDetails(value); return *this;}

    
    inline const ActivityStartedEventDetails& GetActivityStartedEventDetails() const{ return m_activityStartedEventDetails; }

    
    inline void SetActivityStartedEventDetails(const ActivityStartedEventDetails& value) { m_activityStartedEventDetailsHasBeenSet = true; m_activityStartedEventDetails = value; }

    
    inline void SetActivityStartedEventDetails(ActivityStartedEventDetails&& value) { m_activityStartedEventDetailsHasBeenSet = true; m_activityStartedEventDetails = value; }

    
    inline HistoryEvent& WithActivityStartedEventDetails(const ActivityStartedEventDetails& value) { SetActivityStartedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithActivityStartedEventDetails(ActivityStartedEventDetails&& value) { SetActivityStartedEventDetails(value); return *this;}

    
    inline const ActivitySucceededEventDetails& GetActivitySucceededEventDetails() const{ return m_activitySucceededEventDetails; }

    
    inline void SetActivitySucceededEventDetails(const ActivitySucceededEventDetails& value) { m_activitySucceededEventDetailsHasBeenSet = true; m_activitySucceededEventDetails = value; }

    
    inline void SetActivitySucceededEventDetails(ActivitySucceededEventDetails&& value) { m_activitySucceededEventDetailsHasBeenSet = true; m_activitySucceededEventDetails = value; }

    
    inline HistoryEvent& WithActivitySucceededEventDetails(const ActivitySucceededEventDetails& value) { SetActivitySucceededEventDetails(value); return *this;}

    
    inline HistoryEvent& WithActivitySucceededEventDetails(ActivitySucceededEventDetails&& value) { SetActivitySucceededEventDetails(value); return *this;}

    
    inline const ActivityTimedOutEventDetails& GetActivityTimedOutEventDetails() const{ return m_activityTimedOutEventDetails; }

    
    inline void SetActivityTimedOutEventDetails(const ActivityTimedOutEventDetails& value) { m_activityTimedOutEventDetailsHasBeenSet = true; m_activityTimedOutEventDetails = value; }

    
    inline void SetActivityTimedOutEventDetails(ActivityTimedOutEventDetails&& value) { m_activityTimedOutEventDetailsHasBeenSet = true; m_activityTimedOutEventDetails = value; }

    
    inline HistoryEvent& WithActivityTimedOutEventDetails(const ActivityTimedOutEventDetails& value) { SetActivityTimedOutEventDetails(value); return *this;}

    
    inline HistoryEvent& WithActivityTimedOutEventDetails(ActivityTimedOutEventDetails&& value) { SetActivityTimedOutEventDetails(value); return *this;}

    
    inline const ExecutionFailedEventDetails& GetExecutionFailedEventDetails() const{ return m_executionFailedEventDetails; }

    
    inline void SetExecutionFailedEventDetails(const ExecutionFailedEventDetails& value) { m_executionFailedEventDetailsHasBeenSet = true; m_executionFailedEventDetails = value; }

    
    inline void SetExecutionFailedEventDetails(ExecutionFailedEventDetails&& value) { m_executionFailedEventDetailsHasBeenSet = true; m_executionFailedEventDetails = value; }

    
    inline HistoryEvent& WithExecutionFailedEventDetails(const ExecutionFailedEventDetails& value) { SetExecutionFailedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithExecutionFailedEventDetails(ExecutionFailedEventDetails&& value) { SetExecutionFailedEventDetails(value); return *this;}

    
    inline const ExecutionStartedEventDetails& GetExecutionStartedEventDetails() const{ return m_executionStartedEventDetails; }

    
    inline void SetExecutionStartedEventDetails(const ExecutionStartedEventDetails& value) { m_executionStartedEventDetailsHasBeenSet = true; m_executionStartedEventDetails = value; }

    
    inline void SetExecutionStartedEventDetails(ExecutionStartedEventDetails&& value) { m_executionStartedEventDetailsHasBeenSet = true; m_executionStartedEventDetails = value; }

    
    inline HistoryEvent& WithExecutionStartedEventDetails(const ExecutionStartedEventDetails& value) { SetExecutionStartedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithExecutionStartedEventDetails(ExecutionStartedEventDetails&& value) { SetExecutionStartedEventDetails(value); return *this;}

    
    inline const ExecutionSucceededEventDetails& GetExecutionSucceededEventDetails() const{ return m_executionSucceededEventDetails; }

    
    inline void SetExecutionSucceededEventDetails(const ExecutionSucceededEventDetails& value) { m_executionSucceededEventDetailsHasBeenSet = true; m_executionSucceededEventDetails = value; }

    
    inline void SetExecutionSucceededEventDetails(ExecutionSucceededEventDetails&& value) { m_executionSucceededEventDetailsHasBeenSet = true; m_executionSucceededEventDetails = value; }

    
    inline HistoryEvent& WithExecutionSucceededEventDetails(const ExecutionSucceededEventDetails& value) { SetExecutionSucceededEventDetails(value); return *this;}

    
    inline HistoryEvent& WithExecutionSucceededEventDetails(ExecutionSucceededEventDetails&& value) { SetExecutionSucceededEventDetails(value); return *this;}

    
    inline const ExecutionAbortedEventDetails& GetExecutionAbortedEventDetails() const{ return m_executionAbortedEventDetails; }

    
    inline void SetExecutionAbortedEventDetails(const ExecutionAbortedEventDetails& value) { m_executionAbortedEventDetailsHasBeenSet = true; m_executionAbortedEventDetails = value; }

    
    inline void SetExecutionAbortedEventDetails(ExecutionAbortedEventDetails&& value) { m_executionAbortedEventDetailsHasBeenSet = true; m_executionAbortedEventDetails = value; }

    
    inline HistoryEvent& WithExecutionAbortedEventDetails(const ExecutionAbortedEventDetails& value) { SetExecutionAbortedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithExecutionAbortedEventDetails(ExecutionAbortedEventDetails&& value) { SetExecutionAbortedEventDetails(value); return *this;}

    
    inline const ExecutionTimedOutEventDetails& GetExecutionTimedOutEventDetails() const{ return m_executionTimedOutEventDetails; }

    
    inline void SetExecutionTimedOutEventDetails(const ExecutionTimedOutEventDetails& value) { m_executionTimedOutEventDetailsHasBeenSet = true; m_executionTimedOutEventDetails = value; }

    
    inline void SetExecutionTimedOutEventDetails(ExecutionTimedOutEventDetails&& value) { m_executionTimedOutEventDetailsHasBeenSet = true; m_executionTimedOutEventDetails = value; }

    
    inline HistoryEvent& WithExecutionTimedOutEventDetails(const ExecutionTimedOutEventDetails& value) { SetExecutionTimedOutEventDetails(value); return *this;}

    
    inline HistoryEvent& WithExecutionTimedOutEventDetails(ExecutionTimedOutEventDetails&& value) { SetExecutionTimedOutEventDetails(value); return *this;}

    
    inline const LambdaFunctionFailedEventDetails& GetLambdaFunctionFailedEventDetails() const{ return m_lambdaFunctionFailedEventDetails; }

    
    inline void SetLambdaFunctionFailedEventDetails(const LambdaFunctionFailedEventDetails& value) { m_lambdaFunctionFailedEventDetailsHasBeenSet = true; m_lambdaFunctionFailedEventDetails = value; }

    
    inline void SetLambdaFunctionFailedEventDetails(LambdaFunctionFailedEventDetails&& value) { m_lambdaFunctionFailedEventDetailsHasBeenSet = true; m_lambdaFunctionFailedEventDetails = value; }

    
    inline HistoryEvent& WithLambdaFunctionFailedEventDetails(const LambdaFunctionFailedEventDetails& value) { SetLambdaFunctionFailedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionFailedEventDetails(LambdaFunctionFailedEventDetails&& value) { SetLambdaFunctionFailedEventDetails(value); return *this;}

    
    inline const LambdaFunctionScheduleFailedEventDetails& GetLambdaFunctionScheduleFailedEventDetails() const{ return m_lambdaFunctionScheduleFailedEventDetails; }

    
    inline void SetLambdaFunctionScheduleFailedEventDetails(const LambdaFunctionScheduleFailedEventDetails& value) { m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = true; m_lambdaFunctionScheduleFailedEventDetails = value; }

    
    inline void SetLambdaFunctionScheduleFailedEventDetails(LambdaFunctionScheduleFailedEventDetails&& value) { m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = true; m_lambdaFunctionScheduleFailedEventDetails = value; }

    
    inline HistoryEvent& WithLambdaFunctionScheduleFailedEventDetails(const LambdaFunctionScheduleFailedEventDetails& value) { SetLambdaFunctionScheduleFailedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionScheduleFailedEventDetails(LambdaFunctionScheduleFailedEventDetails&& value) { SetLambdaFunctionScheduleFailedEventDetails(value); return *this;}

    
    inline const LambdaFunctionScheduledEventDetails& GetLambdaFunctionScheduledEventDetails() const{ return m_lambdaFunctionScheduledEventDetails; }

    
    inline void SetLambdaFunctionScheduledEventDetails(const LambdaFunctionScheduledEventDetails& value) { m_lambdaFunctionScheduledEventDetailsHasBeenSet = true; m_lambdaFunctionScheduledEventDetails = value; }

    
    inline void SetLambdaFunctionScheduledEventDetails(LambdaFunctionScheduledEventDetails&& value) { m_lambdaFunctionScheduledEventDetailsHasBeenSet = true; m_lambdaFunctionScheduledEventDetails = value; }

    
    inline HistoryEvent& WithLambdaFunctionScheduledEventDetails(const LambdaFunctionScheduledEventDetails& value) { SetLambdaFunctionScheduledEventDetails(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionScheduledEventDetails(LambdaFunctionScheduledEventDetails&& value) { SetLambdaFunctionScheduledEventDetails(value); return *this;}

    
    inline const LambdaFunctionStartFailedEventDetails& GetLambdaFunctionStartFailedEventDetails() const{ return m_lambdaFunctionStartFailedEventDetails; }

    
    inline void SetLambdaFunctionStartFailedEventDetails(const LambdaFunctionStartFailedEventDetails& value) { m_lambdaFunctionStartFailedEventDetailsHasBeenSet = true; m_lambdaFunctionStartFailedEventDetails = value; }

    
    inline void SetLambdaFunctionStartFailedEventDetails(LambdaFunctionStartFailedEventDetails&& value) { m_lambdaFunctionStartFailedEventDetailsHasBeenSet = true; m_lambdaFunctionStartFailedEventDetails = value; }

    
    inline HistoryEvent& WithLambdaFunctionStartFailedEventDetails(const LambdaFunctionStartFailedEventDetails& value) { SetLambdaFunctionStartFailedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionStartFailedEventDetails(LambdaFunctionStartFailedEventDetails&& value) { SetLambdaFunctionStartFailedEventDetails(value); return *this;}

    
    inline const LambdaFunctionSucceededEventDetails& GetLambdaFunctionSucceededEventDetails() const{ return m_lambdaFunctionSucceededEventDetails; }

    
    inline void SetLambdaFunctionSucceededEventDetails(const LambdaFunctionSucceededEventDetails& value) { m_lambdaFunctionSucceededEventDetailsHasBeenSet = true; m_lambdaFunctionSucceededEventDetails = value; }

    
    inline void SetLambdaFunctionSucceededEventDetails(LambdaFunctionSucceededEventDetails&& value) { m_lambdaFunctionSucceededEventDetailsHasBeenSet = true; m_lambdaFunctionSucceededEventDetails = value; }

    
    inline HistoryEvent& WithLambdaFunctionSucceededEventDetails(const LambdaFunctionSucceededEventDetails& value) { SetLambdaFunctionSucceededEventDetails(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionSucceededEventDetails(LambdaFunctionSucceededEventDetails&& value) { SetLambdaFunctionSucceededEventDetails(value); return *this;}

    
    inline const LambdaFunctionTimedOutEventDetails& GetLambdaFunctionTimedOutEventDetails() const{ return m_lambdaFunctionTimedOutEventDetails; }

    
    inline void SetLambdaFunctionTimedOutEventDetails(const LambdaFunctionTimedOutEventDetails& value) { m_lambdaFunctionTimedOutEventDetailsHasBeenSet = true; m_lambdaFunctionTimedOutEventDetails = value; }

    
    inline void SetLambdaFunctionTimedOutEventDetails(LambdaFunctionTimedOutEventDetails&& value) { m_lambdaFunctionTimedOutEventDetailsHasBeenSet = true; m_lambdaFunctionTimedOutEventDetails = value; }

    
    inline HistoryEvent& WithLambdaFunctionTimedOutEventDetails(const LambdaFunctionTimedOutEventDetails& value) { SetLambdaFunctionTimedOutEventDetails(value); return *this;}

    
    inline HistoryEvent& WithLambdaFunctionTimedOutEventDetails(LambdaFunctionTimedOutEventDetails&& value) { SetLambdaFunctionTimedOutEventDetails(value); return *this;}

    
    inline const StateEnteredEventDetails& GetStateEnteredEventDetails() const{ return m_stateEnteredEventDetails; }

    
    inline void SetStateEnteredEventDetails(const StateEnteredEventDetails& value) { m_stateEnteredEventDetailsHasBeenSet = true; m_stateEnteredEventDetails = value; }

    
    inline void SetStateEnteredEventDetails(StateEnteredEventDetails&& value) { m_stateEnteredEventDetailsHasBeenSet = true; m_stateEnteredEventDetails = value; }

    
    inline HistoryEvent& WithStateEnteredEventDetails(const StateEnteredEventDetails& value) { SetStateEnteredEventDetails(value); return *this;}

    
    inline HistoryEvent& WithStateEnteredEventDetails(StateEnteredEventDetails&& value) { SetStateEnteredEventDetails(value); return *this;}

    
    inline const StateExitedEventDetails& GetStateExitedEventDetails() const{ return m_stateExitedEventDetails; }

    
    inline void SetStateExitedEventDetails(const StateExitedEventDetails& value) { m_stateExitedEventDetailsHasBeenSet = true; m_stateExitedEventDetails = value; }

    
    inline void SetStateExitedEventDetails(StateExitedEventDetails&& value) { m_stateExitedEventDetailsHasBeenSet = true; m_stateExitedEventDetails = value; }

    
    inline HistoryEvent& WithStateExitedEventDetails(const StateExitedEventDetails& value) { SetStateExitedEventDetails(value); return *this;}

    
    inline HistoryEvent& WithStateExitedEventDetails(StateExitedEventDetails&& value) { SetStateExitedEventDetails(value); return *this;}

  private:
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
    HistoryEventType m_type;
    bool m_typeHasBeenSet;
    long long m_id;
    bool m_idHasBeenSet;
    long long m_previousEventId;
    bool m_previousEventIdHasBeenSet;
    ActivityFailedEventDetails m_activityFailedEventDetails;
    bool m_activityFailedEventDetailsHasBeenSet;
    ActivityScheduleFailedEventDetails m_activityScheduleFailedEventDetails;
    bool m_activityScheduleFailedEventDetailsHasBeenSet;
    ActivityScheduledEventDetails m_activityScheduledEventDetails;
    bool m_activityScheduledEventDetailsHasBeenSet;
    ActivityStartedEventDetails m_activityStartedEventDetails;
    bool m_activityStartedEventDetailsHasBeenSet;
    ActivitySucceededEventDetails m_activitySucceededEventDetails;
    bool m_activitySucceededEventDetailsHasBeenSet;
    ActivityTimedOutEventDetails m_activityTimedOutEventDetails;
    bool m_activityTimedOutEventDetailsHasBeenSet;
    ExecutionFailedEventDetails m_executionFailedEventDetails;
    bool m_executionFailedEventDetailsHasBeenSet;
    ExecutionStartedEventDetails m_executionStartedEventDetails;
    bool m_executionStartedEventDetailsHasBeenSet;
    ExecutionSucceededEventDetails m_executionSucceededEventDetails;
    bool m_executionSucceededEventDetailsHasBeenSet;
    ExecutionAbortedEventDetails m_executionAbortedEventDetails;
    bool m_executionAbortedEventDetailsHasBeenSet;
    ExecutionTimedOutEventDetails m_executionTimedOutEventDetails;
    bool m_executionTimedOutEventDetailsHasBeenSet;
    LambdaFunctionFailedEventDetails m_lambdaFunctionFailedEventDetails;
    bool m_lambdaFunctionFailedEventDetailsHasBeenSet;
    LambdaFunctionScheduleFailedEventDetails m_lambdaFunctionScheduleFailedEventDetails;
    bool m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet;
    LambdaFunctionScheduledEventDetails m_lambdaFunctionScheduledEventDetails;
    bool m_lambdaFunctionScheduledEventDetailsHasBeenSet;
    LambdaFunctionStartFailedEventDetails m_lambdaFunctionStartFailedEventDetails;
    bool m_lambdaFunctionStartFailedEventDetailsHasBeenSet;
    LambdaFunctionSucceededEventDetails m_lambdaFunctionSucceededEventDetails;
    bool m_lambdaFunctionSucceededEventDetailsHasBeenSet;
    LambdaFunctionTimedOutEventDetails m_lambdaFunctionTimedOutEventDetails;
    bool m_lambdaFunctionTimedOutEventDetailsHasBeenSet;
    StateEnteredEventDetails m_stateEnteredEventDetails;
    bool m_stateEnteredEventDetailsHasBeenSet;
    StateExitedEventDetails m_stateExitedEventDetails;
    bool m_stateExitedEventDetailsHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
