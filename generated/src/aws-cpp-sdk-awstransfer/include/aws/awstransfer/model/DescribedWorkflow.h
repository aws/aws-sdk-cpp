/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/WorkflowStep.h>
#include <aws/awstransfer/model/Tag.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Describes the properties of the specified workflow</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedWorkflow">AWS
   * API Reference</a></p>
   */
  class DescribedWorkflow
  {
  public:
    AWS_TRANSFER_API DescribedWorkflow();
    AWS_TRANSFER_API DescribedWorkflow(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedWorkflow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline DescribedWorkflow& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline DescribedWorkflow& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline DescribedWorkflow& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline DescribedWorkflow& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline DescribedWorkflow& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline DescribedWorkflow& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline const Aws::Vector<WorkflowStep>& GetSteps() const{ return m_steps; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline void SetSteps(const Aws::Vector<WorkflowStep>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline void SetSteps(Aws::Vector<WorkflowStep>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline DescribedWorkflow& WithSteps(const Aws::Vector<WorkflowStep>& value) { SetSteps(value); return *this;}

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline DescribedWorkflow& WithSteps(Aws::Vector<WorkflowStep>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline DescribedWorkflow& AddSteps(const WorkflowStep& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline DescribedWorkflow& AddSteps(WorkflowStep&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline const Aws::Vector<WorkflowStep>& GetOnExceptionSteps() const{ return m_onExceptionSteps; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline bool OnExceptionStepsHasBeenSet() const { return m_onExceptionStepsHasBeenSet; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline void SetOnExceptionSteps(const Aws::Vector<WorkflowStep>& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps = value; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline void SetOnExceptionSteps(Aws::Vector<WorkflowStep>&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps = std::move(value); }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline DescribedWorkflow& WithOnExceptionSteps(const Aws::Vector<WorkflowStep>& value) { SetOnExceptionSteps(value); return *this;}

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline DescribedWorkflow& WithOnExceptionSteps(Aws::Vector<WorkflowStep>&& value) { SetOnExceptionSteps(std::move(value)); return *this;}

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline DescribedWorkflow& AddOnExceptionSteps(const WorkflowStep& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps.push_back(value); return *this; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline DescribedWorkflow& AddOnExceptionSteps(WorkflowStep&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribedWorkflow& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribedWorkflow& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribedWorkflow& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline DescribedWorkflow& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline DescribedWorkflow& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline DescribedWorkflow& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline DescribedWorkflow& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<WorkflowStep> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Vector<WorkflowStep> m_onExceptionSteps;
    bool m_onExceptionStepsHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
