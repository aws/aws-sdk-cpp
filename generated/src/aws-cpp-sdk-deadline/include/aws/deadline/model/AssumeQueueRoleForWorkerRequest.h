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
namespace Http
{
    class URI;
} //namespace Http
namespace deadline
{
namespace Model
{

  /**
   */
  class AssumeQueueRoleForWorkerRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API AssumeQueueRoleForWorkerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeQueueRoleForWorker"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The farm ID of the worker assuming the queue role.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline AssumeQueueRoleForWorkerRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID of the worker assuming the queue role.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline AssumeQueueRoleForWorkerRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker ID of the worker assuming the queue role.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline AssumeQueueRoleForWorkerRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID of the worker assuming the queue role.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline AssumeQueueRoleForWorkerRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline AssumeQueueRoleForWorkerRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
