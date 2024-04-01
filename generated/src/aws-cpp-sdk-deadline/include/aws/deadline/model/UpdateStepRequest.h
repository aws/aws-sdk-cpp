/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StepTargetTaskRunStatus.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateStepRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateStepRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStep"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateStepRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateStepRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateStepRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The farm ID to update.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateStepRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateStepRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateStepRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The job ID to update.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID to update.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID to update.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID to update.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID to update.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID to update.</p>
     */
    inline UpdateStepRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID to update.</p>
     */
    inline UpdateStepRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID to update.</p>
     */
    inline UpdateStepRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The queue ID to update.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue ID to update.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The queue ID to update.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue ID to update.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue ID to update.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue ID to update.</p>
     */
    inline UpdateStepRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID to update.</p>
     */
    inline UpdateStepRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID to update.</p>
     */
    inline UpdateStepRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The step ID to update.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The step ID to update.</p>
     */
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }

    /**
     * <p>The step ID to update.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The step ID to update.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }

    /**
     * <p>The step ID to update.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The step ID to update.</p>
     */
    inline UpdateStepRequest& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The step ID to update.</p>
     */
    inline UpdateStepRequest& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The step ID to update.</p>
     */
    inline UpdateStepRequest& WithStepId(const char* value) { SetStepId(value); return *this;}


    /**
     * <p>The task status to update the step's tasks to.</p>
     */
    inline const StepTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }

    /**
     * <p>The task status to update the step's tasks to.</p>
     */
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }

    /**
     * <p>The task status to update the step's tasks to.</p>
     */
    inline void SetTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }

    /**
     * <p>The task status to update the step's tasks to.</p>
     */
    inline void SetTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = std::move(value); }

    /**
     * <p>The task status to update the step's tasks to.</p>
     */
    inline UpdateStepRequest& WithTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}

    /**
     * <p>The task status to update the step's tasks to.</p>
     */
    inline UpdateStepRequest& WithTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    StepTargetTaskRunStatus m_targetTaskRunStatus;
    bool m_targetTaskRunStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
