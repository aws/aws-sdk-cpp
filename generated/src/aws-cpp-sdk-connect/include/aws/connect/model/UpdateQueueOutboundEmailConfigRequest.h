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
    AWS_CONNECT_API UpdateQueueOutboundEmailConfigRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateQueueOutboundEmailConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateQueueOutboundEmailConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateQueueOutboundEmailConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline UpdateQueueOutboundEmailConfigRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline UpdateQueueOutboundEmailConfigRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline UpdateQueueOutboundEmailConfigRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound email address ID for a specified queue.</p>
     */
    inline const OutboundEmailConfig& GetOutboundEmailConfig() const{ return m_outboundEmailConfig; }
    inline bool OutboundEmailConfigHasBeenSet() const { return m_outboundEmailConfigHasBeenSet; }
    inline void SetOutboundEmailConfig(const OutboundEmailConfig& value) { m_outboundEmailConfigHasBeenSet = true; m_outboundEmailConfig = value; }
    inline void SetOutboundEmailConfig(OutboundEmailConfig&& value) { m_outboundEmailConfigHasBeenSet = true; m_outboundEmailConfig = std::move(value); }
    inline UpdateQueueOutboundEmailConfigRequest& WithOutboundEmailConfig(const OutboundEmailConfig& value) { SetOutboundEmailConfig(value); return *this;}
    inline UpdateQueueOutboundEmailConfigRequest& WithOutboundEmailConfig(OutboundEmailConfig&& value) { SetOutboundEmailConfig(std::move(value)); return *this;}
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
