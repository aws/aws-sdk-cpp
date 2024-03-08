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
    AWS_BATCH_API JobStateTimeLimitAction();
    AWS_BATCH_API JobStateTimeLimitAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobStateTimeLimitAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline JobStateTimeLimitAction& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline JobStateTimeLimitAction& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason to log for the action being taken.</p>
     */
    inline JobStateTimeLimitAction& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The state of the job needed to trigger the action. The only supported value
     * is "<code>RUNNABLE</code>".</p>
     */
    inline const JobStateTimeLimitActionsState& GetState() const{ return m_state; }

    /**
     * <p>The state of the job needed to trigger the action. The only supported value
     * is "<code>RUNNABLE</code>".</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the job needed to trigger the action. The only supported value
     * is "<code>RUNNABLE</code>".</p>
     */
    inline void SetState(const JobStateTimeLimitActionsState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job needed to trigger the action. The only supported value
     * is "<code>RUNNABLE</code>".</p>
     */
    inline void SetState(JobStateTimeLimitActionsState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the job needed to trigger the action. The only supported value
     * is "<code>RUNNABLE</code>".</p>
     */
    inline JobStateTimeLimitAction& WithState(const JobStateTimeLimitActionsState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the job needed to trigger the action. The only supported value
     * is "<code>RUNNABLE</code>".</p>
     */
    inline JobStateTimeLimitAction& WithState(JobStateTimeLimitActionsState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The approximate amount of time, in seconds, that must pass with the job in
     * the specified state before the action is taken. The minimum value is 600 (10
     * minutes) and the maximum value is 86,400 (24 hours).</p>
     */
    inline int GetMaxTimeSeconds() const{ return m_maxTimeSeconds; }

    /**
     * <p>The approximate amount of time, in seconds, that must pass with the job in
     * the specified state before the action is taken. The minimum value is 600 (10
     * minutes) and the maximum value is 86,400 (24 hours).</p>
     */
    inline bool MaxTimeSecondsHasBeenSet() const { return m_maxTimeSecondsHasBeenSet; }

    /**
     * <p>The approximate amount of time, in seconds, that must pass with the job in
     * the specified state before the action is taken. The minimum value is 600 (10
     * minutes) and the maximum value is 86,400 (24 hours).</p>
     */
    inline void SetMaxTimeSeconds(int value) { m_maxTimeSecondsHasBeenSet = true; m_maxTimeSeconds = value; }

    /**
     * <p>The approximate amount of time, in seconds, that must pass with the job in
     * the specified state before the action is taken. The minimum value is 600 (10
     * minutes) and the maximum value is 86,400 (24 hours).</p>
     */
    inline JobStateTimeLimitAction& WithMaxTimeSeconds(int value) { SetMaxTimeSeconds(value); return *this;}


    /**
     * <p>The action to take when a job is at the head of the job queue in the
     * specified state for the specified period of time. The only supported value is
     * "<code>CANCEL</code>", which will cancel the job.</p>
     */
    inline const JobStateTimeLimitActionsAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take when a job is at the head of the job queue in the
     * specified state for the specified period of time. The only supported value is
     * "<code>CANCEL</code>", which will cancel the job.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take when a job is at the head of the job queue in the
     * specified state for the specified period of time. The only supported value is
     * "<code>CANCEL</code>", which will cancel the job.</p>
     */
    inline void SetAction(const JobStateTimeLimitActionsAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take when a job is at the head of the job queue in the
     * specified state for the specified period of time. The only supported value is
     * "<code>CANCEL</code>", which will cancel the job.</p>
     */
    inline void SetAction(JobStateTimeLimitActionsAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take when a job is at the head of the job queue in the
     * specified state for the specified period of time. The only supported value is
     * "<code>CANCEL</code>", which will cancel the job.</p>
     */
    inline JobStateTimeLimitAction& WithAction(const JobStateTimeLimitActionsAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take when a job is at the head of the job queue in the
     * specified state for the specified period of time. The only supported value is
     * "<code>CANCEL</code>", which will cancel the job.</p>
     */
    inline JobStateTimeLimitAction& WithAction(JobStateTimeLimitActionsAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    JobStateTimeLimitActionsState m_state;
    bool m_stateHasBeenSet = false;

    int m_maxTimeSeconds;
    bool m_maxTimeSecondsHasBeenSet = false;

    JobStateTimeLimitActionsAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
