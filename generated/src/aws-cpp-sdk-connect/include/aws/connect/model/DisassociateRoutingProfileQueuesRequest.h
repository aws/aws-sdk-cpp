/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RoutingProfileQueueReference.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DisassociateRoutingProfileQueuesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DisassociateRoutingProfileQueuesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateRoutingProfileQueues"; }

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
    DisassociateRoutingProfileQueuesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const { return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    template<typename RoutingProfileIdT = Aws::String>
    void SetRoutingProfileId(RoutingProfileIdT&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::forward<RoutingProfileIdT>(value); }
    template<typename RoutingProfileIdT = Aws::String>
    DisassociateRoutingProfileQueuesRequest& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queues to disassociate from this routing profile.</p>
     */
    inline const Aws::Vector<RoutingProfileQueueReference>& GetQueueReferences() const { return m_queueReferences; }
    inline bool QueueReferencesHasBeenSet() const { return m_queueReferencesHasBeenSet; }
    template<typename QueueReferencesT = Aws::Vector<RoutingProfileQueueReference>>
    void SetQueueReferences(QueueReferencesT&& value) { m_queueReferencesHasBeenSet = true; m_queueReferences = std::forward<QueueReferencesT>(value); }
    template<typename QueueReferencesT = Aws::Vector<RoutingProfileQueueReference>>
    DisassociateRoutingProfileQueuesRequest& WithQueueReferences(QueueReferencesT&& value) { SetQueueReferences(std::forward<QueueReferencesT>(value)); return *this;}
    template<typename QueueReferencesT = RoutingProfileQueueReference>
    DisassociateRoutingProfileQueuesRequest& AddQueueReferences(QueueReferencesT&& value) { m_queueReferencesHasBeenSet = true; m_queueReferences.emplace_back(std::forward<QueueReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::Vector<RoutingProfileQueueReference> m_queueReferences;
    bool m_queueReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
