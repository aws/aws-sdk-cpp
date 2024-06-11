/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowStepActionType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class SendWorkflowStepActionRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API SendWorkflowStepActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendWorkflowStepAction"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Uniquely identifies the workflow step that sent the step action.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }
    inline SendWorkflowStepActionRequest& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}
    inline SendWorkflowStepActionRequest& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}
    inline SendWorkflowStepActionRequest& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image build version to send action
     * for.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = value; }
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::move(value); }
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn.assign(value); }
    inline SendWorkflowStepActionRequest& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}
    inline SendWorkflowStepActionRequest& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}
    inline SendWorkflowStepActionRequest& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for the image creation process to take while a workflow
     * <code>WaitForAction</code> step waits for an asynchronous action to
     * complete.</p>
     */
    inline const WorkflowStepActionType& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const WorkflowStepActionType& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(WorkflowStepActionType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline SendWorkflowStepActionRequest& WithAction(const WorkflowStepActionType& value) { SetAction(value); return *this;}
    inline SendWorkflowStepActionRequest& WithAction(WorkflowStepActionType&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why this action is sent.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline SendWorkflowStepActionRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline SendWorkflowStepActionRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline SendWorkflowStepActionRequest& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline SendWorkflowStepActionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline SendWorkflowStepActionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline SendWorkflowStepActionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

    WorkflowStepActionType m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
