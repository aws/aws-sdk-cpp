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
  class CreateChannelBanRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API CreateChannelBanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannelBan"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the ban request.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the ban request.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the ban request.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the ban request.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the ban request.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the ban request.</p>
     */
    inline CreateChannelBanRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the ban request.</p>
     */
    inline CreateChannelBanRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the ban request.</p>
     */
    inline CreateChannelBanRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline CreateChannelBanRequest& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline CreateChannelBanRequest& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member being banned.</p>
     */
    inline CreateChannelBanRequest& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelBanRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelBanRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelBanRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
