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
    AWS_IMAGEBUILDER_API WorkflowStepExecution();
    AWS_IMAGEBUILDER_API WorkflowStepExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowStepExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }
    inline WorkflowStepExecution& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}
    inline WorkflowStepExecution& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}
    inline WorkflowStepExecution& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = value; }
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::move(value); }
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn.assign(value); }
    inline WorkflowStepExecution& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}
    inline WorkflowStepExecution& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}
    inline WorkflowStepExecution& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const{ return m_workflowExecutionId; }
    inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }
    inline void SetWorkflowExecutionId(const Aws::String& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = value; }
    inline void SetWorkflowExecutionId(Aws::String&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::move(value); }
    inline void SetWorkflowExecutionId(const char* value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId.assign(value); }
    inline WorkflowStepExecution& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}
    inline WorkflowStepExecution& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}
    inline WorkflowStepExecution& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }
    inline bool WorkflowBuildVersionArnHasBeenSet() const { return m_workflowBuildVersionArnHasBeenSet; }
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = value; }
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::move(value); }
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn.assign(value); }
    inline WorkflowStepExecution& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}
    inline WorkflowStepExecution& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}
    inline WorkflowStepExecution& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkflowStepExecution& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowStepExecution& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowStepExecution& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step action.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline WorkflowStepExecution& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline WorkflowStepExecution& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline WorkflowStepExecution& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline WorkflowStepExecution& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline WorkflowStepExecution& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline WorkflowStepExecution& WithStartTime(const char* value) { SetStartTime(value); return *this;}
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
