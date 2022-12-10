/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskExecutionStatus.h>
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
   * <p>Represents a single entry in a list of task executions.
   * <code>TaskExecutionListEntry</code> returns an array that contains a list of
   * specific invocations of a task when the <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListTaskExecutions.html">ListTaskExecutions</a>
   * operation is called.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskExecutionListEntry">AWS
   * API Reference</a></p>
   */
  class TaskExecutionListEntry
  {
  public:
    AWS_DATASYNC_API TaskExecutionListEntry();
    AWS_DATASYNC_API TaskExecutionListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskExecutionListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline const Aws::String& GetTaskExecutionArn() const{ return m_taskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline bool TaskExecutionArnHasBeenSet() const { return m_taskExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline TaskExecutionListEntry& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline TaskExecutionListEntry& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was executed.</p>
     */
    inline TaskExecutionListEntry& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}


    /**
     * <p>The status of a task execution.</p>
     */
    inline const TaskExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a task execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a task execution.</p>
     */
    inline void SetStatus(const TaskExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a task execution.</p>
     */
    inline void SetStatus(TaskExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a task execution.</p>
     */
    inline TaskExecutionListEntry& WithStatus(const TaskExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a task execution.</p>
     */
    inline TaskExecutionListEntry& WithStatus(TaskExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_taskExecutionArn;
    bool m_taskExecutionArnHasBeenSet = false;

    TaskExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
