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
   * <p>Represents a log event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OutputLogEvent">AWS
   * API Reference</a></p>
   */
  class OutputLogEvent
  {
  public:
    AWS_CLOUDWATCHLOGS_API OutputLogEvent();
    AWS_CLOUDWATCHLOGS_API OutputLogEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OutputLogEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline OutputLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


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
    inline OutputLogEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The data contained in the log event.</p>
     */
    inline OutputLogEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The data contained in the log event.</p>
     */
    inline OutputLogEvent& WithMessage(const char* value) { SetMessage(value); return *this;}


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
    inline OutputLogEvent& WithIngestionTime(long long value) { SetIngestionTime(value); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_ingestionTime;
    bool m_ingestionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
