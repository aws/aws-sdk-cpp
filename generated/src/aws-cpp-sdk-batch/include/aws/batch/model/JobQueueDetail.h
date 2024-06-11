/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JQState.h>
#include <aws/batch/model/JQStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ComputeEnvironmentOrder.h>
#include <aws/batch/model/JobStateTimeLimitAction.h>
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
   * <p>An object that represents the details for an Batch job queue.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobQueueDetail">AWS
   * API Reference</a></p>
   */
  class JobQueueDetail
  {
  public:
    AWS_BATCH_API JobQueueDetail();
    AWS_BATCH_API JobQueueDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobQueueDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job queue name.</p>
     */
    inline const Aws::String& GetJobQueueName() const{ return m_jobQueueName; }
    inline bool JobQueueNameHasBeenSet() const { return m_jobQueueNameHasBeenSet; }
    inline void SetJobQueueName(const Aws::String& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = value; }
    inline void SetJobQueueName(Aws::String&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = std::move(value); }
    inline void SetJobQueueName(const char* value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName.assign(value); }
    inline JobQueueDetail& WithJobQueueName(const Aws::String& value) { SetJobQueueName(value); return *this;}
    inline JobQueueDetail& WithJobQueueName(Aws::String&& value) { SetJobQueueName(std::move(value)); return *this;}
    inline JobQueueDetail& WithJobQueueName(const char* value) { SetJobQueueName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const{ return m_jobQueueArn; }
    inline bool JobQueueArnHasBeenSet() const { return m_jobQueueArnHasBeenSet; }
    inline void SetJobQueueArn(const Aws::String& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = value; }
    inline void SetJobQueueArn(Aws::String&& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = std::move(value); }
    inline void SetJobQueueArn(const char* value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn.assign(value); }
    inline JobQueueDetail& WithJobQueueArn(const Aws::String& value) { SetJobQueueArn(value); return *this;}
    inline JobQueueDetail& WithJobQueueArn(Aws::String&& value) { SetJobQueueArn(std::move(value)); return *this;}
    inline JobQueueDetail& WithJobQueueArn(const char* value) { SetJobQueueArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the ability of the queue to accept new jobs. If the job queue state
     * is <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline const JQState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const JQState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(JQState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline JobQueueDetail& WithState(const JQState& value) { SetState(value); return *this;}
    inline JobQueueDetail& WithState(JQState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline const Aws::String& GetSchedulingPolicyArn() const{ return m_schedulingPolicyArn; }
    inline bool SchedulingPolicyArnHasBeenSet() const { return m_schedulingPolicyArnHasBeenSet; }
    inline void SetSchedulingPolicyArn(const Aws::String& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = value; }
    inline void SetSchedulingPolicyArn(Aws::String&& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = std::move(value); }
    inline void SetSchedulingPolicyArn(const char* value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn.assign(value); }
    inline JobQueueDetail& WithSchedulingPolicyArn(const Aws::String& value) { SetSchedulingPolicyArn(value); return *this;}
    inline JobQueueDetail& WithSchedulingPolicyArn(Aws::String&& value) { SetSchedulingPolicyArn(std::move(value)); return *this;}
    inline JobQueueDetail& WithSchedulingPolicyArn(const char* value) { SetSchedulingPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline const JQStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JQStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JQStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JobQueueDetail& WithStatus(const JQStatus& value) { SetStatus(value); return *this;}
    inline JobQueueDetail& WithStatus(JQStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job queue.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline JobQueueDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline JobQueueDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline JobQueueDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the job queue. Job queues with a higher priority (or a higher
     * integer value for the <code>priority</code> parameter) are evaluated first when
     * associated with the same compute environment. Priority is determined in
     * descending order. For example, a job queue with a priority value of
     * <code>10</code> is given scheduling preference over a job queue with a priority
     * value of <code>1</code>. All of the compute environments must be either Amazon
     * EC2 (<code>EC2</code> or <code>SPOT</code>) or Fargate (<code>FARGATE</code> or
     * <code>FARGATE_SPOT</code>). Amazon EC2 and Fargate compute environments can't be
     * mixed.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline JobQueueDetail& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute environments that are attached to the job queue and the order
     * that job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const{ return m_computeEnvironmentOrder; }
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }
    inline void SetComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = value; }
    inline void SetComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::move(value); }
    inline JobQueueDetail& WithComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { SetComputeEnvironmentOrder(value); return *this;}
    inline JobQueueDetail& WithComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { SetComputeEnvironmentOrder(std::move(value)); return *this;}
    inline JobQueueDetail& AddComputeEnvironmentOrder(const ComputeEnvironmentOrder& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(value); return *this; }
    inline JobQueueDetail& AddComputeEnvironmentOrder(ComputeEnvironmentOrder&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the job queue. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline JobQueueDetail& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline JobQueueDetail& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline JobQueueDetail& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline JobQueueDetail& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobQueueDetail& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobQueueDetail& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline JobQueueDetail& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobQueueDetail& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobQueueDetail& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of actions that Batch perform on jobs that remain at the head of the
     * job queue in the specified state longer than specified times. Batch will perform
     * each action after <code>maxTimeSeconds</code> has passed.</p>
     */
    inline const Aws::Vector<JobStateTimeLimitAction>& GetJobStateTimeLimitActions() const{ return m_jobStateTimeLimitActions; }
    inline bool JobStateTimeLimitActionsHasBeenSet() const { return m_jobStateTimeLimitActionsHasBeenSet; }
    inline void SetJobStateTimeLimitActions(const Aws::Vector<JobStateTimeLimitAction>& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions = value; }
    inline void SetJobStateTimeLimitActions(Aws::Vector<JobStateTimeLimitAction>&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions = std::move(value); }
    inline JobQueueDetail& WithJobStateTimeLimitActions(const Aws::Vector<JobStateTimeLimitAction>& value) { SetJobStateTimeLimitActions(value); return *this;}
    inline JobQueueDetail& WithJobStateTimeLimitActions(Aws::Vector<JobStateTimeLimitAction>&& value) { SetJobStateTimeLimitActions(std::move(value)); return *this;}
    inline JobQueueDetail& AddJobStateTimeLimitActions(const JobStateTimeLimitAction& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions.push_back(value); return *this; }
    inline JobQueueDetail& AddJobStateTimeLimitActions(JobStateTimeLimitAction&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobQueueName;
    bool m_jobQueueNameHasBeenSet = false;

    Aws::String m_jobQueueArn;
    bool m_jobQueueArnHasBeenSet = false;

    JQState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_schedulingPolicyArn;
    bool m_schedulingPolicyArnHasBeenSet = false;

    JQStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Vector<ComputeEnvironmentOrder> m_computeEnvironmentOrder;
    bool m_computeEnvironmentOrderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<JobStateTimeLimitAction> m_jobStateTimeLimitActions;
    bool m_jobStateTimeLimitActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
