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
   * <p>This object contains the information for one log event returned in a Live
   * Tail stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LiveTailSessionLogEvent">AWS
   * API Reference</a></p>
   */
  class LiveTailSessionLogEvent
  {
  public:
    AWS_CLOUDWATCHLOGS_API LiveTailSessionLogEvent() = default;
    AWS_CLOUDWATCHLOGS_API LiveTailSessionLogEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LiveTailSessionLogEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log stream that ingested this log event.</p>
     */
    inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    template<typename LogStreamNameT = Aws::String>
    void SetLogStreamName(LogStreamNameT&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::forward<LogStreamNameT>(value); }
    template<typename LogStreamNameT = Aws::String>
    LiveTailSessionLogEvent& WithLogStreamName(LogStreamNameT&& value) { SetLogStreamName(std::forward<LogStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the log group that ingested this log event.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    LiveTailSessionLogEvent& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log event message text.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    LiveTailSessionLogEvent& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp specifying when this log event was created.</p>
     */
    inline long long GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline LiveTailSessionLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp specifying when this log event was ingested into the log
     * group.</p>
     */
    inline long long GetIngestionTime() const { return m_ingestionTime; }
    inline bool IngestionTimeHasBeenSet() const { return m_ingestionTimeHasBeenSet; }
    inline void SetIngestionTime(long long value) { m_ingestionTimeHasBeenSet = true; m_ingestionTime = value; }
    inline LiveTailSessionLogEvent& WithIngestionTime(long long value) { SetIngestionTime(value); return *this;}
    ///@}
  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_timestamp{0};
    bool m_timestampHasBeenSet = false;

    long long m_ingestionTime{0};
    bool m_ingestionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
