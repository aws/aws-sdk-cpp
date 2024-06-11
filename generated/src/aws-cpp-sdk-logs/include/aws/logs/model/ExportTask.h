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


    ///@{
    /**
     * <p>The ID of the export task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline ExportTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline ExportTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline ExportTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the export task.</p>
     */
    inline const Aws::String& GetTaskName() const{ return m_taskName; }
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
    inline void SetTaskName(const Aws::String& value) { m_taskNameHasBeenSet = true; m_taskName = value; }
    inline void SetTaskName(Aws::String&& value) { m_taskNameHasBeenSet = true; m_taskName = std::move(value); }
    inline void SetTaskName(const char* value) { m_taskNameHasBeenSet = true; m_taskName.assign(value); }
    inline ExportTask& WithTaskName(const Aws::String& value) { SetTaskName(value); return *this;}
    inline ExportTask& WithTaskName(Aws::String&& value) { SetTaskName(std::move(value)); return *this;}
    inline ExportTask& WithTaskName(const char* value) { SetTaskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline ExportTask& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline ExportTask& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline ExportTask& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time, expressed as the number of milliseconds after <code>Jan 1,
     * 1970 00:00:00 UTC</code>. Events with a timestamp before this time are not
     * exported.</p>
     */
    inline long long GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(long long value) { m_fromHasBeenSet = true; m_from = value; }
    inline ExportTask& WithFrom(long long value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time, expressed as the number of milliseconds after <code>Jan 1, 1970
     * 00:00:00 UTC</code>. Events with a timestamp later than this time are not
     * exported.</p>
     */
    inline long long GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(long long value) { m_toHasBeenSet = true; m_to = value; }
    inline ExportTask& WithTo(long long value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline ExportTask& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline ExportTask& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline ExportTask& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const{ return m_destinationPrefix; }
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }
    inline void SetDestinationPrefix(const Aws::String& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = value; }
    inline void SetDestinationPrefix(Aws::String&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::move(value); }
    inline void SetDestinationPrefix(const char* value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix.assign(value); }
    inline ExportTask& WithDestinationPrefix(const Aws::String& value) { SetDestinationPrefix(value); return *this;}
    inline ExportTask& WithDestinationPrefix(Aws::String&& value) { SetDestinationPrefix(std::move(value)); return *this;}
    inline ExportTask& WithDestinationPrefix(const char* value) { SetDestinationPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export task.</p>
     */
    inline const ExportTaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExportTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExportTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExportTask& WithStatus(const ExportTaskStatus& value) { SetStatus(value); return *this;}
    inline ExportTask& WithStatus(ExportTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Execution information about the export task.</p>
     */
    inline const ExportTaskExecutionInfo& GetExecutionInfo() const{ return m_executionInfo; }
    inline bool ExecutionInfoHasBeenSet() const { return m_executionInfoHasBeenSet; }
    inline void SetExecutionInfo(const ExportTaskExecutionInfo& value) { m_executionInfoHasBeenSet = true; m_executionInfo = value; }
    inline void SetExecutionInfo(ExportTaskExecutionInfo&& value) { m_executionInfoHasBeenSet = true; m_executionInfo = std::move(value); }
    inline ExportTask& WithExecutionInfo(const ExportTaskExecutionInfo& value) { SetExecutionInfo(value); return *this;}
    inline ExportTask& WithExecutionInfo(ExportTaskExecutionInfo&& value) { SetExecutionInfo(std::move(value)); return *this;}
    ///@}
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
