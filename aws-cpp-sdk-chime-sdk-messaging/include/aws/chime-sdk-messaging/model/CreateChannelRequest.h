/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMode.h>
#include <aws/chime-sdk-messaging/model/ChannelPrivacy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/ElasticChannelConfiguration.h>
#include <aws/chime-sdk-messaging/model/Tag.h>
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
  class CreateChannelRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API CreateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel request.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the channel request.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the channel request.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The ARN of the channel request.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the channel request.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the channel request.</p>
     */
    inline CreateChannelRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the channel request.</p>
     */
    inline CreateChannelRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel request.</p>
     */
    inline CreateChannelRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The channel mode: <code>UNRESTRICTED</code> or <code>RESTRICTED</code>.
     * Administrators, moderators, and channel members can add themselves and other
     * members to unrestricted channels. Only administrators and moderators can add
     * members to restricted channels.</p>
     */
    inline const ChannelMode& GetMode() const{ return m_mode; }

    /**
     * <p>The channel mode: <code>UNRESTRICTED</code> or <code>RESTRICTED</code>.
     * Administrators, moderators, and channel members can add themselves and other
     * members to unrestricted channels. Only administrators and moderators can add
     * members to restricted channels.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The channel mode: <code>UNRESTRICTED</code> or <code>RESTRICTED</code>.
     * Administrators, moderators, and channel members can add themselves and other
     * members to unrestricted channels. Only administrators and moderators can add
     * members to restricted channels.</p>
     */
    inline void SetMode(const ChannelMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The channel mode: <code>UNRESTRICTED</code> or <code>RESTRICTED</code>.
     * Administrators, moderators, and channel members can add themselves and other
     * members to unrestricted channels. Only administrators and moderators can add
     * members to restricted channels.</p>
     */
    inline void SetMode(ChannelMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The channel mode: <code>UNRESTRICTED</code> or <code>RESTRICTED</code>.
     * Administrators, moderators, and channel members can add themselves and other
     * members to unrestricted channels. Only administrators and moderators can add
     * members to restricted channels.</p>
     */
    inline CreateChannelRequest& WithMode(const ChannelMode& value) { SetMode(value); return *this;}

    /**
     * <p>The channel mode: <code>UNRESTRICTED</code> or <code>RESTRICTED</code>.
     * Administrators, moderators, and channel members can add themselves and other
     * members to unrestricted channels. Only administrators and moderators can add
     * members to restricted channels.</p>
     */
    inline CreateChannelRequest& WithMode(ChannelMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The channel's privacy level: <code>PUBLIC</code> or <code>PRIVATE</code>.
     * Private channels aren't discoverable by users outside the channel. Public
     * channels are discoverable by anyone in the <code>AppInstance</code>.</p>
     */
    inline const ChannelPrivacy& GetPrivacy() const{ return m_privacy; }

    /**
     * <p>The channel's privacy level: <code>PUBLIC</code> or <code>PRIVATE</code>.
     * Private channels aren't discoverable by users outside the channel. Public
     * channels are discoverable by anyone in the <code>AppInstance</code>.</p>
     */
    inline bool PrivacyHasBeenSet() const { return m_privacyHasBeenSet; }

    /**
     * <p>The channel's privacy level: <code>PUBLIC</code> or <code>PRIVATE</code>.
     * Private channels aren't discoverable by users outside the channel. Public
     * channels are discoverable by anyone in the <code>AppInstance</code>.</p>
     */
    inline void SetPrivacy(const ChannelPrivacy& value) { m_privacyHasBeenSet = true; m_privacy = value; }

    /**
     * <p>The channel's privacy level: <code>PUBLIC</code> or <code>PRIVATE</code>.
     * Private channels aren't discoverable by users outside the channel. Public
     * channels are discoverable by anyone in the <code>AppInstance</code>.</p>
     */
    inline void SetPrivacy(ChannelPrivacy&& value) { m_privacyHasBeenSet = true; m_privacy = std::move(value); }

    /**
     * <p>The channel's privacy level: <code>PUBLIC</code> or <code>PRIVATE</code>.
     * Private channels aren't discoverable by users outside the channel. Public
     * channels are discoverable by anyone in the <code>AppInstance</code>.</p>
     */
    inline CreateChannelRequest& WithPrivacy(const ChannelPrivacy& value) { SetPrivacy(value); return *this;}

    /**
     * <p>The channel's privacy level: <code>PUBLIC</code> or <code>PRIVATE</code>.
     * Private channels aren't discoverable by users outside the channel. Public
     * channels are discoverable by anyone in the <code>AppInstance</code>.</p>
     */
    inline CreateChannelRequest& WithPrivacy(ChannelPrivacy&& value) { SetPrivacy(std::move(value)); return *this;}


    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline CreateChannelRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline CreateChannelRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline CreateChannelRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline CreateChannelRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline CreateChannelRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline CreateChannelRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags for the creation request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateChannelRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline CreateChannelRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline CreateChannelRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the channel in the request.</p>
     */
    inline CreateChannelRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberArns() const{ return m_memberArns; }

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline bool MemberArnsHasBeenSet() const { return m_memberArnsHasBeenSet; }

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline void SetMemberArns(const Aws::Vector<Aws::String>& value) { m_memberArnsHasBeenSet = true; m_memberArns = value; }

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline void SetMemberArns(Aws::Vector<Aws::String>&& value) { m_memberArnsHasBeenSet = true; m_memberArns = std::move(value); }

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline CreateChannelRequest& WithMemberArns(const Aws::Vector<Aws::String>& value) { SetMemberArns(value); return *this;}

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline CreateChannelRequest& WithMemberArns(Aws::Vector<Aws::String>&& value) { SetMemberArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline CreateChannelRequest& AddMemberArns(const Aws::String& value) { m_memberArnsHasBeenSet = true; m_memberArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline CreateChannelRequest& AddMemberArns(Aws::String&& value) { m_memberArnsHasBeenSet = true; m_memberArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline CreateChannelRequest& AddMemberArns(const char* value) { m_memberArnsHasBeenSet = true; m_memberArns.push_back(value); return *this; }


    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModeratorArns() const{ return m_moderatorArns; }

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline bool ModeratorArnsHasBeenSet() const { return m_moderatorArnsHasBeenSet; }

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline void SetModeratorArns(const Aws::Vector<Aws::String>& value) { m_moderatorArnsHasBeenSet = true; m_moderatorArns = value; }

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline void SetModeratorArns(Aws::Vector<Aws::String>&& value) { m_moderatorArnsHasBeenSet = true; m_moderatorArns = std::move(value); }

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline CreateChannelRequest& WithModeratorArns(const Aws::Vector<Aws::String>& value) { SetModeratorArns(value); return *this;}

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline CreateChannelRequest& WithModeratorArns(Aws::Vector<Aws::String>&& value) { SetModeratorArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline CreateChannelRequest& AddModeratorArns(const Aws::String& value) { m_moderatorArnsHasBeenSet = true; m_moderatorArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline CreateChannelRequest& AddModeratorArns(Aws::String&& value) { m_moderatorArnsHasBeenSet = true; m_moderatorArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline CreateChannelRequest& AddModeratorArns(const char* value) { m_moderatorArnsHasBeenSet = true; m_moderatorArns.push_back(value); return *this; }


    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million users, excluding
     * moderators.</p>
     */
    inline const ElasticChannelConfiguration& GetElasticChannelConfiguration() const{ return m_elasticChannelConfiguration; }

    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million users, excluding
     * moderators.</p>
     */
    inline bool ElasticChannelConfigurationHasBeenSet() const { return m_elasticChannelConfigurationHasBeenSet; }

    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million users, excluding
     * moderators.</p>
     */
    inline void SetElasticChannelConfiguration(const ElasticChannelConfiguration& value) { m_elasticChannelConfigurationHasBeenSet = true; m_elasticChannelConfiguration = value; }

    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million users, excluding
     * moderators.</p>
     */
    inline void SetElasticChannelConfiguration(ElasticChannelConfiguration&& value) { m_elasticChannelConfigurationHasBeenSet = true; m_elasticChannelConfiguration = std::move(value); }

    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million users, excluding
     * moderators.</p>
     */
    inline CreateChannelRequest& WithElasticChannelConfiguration(const ElasticChannelConfiguration& value) { SetElasticChannelConfiguration(value); return *this;}

    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million users, excluding
     * moderators.</p>
     */
    inline CreateChannelRequest& WithElasticChannelConfiguration(ElasticChannelConfiguration&& value) { SetElasticChannelConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelMode m_mode;
    bool m_modeHasBeenSet = false;

    ChannelPrivacy m_privacy;
    bool m_privacyHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_memberArns;
    bool m_memberArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_moderatorArns;
    bool m_moderatorArnsHasBeenSet = false;

    ElasticChannelConfiguration m_elasticChannelConfiguration;
    bool m_elasticChannelConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
