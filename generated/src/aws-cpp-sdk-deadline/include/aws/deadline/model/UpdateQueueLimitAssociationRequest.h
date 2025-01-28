/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/UpdateQueueLimitAssociationStatus.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateQueueLimitAssociationRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateQueueLimitAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueueLimitAssociation"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the farm that contains the associated queues and
     * limits.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline UpdateQueueLimitAssociationRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline UpdateQueueLimitAssociationRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline UpdateQueueLimitAssociationRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the queue associated to the limit.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline UpdateQueueLimitAssociationRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline UpdateQueueLimitAssociationRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline UpdateQueueLimitAssociationRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit associated to the queue.</p>
     */
    inline const Aws::String& GetLimitId() const{ return m_limitId; }
    inline bool LimitIdHasBeenSet() const { return m_limitIdHasBeenSet; }
    inline void SetLimitId(const Aws::String& value) { m_limitIdHasBeenSet = true; m_limitId = value; }
    inline void SetLimitId(Aws::String&& value) { m_limitIdHasBeenSet = true; m_limitId = std::move(value); }
    inline void SetLimitId(const char* value) { m_limitIdHasBeenSet = true; m_limitId.assign(value); }
    inline UpdateQueueLimitAssociationRequest& WithLimitId(const Aws::String& value) { SetLimitId(value); return *this;}
    inline UpdateQueueLimitAssociationRequest& WithLimitId(Aws::String&& value) { SetLimitId(std::move(value)); return *this;}
    inline UpdateQueueLimitAssociationRequest& WithLimitId(const char* value) { SetLimitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the status of the limit. You can mark the limit active, or you can stop
     * usage of the limit and either complete existing tasks or cancel any existing
     * tasks immediately. </p>
     */
    inline const UpdateQueueLimitAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UpdateQueueLimitAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UpdateQueueLimitAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateQueueLimitAssociationRequest& WithStatus(const UpdateQueueLimitAssociationStatus& value) { SetStatus(value); return *this;}
    inline UpdateQueueLimitAssociationRequest& WithStatus(UpdateQueueLimitAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_limitId;
    bool m_limitIdHasBeenSet = false;

    UpdateQueueLimitAssociationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
