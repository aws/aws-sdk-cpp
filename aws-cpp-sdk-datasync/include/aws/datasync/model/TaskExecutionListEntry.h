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
   * specific invocations of a task when <a>ListTaskExecutions</a> operation is
   * called.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskExecutionListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API TaskExecutionListEntry
  {
  public:
    TaskExecutionListEntry();
    TaskExecutionListEntry(Aws::Utils::Json::JsonView jsonValue);
    TaskExecutionListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_taskExecutionArnHasBeenSet;

    TaskExecutionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
