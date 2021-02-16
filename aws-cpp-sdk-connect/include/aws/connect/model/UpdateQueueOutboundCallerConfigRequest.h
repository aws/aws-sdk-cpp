﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/OutboundCallerConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API UpdateQueueOutboundCallerConfigRequest : public ConnectRequest
  {
  public:
    UpdateQueueOutboundCallerConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueueOutboundCallerConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline UpdateQueueOutboundCallerConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline UpdateQueueOutboundCallerConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline UpdateQueueOutboundCallerConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline UpdateQueueOutboundCallerConfigRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline UpdateQueueOutboundCallerConfigRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline UpdateQueueOutboundCallerConfigRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline const OutboundCallerConfig& GetOutboundCallerConfig() const{ return m_outboundCallerConfig; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline bool OutboundCallerConfigHasBeenSet() const { return m_outboundCallerConfigHasBeenSet; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline void SetOutboundCallerConfig(const OutboundCallerConfig& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = value; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline void SetOutboundCallerConfig(OutboundCallerConfig&& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = std::move(value); }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline UpdateQueueOutboundCallerConfigRequest& WithOutboundCallerConfig(const OutboundCallerConfig& value) { SetOutboundCallerConfig(value); return *this;}

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline UpdateQueueOutboundCallerConfigRequest& WithOutboundCallerConfig(OutboundCallerConfig&& value) { SetOutboundCallerConfig(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet;

    OutboundCallerConfig m_outboundCallerConfig;
    bool m_outboundCallerConfigHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
