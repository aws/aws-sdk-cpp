/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateQueueHoursOfOperationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateQueueHoursOfOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueueHoursOfOperation"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateQueueHoursOfOperationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateQueueHoursOfOperationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateQueueHoursOfOperationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline UpdateQueueHoursOfOperationRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline UpdateQueueHoursOfOperationRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline UpdateQueueHoursOfOperationRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }
    inline UpdateQueueHoursOfOperationRequest& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline UpdateQueueHoursOfOperationRequest& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline UpdateQueueHoursOfOperationRequest& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
