/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains runtime details for an instance of a workflow that ran for the
   * associated image build version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WorkflowStepExecution">AWS
   * API Reference</a></p>
   */
  class WorkflowStepExecution
  {
  public:
    AWS_IMAGEBUILDER_API WorkflowStepExecution() = default;
    AWS_IMAGEBUILDER_API WorkflowStepExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowStepExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline const Aws::String& GetStepExecutionId() const { return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    template<typename StepExecutionIdT = Aws::String>
    void SetStepExecutionId(StepExecutionIdT&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::forward<StepExecutionIdT>(value); }
    template<typename StepExecutionIdT = Aws::String>
    WorkflowStepExecution& WithStepExecutionId(StepExecutionIdT&& value) { SetStepExecutionId(std::forward<StepExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }
    template<typename ImageBuildVersionArnT = Aws::String>
    void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value); }
    template<typename ImageBuildVersionArnT = Aws::String>
    WorkflowStepExecution& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) { SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const { return m_workflowExecutionId; }
    inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }
    template<typename WorkflowExecutionIdT = Aws::String>
    void SetWorkflowExecutionId(WorkflowExecutionIdT&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::forward<WorkflowExecutionIdT>(value); }
    template<typename WorkflowExecutionIdT = Aws::String>
    WorkflowStepExecution& WithWorkflowExecutionId(WorkflowExecutionIdT&& value) { SetWorkflowExecutionId(std::forward<WorkflowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const { return m_workflowBuildVersionArn; }
    inline bool WorkflowBuildVersionArnHasBeenSet() const { return m_workflowBuildVersionArnHasBeenSet; }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    void SetWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::forward<WorkflowBuildVersionArnT>(value); }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    WorkflowStepExecution& WithWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { SetWorkflowBuildVersionArn(std::forward<WorkflowBuildVersionArnT>(value)); return *this;}
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
    WorkflowStepExecution& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step action.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    WorkflowStepExecution& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
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
    WorkflowStepExecution& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

    Aws::String m_workflowExecutionId;
    bool m_workflowExecutionIdHasBeenSet = false;

    Aws::String m_workflowBuildVersionArn;
    bool m_workflowBuildVersionArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
