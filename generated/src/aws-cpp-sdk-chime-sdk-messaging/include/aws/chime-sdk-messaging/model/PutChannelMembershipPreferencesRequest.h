/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipPreferences.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class PutChannelMembershipPreferencesRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API PutChannelMembershipPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutChannelMembershipPreferences"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member setting the
     * preferences.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserARN</code> of the user making the API call.</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


    /**
     * <p>The channel membership preferences of an <code>AppInstanceUser</code> .</p>
     */
    inline const ChannelMembershipPreferences& GetPreferences() const{ return m_preferences; }

    /**
     * <p>The channel membership preferences of an <code>AppInstanceUser</code> .</p>
     */
    inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }

    /**
     * <p>The channel membership preferences of an <code>AppInstanceUser</code> .</p>
     */
    inline void SetPreferences(const ChannelMembershipPreferences& value) { m_preferencesHasBeenSet = true; m_preferences = value; }

    /**
     * <p>The channel membership preferences of an <code>AppInstanceUser</code> .</p>
     */
    inline void SetPreferences(ChannelMembershipPreferences&& value) { m_preferencesHasBeenSet = true; m_preferences = std::move(value); }

    /**
     * <p>The channel membership preferences of an <code>AppInstanceUser</code> .</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithPreferences(const ChannelMembershipPreferences& value) { SetPreferences(value); return *this;}

    /**
     * <p>The channel membership preferences of an <code>AppInstanceUser</code> .</p>
     */
    inline PutChannelMembershipPreferencesRequest& WithPreferences(ChannelMembershipPreferences&& value) { SetPreferences(std::move(value)); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;

    ChannelMembershipPreferences m_preferences;
    bool m_preferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
