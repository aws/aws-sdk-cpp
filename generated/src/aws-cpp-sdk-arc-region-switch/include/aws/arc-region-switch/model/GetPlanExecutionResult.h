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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/Plan.h>
#include <aws/arc-region-switch/model/StepState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ARCRegionswitch
{
namespace Model
{
  class GetPlanExecutionResult
  {
  public:
    AWS_ARCREGIONSWITCH_API GetPlanExecutionResult() = default;
    AWS_ARCREGIONSWITCH_API GetPlanExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCREGIONSWITCH_API GetPlanExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan.</p>
     */
    inline const Aws::String& GetPlanArn() const { return m_planArn; }
    template<typename PlanArnT = Aws::String>
    void SetPlanArn(PlanArnT&& value) { m_planArnHasBeenSet = true; m_planArn = std::forward<PlanArnT>(value); }
    template<typename PlanArnT = Aws::String>
    GetPlanExecutionResult& WithPlanArn(PlanArnT&& value) { SetPlanArn(std::forward<PlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution identifier of a plan execution.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    GetPlanExecutionResult& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for the plan.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    GetPlanExecutionResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the plan execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetPlanExecutionResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment included on the plan execution.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    GetPlanExecutionResult& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the plan execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetPlanExecutionResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the plan execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetPlanExecutionResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan execution mode. Valid values are <code>Practice</code>, for testing
     * without making actual changes, or <code>Recovery</code>, for actual traffic
     * shifting and application recovery.</p>
     */
    inline ExecutionMode GetMode() const { return m_mode; }
    inline void SetMode(ExecutionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline GetPlanExecutionResult& WithMode(ExecutionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan execution state. Provides the state of a plan execution, for
     * example, In Progress or Paused by Operator.</p>
     */
    inline ExecutionState GetExecutionState() const { return m_executionState; }
    inline void SetExecutionState(ExecutionState value) { m_executionStateHasBeenSet = true; m_executionState = value; }
    inline GetPlanExecutionResult& WithExecutionState(ExecutionState value) { SetExecutionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan execution action. Valid values are <code>Activate</code>, to
     * activate an Amazon Web Services Region, or <code>Deactivate</code>, to
     * deactivate a Region.</p>
     */
    inline ExecutionAction GetExecutionAction() const { return m_executionAction; }
    inline void SetExecutionAction(ExecutionAction value) { m_executionActionHasBeenSet = true; m_executionAction = value; }
    inline GetPlanExecutionResult& WithExecutionAction(ExecutionAction value) { SetExecutionAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for a plan execution.</p>
     */
    inline const Aws::String& GetExecutionRegion() const { return m_executionRegion; }
    template<typename ExecutionRegionT = Aws::String>
    void SetExecutionRegion(ExecutionRegionT&& value) { m_executionRegionHasBeenSet = true; m_executionRegion = std::forward<ExecutionRegionT>(value); }
    template<typename ExecutionRegionT = Aws::String>
    GetPlanExecutionResult& WithExecutionRegion(ExecutionRegionT&& value) { SetExecutionRegion(std::forward<ExecutionRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The states of the steps in the plan execution.</p>
     */
    inline const Aws::Vector<StepState>& GetStepStates() const { return m_stepStates; }
    template<typename StepStatesT = Aws::Vector<StepState>>
    void SetStepStates(StepStatesT&& value) { m_stepStatesHasBeenSet = true; m_stepStates = std::forward<StepStatesT>(value); }
    template<typename StepStatesT = Aws::Vector<StepState>>
    GetPlanExecutionResult& WithStepStates(StepStatesT&& value) { SetStepStates(std::forward<StepStatesT>(value)); return *this;}
    template<typename StepStatesT = StepState>
    GetPlanExecutionResult& AddStepStates(StepStatesT&& value) { m_stepStatesHasBeenSet = true; m_stepStates.emplace_back(std::forward<StepStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the Region switch plan.</p>
     */
    inline const Plan& GetPlan() const { return m_plan; }
    template<typename PlanT = Plan>
    void SetPlan(PlanT&& value) { m_planHasBeenSet = true; m_plan = std::forward<PlanT>(value); }
    template<typename PlanT = Plan>
    GetPlanExecutionResult& WithPlan(PlanT&& value) { SetPlan(std::forward<PlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual recovery time that Region switch calculates for a plan execution.
     * Actual recovery time includes the time for the plan to run added to the time
     * elapsed until the application health alarms that you've specified are healthy
     * again.</p>
     */
    inline const Aws::String& GetActualRecoveryTime() const { return m_actualRecoveryTime; }
    template<typename ActualRecoveryTimeT = Aws::String>
    void SetActualRecoveryTime(ActualRecoveryTimeT&& value) { m_actualRecoveryTimeHasBeenSet = true; m_actualRecoveryTime = std::forward<ActualRecoveryTimeT>(value); }
    template<typename ActualRecoveryTimeT = Aws::String>
    GetPlanExecutionResult& WithActualRecoveryTime(ActualRecoveryTimeT&& value) { SetActualRecoveryTime(std::forward<ActualRecoveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>nextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>nextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPlanExecutionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPlanExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Vector<StepState> m_stepStates;
    bool m_stepStatesHasBeenSet = false;

    Plan m_plan;
    bool m_planHasBeenSet = false;

    Aws::String m_actualRecoveryTime;
    bool m_actualRecoveryTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
