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
    AWS_CLOUDWATCHLOGS_API ExportTask() = default;
    AWS_CLOUDWATCHLOGS_API ExportTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ExportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the export task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    ExportTask& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the export task.</p>
     */
    inline const Aws::String& GetTaskName() const { return m_taskName; }
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
    template<typename TaskNameT = Aws::String>
    void SetTaskName(TaskNameT&& value) { m_taskNameHasBeenSet = true; m_taskName = std::forward<TaskNameT>(value); }
    template<typename TaskNameT = Aws::String>
    ExportTask& WithTaskName(TaskNameT&& value) { SetTaskName(std::forward<TaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group from which logs data was exported.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    ExportTask& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time, expressed as the number of milliseconds after <code>Jan 1,
     * 1970 00:00:00 UTC</code>. Events with a timestamp before this time are not
     * exported.</p>
     */
    inline long long GetFrom() const { return m_from; }
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
    inline long long GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(long long value) { m_toHasBeenSet = true; m_to = value; }
    inline ExportTask& WithTo(long long value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket to which the log data was exported.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    ExportTask& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that was used as the start of Amazon S3 key for every object
     * exported.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const { return m_destinationPrefix; }
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }
    template<typename DestinationPrefixT = Aws::String>
    void SetDestinationPrefix(DestinationPrefixT&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::forward<DestinationPrefixT>(value); }
    template<typename DestinationPrefixT = Aws::String>
    ExportTask& WithDestinationPrefix(DestinationPrefixT&& value) { SetDestinationPrefix(std::forward<DestinationPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export task.</p>
     */
    inline const ExportTaskStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ExportTaskStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ExportTaskStatus>
    ExportTask& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Execution information about the export task.</p>
     */
    inline const ExportTaskExecutionInfo& GetExecutionInfo() const { return m_executionInfo; }
    inline bool ExecutionInfoHasBeenSet() const { return m_executionInfoHasBeenSet; }
    template<typename ExecutionInfoT = ExportTaskExecutionInfo>
    void SetExecutionInfo(ExecutionInfoT&& value) { m_executionInfoHasBeenSet = true; m_executionInfo = std::forward<ExecutionInfoT>(value); }
    template<typename ExecutionInfoT = ExportTaskExecutionInfo>
    ExportTask& WithExecutionInfo(ExecutionInfoT&& value) { SetExecutionInfo(std::forward<ExecutionInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_taskName;
    bool m_taskNameHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    long long m_from{0};
    bool m_fromHasBeenSet = false;

    long long m_to{0};
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
