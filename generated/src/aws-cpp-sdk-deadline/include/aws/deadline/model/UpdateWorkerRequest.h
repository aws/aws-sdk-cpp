/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/deadline/model/WorkerCapabilities.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/HostPropertiesRequest.h>
#include <aws/deadline/model/UpdatedWorkerStatus.h>
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


    /**
     * <p>The worker capabilities to update.</p>
     */
    inline const WorkerCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The worker capabilities to update.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The worker capabilities to update.</p>
     */
    inline void SetCapabilities(const WorkerCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The worker capabilities to update.</p>
     */
    inline void SetCapabilities(WorkerCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The worker capabilities to update.</p>
     */
    inline UpdateWorkerRequest& WithCapabilities(const WorkerCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The worker capabilities to update.</p>
     */
    inline UpdateWorkerRequest& WithCapabilities(WorkerCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}


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
    inline UpdateWorkerRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateWorkerRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateWorkerRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID to update.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline UpdateWorkerRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID to update.</p>
     */
    inline UpdateWorkerRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID to update.</p>
     */
    inline UpdateWorkerRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The host properties to update.</p>
     */
    inline const HostPropertiesRequest& GetHostProperties() const{ return m_hostProperties; }

    /**
     * <p>The host properties to update.</p>
     */
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }

    /**
     * <p>The host properties to update.</p>
     */
    inline void SetHostProperties(const HostPropertiesRequest& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }

    /**
     * <p>The host properties to update.</p>
     */
    inline void SetHostProperties(HostPropertiesRequest&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::move(value); }

    /**
     * <p>The host properties to update.</p>
     */
    inline UpdateWorkerRequest& WithHostProperties(const HostPropertiesRequest& value) { SetHostProperties(value); return *this;}

    /**
     * <p>The host properties to update.</p>
     */
    inline UpdateWorkerRequest& WithHostProperties(HostPropertiesRequest&& value) { SetHostProperties(std::move(value)); return *this;}


    /**
     * <p>The worker status to update.</p>
     */
    inline const UpdatedWorkerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The worker status to update.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The worker status to update.</p>
     */
    inline void SetStatus(const UpdatedWorkerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The worker status to update.</p>
     */
    inline void SetStatus(UpdatedWorkerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The worker status to update.</p>
     */
    inline UpdateWorkerRequest& WithStatus(const UpdatedWorkerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The worker status to update.</p>
     */
    inline UpdateWorkerRequest& WithStatus(UpdatedWorkerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The worker ID to update.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The worker ID to update.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p>The worker ID to update.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The worker ID to update.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The worker ID to update.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The worker ID to update.</p>
     */
    inline UpdateWorkerRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The worker ID to update.</p>
     */
    inline UpdateWorkerRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The worker ID to update.</p>
     */
    inline UpdateWorkerRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}

  private:

    WorkerCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    HostPropertiesRequest m_hostProperties;
    bool m_hostPropertiesHasBeenSet = false;

    UpdatedWorkerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
