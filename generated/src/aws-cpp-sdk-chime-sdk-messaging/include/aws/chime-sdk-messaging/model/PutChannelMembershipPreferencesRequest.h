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


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline PutChannelMembershipPreferencesRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline PutChannelMembershipPreferencesRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline PutChannelMembershipPreferencesRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the member setting the preferences.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }
    inline PutChannelMembershipPreferencesRequest& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}
    inline PutChannelMembershipPreferencesRequest& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}
    inline PutChannelMembershipPreferencesRequest& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}
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
    inline PutChannelMembershipPreferencesRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}
    inline PutChannelMembershipPreferencesRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}
    inline PutChannelMembershipPreferencesRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel membership preferences of an <code>AppInstanceUser</code> .</p>
     */
    inline const ChannelMembershipPreferences& GetPreferences() const{ return m_preferences; }
    inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }
    inline void SetPreferences(const ChannelMembershipPreferences& value) { m_preferencesHasBeenSet = true; m_preferences = value; }
    inline void SetPreferences(ChannelMembershipPreferences&& value) { m_preferencesHasBeenSet = true; m_preferences = std::move(value); }
    inline PutChannelMembershipPreferencesRequest& WithPreferences(const ChannelMembershipPreferences& value) { SetPreferences(value); return *this;}
    inline PutChannelMembershipPreferencesRequest& WithPreferences(ChannelMembershipPreferences&& value) { SetPreferences(std::move(value)); return *this;}
    ///@}
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
