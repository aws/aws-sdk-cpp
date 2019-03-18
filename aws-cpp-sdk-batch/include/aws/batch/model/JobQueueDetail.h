/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JQState.h>
#include <aws/batch/model/JQStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/ComputeEnvironmentOrder.h>
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
   * <p>An object representing the details of an AWS Batch job queue.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobQueueDetail">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API JobQueueDetail
  {
  public:
    JobQueueDetail();
    JobQueueDetail(Aws::Utils::Json::JsonView jsonValue);
    JobQueueDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueName() const{ return m_jobQueueName; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline bool JobQueueNameHasBeenSet() const { return m_jobQueueNameHasBeenSet; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(const Aws::String& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = value; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(Aws::String&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = std::move(value); }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(const char* value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName.assign(value); }

    /**
     * <p>The name of the job queue.</p>
     */
    inline JobQueueDetail& WithJobQueueName(const Aws::String& value) { SetJobQueueName(value); return *this;}

    /**
     * <p>The name of the job queue.</p>
     */
    inline JobQueueDetail& WithJobQueueName(Aws::String&& value) { SetJobQueueName(std::move(value)); return *this;}

    /**
     * <p>The name of the job queue.</p>
     */
    inline JobQueueDetail& WithJobQueueName(const char* value) { SetJobQueueName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const{ return m_jobQueueArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline bool JobQueueArnHasBeenSet() const { return m_jobQueueArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueueArn(const Aws::String& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueueArn(Aws::String&& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueueArn(const char* value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline JobQueueDetail& WithJobQueueArn(const Aws::String& value) { SetJobQueueArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline JobQueueDetail& WithJobQueueArn(Aws::String&& value) { SetJobQueueArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline JobQueueDetail& WithJobQueueArn(const char* value) { SetJobQueueArn(value); return *this;}


    /**
     * <p>Describes the ability of the queue to accept new jobs.</p>
     */
    inline const JQState& GetState() const{ return m_state; }

    /**
     * <p>Describes the ability of the queue to accept new jobs.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the ability of the queue to accept new jobs.</p>
     */
    inline void SetState(const JQState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the ability of the queue to accept new jobs.</p>
     */
    inline void SetState(JQState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the ability of the queue to accept new jobs.</p>
     */
    inline JobQueueDetail& WithState(const JQState& value) { SetState(value); return *this;}

    /**
     * <p>Describes the ability of the queue to accept new jobs.</p>
     */
    inline JobQueueDetail& WithState(JQState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline const JQStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline void SetStatus(const JQStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline void SetStatus(JQStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline JobQueueDetail& WithStatus(const JQStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job queue (for example, <code>CREATING</code> or
     * <code>VALID</code>).</p>
     */
    inline JobQueueDetail& WithStatus(JQStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline JobQueueDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline JobQueueDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job queue.</p>
     */
    inline JobQueueDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The priority of the job queue. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the job queue. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the job queue. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the job queue. </p>
     */
    inline JobQueueDetail& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline const Aws::Vector<ComputeEnvironmentOrder>& GetComputeEnvironmentOrder() const{ return m_computeEnvironmentOrder; }

    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline bool ComputeEnvironmentOrderHasBeenSet() const { return m_computeEnvironmentOrderHasBeenSet; }

    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline void SetComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = value; }

    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline void SetComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder = std::move(value); }

    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline JobQueueDetail& WithComputeEnvironmentOrder(const Aws::Vector<ComputeEnvironmentOrder>& value) { SetComputeEnvironmentOrder(value); return *this;}

    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline JobQueueDetail& WithComputeEnvironmentOrder(Aws::Vector<ComputeEnvironmentOrder>&& value) { SetComputeEnvironmentOrder(std::move(value)); return *this;}

    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline JobQueueDetail& AddComputeEnvironmentOrder(const ComputeEnvironmentOrder& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(value); return *this; }

    /**
     * <p>The compute environments that are attached to the job queue and the order in
     * which job placement is preferred. Compute environments are selected for job
     * placement in ascending order.</p>
     */
    inline JobQueueDetail& AddComputeEnvironmentOrder(ComputeEnvironmentOrder&& value) { m_computeEnvironmentOrderHasBeenSet = true; m_computeEnvironmentOrder.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobQueueName;
    bool m_jobQueueNameHasBeenSet;

    Aws::String m_jobQueueArn;
    bool m_jobQueueArnHasBeenSet;

    JQState m_state;
    bool m_stateHasBeenSet;

    JQStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::Vector<ComputeEnvironmentOrder> m_computeEnvironmentOrder;
    bool m_computeEnvironmentOrderHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
