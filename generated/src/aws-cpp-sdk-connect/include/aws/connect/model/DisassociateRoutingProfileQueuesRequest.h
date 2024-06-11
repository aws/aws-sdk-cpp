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
    AWS_CONNECT_API DisassociateRoutingProfileQueuesRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DisassociateRoutingProfileQueuesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DisassociateRoutingProfileQueuesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DisassociateRoutingProfileQueuesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }
    inline DisassociateRoutingProfileQueuesRequest& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}
    inline DisassociateRoutingProfileQueuesRequest& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}
    inline DisassociateRoutingProfileQueuesRequest& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queues to disassociate from this routing profile.</p>
     */
    inline const Aws::Vector<RoutingProfileQueueReference>& GetQueueReferences() const{ return m_queueReferences; }
    inline bool QueueReferencesHasBeenSet() const { return m_queueReferencesHasBeenSet; }
    inline void SetQueueReferences(const Aws::Vector<RoutingProfileQueueReference>& value) { m_queueReferencesHasBeenSet = true; m_queueReferences = value; }
    inline void SetQueueReferences(Aws::Vector<RoutingProfileQueueReference>&& value) { m_queueReferencesHasBeenSet = true; m_queueReferences = std::move(value); }
    inline DisassociateRoutingProfileQueuesRequest& WithQueueReferences(const Aws::Vector<RoutingProfileQueueReference>& value) { SetQueueReferences(value); return *this;}
    inline DisassociateRoutingProfileQueuesRequest& WithQueueReferences(Aws::Vector<RoutingProfileQueueReference>&& value) { SetQueueReferences(std::move(value)); return *this;}
    inline DisassociateRoutingProfileQueuesRequest& AddQueueReferences(const RoutingProfileQueueReference& value) { m_queueReferencesHasBeenSet = true; m_queueReferences.push_back(value); return *this; }
    inline DisassociateRoutingProfileQueuesRequest& AddQueueReferences(RoutingProfileQueueReference&& value) { m_queueReferencesHasBeenSet = true; m_queueReferences.push_back(std::move(value)); return *this; }
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
