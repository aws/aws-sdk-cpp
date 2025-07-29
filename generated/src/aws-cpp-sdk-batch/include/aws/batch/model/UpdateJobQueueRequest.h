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
   * <p>Contains the parameters for <code>UpdateJobQueue</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateJobQueueRequest">AWS
   * API Reference</a></p>
   */
  class UpdateJobQueueRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API UpdateJobQueueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobQueue"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    template<typename JobQueueT = Aws::String>
    void SetJobQueue(JobQueueT&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::forward<JobQueueT>(value); }
    template<typename JobQueueT = Aws::String>
    UpdateJobQueueRequest& WithJobQueue(JobQueueT&& value) { SetJobQueue(std::forward<JobQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the queue's ability to accept new jobs. If the job queue state is
     * <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline JQState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JQState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateJobQueueRequest& WithState(JQState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the fair-share scheduling policy. Once a job
     * queue is created, the fair-share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline const Aws::String& GetSchedulingPolicyArn() const { return m_schedulingPolicyArn; }
    inline bool SchedulingPolicyArnHasBeenSet() const { return m_schedulingPolicyArnHasBeenSet; }
    template<typename SchedulingPolicyArnT = Aws::String>
    void SetSchedulingPolicyArn(SchedulingPolicyArnT&& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = std::forward<SchedulingPolicyArnT>(value); }
    template<typename SchedulingPolicyArnT = Aws::String>
    UpdateJobQueueRequest& WithSchedulingPolicyArn(SchedulingPolicyArnT&& value) { SetSchedulingPolicyArn(std::forward<SchedulingPolicyArnT>(value)); return *this;}
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
     * <code>FARGATE_SPOT</code>). EC2 and Fargate compute environments can't be
     * mixed.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateJobQueueRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details the set of compute environments mapped to a job queue and their order
     * relative to each other. This is one of the parameters used by the job scheduler
     * to determine which compute environment runs a given job. Compute environments
     * must be in the <code>VALID</code> state before you can associate them with a job
     * queue. All of the compute environments must be either EC2 (<code>EC2</code> or
     * <code>SPOT</code>) or Fargate (<code>FARGATE</code> or
     * <code>FARGATE_SPOT</code>). EC2 and Fargate compute environments can't be
     * mixed.</p>  <p>All compute environments that are associated with a job
     * queue must share the same architecture. Batch doesn't support mixing compute
     * environment architecture types in a single job queue.</p> 
     */
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const { return m_computeEnvironmentOrder; }
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }
    template<typename ComputeEnvironmentOrderT = Aws::Vector<ComputeEnvironmentOrder>>
    void SetComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::forward<ComputeEnvironmentOrderT>(value); }
    template<typename ComputeEnvironmentOrderT = Aws::Vector<ComputeEnvironmentOrder>>
    UpdateJobQueueRequest& WithComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { SetComputeEnvironmentOrder(std::forward<ComputeEnvironmentOrderT>(value)); return *this;}
    template<typename ComputeEnvironmentOrderT = ComputeEnvironmentOrder>
    UpdateJobQueueRequest& AddComputeEnvironmentOrder(ComputeEnvironmentOrderT&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.emplace_back(std::forward<ComputeEnvironmentOrderT>(value)); return *this; }
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
    UpdateJobQueueRequest& WithServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { SetServiceEnvironmentOrder(std::forward<ServiceEnvironmentOrderT>(value)); return *this;}
    template<typename ServiceEnvironmentOrderT = ServiceEnvironmentOrder>
    UpdateJobQueueRequest& AddServiceEnvironmentOrder(ServiceEnvironmentOrderT&& value) { m_serviceEnvironmentOrderHasBeenSet = true; m_serviceEnvironmentOrder.emplace_back(std::forward<ServiceEnvironmentOrderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of actions that Batch perform on jobs that remain at the head of the
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
    UpdateJobQueueRequest& WithJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { SetJobStateTimeLimitActions(std::forward<JobStateTimeLimitActionsT>(value)); return *this;}
    template<typename JobStateTimeLimitActionsT = JobStateTimeLimitAction>
    UpdateJobQueueRequest& AddJobStateTimeLimitActions(JobStateTimeLimitActionsT&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions.emplace_back(std::forward<JobStateTimeLimitActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

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

    Aws::Vector<JobStateTimeLimitAction> m_jobStateTimeLimitActions;
    bool m_jobStateTimeLimitActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
