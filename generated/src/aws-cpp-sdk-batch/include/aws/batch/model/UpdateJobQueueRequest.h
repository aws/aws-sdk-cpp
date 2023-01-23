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
    AWS_BATCH_API UpdateJobQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobQueue"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::move(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline UpdateJobQueueRequest& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline UpdateJobQueueRequest& WithJobQueue(Aws::String&& value) { SetJobQueue(std::move(value)); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline UpdateJobQueueRequest& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}


    /**
     * <p>Describes the queue's ability to accept new jobs. If the job queue state is
     * <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline const JQState& GetState() const{ return m_state; }

    /**
     * <p>Describes the queue's ability to accept new jobs. If the job queue state is
     * <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the queue's ability to accept new jobs. If the job queue state is
     * <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline void SetState(const JQState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the queue's ability to accept new jobs. If the job queue state is
     * <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline void SetState(JQState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the queue's ability to accept new jobs. If the job queue state is
     * <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline UpdateJobQueueRequest& WithState(const JQState& value) { SetState(value); return *this;}

    /**
     * <p>Describes the queue's ability to accept new jobs. If the job queue state is
     * <code>ENABLED</code>, it can accept jobs. If the job queue state is
     * <code>DISABLED</code>, new jobs can't be added to the queue, but jobs already in
     * the queue can finish.</p>
     */
    inline UpdateJobQueueRequest& WithState(JQState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline const Aws::String& GetSchedulingPolicyArn() const{ return m_schedulingPolicyArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline bool SchedulingPolicyArnHasBeenSet() const { return m_schedulingPolicyArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline void SetSchedulingPolicyArn(const Aws::String& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline void SetSchedulingPolicyArn(Aws::String&& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline void SetSchedulingPolicyArn(const char* value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline UpdateJobQueueRequest& WithSchedulingPolicyArn(const Aws::String& value) { SetSchedulingPolicyArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline UpdateJobQueueRequest& WithSchedulingPolicyArn(Aws::String&& value) { SetSchedulingPolicyArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the fair share scheduling policy. Once a job
     * queue is created, the fair share scheduling policy can be replaced but not
     * removed. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. For example,
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline UpdateJobQueueRequest& WithSchedulingPolicyArn(const char* value) { SetSchedulingPolicyArn(value); return *this;}


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
    inline int GetPriority() const{ return m_priority; }

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
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

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
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

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
    inline UpdateJobQueueRequest& WithPriority(int value) { SetPriority(value); return *this;}


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
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const{ return m_computeEnvironmentOrder; }

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
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }

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
    inline void SetComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = value; }

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
    inline void SetComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::move(value); }

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
    inline UpdateJobQueueRequest& WithComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { SetComputeEnvironmentOrder(value); return *this;}

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
    inline UpdateJobQueueRequest& WithComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { SetComputeEnvironmentOrder(std::move(value)); return *this;}

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
    inline UpdateJobQueueRequest& AddComputeEnvironmentOrder(const ComputeEnvironmentOrder& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(value); return *this; }

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
    inline UpdateJobQueueRequest& AddComputeEnvironmentOrder(ComputeEnvironmentOrder&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

    JQState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_schedulingPolicyArn;
    bool m_schedulingPolicyArnHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Vector<ComputeEnvironmentOrder> m_computeEnvironmentOrder;
    bool m_computeEnvironmentOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
