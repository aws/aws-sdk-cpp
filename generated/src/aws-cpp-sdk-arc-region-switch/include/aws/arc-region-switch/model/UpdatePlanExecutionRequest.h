/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionAction.h>
#include <utility>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

  /**
   */
  class UpdatePlanExecutionRequest : public ARCRegionswitchRequest
  {
  public:
    AWS_ARCREGIONSWITCH_API UpdatePlanExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePlanExecution"; }

    AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

    AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan with the execution to update.</p>
     */
    inline const Aws::String& GetPlanArn() const { return m_planArn; }
    inline bool PlanArnHasBeenSet() const { return m_planArnHasBeenSet; }
    template<typename PlanArnT = Aws::String>
    void SetPlanArn(PlanArnT&& value) { m_planArnHasBeenSet = true; m_planArn = std::forward<PlanArnT>(value); }
    template<typename PlanArnT = Aws::String>
    UpdatePlanExecutionRequest& WithPlanArn(PlanArnT&& value) { SetPlanArn(std::forward<PlanArnT>(value)); return *this;}
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
    UpdatePlanExecutionRequest& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action specified for a plan execution, for example, Switch to Graceful or
     * Pause.</p>
     */
    inline UpdatePlanExecutionAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(UpdatePlanExecutionAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdatePlanExecutionRequest& WithAction(UpdatePlanExecutionAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment about the plan execution.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    UpdatePlanExecutionRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_planArn;
    bool m_planArnHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    UpdatePlanExecutionAction m_action{UpdatePlanExecutionAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
