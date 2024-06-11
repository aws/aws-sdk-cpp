/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageCallback.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class ChannelFlowCallbackRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelFlowCallbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChannelFlowCallback"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier passed to the processor by the service when invoked. Use the
     * identifier to call back the service.</p>
     */
    inline const Aws::String& GetCallbackId() const{ return m_callbackId; }
    inline bool CallbackIdHasBeenSet() const { return m_callbackIdHasBeenSet; }
    inline void SetCallbackId(const Aws::String& value) { m_callbackIdHasBeenSet = true; m_callbackId = value; }
    inline void SetCallbackId(Aws::String&& value) { m_callbackIdHasBeenSet = true; m_callbackId = std::move(value); }
    inline void SetCallbackId(const char* value) { m_callbackIdHasBeenSet = true; m_callbackId.assign(value); }
    inline ChannelFlowCallbackRequest& WithCallbackId(const Aws::String& value) { SetCallbackId(value); return *this;}
    inline ChannelFlowCallbackRequest& WithCallbackId(Aws::String&& value) { SetCallbackId(std::move(value)); return *this;}
    inline ChannelFlowCallbackRequest& WithCallbackId(const char* value) { SetCallbackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline ChannelFlowCallbackRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ChannelFlowCallbackRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ChannelFlowCallbackRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a processor determines that a message needs to be <code>DENIED</code>,
     * pass this parameter with a value of true.</p>
     */
    inline bool GetDeleteResource() const{ return m_deleteResource; }
    inline bool DeleteResourceHasBeenSet() const { return m_deleteResourceHasBeenSet; }
    inline void SetDeleteResource(bool value) { m_deleteResourceHasBeenSet = true; m_deleteResource = value; }
    inline ChannelFlowCallbackRequest& WithDeleteResource(bool value) { SetDeleteResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stores information about the processed message.</p>
     */
    inline const ChannelMessageCallback& GetChannelMessage() const{ return m_channelMessage; }
    inline bool ChannelMessageHasBeenSet() const { return m_channelMessageHasBeenSet; }
    inline void SetChannelMessage(const ChannelMessageCallback& value) { m_channelMessageHasBeenSet = true; m_channelMessage = value; }
    inline void SetChannelMessage(ChannelMessageCallback&& value) { m_channelMessageHasBeenSet = true; m_channelMessage = std::move(value); }
    inline ChannelFlowCallbackRequest& WithChannelMessage(const ChannelMessageCallback& value) { SetChannelMessage(value); return *this;}
    inline ChannelFlowCallbackRequest& WithChannelMessage(ChannelMessageCallback&& value) { SetChannelMessage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_callbackId;
    bool m_callbackIdHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    bool m_deleteResource;
    bool m_deleteResourceHasBeenSet = false;

    ChannelMessageCallback m_channelMessage;
    bool m_channelMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
