/*
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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents a matched event.</p>
   */
  class AWS_CLOUDWATCHLOGS_API FilteredLogEvent
  {
  public:
    FilteredLogEvent();
    FilteredLogEvent(const Aws::Utils::Json::JsonValue& jsonValue);
    FilteredLogEvent& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the log stream this event belongs to.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the log stream this event belongs to.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream this event belongs to.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream this event belongs to.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the log stream this event belongs to.</p>
     */
    inline FilteredLogEvent& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream this event belongs to.</p>
     */
    inline FilteredLogEvent& WithLogStreamName(Aws::String&& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream this event belongs to.</p>
     */
    inline FilteredLogEvent& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The time the event occurred.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time the event occurred.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time the event occurred.</p>
     */
    inline FilteredLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}

    /**
     * <p>The data contained in the log event.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The data contained in the log event.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The data contained in the log event.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The data contained in the log event.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The data contained in the log event.</p>
     */
    inline FilteredLogEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The data contained in the log event.</p>
     */
    inline FilteredLogEvent& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>The data contained in the log event.</p>
     */
    inline FilteredLogEvent& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>The time the event was ingested.</p>
     */
    inline long long GetIngestionTime() const{ return m_ingestionTime; }

    /**
     * <p>The time the event was ingested.</p>
     */
    inline void SetIngestionTime(long long value) { m_ingestionTimeHasBeenSet = true; m_ingestionTime = value; }

    /**
     * <p>The time the event was ingested.</p>
     */
    inline FilteredLogEvent& WithIngestionTime(long long value) { SetIngestionTime(value); return *this;}

    /**
     * <p>The ID of the event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the event.</p>
     */
    inline FilteredLogEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event.</p>
     */
    inline FilteredLogEvent& WithEventId(Aws::String&& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event.</p>
     */
    inline FilteredLogEvent& WithEventId(const char* value) { SetEventId(value); return *this;}

  private:
    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet;
    long long m_timestamp;
    bool m_timestampHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    long long m_ingestionTime;
    bool m_ingestionTimeHasBeenSet;
    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
