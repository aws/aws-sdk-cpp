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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{
  class GetWorkflowStepExecutionResult
  {
  public:
    AWS_IMAGEBUILDER_API GetWorkflowStepExecutionResult() = default;
    AWS_IMAGEBUILDER_API GetWorkflowStepExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetWorkflowStepExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowStepExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline const Aws::String& GetStepExecutionId() const { return m_stepExecutionId; }
    template<typename StepExecutionIdT = Aws::String>
    void SetStepExecutionId(StepExecutionIdT&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::forward<StepExecutionIdT>(value); }
    template<typename StepExecutionIdT = Aws::String>
    GetWorkflowStepExecutionResult& WithStepExecutionId(StepExecutionIdT&& value) { SetStepExecutionId(std::forward<StepExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const { return m_workflowBuildVersionArn; }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    void SetWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::forward<WorkflowBuildVersionArnT>(value); }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    GetWorkflowStepExecutionResult& WithWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { SetWorkflowBuildVersionArn(std::forward<WorkflowBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const { return m_workflowExecutionId; }
    template<typename WorkflowExecutionIdT = Aws::String>
    void SetWorkflowExecutionId(WorkflowExecutionIdT&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::forward<WorkflowExecutionIdT>(value); }
    template<typename WorkflowExecutionIdT = Aws::String>
    GetWorkflowStepExecutionResult& WithWorkflowExecutionId(WorkflowExecutionIdT&& value) { SetWorkflowExecutionId(std::forward<WorkflowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
    template<typename ImageBuildVersionArnT = Aws::String>
    void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value); }
    template<typename ImageBuildVersionArnT = Aws::String>
    GetWorkflowStepExecutionResult& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) { SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetWorkflowStepExecutionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetWorkflowStepExecutionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    GetWorkflowStepExecutionResult& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the specified runtime version of the workflow
     * step.</p>
     */
    inline WorkflowStepExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(WorkflowStepExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowStepExecutionResult& WithStatus(WorkflowStepExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports on the rollback status of the specified runtime version of the
     * workflow step, if applicable.</p>
     */
    inline WorkflowStepExecutionRollbackStatus GetRollbackStatus() const { return m_rollbackStatus; }
    inline void SetRollbackStatus(WorkflowStepExecutionRollbackStatus value) { m_rollbackStatusHasBeenSet = true; m_rollbackStatus = value; }
    inline GetWorkflowStepExecutionResult& WithRollbackStatus(WorkflowStepExecutionRollbackStatus value) { SetRollbackStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetWorkflowStepExecutionResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline const Aws::String& GetInputs() const { return m_inputs; }
    template<typename InputsT = Aws::String>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::String>
    GetWorkflowStepExecutionResult& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline const Aws::String& GetOutputs() const { return m_outputs; }
    template<typename OutputsT = Aws::String>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::String>
    GetWorkflowStepExecutionResult& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    GetWorkflowStepExecutionResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    GetWorkflowStepExecutionResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline const Aws::String& GetOnFailure() const { return m_onFailure; }
    template<typename OnFailureT = Aws::String>
    void SetOnFailure(OnFailureT&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::forward<OnFailureT>(value); }
    template<typename OnFailureT = Aws::String>
    GetWorkflowStepExecutionResult& WithOnFailure(OnFailureT&& value) { SetOnFailure(std::forward<OnFailureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration in seconds for this step to complete its action.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline GetWorkflowStepExecutionResult& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::String m_workflowBuildVersionArn;
    bool m_workflowBuildVersionArnHasBeenSet = false;

    Aws::String m_workflowExecutionId;
    bool m_workflowExecutionIdHasBeenSet = false;

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

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

    Aws::String m_onFailure;
    bool m_onFailureHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
