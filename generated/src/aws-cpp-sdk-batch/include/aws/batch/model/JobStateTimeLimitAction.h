/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobStateTimeLimitActionsState.h>
#include <aws/batch/model/JobStateTimeLimitActionsAction.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Specifies an action that Batch will take after the job has remained at the
   * head of the queue in the specified state for longer than the specified
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobStateTimeLimitAction">AWS
   * API Reference</a></p>
   */
  class JobStateTimeLimitAction
  {
  public:
    AWS_BATCH_API JobStateTimeLimitAction() = default;
    AWS_BATCH_API JobStateTimeLimitAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobStateTimeLimitAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    JobStateTimeLimitAction& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the job needed to trigger the action. The only supported value
     * is <code>RUNNABLE</code>.</p>
     */
    inline JobStateTimeLimitActionsState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JobStateTimeLimitActionsState value) { m_stateHasBeenSet = true; m_state = value; }
    inline JobStateTimeLimitAction& WithState(JobStateTimeLimitActionsState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate amount of time, in seconds, that must pass with the job in
     * the specified state before the action is taken. The minimum value is 600 (10
     * minutes) and the maximum value is 86,400 (24 hours).</p>
     */
    inline int GetMaxTimeSeconds() const { return m_maxTimeSeconds; }
    inline bool MaxTimeSecondsHasBeenSet() const { return m_maxTimeSecondsHasBeenSet; }
    inline void SetMaxTimeSeconds(int value) { m_maxTimeSecondsHasBeenSet = true; m_maxTimeSeconds = value; }
    inline JobStateTimeLimitAction& WithMaxTimeSeconds(int value) { SetMaxTimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when a job is at the head of the job queue in the
     * specified state for the specified period of time. The only supported value is
     * <code>CANCEL</code>, which will cancel the job.</p>
     */
    inline JobStateTimeLimitActionsAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(JobStateTimeLimitActionsAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline JobStateTimeLimitAction& WithAction(JobStateTimeLimitActionsAction value) { SetAction(value); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    JobStateTimeLimitActionsState m_state{JobStateTimeLimitActionsState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_maxTimeSeconds{0};
    bool m_maxTimeSecondsHasBeenSet = false;

    JobStateTimeLimitActionsAction m_action{JobStateTimeLimitActionsAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
