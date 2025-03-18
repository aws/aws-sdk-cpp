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
    AWS_CONNECT_API DisassociateQueueQuickConnectsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateQueueQuickConnects"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DisassociateQueueQuickConnectsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    DisassociateQueueQuickConnectsRequest& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quick connects to disassociate from the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQuickConnectIds() const { return m_quickConnectIds; }
    inline bool QuickConnectIdsHasBeenSet() const { return m_quickConnectIdsHasBeenSet; }
    template<typename QuickConnectIdsT = Aws::Vector<Aws::String>>
    void SetQuickConnectIds(QuickConnectIdsT&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds = std::forward<QuickConnectIdsT>(value); }
    template<typename QuickConnectIdsT = Aws::Vector<Aws::String>>
    DisassociateQueueQuickConnectsRequest& WithQuickConnectIds(QuickConnectIdsT&& value) { SetQuickConnectIds(std::forward<QuickConnectIdsT>(value)); return *this;}
    template<typename QuickConnectIdsT = Aws::String>
    DisassociateQueueQuickConnectsRequest& AddQuickConnectIds(QuickConnectIdsT&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.emplace_back(std::forward<QuickConnectIdsT>(value)); return *this; }
    ///@}
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
