﻿/**
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
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class DescribeChannelMembershipForAppInstanceUserRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelMembershipForAppInstanceUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeChannelMembershipForAppInstanceUser"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the channel to which the user belongs.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    DescribeChannelMembershipForAppInstanceUserRequest& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user or bot in a channel.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const { return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    template<typename AppInstanceUserArnT = Aws::String>
    void SetAppInstanceUserArn(AppInstanceUserArnT&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::forward<AppInstanceUserArnT>(value); }
    template<typename AppInstanceUserArnT = Aws::String>
    DescribeChannelMembershipForAppInstanceUserRequest& WithAppInstanceUserArn(AppInstanceUserArnT&& value) { SetAppInstanceUserArn(std::forward<AppInstanceUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code>
     * that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const { return m_chimeBearer; }
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }
    template<typename ChimeBearerT = Aws::String>
    void SetChimeBearer(ChimeBearerT&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::forward<ChimeBearerT>(value); }
    template<typename ChimeBearerT = Aws::String>
    DescribeChannelMembershipForAppInstanceUserRequest& WithChimeBearer(ChimeBearerT&& value) { SetChimeBearer(std::forward<ChimeBearerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
