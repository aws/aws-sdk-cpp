/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class GetTaskRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTask"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID of the farm connected to the task.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline GetTaskRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetTaskRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetTaskRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID for the queue connected to the task.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline GetTaskRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline GetTaskRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline GetTaskRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID of the job connected to the task.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline GetTaskRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetTaskRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetTaskRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step ID for the step connected to the task.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }
    inline GetTaskRequest& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline GetTaskRequest& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline GetTaskRequest& WithStepId(const char* value) { SetStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline GetTaskRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline GetTaskRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline GetTaskRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
