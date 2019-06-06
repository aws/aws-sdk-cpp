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
  class AWS_CLOUDWATCHLOGS_API LogStream
  {
  public:
    LogStream();
    LogStream(Aws::Utils::Json::JsonView jsonValue);
    LogStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the log stream.</p>
     */
    inline LogStream& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream.</p>
     */
    inline LogStream& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the log stream.</p>
     */
    inline LogStream& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}


    /**
     * <p>The creation time of the stream, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the stream, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the stream, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the stream, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline LogStream& WithCreationTime(long long value) { SetCreationTime(value); return *this;}


    /**
     * <p>The time of the first event, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetFirstEventTimestamp() const{ return m_firstEventTimestamp; }

    /**
     * <p>The time of the first event, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool FirstEventTimestampHasBeenSet() const { return m_firstEventTimestampHasBeenSet; }

    /**
     * <p>The time of the first event, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetFirstEventTimestamp(long long value) { m_firstEventTimestampHasBeenSet = true; m_firstEventTimestamp = value; }

    /**
     * <p>The time of the first event, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline LogStream& WithFirstEventTimestamp(long long value) { SetFirstEventTimestamp(value); return *this;}


    /**
     * <p>The time of the most recent log event in the log stream in CloudWatch Logs.
     * This number is expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC. The <code>lastEventTime</code> value updates on an eventual
     * consistency basis. It typically updates in less than an hour from ingestion, but
     * may take longer in some rare situations.</p>
     */
    inline long long GetLastEventTimestamp() const{ return m_lastEventTimestamp; }

    /**
     * <p>The time of the most recent log event in the log stream in CloudWatch Logs.
     * This number is expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC. The <code>lastEventTime</code> value updates on an eventual
     * consistency basis. It typically updates in less than an hour from ingestion, but
     * may take longer in some rare situations.</p>
     */
    inline bool LastEventTimestampHasBeenSet() const { return m_lastEventTimestampHasBeenSet; }

    /**
     * <p>The time of the most recent log event in the log stream in CloudWatch Logs.
     * This number is expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC. The <code>lastEventTime</code> value updates on an eventual
     * consistency basis. It typically updates in less than an hour from ingestion, but
     * may take longer in some rare situations.</p>
     */
    inline void SetLastEventTimestamp(long long value) { m_lastEventTimestampHasBeenSet = true; m_lastEventTimestamp = value; }

    /**
     * <p>The time of the most recent log event in the log stream in CloudWatch Logs.
     * This number is expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC. The <code>lastEventTime</code> value updates on an eventual
     * consistency basis. It typically updates in less than an hour from ingestion, but
     * may take longer in some rare situations.</p>
     */
    inline LogStream& WithLastEventTimestamp(long long value) { SetLastEventTimestamp(value); return *this;}


    /**
     * <p>The ingestion time, expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC.</p>
     */
    inline long long GetLastIngestionTime() const{ return m_lastIngestionTime; }

    /**
     * <p>The ingestion time, expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC.</p>
     */
    inline bool LastIngestionTimeHasBeenSet() const { return m_lastIngestionTimeHasBeenSet; }

    /**
     * <p>The ingestion time, expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC.</p>
     */
    inline void SetLastIngestionTime(long long value) { m_lastIngestionTimeHasBeenSet = true; m_lastIngestionTime = value; }

    /**
     * <p>The ingestion time, expressed as the number of milliseconds after Jan 1, 1970
     * 00:00:00 UTC.</p>
     */
    inline LogStream& WithLastIngestionTime(long long value) { SetLastIngestionTime(value); return *this;}


    /**
     * <p>The sequence token.</p>
     */
    inline const Aws::String& GetUploadSequenceToken() const{ return m_uploadSequenceToken; }

    /**
     * <p>The sequence token.</p>
     */
    inline bool UploadSequenceTokenHasBeenSet() const { return m_uploadSequenceTokenHasBeenSet; }

    /**
     * <p>The sequence token.</p>
     */
    inline void SetUploadSequenceToken(const Aws::String& value) { m_uploadSequenceTokenHasBeenSet = true; m_uploadSequenceToken = value; }

    /**
     * <p>The sequence token.</p>
     */
    inline void SetUploadSequenceToken(Aws::String&& value) { m_uploadSequenceTokenHasBeenSet = true; m_uploadSequenceToken = std::move(value); }

    /**
     * <p>The sequence token.</p>
     */
    inline void SetUploadSequenceToken(const char* value) { m_uploadSequenceTokenHasBeenSet = true; m_uploadSequenceToken.assign(value); }

    /**
     * <p>The sequence token.</p>
     */
    inline LogStream& WithUploadSequenceToken(const Aws::String& value) { SetUploadSequenceToken(value); return *this;}

    /**
     * <p>The sequence token.</p>
     */
    inline LogStream& WithUploadSequenceToken(Aws::String&& value) { SetUploadSequenceToken(std::move(value)); return *this;}

    /**
     * <p>The sequence token.</p>
     */
    inline LogStream& WithUploadSequenceToken(const char* value) { SetUploadSequenceToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline LogStream& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline LogStream& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the log stream.</p>
     */
    inline LogStream& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The number of bytes stored.</p> <p> <b>IMPORTANT:</b> Starting on June 17,
     * 2019, this parameter will be deprecated for log streams, and will be reported as
     * zero. This change applies only to log streams. The <code>storedBytes</code>
     * parameter for log groups is not affected.</p>
     */
    inline long long GetStoredBytes() const{ return m_storedBytes; }

    /**
     * <p>The number of bytes stored.</p> <p> <b>IMPORTANT:</b> Starting on June 17,
     * 2019, this parameter will be deprecated for log streams, and will be reported as
     * zero. This change applies only to log streams. The <code>storedBytes</code>
     * parameter for log groups is not affected.</p>
     */
    inline bool StoredBytesHasBeenSet() const { return m_storedBytesHasBeenSet; }

    /**
     * <p>The number of bytes stored.</p> <p> <b>IMPORTANT:</b> Starting on June 17,
     * 2019, this parameter will be deprecated for log streams, and will be reported as
     * zero. This change applies only to log streams. The <code>storedBytes</code>
     * parameter for log groups is not affected.</p>
     */
    inline void SetStoredBytes(long long value) { m_storedBytesHasBeenSet = true; m_storedBytes = value; }

    /**
     * <p>The number of bytes stored.</p> <p> <b>IMPORTANT:</b> Starting on June 17,
     * 2019, this parameter will be deprecated for log streams, and will be reported as
     * zero. This change applies only to log streams. The <code>storedBytes</code>
     * parameter for log groups is not affected.</p>
     */
    inline LogStream& WithStoredBytes(long long value) { SetStoredBytes(value); return *this;}

  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet;

    long long m_firstEventTimestamp;
    bool m_firstEventTimestampHasBeenSet;

    long long m_lastEventTimestamp;
    bool m_lastEventTimestampHasBeenSet;

    long long m_lastIngestionTime;
    bool m_lastIngestionTimeHasBeenSet;

    Aws::String m_uploadSequenceToken;
    bool m_uploadSequenceTokenHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    long long m_storedBytes;
    bool m_storedBytesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
