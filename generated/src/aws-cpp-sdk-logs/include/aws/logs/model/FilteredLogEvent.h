/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents a matched event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FilteredLogEvent">AWS
   * API Reference</a></p>
   */
  class FilteredLogEvent
  {
  public:
    AWS_CLOUDWATCHLOGS_API FilteredLogEvent();
    AWS_CLOUDWATCHLOGS_API FilteredLogEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API FilteredLogEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }

    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }

    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline FilteredLogEvent& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline FilteredLogEvent& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the log stream to which this event belongs.</p>
     */
    inline FilteredLogEvent& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}


    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline FilteredLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>The data contained in the log event.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The data contained in the log event.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The data contained in the log event.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The data contained in the log event.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

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
    inline FilteredLogEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The data contained in the log event.</p>
     */
    inline FilteredLogEvent& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The time the event was ingested, expressed as the number of milliseconds
     * after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline long long GetIngestionTime() const{ return m_ingestionTime; }

    /**
     * <p>The time the event was ingested, expressed as the number of milliseconds
     * after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline bool IngestionTimeHasBeenSet() const { return m_ingestionTimeHasBeenSet; }

    /**
     * <p>The time the event was ingested, expressed as the number of milliseconds
     * after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline void SetIngestionTime(long long value) { m_ingestionTimeHasBeenSet = true; m_ingestionTime = value; }

    /**
     * <p>The time the event was ingested, expressed as the number of milliseconds
     * after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline FilteredLogEvent& WithIngestionTime(long long value) { SetIngestionTime(value); return *this;}


    /**
     * <p>The ID of the event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

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
    inline FilteredLogEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event.</p>
     */
    inline FilteredLogEvent& WithEventId(const char* value) { SetEventId(value); return *this;}

  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_ingestionTime;
    bool m_ingestionTimeHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
