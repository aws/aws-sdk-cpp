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


    ///@{
    /**
     * <p>The farm ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline BatchGetJobEntityRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline BatchGetJobEntityRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline BatchGetJobEntityRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline BatchGetJobEntityRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline BatchGetJobEntityRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline BatchGetJobEntityRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline BatchGetJobEntityRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline BatchGetJobEntityRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline BatchGetJobEntityRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline const Aws::Vector<JobEntityIdentifiersUnion>& GetIdentifiers() const{ return m_identifiers; }
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
    inline void SetIdentifiers(const Aws::Vector<JobEntityIdentifiersUnion>& value) { m_identifiersHasBeenSet = true; m_identifiers = value; }
    inline void SetIdentifiers(Aws::Vector<JobEntityIdentifiersUnion>&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::move(value); }
    inline BatchGetJobEntityRequest& WithIdentifiers(const Aws::Vector<JobEntityIdentifiersUnion>& value) { SetIdentifiers(value); return *this;}
    inline BatchGetJobEntityRequest& WithIdentifiers(Aws::Vector<JobEntityIdentifiersUnion>&& value) { SetIdentifiers(std::move(value)); return *this;}
    inline BatchGetJobEntityRequest& AddIdentifiers(const JobEntityIdentifiersUnion& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }
    inline BatchGetJobEntityRequest& AddIdentifiers(JobEntityIdentifiersUnion&& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::Vector<JobEntityIdentifiersUnion> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
