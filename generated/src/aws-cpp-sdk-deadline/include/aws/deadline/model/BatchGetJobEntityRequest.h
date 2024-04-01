/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/JobEntityIdentifiersUnion.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class BatchGetJobEntityRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API BatchGetJobEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetJobEntity"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline BatchGetJobEntityRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline BatchGetJobEntityRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline BatchGetJobEntityRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline BatchGetJobEntityRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline BatchGetJobEntityRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline BatchGetJobEntityRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline const Aws::Vector<JobEntityIdentifiersUnion>& GetIdentifiers() const{ return m_identifiers; }

    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }

    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline void SetIdentifiers(const Aws::Vector<JobEntityIdentifiersUnion>& value) { m_identifiersHasBeenSet = true; m_identifiers = value; }

    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline void SetIdentifiers(Aws::Vector<JobEntityIdentifiersUnion>&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::move(value); }

    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline BatchGetJobEntityRequest& WithIdentifiers(const Aws::Vector<JobEntityIdentifiersUnion>& value) { SetIdentifiers(value); return *this;}

    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline BatchGetJobEntityRequest& WithIdentifiers(Aws::Vector<JobEntityIdentifiersUnion>&& value) { SetIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline BatchGetJobEntityRequest& AddIdentifiers(const JobEntityIdentifiersUnion& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }

    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline BatchGetJobEntityRequest& AddIdentifiers(JobEntityIdentifiersUnion&& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline BatchGetJobEntityRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline BatchGetJobEntityRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline BatchGetJobEntityRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}

  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Vector<JobEntityIdentifiersUnion> m_identifiers;
    bool m_identifiersHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
