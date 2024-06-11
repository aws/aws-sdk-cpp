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
  class CreateChannelModeratorRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API CreateChannelModeratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannelModerator"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline CreateChannelModeratorRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline CreateChannelModeratorRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline CreateChannelModeratorRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AppInstanceUserArn</code> of the moderator.</p>
     */
    inline const Aws::String& GetChannelModeratorArn() const{ return m_channelModeratorArn; }
    inline bool ChannelModeratorArnHasBeenSet() const { return m_channelModeratorArnHasBeenSet; }
    inline void SetChannelModeratorArn(const Aws::String& value) { m_channelModeratorArnHasBeenSet = true; m_channelModeratorArn = value; }
    inline void SetChannelModeratorArn(Aws::String&& value) { m_channelModeratorArnHasBeenSet = true; m_channelModeratorArn = std::move(value); }
    inline void SetChannelModeratorArn(const char* value) { m_channelModeratorArnHasBeenSet = true; m_channelModeratorArn.assign(value); }
    inline CreateChannelModeratorRequest& WithChannelModeratorArn(const Aws::String& value) { SetChannelModeratorArn(value); return *this;}
    inline CreateChannelModeratorRequest& WithChannelModeratorArn(Aws::String&& value) { SetChannelModeratorArn(std::move(value)); return *this;}
    inline CreateChannelModeratorRequest& WithChannelModeratorArn(const char* value) { SetChannelModeratorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code>
     * that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }
    inline CreateChannelModeratorRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}
    inline CreateChannelModeratorRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}
    inline CreateChannelModeratorRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_channelModeratorArn;
    bool m_channelModeratorArnHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
