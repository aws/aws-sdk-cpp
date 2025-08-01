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
#include <aws/batch/model/JobQueueType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ComputeEnvironmentOrder.h>
#include <aws/batch/model/ServiceEnvironmentOrder.h>
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
    AWS_BATCH_API JobQueueDetail() = default;
    AWS_BATCH_API JobQueueDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobQueueDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job queue name.</p>
     */
    inline const Aws::String& GetJobQueueName() const { return m_jobQueueName; }
    inline bool JobQueueNameHasBeenSet() const { return m_jobQueueNameHasBeenSet; }
    template<typename JobQueueNameT = Aws::String>
    void SetJobQueueName(JobQueueNameT&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = std::forward<JobQueueNameT>(value); }
    template<typename JobQueueNameT = Aws::String>
    JobQueueDetail& WithJobQueueName(JobQueueNameT&& value) { SetJobQueueName(std::forward<JobQueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const { return m_jobQueueArn; }
    inline bool JobQueueArnHasBeenSet() const { return m_jobQueueArnHasBeenSet; }
    template<typename JobQueueArnT = Aws::String>
    void SetJobQueueArn(JobQueueArnT&& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = std::forward<JobQueueArnT>(value); }
    template<typename JobQueueArnT = Aws::String>
    JobQueueDetail& WithJobQueueArn(JobQueueArnT&& value) { SetJobQueueArn(std::forward<JobQueueArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the ability of the queue to accept new jobs. If the job queue state
     * is <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline JQState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JQState value) { m_stateHasBeenSet = true; m_state = value; }
    inline JobQueueDetail& WithState(JQState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline const Aws::String& GetSchedulingPolicyArn() const { return m_schedulingPolicyArn; }
    inline bool SchedulingPolicyArnHasBeenSet() const { return m_schedulingPolicyArnHasBeenSet; }
    template<typename SchedulingPolicyArnT = Aws::String>
    void SetSchedulingPolicyArn(SchedulingPolicyArnT&& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = std::forward<SchedulingPolicyArnT>(value); }
    template<typename SchedulingPolicyArnT = Aws::String>
    JobQueueDetail& WithSchedulingPolicyArn(SchedulingPolicyArnT&& value) { SetSchedulingPolicyArn(std::forward<SchedulingPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline JQStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JQStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobQueueDetail& WithStatus(JQStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job queue.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    JobQueueDetail& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the job queue. Job queue priority determines the order that
     * job queues are evaluated when multiple queues dispatch jobs within a shared
     * compute environment. A higher value for <code>priority</code> indicates a higher
     * priority. Queues are evaluated in cycles, in descending order by priority. For
     * example, a job queue with a priority value of <code>10</code> is evaluated
     * before a queue with a priority value of <code>1</code>. All of the compute
     * environments must be either Amazon EC2 (<code>EC2</code> or <code>SPOT</code>)
     * or Fargate (<code>FARGATE</code> or <code>FARGATE_SPOT</code>). Amazon EC2 and
     * Fargate compute environments can't be mixed.</p>  <p>Job queue priority
     * doesn't guarantee that a particular job executes before a job in a lower
     * priority queue. Jobs added to higher priority queues during the queue evaluation
     * cycle might not be evaluated until the next cycle. A job is dispatched from a
     * queue only if resources are available when the queue is evaluated. If there are
     * insufficient resources available at that time, the cycle proceeds to the next
     * queue. This means that jobs added to higher priority queues might have to wait
     * for jobs in multiple lower priority queues to complete before they are
     * dispatched. You can use job dependencies to control the order for jobs from
     * queues with different priorities. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_dependencies.html">Job
     * Dependencies</a> in the <i>Batch User Guide</i>.</p> 
     */
    inline int GetPriority() const { return m_priority; }
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
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const { return m_computeEnvironmentOrder; }
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }
    template<typename ComputeEnvironmentOrderT = Aws::Vector<ComputeEnvironmentOrder>>
    void SetComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::forward<ComputeEnvironmentOrderT>(value); }
    template<typename ComputeEnvironmentOrderT = Aws::Vector<ComputeEnvironmentOrder>>
    JobQueueDetail& WithComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { SetComputeEnvironmentOrder(std::forward<ComputeEnvironmentOrderT>(value)); return *this;}
    template<typename ComputeEnvironmentOrderT = ComputeEnvironmentOrder>
    JobQueueDetail& AddComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.emplace_back(std::forward<ComputeEnvironmentOrderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order of the service environment associated with the job queue. Job
     * queues with a higher priority are evaluated first when associated with the same
     * service environment.</p>
     */
    inline const Aws::Vector<ServiceEnvironmentOrder>& GetServiceEnvironmentOrder() const { return m_serviceEnvironmentOrder; }
    inline bool ServiceEnvironmentOrderHasBeenSet() const { return m_serviceEnvironmentOrderHasBeenSet; }
    template<typename ServiceEnvironmentOrderT = Aws::Vector<ServiceEnvironmentOrder>>
    void SetServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { m_serviceEnvironmentOrderHasBeenSet = true; m_serviceEnvironmentOrder = std::forward<ServiceEnvironmentOrderT>(value); }
    template<typename ServiceEnvironmentOrderT = Aws::Vector<ServiceEnvironmentOrder>>
    JobQueueDetail& WithServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { SetServiceEnvironmentOrder(std::forward<ServiceEnvironmentOrderT>(value)); return *this;}
    template<typename ServiceEnvironmentOrderT = ServiceEnvironmentOrder>
    JobQueueDetail& AddServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { m_serviceEnvironmentOrderHasBeenSet = true; m_serviceEnvironmentOrder.emplace_back(std::forward<ServiceEnvironmentOrderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of job queue. For service jobs that run on SageMaker Training, this
     * value is <code>SAGEMAKER_TRAINING</code>. For regular container jobs, this value
     * is <code>EKS</code>, <code>ECS</code>, or <code>ECS_FARGATE</code> depending on
     * the compute environment.</p>
     */
    inline JobQueueType GetJobQueueType() const { return m_jobQueueType; }
    inline bool JobQueueTypeHasBeenSet() const { return m_jobQueueTypeHasBeenSet; }
    inline void SetJobQueueType(JobQueueType value) { m_jobQueueTypeHasBeenSet = true; m_jobQueueType = value; }
    inline JobQueueDetail& WithJobQueueType(JobQueueType value) { SetJobQueueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the job queue. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    JobQueueDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    JobQueueDetail& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The set of actions that Batch perform on jobs that remain at the head of the
     * job queue in the specified state longer than specified times. Batch will perform
     * each action after <code>maxTimeSeconds</code> has passed.</p>
     */
    inline const Aws::Vector<JobStateTimeLimitAction>& GetJobStateTimeLimitActions() const { return m_jobStateTimeLimitActions; }
    inline bool JobStateTimeLimitActionsHasBeenSet() const { return m_jobStateTimeLimitActionsHasBeenSet; }
    template<typename JobStateTimeLimitActionsT = Aws::Vector<JobStateTimeLimitAction>>
    void SetJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions = std::forward<JobStateTimeLimitActionsT>(value); }
    template<typename JobStateTimeLimitActionsT = Aws::Vector<JobStateTimeLimitAction>>
    JobQueueDetail& WithJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { SetJobStateTimeLimitActions(std::forward<JobStateTimeLimitActionsT>(value)); return *this;}
    template<typename JobStateTimeLimitActionsT = JobStateTimeLimitAction>
    JobQueueDetail& AddJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions.emplace_back(std::forward<JobStateTimeLimitActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobQueueName;
    bool m_jobQueueNameHasBeenSet = false;

    Aws::String m_jobQueueArn;
    bool m_jobQueueArnHasBeenSet = false;

    JQState m_state{JQState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_schedulingPolicyArn;
    bool m_schedulingPolicyArnHasBeenSet = false;

    JQStatus m_status{JQStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::Vector<ComputeEnvironmentOrder> m_computeEnvironmentOrder;
    bool m_computeEnvironmentOrderHasBeenSet = false;

    Aws::Vector<ServiceEnvironmentOrder> m_serviceEnvironmentOrder;
    bool m_serviceEnvironmentOrderHasBeenSet = false;

    JobQueueType m_jobQueueType{JobQueueType::NOT_SET};
    bool m_jobQueueTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<JobStateTimeLimitAction> m_jobStateTimeLimitActions;
    bool m_jobStateTimeLimitActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
