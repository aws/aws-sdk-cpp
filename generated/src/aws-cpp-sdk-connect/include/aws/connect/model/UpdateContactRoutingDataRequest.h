﻿/**
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
  class UpdateContactRoutingDataRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactRoutingDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactRoutingData"; }

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
    inline UpdateContactRoutingDataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateContactRoutingDataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateContactRoutingDataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline UpdateContactRoutingDataRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline UpdateContactRoutingDataRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline UpdateContactRoutingDataRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds to add or subtract from the contact's routing age.
     * Contacts are routed to agents on a first-come, first-serve basis. This means
     * that changing their amount of time in queue compared to others also changes
     * their position in queue.</p>
     */
    inline int GetQueueTimeAdjustmentSeconds() const{ return m_queueTimeAdjustmentSeconds; }
    inline bool QueueTimeAdjustmentSecondsHasBeenSet() const { return m_queueTimeAdjustmentSecondsHasBeenSet; }
    inline void SetQueueTimeAdjustmentSeconds(int value) { m_queueTimeAdjustmentSecondsHasBeenSet = true; m_queueTimeAdjustmentSeconds = value; }
    inline UpdateContactRoutingDataRequest& WithQueueTimeAdjustmentSeconds(int value) { SetQueueTimeAdjustmentSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Priority of the contact in the queue. The default priority for new contacts
     * is 5. You can raise the priority of a contact compared to other contacts in the
     * queue by assigning them a higher priority, such as 1 or 2.</p>
     */
    inline long long GetQueuePriority() const{ return m_queuePriority; }
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }
    inline void SetQueuePriority(long long value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }
    inline UpdateContactRoutingDataRequest& WithQueuePriority(long long value) { SetQueuePriority(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    int m_queueTimeAdjustmentSeconds;
    bool m_queueTimeAdjustmentSecondsHasBeenSet = false;

    long long m_queuePriority;
    bool m_queuePriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
