/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/ExportTaskStatus.h>
#include <aws/logs/model/ExportTaskExecutionInfo.h>
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
   * <p>Represents an export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ExportTask">AWS API
   * Reference</a></p>
   */
  class ExportTask
  {
  public:
    AWS_CLOUDWATCHLOGS_API ExportTask();
    AWS_CLOUDWATCHLOGS_API ExportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ExportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the export task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the export task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the export task.</p>
     */
    inline ExportTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the export task.</p>
     */
    inline ExportTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export task.</p>
     */
    inline ExportTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The name of the export task.</p>
     */
    inline const Aws::String& GetTaskName() const{ return m_taskName; }

    /**
     * <p>The name of the export task.</p>
     */
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }

    /**
     * <p>The name of the export task.</p>
     */
    inline void SetTaskName(const Aws::String& value) { m_taskNameHasBeenSet = true; m_taskName = value; }

    /**
     * <p>The name of the export task.</p>
     */
    inline void SetTaskName(Aws::String&& value) { m_taskNameHasBeenSet = true; m_taskName = std::move(value); }

    /**
     * <p>The name of the export task.</p>
     */
    inline void SetTaskName(const char* value) { m_taskNameHasBeenSet = true; m_taskName.assign(value); }

    /**
     * <p>The name of the export task.</p>
     */
    inline ExportTask& WithTaskName(const Aws::String& value) { SetTaskName(value); return *this;}

    /**
     * <p>The name of the export task.</p>
     */
    inline ExportTask& WithTaskName(Aws::String&& value) { SetTaskName(std::move(value)); return *this;}

    /**
     * <p>The name of the export task.</p>
     */
    inline ExportTask& WithTaskName(const char* value) { SetTaskName(value); return *this;}


    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline ExportTask& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline ExportTask& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline ExportTask& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The start time, expressed as the number of milliseconds after <code>Jan 1,
     * 1970 00:00:00 UTC</code>. Events with a timestamp before this time are not
     * exported.</p>
     */
    inline long long GetFrom() const{ return m_from; }

    /**
     * <p>The start time, expressed as the number of milliseconds after <code>Jan 1,
     * 1970 00:00:00 UTC</code>. Events with a timestamp before this time are not
     * exported.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The start time, expressed as the number of milliseconds after <code>Jan 1,
     * 1970 00:00:00 UTC</code>. Events with a timestamp before this time are not
     * exported.</p>
     */
    inline void SetFrom(long long value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The start time, expressed as the number of milliseconds after <code>Jan 1,
     * 1970 00:00:00 UTC</code>. Events with a timestamp before this time are not
     * exported.</p>
     */
    inline ExportTask& WithFrom(long long value) { SetFrom(value); return *this;}


    /**
     * <p>The end time, expressed as the number of milliseconds after <code>Jan 1, 1970
     * 00:00:00 UTC</code>. Events with a timestamp later than this time are not
     * exported.</p>
     */
    inline long long GetTo() const{ return m_to; }

    /**
     * <p>The end time, expressed as the number of milliseconds after <code>Jan 1, 1970
     * 00:00:00 UTC</code>. Events with a timestamp later than this time are not
     * exported.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The end time, expressed as the number of milliseconds after <code>Jan 1, 1970
     * 00:00:00 UTC</code>. Events with a timestamp later than this time are not
     * exported.</p>
     */
    inline void SetTo(long long value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The end time, expressed as the number of milliseconds after <code>Jan 1, 1970
     * 00:00:00 UTC</code>. Events with a timestamp later than this time are not
     * exported.</p>
     */
    inline ExportTask& WithTo(long long value) { SetTo(value); return *this;}


    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline ExportTask& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline ExportTask& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline ExportTask& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const{ return m_destinationPrefix; }

    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }

    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline void SetDestinationPrefix(const Aws::String& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = value; }

    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline void SetDestinationPrefix(Aws::String&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::move(value); }

    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline void SetDestinationPrefix(const char* value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix.assign(value); }

    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline ExportTask& WithDestinationPrefix(const Aws::String& value) { SetDestinationPrefix(value); return *this;}

    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline ExportTask& WithDestinationPrefix(Aws::String&& value) { SetDestinationPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline ExportTask& WithDestinationPrefix(const char* value) { SetDestinationPrefix(value); return *this;}


    /**
     * <p>The status of the export task.</p>
     */
    inline const ExportTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the export task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the export task.</p>
     */
    inline void SetStatus(const ExportTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the export task.</p>
     */
    inline void SetStatus(ExportTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the export task.</p>
     */
    inline ExportTask& WithStatus(const ExportTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the export task.</p>
     */
    inline ExportTask& WithStatus(ExportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Execution information about the export task.</p>
     */
    inline const ExportTaskExecutionInfo& GetExecutionInfo() const{ return m_executionInfo; }

    /**
     * <p>Execution information about the export task.</p>
     */
    inline bool ExecutionInfoHasBeenSet() const { return m_executionInfoHasBeenSet; }

    /**
     * <p>Execution information about the export task.</p>
     */
    inline void SetExecutionInfo(const ExportTaskExecutionInfo& value) { m_executionInfoHasBeenSet = true; m_executionInfo = value; }

    /**
     * <p>Execution information about the export task.</p>
     */
    inline void SetExecutionInfo(ExportTaskExecutionInfo&& value) { m_executionInfoHasBeenSet = true; m_executionInfo = std::move(value); }

    /**
     * <p>Execution information about the export task.</p>
     */
    inline ExportTask& WithExecutionInfo(const ExportTaskExecutionInfo& value) { SetExecutionInfo(value); return *this;}

    /**
     * <p>Execution information about the export task.</p>
     */
    inline ExportTask& WithExecutionInfo(ExportTaskExecutionInfo&& value) { SetExecutionInfo(std::move(value)); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_taskName;
    bool m_taskNameHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    long long m_from;
    bool m_fromHasBeenSet = false;

    long long m_to;
    bool m_toHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationPrefix;
    bool m_destinationPrefixHasBeenSet = false;

    ExportTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    ExportTaskExecutionInfo m_executionInfo;
    bool m_executionInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
