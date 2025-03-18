/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowStepExecutionStatus.h>
#include <aws/imagebuilder/model/WorkflowStepExecutionRollbackStatus.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Runtime details and status for the workflow step.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WorkflowStepMetadata">AWS
   * API Reference</a></p>
   */
  class WorkflowStepMetadata
  {
  public:
    AWS_IMAGEBUILDER_API WorkflowStepMetadata() = default;
    AWS_IMAGEBUILDER_API WorkflowStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline const Aws::String& GetStepExecutionId() const { return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    template<typename StepExecutionIdT = Aws::String>
    void SetStepExecutionId(StepExecutionIdT&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::forward<StepExecutionIdT>(value); }
    template<typename StepExecutionIdT = Aws::String>
    WorkflowStepMetadata& WithStepExecutionId(StepExecutionIdT&& value) { SetStepExecutionId(std::forward<StepExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkflowStepMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the workflow step.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkflowStepMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step action name.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    WorkflowStepMetadata& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime status for the workflow step.</p>
     */
    inline WorkflowStepExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkflowStepExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkflowStepMetadata& WithStatus(WorkflowStepExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports on the rollback status of the step, if applicable.</p>
     */
    inline WorkflowStepExecutionRollbackStatus GetRollbackStatus() const { return m_rollbackStatus; }
    inline bool RollbackStatusHasBeenSet() const { return m_rollbackStatusHasBeenSet; }
    inline void SetRollbackStatus(WorkflowStepExecutionRollbackStatus value) { m_rollbackStatusHasBeenSet = true; m_rollbackStatus = value; }
    inline WorkflowStepMetadata& WithRollbackStatus(WorkflowStepExecutionRollbackStatus value) { SetRollbackStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    WorkflowStepMetadata& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline const Aws::String& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::String>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::String>
    WorkflowStepMetadata& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline const Aws::String& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::String>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::String>
    WorkflowStepMetadata& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    WorkflowStepMetadata& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    WorkflowStepMetadata& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    WorkflowStepExecutionStatus m_status{WorkflowStepExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    WorkflowStepExecutionRollbackStatus m_rollbackStatus{WorkflowStepExecutionRollbackStatus::NOT_SET};
    bool m_rollbackStatusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
