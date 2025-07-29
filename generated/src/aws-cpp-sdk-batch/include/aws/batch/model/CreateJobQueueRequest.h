/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JQState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/JobQueueType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ComputeEnvironmentOrder.h>
#include <aws/batch/model/ServiceEnvironmentOrder.h>
#include <aws/batch/model/JobStateTimeLimitAction.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for <code>CreateJobQueue</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateJobQueueRequest">AWS
   * API Reference</a></p>
   */
  class CreateJobQueueRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API CreateJobQueueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJobQueue"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline const Aws::String& GetJobQueueName() const { return m_jobQueueName; }
    inline bool JobQueueNameHasBeenSet() const { return m_jobQueueNameHasBeenSet; }
    template<typename JobQueueNameT = Aws::String>
    void SetJobQueueName(JobQueueNameT&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = std::forward<JobQueueNameT>(value); }
    template<typename JobQueueNameT = Aws::String>
    CreateJobQueueRequest& WithJobQueueName(JobQueueNameT&& value) { SetJobQueueName(std::forward<JobQueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline JQState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JQState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateJobQueueRequest& WithState(JQState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fair-share scheduling policy. Job
     * queues that don't have a fair-share scheduling policy are scheduled in a
     * first-in, first-out (FIFO) model. After a job queue has a fair-share scheduling
     * policy, it can be replaced but can't be removed.</p> <p>The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>.</p> <p>An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     * <p>A job queue without a fair-share scheduling policy is scheduled as a FIFO job
     * queue and can't have a fair-share scheduling policy added. Jobs queues with a
     * fair-share scheduling policy can have a maximum of 500 active share identifiers.
     * When the limit has been reached, submissions of any jobs that add a new share
     * identifier fail.</p>
     */
    inline const Aws::String& GetSchedulingPolicyArn() const { return m_schedulingPolicyArn; }
    inline bool SchedulingPolicyArnHasBeenSet() const { return m_schedulingPolicyArnHasBeenSet; }
    template<typename SchedulingPolicyArnT = Aws::String>
    void SetSchedulingPolicyArn(SchedulingPolicyArnT&& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = std::forward<SchedulingPolicyArnT>(value); }
    template<typename SchedulingPolicyArnT = Aws::String>
    CreateJobQueueRequest& WithSchedulingPolicyArn(SchedulingPolicyArnT&& value) { SetSchedulingPolicyArn(std::forward<SchedulingPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the job queue. Job queues with a higher priority (or a higher
     * integer value for the <code>priority</code> parameter) are evaluated first when
     * associated with the same compute environment. Priority is determined in
     * descending order. For example, a job queue with a priority value of
     * <code>10</code> is given scheduling preference over a job queue with a priority
     * value of <code>1</code>. All of the compute environments must be either EC2
     * (<code>EC2</code> or <code>SPOT</code>) or Fargate (<code>FARGATE</code> or
     * <code>FARGATE_SPOT</code>); EC2 and Fargate compute environments can't be
     * mixed.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CreateJobQueueRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment runs a specific job. Compute environments must be in the
     * <code>VALID</code> state before you can associate them with a job queue. You can
     * associate up to three compute environments with a job queue. All of the compute
     * environments must be either EC2 (<code>EC2</code> or <code>SPOT</code>) or
     * Fargate (<code>FARGATE</code> or <code>FARGATE_SPOT</code>); EC2 and Fargate
     * compute environments can't be mixed.</p>  <p>All compute environments that
     * are associated with a job queue must share the same architecture. Batch doesn't
     * support mixing compute environment architecture types in a single job queue.</p>
     * 
     */
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const { return m_computeEnvironmentOrder; }
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }
    template<typename ComputeEnvironmentOrderT = Aws::Vector<ComputeEnvironmentOrder>>
    void SetComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::forward<ComputeEnvironmentOrderT>(value); }
    template<typename ComputeEnvironmentOrderT = Aws::Vector<ComputeEnvironmentOrder>>
    CreateJobQueueRequest& WithComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { SetComputeEnvironmentOrder(std::forward<ComputeEnvironmentOrderT>(value)); return *this;}
    template<typename ComputeEnvironmentOrderT = ComputeEnvironmentOrder>
    CreateJobQueueRequest& AddComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.emplace_back(std::forward<ComputeEnvironmentOrderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of service environments that this job queue can use to allocate jobs.
     * All serviceEnvironments must have the same type. A job queue can't have both a
     * serviceEnvironmentOrder and a computeEnvironmentOrder field.</p>
     */
    inline const Aws::Vector<ServiceEnvironmentOrder>& GetServiceEnvironmentOrder() const { return m_serviceEnvironmentOrder; }
    inline bool ServiceEnvironmentOrderHasBeenSet() const { return m_serviceEnvironmentOrderHasBeenSet; }
    template<typename ServiceEnvironmentOrderT = Aws::Vector<ServiceEnvironmentOrder>>
    void SetServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { m_serviceEnvironmentOrderHasBeenSet = true; m_serviceEnvironmentOrder = std::forward<ServiceEnvironmentOrderT>(value); }
    template<typename ServiceEnvironmentOrderT = Aws::Vector<ServiceEnvironmentOrder>>
    CreateJobQueueRequest& WithServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { SetServiceEnvironmentOrder(std::forward<ServiceEnvironmentOrderT>(value)); return *this;}
    template<typename ServiceEnvironmentOrderT = ServiceEnvironmentOrder>
    CreateJobQueueRequest& AddServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { m_serviceEnvironmentOrderHasBeenSet = true; m_serviceEnvironmentOrder.emplace_back(std::forward<ServiceEnvironmentOrderT>(value)); return *this; }
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
    inline CreateJobQueueRequest& WithJobQueueType(JobQueueType value) { SetJobQueueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateJobQueueRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateJobQueueRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The set of actions that Batch performs on jobs that remain at the head of the
     * job queue in the specified state longer than specified times. Batch will perform
     * each action after <code>maxTimeSeconds</code> has passed. (<b>Note</b>: The
     * minimum value for maxTimeSeconds is 600 (10 minutes) and its maximum value is
     * 86,400 (24 hours).)</p>
     */
    inline const Aws::Vector<JobStateTimeLimitAction>& GetJobStateTimeLimitActions() const { return m_jobStateTimeLimitActions; }
    inline bool JobStateTimeLimitActionsHasBeenSet() const { return m_jobStateTimeLimitActionsHasBeenSet; }
    template<typename JobStateTimeLimitActionsT = Aws::Vector<JobStateTimeLimitAction>>
    void SetJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions = std::forward<JobStateTimeLimitActionsT>(value); }
    template<typename JobStateTimeLimitActionsT = Aws::Vector<JobStateTimeLimitAction>>
    CreateJobQueueRequest& WithJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { SetJobStateTimeLimitActions(std::forward<JobStateTimeLimitActionsT>(value)); return *this;}
    template<typename JobStateTimeLimitActionsT = JobStateTimeLimitAction>
    CreateJobQueueRequest& AddJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions.emplace_back(std::forward<JobStateTimeLimitActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobQueueName;
    bool m_jobQueueNameHasBeenSet = false;

    JQState m_state{JQState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_schedulingPolicyArn;
    bool m_schedulingPolicyArnHasBeenSet = false;

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
