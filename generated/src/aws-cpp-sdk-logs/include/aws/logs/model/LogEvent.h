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
   * <p>This structure contains the information for one sample log event that is
   * associated with an anomaly found by a log anomaly detector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogEvent">AWS API
   * Reference</a></p>
   */
  class LogEvent
  {
  public:
    AWS_CLOUDWATCHLOGS_API LogEvent();
    AWS_CLOUDWATCHLOGS_API LogEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LogEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time stamp of the log event.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time stamp of the log event.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time stamp of the log event.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time stamp of the log event.</p>
     */
    inline LogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>The message content of the log event.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message content of the log event.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message content of the log event.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message content of the log event.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message content of the log event.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message content of the log event.</p>
     */
    inline LogEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message content of the log event.</p>
     */
    inline LogEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message content of the log event.</p>
     */
    inline LogEvent& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
