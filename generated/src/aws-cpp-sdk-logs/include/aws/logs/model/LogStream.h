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
   * <p>Represents a log stream, which is a sequence of log events from a single
   * emitter of logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogStream">AWS API
   * Reference</a></p>
   */
  class LogStream
  {
  public:
    AWS_CLOUDWATCHLOGS_API LogStream() = default;
    AWS_CLOUDWATCHLOGS_API LogStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LogStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    template<typename LogStreamNameT = Aws::String>
    void SetLogStreamName(LogStreamNameT&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::forward<LogStreamNameT>(value); }
    template<typename LogStreamNameT = Aws::String>
    LogStream& WithLogStreamName(LogStreamNameT&& value) { SetLogStreamName(std::forward<LogStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the stream, expressed as the number of milliseconds
     * after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline LogStream& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the first event, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline long long GetFirstEventTimestamp() const { return m_firstEventTimestamp; }
    inline bool FirstEventTimestampHasBeenSet() const { return m_firstEventTimestampHasBeenSet; }
    inline void SetFirstEventTimestamp(long long value) { m_firstEventTimestampHasBeenSet = true; m_firstEventTimestamp = value; }
    inline LogStream& WithFirstEventTimestamp(long long value) { SetFirstEventTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent log event in the log stream in CloudWatch Logs.
     * This number is expressed as the number of milliseconds after <code>Jan 1, 1970
     * 00:00:00 UTC</code>. The <code>lastEventTime</code> value updates on an eventual
     * consistency basis. It typically updates in less than an hour from ingestion, but
     * in rare situations might take longer.</p>
     */
    inline long long GetLastEventTimestamp() const { return m_lastEventTimestamp; }
    inline bool LastEventTimestampHasBeenSet() const { return m_lastEventTimestampHasBeenSet; }
    inline void SetLastEventTimestamp(long long value) { m_lastEventTimestampHasBeenSet = true; m_lastEventTimestamp = value; }
    inline LogStream& WithLastEventTimestamp(long long value) { SetLastEventTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingestion time, expressed as the number of milliseconds after <code>Jan
     * 1, 1970 00:00:00 UTC</code> The <code>lastIngestionTime</code> value updates on
     * an eventual consistency basis. It typically updates in less than an hour after
     * ingestion, but in rare situations might take longer.</p>
     */
    inline long long GetLastIngestionTime() const { return m_lastIngestionTime; }
    inline bool LastIngestionTimeHasBeenSet() const { return m_lastIngestionTimeHasBeenSet; }
    inline void SetLastIngestionTime(long long value) { m_lastIngestionTimeHasBeenSet = true; m_lastIngestionTime = value; }
    inline LogStream& WithLastIngestionTime(long long value) { SetLastIngestionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence token.</p>  <p>The sequence token is now ignored in
     * <code>PutLogEvents</code> actions. <code>PutLogEvents</code> actions are always
     * accepted regardless of receiving an invalid sequence token. You don't need to
     * obtain <code>uploadSequenceToken</code> to use a <code>PutLogEvents</code>
     * action.</p> 
     */
    inline const Aws::String& GetUploadSequenceToken() const { return m_uploadSequenceToken; }
    inline bool UploadSequenceTokenHasBeenSet() const { return m_uploadSequenceTokenHasBeenSet; }
    template<typename UploadSequenceTokenT = Aws::String>
    void SetUploadSequenceToken(UploadSequenceTokenT&& value) { m_uploadSequenceTokenHasBeenSet = true; m_uploadSequenceToken = std::forward<UploadSequenceTokenT>(value); }
    template<typename UploadSequenceTokenT = Aws::String>
    LogStream& WithUploadSequenceToken(UploadSequenceTokenT&& value) { SetUploadSequenceToken(std::forward<UploadSequenceTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LogStream& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;

    long long m_firstEventTimestamp{0};
    bool m_firstEventTimestampHasBeenSet = false;

    long long m_lastEventTimestamp{0};
    bool m_lastEventTimestampHasBeenSet = false;

    long long m_lastIngestionTime{0};
    bool m_lastIngestionTimeHasBeenSet = false;

    Aws::String m_uploadSequenceToken;
    bool m_uploadSequenceTokenHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
