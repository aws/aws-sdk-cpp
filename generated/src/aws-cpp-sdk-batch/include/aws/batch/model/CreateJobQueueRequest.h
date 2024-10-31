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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ComputeEnvironmentOrder.h>
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
    AWS_BATCH_API CreateJobQueueRequest();

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
    inline const Aws::String& GetJobQueueName() const{ return m_jobQueueName; }
    inline bool JobQueueNameHasBeenSet() const { return m_jobQueueNameHasBeenSet; }
    inline void SetJobQueueName(const Aws::String& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = value; }
    inline void SetJobQueueName(Aws::String&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = std::move(value); }
    inline void SetJobQueueName(const char* value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName.assign(value); }
    inline CreateJobQueueRequest& WithJobQueueName(const Aws::String& value) { SetJobQueueName(value); return *this;}
    inline CreateJobQueueRequest& WithJobQueueName(Aws::String&& value) { SetJobQueueName(std::move(value)); return *this;}
    inline CreateJobQueueRequest& WithJobQueueName(const char* value) { SetJobQueueName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline const JQState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const JQState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(JQState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CreateJobQueueRequest& WithState(const JQState& value) { SetState(value); return *this;}
    inline CreateJobQueueRequest& WithState(JQState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. Job
     * queues that don't have a scheduling policy are scheduled in a first-in,
     * first-out (FIFO) model. After a job queue has a scheduling policy, it can be
     * replaced but can't be removed.</p> <p>The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>.</p> <p>An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     * <p>A job queue without a scheduling policy is scheduled as a FIFO job queue and
     * can't have a scheduling policy added. Jobs queues with a scheduling policy can
     * have a maximum of 500 active fair share identifiers. When the limit has been
     * reached, submissions of any jobs that add a new fair share identifier fail.</p>
     */
    inline const Aws::String& GetSchedulingPolicyArn() const{ return m_schedulingPolicyArn; }
    inline bool SchedulingPolicyArnHasBeenSet() const { return m_schedulingPolicyArnHasBeenSet; }
    inline void SetSchedulingPolicyArn(const Aws::String& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = value; }
    inline void SetSchedulingPolicyArn(Aws::String&& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = std::move(value); }
    inline void SetSchedulingPolicyArn(const char* value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn.assign(value); }
    inline CreateJobQueueRequest& WithSchedulingPolicyArn(const Aws::String& value) { SetSchedulingPolicyArn(value); return *this;}
    inline CreateJobQueueRequest& WithSchedulingPolicyArn(Aws::String&& value) { SetSchedulingPolicyArn(std::move(value)); return *this;}
    inline CreateJobQueueRequest& WithSchedulingPolicyArn(const char* value) { SetSchedulingPolicyArn(value); return *this;}
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
    inline int GetPriority() const{ return m_priority; }
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
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const{ return m_computeEnvironmentOrder; }
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }
    inline void SetComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = value; }
    inline void SetComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::move(value); }
    inline CreateJobQueueRequest& WithComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { SetComputeEnvironmentOrder(value); return *this;}
    inline CreateJobQueueRequest& WithComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { SetComputeEnvironmentOrder(std::move(value)); return *this;}
    inline CreateJobQueueRequest& AddComputeEnvironmentOrder(const ComputeEnvironmentOrder& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(value); return *this; }
    inline CreateJobQueueRequest& AddComputeEnvironmentOrder(ComputeEnvironmentOrder&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateJobQueueRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateJobQueueRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateJobQueueRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateJobQueueRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateJobQueueRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateJobQueueRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateJobQueueRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateJobQueueRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateJobQueueRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of actions that Batch performs on jobs that remain at the head of the
     * job queue in the specified state longer than specified times. Batch will perform
     * each action after <code>maxTimeSeconds</code> has passed. (<b>Note</b>: The
     * minimum value for maxTimeSeconds is 600 (10 minutes) and its maximum value is
     * 86,400 (24 hours).)</p>
     */
    inline const Aws::Vector<JobStateTimeLimitAction>& GetJobStateTimeLimitActions() const{ return m_jobStateTimeLimitActions; }
    inline bool JobStateTimeLimitActionsHasBeenSet() const { return m_jobStateTimeLimitActionsHasBeenSet; }
    inline void SetJobStateTimeLimitActions(const Aws::Vector<JobStateTimeLimitAction>& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions = value; }
    inline void SetJobStateTimeLimitActions(Aws::Vector<JobStateTimeLimitAction>&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions = std::move(value); }
    inline CreateJobQueueRequest& WithJobStateTimeLimitActions(const Aws::Vector<JobStateTimeLimitAction>& value) { SetJobStateTimeLimitActions(value); return *this;}
    inline CreateJobQueueRequest& WithJobStateTimeLimitActions(Aws::Vector<JobStateTimeLimitAction>&& value) { SetJobStateTimeLimitActions(std::move(value)); return *this;}
    inline CreateJobQueueRequest& AddJobStateTimeLimitActions(const JobStateTimeLimitAction& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions.push_back(value); return *this; }
    inline CreateJobQueueRequest& AddJobStateTimeLimitActions(JobStateTimeLimitAction&& value) { m_jobStateTimeLimitActionsHasBeenSet = true; m_jobStateTimeLimitActions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobQueueName;
    bool m_jobQueueNameHasBeenSet = false;

    JQState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_schedulingPolicyArn;
    bool m_schedulingPolicyArnHasBeenSet = false;

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
