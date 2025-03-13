/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class AssociateChannelFlowRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API AssociateChannelFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateChannelFlow"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    AssociateChannelFlowRequest& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline const Aws::String& GetChannelFlowArn() const { return m_channelFlowArn; }
    inline bool ChannelFlowArnHasBeenSet() const { return m_channelFlowArnHasBeenSet; }
    template<typename ChannelFlowArnT = Aws::String>
    void SetChannelFlowArn(ChannelFlowArnT&& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = std::forward<ChannelFlowArnT>(value); }
    template<typename ChannelFlowArnT = Aws::String>
    AssociateChannelFlowRequest& WithChannelFlowArn(ChannelFlowArnT&& value) { SetChannelFlowArn(std::forward<ChannelFlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const { return m_chimeBearer; }
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }
    template<typename ChimeBearerT = Aws::String>
    void SetChimeBearer(ChimeBearerT&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::forward<ChimeBearerT>(value); }
    template<typename ChimeBearerT = Aws::String>
    AssociateChannelFlowRequest& WithChimeBearer(ChimeBearerT&& value) { SetChimeBearer(std::forward<ChimeBearerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_channelFlowArn;
    bool m_channelFlowArnHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
