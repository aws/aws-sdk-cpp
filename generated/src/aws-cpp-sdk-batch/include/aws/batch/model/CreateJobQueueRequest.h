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


    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline const Aws::String& GetJobQueueName() const{ return m_jobQueueName; }

    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline bool JobQueueNameHasBeenSet() const { return m_jobQueueNameHasBeenSet; }

    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline void SetJobQueueName(const Aws::String& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = value; }

    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline void SetJobQueueName(Aws::String&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = std::move(value); }

    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline void SetJobQueueName(const char* value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName.assign(value); }

    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline CreateJobQueueRequest& WithJobQueueName(const Aws::String& value) { SetJobQueueName(value); return *this;}

    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline CreateJobQueueRequest& WithJobQueueName(Aws::String&& value) { SetJobQueueName(std::move(value)); return *this;}

    /**
     * <p>The name of the job queue. It can be up to 128 letters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_).</p>
     */
    inline CreateJobQueueRequest& WithJobQueueName(const char* value) { SetJobQueueName(value); return *this;}


    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline const JQState& GetState() const{ return m_state; }

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline void SetState(const JQState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline void SetState(JQState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline CreateJobQueueRequest& WithState(const JQState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs. If the job queue state is <code>DISABLED</code>, new
     * jobs can't be added to the queue, but jobs already in the queue can finish.</p>
     */
    inline CreateJobQueueRequest& WithState(JQState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline const Aws::String& GetSchedulingPolicyArn() const{ return m_schedulingPolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline bool SchedulingPolicyArnHasBeenSet() const { return m_schedulingPolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline void SetSchedulingPolicyArn(const Aws::String& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline void SetSchedulingPolicyArn(Aws::String&& value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline void SetSchedulingPolicyArn(const char* value) { m_schedulingPolicyArnHasBeenSet = true; m_schedulingPolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline CreateJobQueueRequest& WithSchedulingPolicyArn(const Aws::String& value) { SetSchedulingPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline CreateJobQueueRequest& WithSchedulingPolicyArn(Aws::String&& value) { SetSchedulingPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fair share scheduling policy. If this
     * parameter is specified, the job queue uses a fair share scheduling policy. If
     * this parameter isn't specified, the job queue uses a first in, first out (FIFO)
     * scheduling policy. After a job queue is created, you can replace but can't
     * remove the fair share scheduling policy. The format is
     * <code>aws:<i>Partition</i>:batch:<i>Region</i>:<i>Account</i>:scheduling-policy/<i>Name</i>
     * </code>. An example is
     * <code>aws:aws:batch:us-west-2:123456789012:scheduling-policy/MySchedulingPolicy</code>.</p>
     */
    inline CreateJobQueueRequest& WithSchedulingPolicyArn(const char* value) { SetSchedulingPolicyArn(value); return *this;}


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
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

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
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

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
    inline CreateJobQueueRequest& WithPriority(int value) { SetPriority(value); return *this;}


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
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }

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
    inline void SetComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = value; }

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
    inline void SetComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::move(value); }

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
    inline CreateJobQueueRequest& WithComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { SetComputeEnvironmentOrder(value); return *this;}

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
    inline CreateJobQueueRequest& WithComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { SetComputeEnvironmentOrder(std::move(value)); return *this;}

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
    inline CreateJobQueueRequest& AddComputeEnvironmentOrder(const ComputeEnvironmentOrder& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(value); return *this; }

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
    inline CreateJobQueueRequest& AddComputeEnvironmentOrder(ComputeEnvironmentOrder&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that you apply to the job queue to help you categorize and organize
     * your resources. Each tag consists of a key and an optional value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline CreateJobQueueRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
