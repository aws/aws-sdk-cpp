/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DisassociateQueueQuickConnectsRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DisassociateQueueQuickConnectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateQueueQuickConnects"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQuickConnectIds() const{ return m_quickConnectIds; }

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline bool QuickConnectIdsHasBeenSet() const { return m_quickConnectIdsHasBeenSet; }

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline void SetQuickConnectIds(const Aws::Vector<Aws::String>& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds = value; }

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline void SetQuickConnectIds(Aws::Vector<Aws::String>&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds = std::move(value); }

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithQuickConnectIds(const Aws::Vector<Aws::String>& value) { SetQuickConnectIds(value); return *this;}

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& WithQuickConnectIds(Aws::Vector<Aws::String>&& value) { SetQuickConnectIds(std::move(value)); return *this;}

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& AddQuickConnectIds(const Aws::String& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.push_back(value); return *this; }

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& AddQuickConnectIds(Aws::String&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline DisassociateQueueQuickConnectsRequest& AddQuickConnectIds(const char* value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.push_back(value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_quickConnectIds;
    bool m_quickConnectIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
