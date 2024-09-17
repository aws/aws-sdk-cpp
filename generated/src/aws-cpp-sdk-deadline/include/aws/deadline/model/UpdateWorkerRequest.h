/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/UpdatedWorkerStatus.h>
#include <aws/deadline/model/WorkerCapabilities.h>
#include <aws/deadline/model/HostPropertiesRequest.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateWorkerRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateWorkerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorker"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID to update.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline UpdateWorkerRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline UpdateWorkerRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline UpdateWorkerRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID to update.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline UpdateWorkerRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline UpdateWorkerRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline UpdateWorkerRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker ID to update.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline UpdateWorkerRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline UpdateWorkerRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline UpdateWorkerRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker status to update.</p>
     */
    inline const UpdatedWorkerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UpdatedWorkerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UpdatedWorkerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateWorkerRequest& WithStatus(const UpdatedWorkerStatus& value) { SetStatus(value); return *this;}
    inline UpdateWorkerRequest& WithStatus(UpdatedWorkerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker capabilities to update.</p>
     */
    inline const WorkerCapabilities& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const WorkerCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(WorkerCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline UpdateWorkerRequest& WithCapabilities(const WorkerCapabilities& value) { SetCapabilities(value); return *this;}
    inline UpdateWorkerRequest& WithCapabilities(WorkerCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host properties to update.</p>
     */
    inline const HostPropertiesRequest& GetHostProperties() const{ return m_hostProperties; }
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }
    inline void SetHostProperties(const HostPropertiesRequest& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }
    inline void SetHostProperties(HostPropertiesRequest&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::move(value); }
    inline UpdateWorkerRequest& WithHostProperties(const HostPropertiesRequest& value) { SetHostProperties(value); return *this;}
    inline UpdateWorkerRequest& WithHostProperties(HostPropertiesRequest&& value) { SetHostProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    UpdatedWorkerStatus m_status;
    bool m_statusHasBeenSet = false;

    WorkerCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    HostPropertiesRequest m_hostProperties;
    bool m_hostPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
