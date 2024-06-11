﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/UpdatedSessionActionInfo.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateWorkerScheduleRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateWorkerScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkerSchedule"; }

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
    inline UpdateWorkerScheduleRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline UpdateWorkerScheduleRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline UpdateWorkerScheduleRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
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
    inline UpdateWorkerScheduleRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline UpdateWorkerScheduleRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline UpdateWorkerScheduleRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session actions associated with the worker schedule to update.</p>
     */
    inline const Aws::Map<Aws::String, UpdatedSessionActionInfo>& GetUpdatedSessionActions() const{ return m_updatedSessionActions; }
    inline bool UpdatedSessionActionsHasBeenSet() const { return m_updatedSessionActionsHasBeenSet; }
    inline void SetUpdatedSessionActions(const Aws::Map<Aws::String, UpdatedSessionActionInfo>& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions = value; }
    inline void SetUpdatedSessionActions(Aws::Map<Aws::String, UpdatedSessionActionInfo>&& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions = std::move(value); }
    inline UpdateWorkerScheduleRequest& WithUpdatedSessionActions(const Aws::Map<Aws::String, UpdatedSessionActionInfo>& value) { SetUpdatedSessionActions(value); return *this;}
    inline UpdateWorkerScheduleRequest& WithUpdatedSessionActions(Aws::Map<Aws::String, UpdatedSessionActionInfo>&& value) { SetUpdatedSessionActions(std::move(value)); return *this;}
    inline UpdateWorkerScheduleRequest& AddUpdatedSessionActions(const Aws::String& key, const UpdatedSessionActionInfo& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions.emplace(key, value); return *this; }
    inline UpdateWorkerScheduleRequest& AddUpdatedSessionActions(Aws::String&& key, const UpdatedSessionActionInfo& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions.emplace(std::move(key), value); return *this; }
    inline UpdateWorkerScheduleRequest& AddUpdatedSessionActions(const Aws::String& key, UpdatedSessionActionInfo&& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions.emplace(key, std::move(value)); return *this; }
    inline UpdateWorkerScheduleRequest& AddUpdatedSessionActions(Aws::String&& key, UpdatedSessionActionInfo&& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateWorkerScheduleRequest& AddUpdatedSessionActions(const char* key, UpdatedSessionActionInfo&& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions.emplace(key, std::move(value)); return *this; }
    inline UpdateWorkerScheduleRequest& AddUpdatedSessionActions(const char* key, const UpdatedSessionActionInfo& value) { m_updatedSessionActionsHasBeenSet = true; m_updatedSessionActions.emplace(key, value); return *this; }
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
    inline UpdateWorkerScheduleRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline UpdateWorkerScheduleRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline UpdateWorkerScheduleRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Map<Aws::String, UpdatedSessionActionInfo> m_updatedSessionActions;
    bool m_updatedSessionActionsHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
