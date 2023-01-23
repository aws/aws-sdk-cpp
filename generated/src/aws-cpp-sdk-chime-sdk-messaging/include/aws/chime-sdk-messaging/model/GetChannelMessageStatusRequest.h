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
  class GetChannelMessageStatusRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API GetChannelMessageStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChannelMessageStatus"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel</p>
     */
    inline GetChannelMessageStatusRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel</p>
     */
    inline GetChannelMessageStatusRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel</p>
     */
    inline GetChannelMessageStatusRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ID of the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID of the message.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID of the message.</p>
     */
    inline GetChannelMessageStatusRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID of the message.</p>
     */
    inline GetChannelMessageStatusRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message.</p>
     */
    inline GetChannelMessageStatusRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline GetChannelMessageStatusRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline GetChannelMessageStatusRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline GetChannelMessageStatusRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline GetChannelMessageStatusRequest& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline GetChannelMessageStatusRequest& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * getting message status in a SubChannel that the user belongs to.</p> 
     */
    inline GetChannelMessageStatusRequest& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
