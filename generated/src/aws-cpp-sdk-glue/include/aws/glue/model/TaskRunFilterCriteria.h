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
    AWS_GLUE_API TaskRunFilterCriteria() = default;
    AWS_GLUE_API TaskRunFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TaskRunFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of task run.</p>
     */
    inline TaskType GetTaskRunType() const { return m_taskRunType; }
    inline bool TaskRunTypeHasBeenSet() const { return m_taskRunTypeHasBeenSet; }
    inline void SetTaskRunType(TaskType value) { m_taskRunTypeHasBeenSet = true; m_taskRunType = value; }
    inline TaskRunFilterCriteria& WithTaskRunType(TaskType value) { SetTaskRunType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the task run.</p>
     */
    inline TaskStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaskRunFilterCriteria& WithStatus(TaskStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on task runs started before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const { return m_startedBefore; }
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    void SetStartedBefore(StartedBeforeT&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::forward<StartedBeforeT>(value); }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    TaskRunFilterCriteria& WithStartedBefore(StartedBeforeT&& value) { SetStartedBefore(std::forward<StartedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on task runs started after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    void SetStartedAfter(StartedAfterT&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::forward<StartedAfterT>(value); }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    TaskRunFilterCriteria& WithStartedAfter(StartedAfterT&& value) { SetStartedAfter(std::forward<StartedAfterT>(value)); return *this;}
    ///@}
  private:

    TaskType m_taskRunType{TaskType::NOT_SET};
    bool m_taskRunTypeHasBeenSet = false;

    TaskStatusType m_status{TaskStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore{};
    bool m_startedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter{};
    bool m_startedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
