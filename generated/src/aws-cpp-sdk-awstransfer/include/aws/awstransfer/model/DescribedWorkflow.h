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
    AWS_TRANSFER_API DescribedWorkflow() = default;
    AWS_TRANSFER_API DescribedWorkflow(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedWorkflow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the workflow.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribedWorkflow& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the text description for the workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribedWorkflow& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline const Aws::Vector<WorkflowStep>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<WorkflowStep>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<WorkflowStep>>
    DescribedWorkflow& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = WorkflowStep>
    DescribedWorkflow& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline const Aws::Vector<WorkflowStep>& GetOnExceptionSteps() const { return m_onExceptionSteps; }
    inline bool OnExceptionStepsHasBeenSet() const { return m_onExceptionStepsHasBeenSet; }
    template<typename OnExceptionStepsT = Aws::Vector<WorkflowStep>>
    void SetOnExceptionSteps(OnExceptionStepsT&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps = std::forward<OnExceptionStepsT>(value); }
    template<typename OnExceptionStepsT = Aws::Vector<WorkflowStep>>
    DescribedWorkflow& WithOnExceptionSteps(OnExceptionStepsT&& value) { SetOnExceptionSteps(std::forward<OnExceptionStepsT>(value)); return *this;}
    template<typename OnExceptionStepsT = WorkflowStep>
    DescribedWorkflow& AddOnExceptionSteps(OnExceptionStepsT&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps.emplace_back(std::forward<OnExceptionStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    DescribedWorkflow& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for workflows. Tags are
     * metadata attached to workflows for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribedWorkflow& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribedWorkflow& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
