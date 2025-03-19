/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskExecutionStatus.h>
#include <aws/datasync/model/TaskMode.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Represents a single entry in a list of DataSync task executions that's
   * returned with the <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListTaskExecutions.html">ListTaskExecutions</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskExecutionListEntry">AWS
   * API Reference</a></p>
   */
  class TaskExecutionListEntry
  {
  public:
    AWS_DATASYNC_API TaskExecutionListEntry() = default;
    AWS_DATASYNC_API TaskExecutionListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskExecutionListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a task execution.</p>
     */
    inline const Aws::String& GetTaskExecutionArn() const { return m_taskExecutionArn; }
    inline bool TaskExecutionArnHasBeenSet() const { return m_taskExecutionArnHasBeenSet; }
    template<typename TaskExecutionArnT = Aws::String>
    void SetTaskExecutionArn(TaskExecutionArnT&& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = std::forward<TaskExecutionArnT>(value); }
    template<typename TaskExecutionArnT = Aws::String>
    TaskExecutionListEntry& WithTaskExecutionArn(TaskExecutionArnT&& value) { SetTaskExecutionArn(std::forward<TaskExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a task execution. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/understand-task-statuses.html#understand-task-execution-statuses">Task
     * execution statuses</a>.</p>
     */
    inline TaskExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaskExecutionListEntry& WithStatus(TaskExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task mode that you're using. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Choosing
     * a task mode for your data transfer</a>.</p>
     */
    inline TaskMode GetTaskMode() const { return m_taskMode; }
    inline bool TaskModeHasBeenSet() const { return m_taskModeHasBeenSet; }
    inline void SetTaskMode(TaskMode value) { m_taskModeHasBeenSet = true; m_taskMode = value; }
    inline TaskExecutionListEntry& WithTaskMode(TaskMode value) { SetTaskMode(value); return *this;}
    ///@}
  private:

    Aws::String m_taskExecutionArn;
    bool m_taskExecutionArnHasBeenSet = false;

    TaskExecutionStatus m_status{TaskExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    TaskMode m_taskMode{TaskMode::NOT_SET};
    bool m_taskModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
