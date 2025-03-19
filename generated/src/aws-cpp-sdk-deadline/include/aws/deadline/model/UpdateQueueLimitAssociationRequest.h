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
    AWS_DEADLINE_API UpdateQueueLimitAssociationRequest() = default;

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
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    UpdateQueueLimitAssociationRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the queue associated to the limit.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    UpdateQueueLimitAssociationRequest& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit associated to the queue.</p>
     */
    inline const Aws::String& GetLimitId() const { return m_limitId; }
    inline bool LimitIdHasBeenSet() const { return m_limitIdHasBeenSet; }
    template<typename LimitIdT = Aws::String>
    void SetLimitId(LimitIdT&& value) { m_limitIdHasBeenSet = true; m_limitId = std::forward<LimitIdT>(value); }
    template<typename LimitIdT = Aws::String>
    UpdateQueueLimitAssociationRequest& WithLimitId(LimitIdT&& value) { SetLimitId(std::forward<LimitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the status of the limit. You can mark the limit active, or you can stop
     * usage of the limit and either complete existing tasks or cancel any existing
     * tasks immediately. </p>
     */
    inline UpdateQueueLimitAssociationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UpdateQueueLimitAssociationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateQueueLimitAssociationRequest& WithStatus(UpdateQueueLimitAssociationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_limitId;
    bool m_limitIdHasBeenSet = false;

    UpdateQueueLimitAssociationStatus m_status{UpdateQueueLimitAssociationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
