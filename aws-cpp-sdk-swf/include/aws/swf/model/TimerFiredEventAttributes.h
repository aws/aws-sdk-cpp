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
   * <p>Provides the details of the <code>TimerFired</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TimerFiredEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API TimerFiredEventAttributes
  {
  public:
    TimerFiredEventAttributes();
    TimerFiredEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    TimerFiredEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline const Aws::String& GetTimerId() const{ return m_timerId; }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline void SetTimerId(const Aws::String& value) { m_timerIdHasBeenSet = true; m_timerId = value; }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline void SetTimerId(Aws::String&& value) { m_timerIdHasBeenSet = true; m_timerId = std::move(value); }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline void SetTimerId(const char* value) { m_timerIdHasBeenSet = true; m_timerId.assign(value); }

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline TimerFiredEventAttributes& WithTimerId(const Aws::String& value) { SetTimerId(value); return *this;}

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline TimerFiredEventAttributes& WithTimerId(Aws::String&& value) { SetTimerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the timer that fired.</p>
     */
    inline TimerFiredEventAttributes& WithTimerId(const char* value) { SetTimerId(value); return *this;}


    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>TimerStarted</code> event that was recorded when this
     * timer was started. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline TimerFiredEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}

  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
