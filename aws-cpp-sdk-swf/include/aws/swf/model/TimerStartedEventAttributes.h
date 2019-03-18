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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>TimerStarted</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TimerStartedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API TimerStartedEventAttributes
  {
  public:
    TimerStartedEventAttributes();
    TimerStartedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    TimerStartedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline const Aws::String& GetTimerId() const{ return m_timerId; }

    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }

    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline void SetTimerId(const Aws::String& value) { m_timerIdHasBeenSet = true; m_timerId = value; }

    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline void SetTimerId(Aws::String&& value) { m_timerIdHasBeenSet = true; m_timerId = std::move(value); }

    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline void SetTimerId(const char* value) { m_timerIdHasBeenSet = true; m_timerId.assign(value); }

    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline TimerStartedEventAttributes& WithTimerId(const Aws::String& value) { SetTimerId(value); return *this;}

    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline TimerStartedEventAttributes& WithTimerId(Aws::String&& value) { SetTimerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the timer that was started.</p>
     */
    inline TimerStartedEventAttributes& WithTimerId(const char* value) { SetTimerId(value); return *this;}


    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline TimerStartedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline TimerStartedEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks.</p>
     */
    inline TimerStartedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}


    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline const Aws::String& GetStartToFireTimeout() const{ return m_startToFireTimeout; }

    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline bool StartToFireTimeoutHasBeenSet() const { return m_startToFireTimeoutHasBeenSet; }

    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline void SetStartToFireTimeout(const Aws::String& value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout = value; }

    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline void SetStartToFireTimeout(Aws::String&& value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout = std::move(value); }

    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline void SetStartToFireTimeout(const char* value) { m_startToFireTimeoutHasBeenSet = true; m_startToFireTimeout.assign(value); }

    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline TimerStartedEventAttributes& WithStartToFireTimeout(const Aws::String& value) { SetStartToFireTimeout(value); return *this;}

    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline TimerStartedEventAttributes& WithStartToFireTimeout(Aws::String&& value) { SetStartToFireTimeout(std::move(value)); return *this;}

    /**
     * <p>The duration of time after which the timer fires.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>.</p>
     */
    inline TimerStartedEventAttributes& WithStartToFireTimeout(const char* value) { SetStartToFireTimeout(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartTimer</code> decision for this
     * activity task. This information can be useful for diagnosing problems by tracing
     * back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartTimer</code> decision for this
     * activity task. This information can be useful for diagnosing problems by tracing
     * back the chain of events leading up to this event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartTimer</code> decision for this
     * activity task. This information can be useful for diagnosing problems by tracing
     * back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartTimer</code> decision for this
     * activity task. This information can be useful for diagnosing problems by tracing
     * back the chain of events leading up to this event.</p>
     */
    inline TimerStartedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet;

    Aws::String m_control;
    bool m_controlHasBeenSet;

    Aws::String m_startToFireTimeout;
    bool m_startToFireTimeoutHasBeenSet;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
