/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/WorkflowStep.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class CreateWorkflowRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API CreateWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A textual description for the workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateWorkflowRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     * <p> The <code>TYPE</code> specifies which of the following actions is being
     * taken for this step. </p> <ul> <li> <p> <b> <code>COPY</code> </b> - Copy the
     * file to another location.</p> </li> <li> <p> <b> <code>CUSTOM</code> </b> -
     * Perform a custom step with an Lambda function target.</p> </li> <li> <p> <b>
     * <code>DECRYPT</code> </b> - Decrypt a file that was encrypted before it was
     * uploaded.</p> </li> <li> <p> <b> <code>DELETE</code> </b> - Delete the file.</p>
     * </li> <li> <p> <b> <code>TAG</code> </b> - Add a tag to the file.</p> </li>
     * </ul>  <p> Currently, copying and tagging are supported only on S3. </p>
     *  <p> For file location, you specify either the Amazon S3 bucket and key,
     * or the Amazon EFS file system ID and path. </p>
     */
    inline const Aws::Vector<WorkflowStep>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<WorkflowStep>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<WorkflowStep>>
    CreateWorkflowRequest& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = WorkflowStep>
    CreateWorkflowRequest& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>  <p>For custom steps, the Lambda function
     * needs to send <code>FAILURE</code> to the call back API to kick off the
     * exception steps. Additionally, if the Lambda does not send <code>SUCCESS</code>
     * before it times out, the exception steps are executed.</p> 
     */
    inline const Aws::Vector<WorkflowStep>& GetOnExceptionSteps() const { return m_onExceptionSteps; }
    inline bool OnExceptionStepsHasBeenSet() const { return m_onExceptionStepsHasBeenSet; }
    template<typename OnExceptionStepsT = Aws::Vector<WorkflowStep>>
    void SetOnExceptionSteps(OnExceptionStepsT&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps = std::forward<OnExceptionStepsT>(value); }
    template<typename OnExceptionStepsT = Aws::Vector<WorkflowStep>>
    CreateWorkflowRequest& WithOnExceptionSteps(OnExceptionStepsT&& value) { SetOnExceptionSteps(std::forward<OnExceptionStepsT>(value)); return *this;}
    template<typename OnExceptionStepsT = WorkflowStep>
    CreateWorkflowRequest& AddOnExceptionSteps(OnExceptionStepsT&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps.emplace_back(std::forward<OnExceptionStepsT>(value)); return *this; }
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
    CreateWorkflowRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWorkflowRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<WorkflowStep> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Vector<WorkflowStep> m_onExceptionSteps;
    bool m_onExceptionStepsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
