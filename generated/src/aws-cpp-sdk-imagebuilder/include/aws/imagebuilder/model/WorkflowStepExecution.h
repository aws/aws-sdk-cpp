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


    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }

    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }

    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }

    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }

    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }

    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline WorkflowStepExecution& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}

    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline WorkflowStepExecution& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the workflow step that ran for the associated image build
     * version.</p>
     */
    inline WorkflowStepExecution& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline WorkflowStepExecution& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline WorkflowStepExecution& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that ran the
     * workflow.</p>
     */
    inline WorkflowStepExecution& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}


    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const{ return m_workflowExecutionId; }

    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }

    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline void SetWorkflowExecutionId(const Aws::String& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = value; }

    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline void SetWorkflowExecutionId(Aws::String&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::move(value); }

    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline void SetWorkflowExecutionId(const char* value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId.assign(value); }

    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline WorkflowStepExecution& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}

    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline WorkflowStepExecution& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the runtime instance of the workflow that contains the
     * workflow step that ran for the associated image build version.</p>
     */
    inline WorkflowStepExecution& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}


    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }

    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline bool WorkflowBuildVersionArnHasBeenSet() const { return m_workflowBuildVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = value; }

    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::move(value); }

    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn.assign(value); }

    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline WorkflowStepExecution& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}

    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline WorkflowStepExecution& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the workflow resource that ran.</p>
     */
    inline WorkflowStepExecution& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}


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
    inline WorkflowStepExecution& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow step.</p>
     */
    inline WorkflowStepExecution& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow step.</p>
     */
    inline WorkflowStepExecution& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the step action.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The name of the step action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The name of the step action.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The name of the step action.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The name of the step action.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The name of the step action.</p>
     */
    inline WorkflowStepExecution& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The name of the step action.</p>
     */
    inline WorkflowStepExecution& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The name of the step action.</p>
     */
    inline WorkflowStepExecution& WithAction(const char* value) { SetAction(value); return *this;}


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
    inline WorkflowStepExecution& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline WorkflowStepExecution& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the workflow step started.</p>
     */
    inline WorkflowStepExecution& WithStartTime(const char* value) { SetStartTime(value); return *this;}

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
