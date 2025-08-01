/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-region-switch/model/ExecutionMode.h>
#include <aws/arc-region-switch/model/ExecutionState.h>
#include <aws/arc-region-switch/model/ExecutionAction.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>A summarized representation of a plan execution. This structure contains key
   * information about an execution without all the detailed step data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/AbbreviatedExecution">AWS
   * API Reference</a></p>
   */
  class AbbreviatedExecution
  {
  public:
    AWS_ARCREGIONSWITCH_API AbbreviatedExecution() = default;
    AWS_ARCREGIONSWITCH_API AbbreviatedExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API AbbreviatedExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan.</p>
     */
    inline const Aws::String& GetPlanArn() const { return m_planArn; }
    inline bool PlanArnHasBeenSet() const { return m_planArnHasBeenSet; }
    template<typename PlanArnT = Aws::String>
    void SetPlanArn(PlanArnT&& value) { m_planArnHasBeenSet = true; m_planArn = std::forward<PlanArnT>(value); }
    template<typename PlanArnT = Aws::String>
    AbbreviatedExecution& WithPlanArn(PlanArnT&& value) { SetPlanArn(std::forward<PlanArnT>(value)); return *this;}
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
    AbbreviatedExecution& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for the plan.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AbbreviatedExecution& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the plan execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AbbreviatedExecution& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
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
    AbbreviatedExecution& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the plan execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AbbreviatedExecution& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the plan execution was ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AbbreviatedExecution& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
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
    inline AbbreviatedExecution& WithMode(ExecutionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan execution state. Provides the state of a plan execution, for
     * example, In Progress or Paused by Operator.</p>
     */
    inline ExecutionState GetExecutionState() const { return m_executionState; }
    inline bool ExecutionStateHasBeenSet() const { return m_executionStateHasBeenSet; }
    inline void SetExecutionState(ExecutionState value) { m_executionStateHasBeenSet = true; m_executionState = value; }
    inline AbbreviatedExecution& WithExecutionState(ExecutionState value) { SetExecutionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan execution action. Valid values are <code>Activate</code>, to
     * activate an Amazon Web Services Region, or <code>Deactivate</code>, to
     * deactivate a Region.</p>
     */
    inline ExecutionAction GetExecutionAction() const { return m_executionAction; }
    inline bool ExecutionActionHasBeenSet() const { return m_executionActionHasBeenSet; }
    inline void SetExecutionAction(ExecutionAction value) { m_executionActionHasBeenSet = true; m_executionAction = value; }
    inline AbbreviatedExecution& WithExecutionAction(ExecutionAction value) { SetExecutionAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for a plan execution.</p>
     */
    inline const Aws::String& GetExecutionRegion() const { return m_executionRegion; }
    inline bool ExecutionRegionHasBeenSet() const { return m_executionRegionHasBeenSet; }
    template<typename ExecutionRegionT = Aws::String>
    void SetExecutionRegion(ExecutionRegionT&& value) { m_executionRegionHasBeenSet = true; m_executionRegion = std::forward<ExecutionRegionT>(value); }
    template<typename ExecutionRegionT = Aws::String>
    AbbreviatedExecution& WithExecutionRegion(ExecutionRegionT&& value) { SetExecutionRegion(std::forward<ExecutionRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual recovery time that Region switch calculates for a plan execution.
     * Actual recovery time includes the time for the plan to run added to the time
     * elapsed until the application health alarms that you've specified are healthy
     * again.</p>
     */
    inline const Aws::String& GetActualRecoveryTime() const { return m_actualRecoveryTime; }
    inline bool ActualRecoveryTimeHasBeenSet() const { return m_actualRecoveryTimeHasBeenSet; }
    template<typename ActualRecoveryTimeT = Aws::String>
    void SetActualRecoveryTime(ActualRecoveryTimeT&& value) { m_actualRecoveryTimeHasBeenSet = true; m_actualRecoveryTime = std::forward<ActualRecoveryTimeT>(value); }
    template<typename ActualRecoveryTimeT = Aws::String>
    AbbreviatedExecution& WithActualRecoveryTime(ActualRecoveryTimeT&& value) { SetActualRecoveryTime(std::forward<ActualRecoveryTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_planArn;
    bool m_planArnHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ExecutionMode m_mode{ExecutionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    ExecutionState m_executionState{ExecutionState::NOT_SET};
    bool m_executionStateHasBeenSet = false;

    ExecutionAction m_executionAction{ExecutionAction::NOT_SET};
    bool m_executionActionHasBeenSet = false;

    Aws::String m_executionRegion;
    bool m_executionRegionHasBeenSet = false;

    Aws::String m_actualRecoveryTime;
    bool m_actualRecoveryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
