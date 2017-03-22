/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JQState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/ComputeEnvironmentOrder.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API CreateJobQueueRequest : public BatchRequest
  {
  public:
    CreateJobQueueRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueName() const{ return m_jobQueueName; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(const Aws::String& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = value; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(Aws::String&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = value; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(const char* value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName.assign(value); }

    /**
     * <p>The name of the job queue.</p>
     */
    inline CreateJobQueueRequest& WithJobQueueName(const Aws::String& value) { SetJobQueueName(value); return *this;}

    /**
     * <p>The name of the job queue.</p>
     */
    inline CreateJobQueueRequest& WithJobQueueName(Aws::String&& value) { SetJobQueueName(value); return *this;}

    /**
     * <p>The name of the job queue.</p>
     */
    inline CreateJobQueueRequest& WithJobQueueName(const char* value) { SetJobQueueName(value); return *this;}

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs.</p>
     */
    inline const JQState& GetState() const{ return m_state; }

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs.</p>
     */
    inline void SetState(const JQState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs.</p>
     */
    inline void SetState(JQState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs.</p>
     */
    inline CreateJobQueueRequest& WithState(const JQState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the job queue. If the job queue state is <code>ENABLED</code>,
     * it is able to accept jobs.</p>
     */
    inline CreateJobQueueRequest& WithState(JQState&& value) { SetState(value); return *this;}

    /**
     * <p>The priority of the job queue. Job queues with a higher priority (or a lower
     * integer value for the <code>priority</code> parameter) are evaluated first when
     * associated with same compute environment. Priority is determined in ascending
     * order, for example, a job queue with a priority value of <code>1</code> is given
     * scheduling preference over a job queue with a priority value of
     * <code>10</code>.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the job queue. Job queues with a higher priority (or a lower
     * integer value for the <code>priority</code> parameter) are evaluated first when
     * associated with same compute environment. Priority is determined in ascending
     * order, for example, a job queue with a priority value of <code>1</code> is given
     * scheduling preference over a job queue with a priority value of
     * <code>10</code>.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the job queue. Job queues with a higher priority (or a lower
     * integer value for the <code>priority</code> parameter) are evaluated first when
     * associated with same compute environment. Priority is determined in ascending
     * order, for example, a job queue with a priority value of <code>1</code> is given
     * scheduling preference over a job queue with a priority value of
     * <code>10</code>.</p>
     */
    inline CreateJobQueueRequest& WithPriority(int value) { SetPriority(value); return *this;}

    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment should execute a given job. Compute environments must be in
     * the <code>VALID</code> state before you can associate them with a job queue. You
     * can associate up to 3 compute environments with a job queue.</p>
     */
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const{ return m_computeEnvironmentOrder; }

    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment should execute a given job. Compute environments must be in
     * the <code>VALID</code> state before you can associate them with a job queue. You
     * can associate up to 3 compute environments with a job queue.</p>
     */
    inline void SetComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = value; }

    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment should execute a given job. Compute environments must be in
     * the <code>VALID</code> state before you can associate them with a job queue. You
     * can associate up to 3 compute environments with a job queue.</p>
     */
    inline void SetComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = value; }

    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment should execute a given job. Compute environments must be in
     * the <code>VALID</code> state before you can associate them with a job queue. You
     * can associate up to 3 compute environments with a job queue.</p>
     */
    inline CreateJobQueueRequest& WithComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { SetComputeEnvironmentOrder(value); return *this;}

    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment should execute a given job. Compute environments must be in
     * the <code>VALID</code> state before you can associate them with a job queue. You
     * can associate up to 3 compute environments with a job queue.</p>
     */
    inline CreateJobQueueRequest& WithComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { SetComputeEnvironmentOrder(value); return *this;}

    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment should execute a given job. Compute environments must be in
     * the <code>VALID</code> state before you can associate them with a job queue. You
     * can associate up to 3 compute environments with a job queue.</p>
     */
    inline CreateJobQueueRequest& AddComputeEnvironmentOrder(const ComputeEnvironmentOrder& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(value); return *this; }

    /**
     * <p>The set of compute environments mapped to a job queue and their order
     * relative to each other. The job scheduler uses this parameter to determine which
     * compute environment should execute a given job. Compute environments must be in
     * the <code>VALID</code> state before you can associate them with a job queue. You
     * can associate up to 3 compute environments with a job queue.</p>
     */
    inline CreateJobQueueRequest& AddComputeEnvironmentOrder(ComputeEnvironmentOrder&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(value); return *this; }

  private:
    Aws::String m_jobQueueName;
    bool m_jobQueueNameHasBeenSet;
    JQState m_state;
    bool m_stateHasBeenSet;
    int m_priority;
    bool m_priorityHasBeenSet;
    Aws::Vector<ComputeEnvironmentOrder> m_computeEnvironmentOrder;
    bool m_computeEnvironmentOrderHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
