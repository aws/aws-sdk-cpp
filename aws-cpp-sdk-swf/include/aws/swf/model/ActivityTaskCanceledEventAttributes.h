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
   * <p>Provides the details of the <code>ActivityTaskCanceled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskCanceledEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ActivityTaskCanceledEventAttributes
  {
  public:
    ActivityTaskCanceledEventAttributes();
    ActivityTaskCanceledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    ActivityTaskCanceledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of the cancellation.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>Details of the cancellation.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Details of the cancellation.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Details of the cancellation.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Details of the cancellation.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>Details of the cancellation.</p>
     */
    inline ActivityTaskCanceledEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>Details of the cancellation.</p>
     */
    inline ActivityTaskCanceledEventAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>Details of the cancellation.</p>
     */
    inline ActivityTaskCanceledEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}


    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }

    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }

    /**
     * <p>The ID of the <code>ActivityTaskScheduled</code> event that was recorded when
     * this activity task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline ActivityTaskCanceledEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}


    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded when this
     * activity task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded when this
     * activity task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded when this
     * activity task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }

    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded when this
     * activity task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline ActivityTaskCanceledEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}


    /**
     * <p>If set, contains the ID of the last <code>ActivityTaskCancelRequested</code>
     * event recorded for this activity task. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetLatestCancelRequestedEventId() const{ return m_latestCancelRequestedEventId; }

    /**
     * <p>If set, contains the ID of the last <code>ActivityTaskCancelRequested</code>
     * event recorded for this activity task. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline bool LatestCancelRequestedEventIdHasBeenSet() const { return m_latestCancelRequestedEventIdHasBeenSet; }

    /**
     * <p>If set, contains the ID of the last <code>ActivityTaskCancelRequested</code>
     * event recorded for this activity task. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline void SetLatestCancelRequestedEventId(long long value) { m_latestCancelRequestedEventIdHasBeenSet = true; m_latestCancelRequestedEventId = value; }

    /**
     * <p>If set, contains the ID of the last <code>ActivityTaskCancelRequested</code>
     * event recorded for this activity task. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline ActivityTaskCanceledEventAttributes& WithLatestCancelRequestedEventId(long long value) { SetLatestCancelRequestedEventId(value); return *this;}

  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet;

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet;

    long long m_latestCancelRequestedEventId;
    bool m_latestCancelRequestedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
