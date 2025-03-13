/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/TaskParameterValue.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The task, step, and parameters for the task run in the session
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/TaskRunSessionActionDefinition">AWS
   * API Reference</a></p>
   */
  class TaskRunSessionActionDefinition
  {
  public:
    AWS_DEADLINE_API TaskRunSessionActionDefinition() = default;
    AWS_DEADLINE_API TaskRunSessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API TaskRunSessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    TaskRunSessionActionDefinition& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const { return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    template<typename StepIdT = Aws::String>
    void SetStepId(StepIdT&& value) { m_stepIdHasBeenSet = true; m_stepId = std::forward<StepIdT>(value); }
    template<typename StepIdT = Aws::String>
    TaskRunSessionActionDefinition& WithStepId(StepIdT&& value) { SetStepId(std::forward<StepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task parameters.</p>
     */
    inline const Aws::Map<Aws::String, TaskParameterValue>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, TaskParameterValue>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, TaskParameterValue>>
    TaskRunSessionActionDefinition& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = TaskParameterValue>
    TaskRunSessionActionDefinition& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::Map<Aws::String, TaskParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
