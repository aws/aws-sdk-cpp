/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/OutboundEmailConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateQueueOutboundEmailConfigRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateQueueOutboundEmailConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueueOutboundEmailConfig"; }

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
    UpdateQueueOutboundEmailConfigRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    UpdateQueueOutboundEmailConfigRequest& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound email address ID for a specified queue.</p>
     */
    inline const OutboundEmailConfig& GetOutboundEmailConfig() const { return m_outboundEmailConfig; }
    inline bool OutboundEmailConfigHasBeenSet() const { return m_outboundEmailConfigHasBeenSet; }
    template<typename OutboundEmailConfigT = OutboundEmailConfig>
    void SetOutboundEmailConfig(OutboundEmailConfigT&& value) { m_outboundEmailConfigHasBeenSet = true; m_outboundEmailConfig = std::forward<OutboundEmailConfigT>(value); }
    template<typename OutboundEmailConfigT = OutboundEmailConfig>
    UpdateQueueOutboundEmailConfigRequest& WithOutboundEmailConfig(OutboundEmailConfigT&& value) { SetOutboundEmailConfig(std::forward<OutboundEmailConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    OutboundEmailConfig m_outboundEmailConfig;
    bool m_outboundEmailConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
