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
    AWS_IMAGEBUILDER_API WorkflowStepMetadata();
    AWS_IMAGEBUILDER_API WorkflowStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }

    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }

    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }

    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }

    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline WorkflowStepMetadata& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}

    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline WorkflowStepMetadata& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the workflow step, assigned at runtime.</p>
     */
    inline WorkflowStepMetadata& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}


    /**
     * <p>The name of the workflow step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow step.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow step.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow step.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow step.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description of the workflow step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the workflow step.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the workflow step.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the workflow step.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the workflow step.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The step action name.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The step action name.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The step action name.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The step action name.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The step action name.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The step action name.</p>
     */
    inline WorkflowStepMetadata& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The step action name.</p>
     */
    inline WorkflowStepMetadata& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The step action name.</p>
     */
    inline WorkflowStepMetadata& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>Runtime status for the workflow step.</p>
     */
    inline const WorkflowStepExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Runtime status for the workflow step.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Runtime status for the workflow step.</p>
     */
    inline void SetStatus(const WorkflowStepExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Runtime status for the workflow step.</p>
     */
    inline void SetStatus(WorkflowStepExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Runtime status for the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithStatus(const WorkflowStepExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Runtime status for the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithStatus(WorkflowStepExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Reports on the rollback status of the step, if applicable.</p>
     */
    inline const WorkflowStepExecutionRollbackStatus& GetRollbackStatus() const{ return m_rollbackStatus; }

    /**
     * <p>Reports on the rollback status of the step, if applicable.</p>
     */
    inline bool RollbackStatusHasBeenSet() const { return m_rollbackStatusHasBeenSet; }

    /**
     * <p>Reports on the rollback status of the step, if applicable.</p>
     */
    inline void SetRollbackStatus(const WorkflowStepExecutionRollbackStatus& value) { m_rollbackStatusHasBeenSet = true; m_rollbackStatus = value; }

    /**
     * <p>Reports on the rollback status of the step, if applicable.</p>
     */
    inline void SetRollbackStatus(WorkflowStepExecutionRollbackStatus&& value) { m_rollbackStatusHasBeenSet = true; m_rollbackStatus = std::move(value); }

    /**
     * <p>Reports on the rollback status of the step, if applicable.</p>
     */
    inline WorkflowStepMetadata& WithRollbackStatus(const WorkflowStepExecutionRollbackStatus& value) { SetRollbackStatus(value); return *this;}

    /**
     * <p>Reports on the rollback status of the step, if applicable.</p>
     */
    inline WorkflowStepMetadata& WithRollbackStatus(WorkflowStepExecutionRollbackStatus&& value) { SetRollbackStatus(std::move(value)); return *this;}


    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline WorkflowStepMetadata& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline WorkflowStepMetadata& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Detailed output message that the workflow step provides at runtime.</p>
     */
    inline WorkflowStepMetadata& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline const Aws::String& GetInputs() const{ return m_inputs; }

    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline void SetInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline void SetInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline void SetInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.assign(value); }

    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithInputs(const Aws::String& value) { SetInputs(value); return *this;}

    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithInputs(Aws::String&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>Input parameters that Image Builder provides for the workflow step.</p>
     */
    inline WorkflowStepMetadata& WithInputs(const char* value) { SetInputs(value); return *this;}


    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline const Aws::String& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline void SetOutputs(const Aws::String& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline void SetOutputs(Aws::String&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline void SetOutputs(const char* value) { m_outputsHasBeenSet = true; m_outputs.assign(value); }

    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline WorkflowStepMetadata& WithOutputs(const Aws::String& value) { SetOutputs(value); return *this;}

    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline WorkflowStepMetadata& WithOutputs(Aws::String&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The file names that the workflow step created as output for this runtime
     * instance of the workflow.</p>
     */
    inline WorkflowStepMetadata& WithOutputs(const char* value) { SetOutputs(value); return *this;}


    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline WorkflowStepMetadata& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline WorkflowStepMetadata& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline WorkflowStepMetadata& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline WorkflowStepMetadata& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline WorkflowStepMetadata& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the workflow step finished.</p>
     */
    inline WorkflowStepMetadata& WithEndTime(const char* value) { SetEndTime(value); return *this;}

  private:

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    WorkflowStepExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    WorkflowStepExecutionRollbackStatus m_rollbackStatus;
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
