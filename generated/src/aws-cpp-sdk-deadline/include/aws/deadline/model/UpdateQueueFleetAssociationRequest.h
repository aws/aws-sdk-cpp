﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/UpdateQueueFleetAssociationStatus.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateQueueFleetAssociationRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateQueueFleetAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueueFleetAssociation"; }

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
    inline UpdateQueueFleetAssociationRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline UpdateQueueFleetAssociationRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline UpdateQueueFleetAssociationRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
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
    inline UpdateQueueFleetAssociationRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline UpdateQueueFleetAssociationRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline UpdateQueueFleetAssociationRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID to update.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline UpdateQueueFleetAssociationRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline UpdateQueueFleetAssociationRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline UpdateQueueFleetAssociationRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to update.</p>
     */
    inline const UpdateQueueFleetAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UpdateQueueFleetAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UpdateQueueFleetAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateQueueFleetAssociationRequest& WithStatus(const UpdateQueueFleetAssociationStatus& value) { SetStatus(value); return *this;}
    inline UpdateQueueFleetAssociationRequest& WithStatus(UpdateQueueFleetAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    UpdateQueueFleetAssociationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
