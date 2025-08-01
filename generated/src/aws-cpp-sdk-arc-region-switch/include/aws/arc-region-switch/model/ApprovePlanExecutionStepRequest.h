/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/Approval.h>
#include <utility>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

  /**
   */
  class ApprovePlanExecutionStepRequest : public ARCRegionswitchRequest
  {
  public:
    AWS_ARCREGIONSWITCH_API ApprovePlanExecutionStepRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApprovePlanExecutionStep"; }

    AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

    AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan.</p>
     */
    inline const Aws::String& GetPlanArn() const { return m_planArn; }
    inline bool PlanArnHasBeenSet() const { return m_planArnHasBeenSet; }
    template<typename PlanArnT = Aws::String>
    void SetPlanArn(PlanArnT&& value) { m_planArnHasBeenSet = true; m_planArn = std::forward<PlanArnT>(value); }
    template<typename PlanArnT = Aws::String>
    ApprovePlanExecutionStepRequest& WithPlanArn(PlanArnT&& value) { SetPlanArn(std::forward<PlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution identifier of a plan execution.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    ApprovePlanExecutionStepRequest& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a step in a plan execution.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    ApprovePlanExecutionStepRequest& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of approval for a plan execution step. </p>
     */
    inline Approval GetApproval() const { return m_approval; }
    inline bool ApprovalHasBeenSet() const { return m_approvalHasBeenSet; }
    inline void SetApproval(Approval value) { m_approvalHasBeenSet = true; m_approval = value; }
    inline ApprovePlanExecutionStepRequest& WithApproval(Approval value) { SetApproval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment that you can enter about a plan execution.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    ApprovePlanExecutionStepRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_planArn;
    bool m_planArnHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Approval m_approval{Approval::NOT_SET};
    bool m_approvalHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
