/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TaskType.h>
#include <aws/glue/model/TaskStatusType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The criteria that are used to filter the task runs for the machine learning
   * transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TaskRunFilterCriteria">AWS
   * API Reference</a></p>
   */
  class TaskRunFilterCriteria
  {
  public:
    AWS_GLUE_API TaskRunFilterCriteria();
    AWS_GLUE_API TaskRunFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TaskRunFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of task run.</p>
     */
    inline const TaskType& GetTaskRunType() const{ return m_taskRunType; }

    /**
     * <p>The type of task run.</p>
     */
    inline bool TaskRunTypeHasBeenSet() const { return m_taskRunTypeHasBeenSet; }

    /**
     * <p>The type of task run.</p>
     */
    inline void SetTaskRunType(const TaskType& value) { m_taskRunTypeHasBeenSet = true; m_taskRunType = value; }

    /**
     * <p>The type of task run.</p>
     */
    inline void SetTaskRunType(TaskType&& value) { m_taskRunTypeHasBeenSet = true; m_taskRunType = std::move(value); }

    /**
     * <p>The type of task run.</p>
     */
    inline TaskRunFilterCriteria& WithTaskRunType(const TaskType& value) { SetTaskRunType(value); return *this;}

    /**
     * <p>The type of task run.</p>
     */
    inline TaskRunFilterCriteria& WithTaskRunType(TaskType&& value) { SetTaskRunType(std::move(value)); return *this;}


    /**
     * <p>The current status of the task run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the task run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the task run.</p>
     */
    inline void SetStatus(const TaskStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the task run.</p>
     */
    inline void SetStatus(TaskStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the task run.</p>
     */
    inline TaskRunFilterCriteria& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the task run.</p>
     */
    inline TaskRunFilterCriteria& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Filter on task runs started before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const{ return m_startedBefore; }

    /**
     * <p>Filter on task runs started before this date.</p>
     */
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }

    /**
     * <p>Filter on task runs started before this date.</p>
     */
    inline void SetStartedBefore(const Aws::Utils::DateTime& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = value; }

    /**
     * <p>Filter on task runs started before this date.</p>
     */
    inline void SetStartedBefore(Aws::Utils::DateTime&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::move(value); }

    /**
     * <p>Filter on task runs started before this date.</p>
     */
    inline TaskRunFilterCriteria& WithStartedBefore(const Aws::Utils::DateTime& value) { SetStartedBefore(value); return *this;}

    /**
     * <p>Filter on task runs started before this date.</p>
     */
    inline TaskRunFilterCriteria& WithStartedBefore(Aws::Utils::DateTime&& value) { SetStartedBefore(std::move(value)); return *this;}


    /**
     * <p>Filter on task runs started after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const{ return m_startedAfter; }

    /**
     * <p>Filter on task runs started after this date.</p>
     */
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }

    /**
     * <p>Filter on task runs started after this date.</p>
     */
    inline void SetStartedAfter(const Aws::Utils::DateTime& value) { m_startedAfterHasBeenSet = true; m_startedAfter = value; }

    /**
     * <p>Filter on task runs started after this date.</p>
     */
    inline void SetStartedAfter(Aws::Utils::DateTime&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::move(value); }

    /**
     * <p>Filter on task runs started after this date.</p>
     */
    inline TaskRunFilterCriteria& WithStartedAfter(const Aws::Utils::DateTime& value) { SetStartedAfter(value); return *this;}

    /**
     * <p>Filter on task runs started after this date.</p>
     */
    inline TaskRunFilterCriteria& WithStartedAfter(Aws::Utils::DateTime&& value) { SetStartedAfter(std::move(value)); return *this;}

  private:

    TaskType m_taskRunType;
    bool m_taskRunTypeHasBeenSet = false;

    TaskStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore;
    bool m_startedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter;
    bool m_startedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
