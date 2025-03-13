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
    AWS_DEADLINE_API BatchGetJobEntityRequest() = default;

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
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    BatchGetJobEntityRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID of the worker that's fetching job details. The worker must have
     * an assignment on a job to fetch job details.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    BatchGetJobEntityRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker ID of the worker containing the job details to get.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    BatchGetJobEntityRequest& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job identifiers to include within the job entity batch details.</p>
     */
    inline const Aws::Vector<JobEntityIdentifiersUnion>& GetIdentifiers() const { return m_identifiers; }
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
    template<typename IdentifiersT = Aws::Vector<JobEntityIdentifiersUnion>>
    void SetIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::forward<IdentifiersT>(value); }
    template<typename IdentifiersT = Aws::Vector<JobEntityIdentifiersUnion>>
    BatchGetJobEntityRequest& WithIdentifiers(IdentifiersT&& value) { SetIdentifiers(std::forward<IdentifiersT>(value)); return *this;}
    template<typename IdentifiersT = JobEntityIdentifiersUnion>
    BatchGetJobEntityRequest& AddIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers.emplace_back(std::forward<IdentifiersT>(value)); return *this; }
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
