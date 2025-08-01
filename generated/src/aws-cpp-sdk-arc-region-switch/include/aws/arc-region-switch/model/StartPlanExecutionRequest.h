/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/ExecutionAction.h>
#include <aws/arc-region-switch/model/ExecutionMode.h>
#include <utility>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

  /**
   */
  class StartPlanExecutionRequest : public ARCRegionswitchRequest
  {
  public:
    AWS_ARCREGIONSWITCH_API StartPlanExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPlanExecution"; }

    AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

    AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan to execute.</p>
     */
    inline const Aws::String& GetPlanArn() const { return m_planArn; }
    inline bool PlanArnHasBeenSet() const { return m_planArnHasBeenSet; }
    template<typename PlanArnT = Aws::String>
    void SetPlanArn(PlanArnT&& value) { m_planArnHasBeenSet = true; m_planArn = std::forward<PlanArnT>(value); }
    template<typename PlanArnT = Aws::String>
    StartPlanExecutionRequest& WithPlanArn(PlanArnT&& value) { SetPlanArn(std::forward<PlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region to target with this execution. This is the
     * Region that traffic will be shifted to or from, depending on the action.</p>
     */
    inline const Aws::String& GetTargetRegion() const { return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    template<typename TargetRegionT = Aws::String>
    void SetTargetRegion(TargetRegionT&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::forward<TargetRegionT>(value); }
    template<typename TargetRegionT = Aws::String>
    StartPlanExecutionRequest& WithTargetRegion(TargetRegionT&& value) { SetTargetRegion(std::forward<TargetRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform. Valid values are ACTIVATE (to shift traffic to the
     * target Region) or DEACTIVATE (to shift traffic away from the target Region).</p>
     */
    inline ExecutionAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ExecutionAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline StartPlanExecutionRequest& WithAction(ExecutionAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan execution mode. Valid values are <code>Practice</code>, for testing
     * without making actual changes, or <code>Recovery</code>, for actual traffic
     * shifting and application recovery.</p>
     */
    inline ExecutionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ExecutionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline StartPlanExecutionRequest& WithMode(ExecutionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment explaining why the plan execution is being started.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    StartPlanExecutionRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether to use the latest version of the plan. If
     * set to false, you must specify a specific version.</p>
     */
    inline const Aws::String& GetLatestVersion() const { return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    template<typename LatestVersionT = Aws::String>
    void SetLatestVersion(LatestVersionT&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::forward<LatestVersionT>(value); }
    template<typename LatestVersionT = Aws::String>
    StartPlanExecutionRequest& WithLatestVersion(LatestVersionT&& value) { SetLatestVersion(std::forward<LatestVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_planArn;
    bool m_planArnHasBeenSet = false;

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet = false;

    ExecutionAction m_action{ExecutionAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    ExecutionMode m_mode{ExecutionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
