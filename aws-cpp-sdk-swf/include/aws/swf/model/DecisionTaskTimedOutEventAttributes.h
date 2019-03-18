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
#include <aws/swf/model/DecisionTaskTimeoutType.h>
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
   * <p>Provides the details of the <code>DecisionTaskTimedOut</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTaskTimedOutEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API DecisionTaskTimedOutEventAttributes
  {
  public:
    DecisionTaskTimedOutEventAttributes();
    DecisionTaskTimedOutEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    DecisionTaskTimedOutEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of timeout that expired before the decision task could be
     * completed.</p>
     */
    inline const DecisionTaskTimeoutType& GetTimeoutType() const{ return m_timeoutType; }

    /**
     * <p>The type of timeout that expired before the decision task could be
     * completed.</p>
     */
    inline bool TimeoutTypeHasBeenSet() const { return m_timeoutTypeHasBeenSet; }

    /**
     * <p>The type of timeout that expired before the decision task could be
     * completed.</p>
     */
    inline void SetTimeoutType(const DecisionTaskTimeoutType& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }

    /**
     * <p>The type of timeout that expired before the decision task could be
     * completed.</p>
     */
    inline void SetTimeoutType(DecisionTaskTimeoutType&& value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = std::move(value); }

    /**
     * <p>The type of timeout that expired before the decision task could be
     * completed.</p>
     */
    inline DecisionTaskTimedOutEventAttributes& WithTimeoutType(const DecisionTaskTimeoutType& value) { SetTimeoutType(value); return *this;}

    /**
     * <p>The type of timeout that expired before the decision task could be
     * completed.</p>
     */
    inline DecisionTaskTimedOutEventAttributes& WithTimeoutType(DecisionTaskTimeoutType&& value) { SetTimeoutType(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline DecisionTaskTimedOutEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline DecisionTaskTimedOutEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}

  private:

    DecisionTaskTimeoutType m_timeoutType;
    bool m_timeoutTypeHasBeenSet;

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
