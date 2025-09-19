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
#include <aws/chime-sdk-messaging/model/ExpirationSettings.h>
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
    AWS_CHIMESDKMESSAGING_API CreateChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the channel request.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const { return m_appInstanceArn; }
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }
    template<typename AppInstanceArnT = Aws::String>
    void SetAppInstanceArn(AppInstanceArnT&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::forward<AppInstanceArnT>(value); }
    template<typename AppInstanceArnT = Aws::String>
    CreateChannelRequest& WithAppInstanceArn(AppInstanceArnT&& value) { SetAppInstanceArn(std::forward<AppInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateChannelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel mode: <code>UNRESTRICTED</code> or <code>RESTRICTED</code>.
     * Administrators, moderators, and channel members can add themselves and other
     * members to unrestricted channels. Only administrators and moderators can add
     * members to restricted channels.</p>
     */
    inline ChannelMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ChannelMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline CreateChannelRequest& WithMode(ChannelMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's privacy level: <code>PUBLIC</code> or <code>PRIVATE</code>.
     * Private channels aren't discoverable by users outside the channel. Public
     * channels are discoverable by anyone in the <code>AppInstance</code>.</p>
     */
    inline ChannelPrivacy GetPrivacy() const { return m_privacy; }
    inline bool PrivacyHasBeenSet() const { return m_privacyHasBeenSet; }
    inline void SetPrivacy(ChannelPrivacy value) { m_privacyHasBeenSet = true; m_privacy = value; }
    inline CreateChannelRequest& WithPrivacy(ChannelPrivacy value) { SetPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the creation request. Limited to 1KB and UTF-8.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    CreateChannelRequest& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token for the request. An <code>Idempotency</code> token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateChannelRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the creation request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateChannelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateChannelRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateChannelRequest& WithChimeBearer(ChimeBearerT&& value) { SetChimeBearer(std::forward<ChimeBearerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the channel being created. If you do not specify an ID, a UUID will
     * be created for the channel.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    CreateChannelRequest& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the channel members in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberArns() const { return m_memberArns; }
    inline bool MemberArnsHasBeenSet() const { return m_memberArnsHasBeenSet; }
    template<typename MemberArnsT = Aws::Vector<Aws::String>>
    void SetMemberArns(MemberArnsT&& value) { m_memberArnsHasBeenSet = true; m_memberArns = std::forward<MemberArnsT>(value); }
    template<typename MemberArnsT = Aws::Vector<Aws::String>>
    CreateChannelRequest& WithMemberArns(MemberArnsT&& value) { SetMemberArns(std::forward<MemberArnsT>(value)); return *this;}
    template<typename MemberArnsT = Aws::String>
    CreateChannelRequest& AddMemberArns(MemberArnsT&& value) { m_memberArnsHasBeenSet = true; m_memberArns.emplace_back(std::forward<MemberArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARNs of the channel moderators in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModeratorArns() const { return m_moderatorArns; }
    inline bool ModeratorArnsHasBeenSet() const { return m_moderatorArnsHasBeenSet; }
    template<typename ModeratorArnsT = Aws::Vector<Aws::String>>
    void SetModeratorArns(ModeratorArnsT&& value) { m_moderatorArnsHasBeenSet = true; m_moderatorArns = std::forward<ModeratorArnsT>(value); }
    template<typename ModeratorArnsT = Aws::Vector<Aws::String>>
    CreateChannelRequest& WithModeratorArns(ModeratorArnsT&& value) { SetModeratorArns(std::forward<ModeratorArnsT>(value)); return *this;}
    template<typename ModeratorArnsT = Aws::String>
    CreateChannelRequest& AddModeratorArns(ModeratorArnsT&& value) { m_moderatorArnsHasBeenSet = true; m_moderatorArns.emplace_back(std::forward<ModeratorArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million users, excluding
     * moderators.</p>
     */
    inline const ElasticChannelConfiguration& GetElasticChannelConfiguration() const { return m_elasticChannelConfiguration; }
    inline bool ElasticChannelConfigurationHasBeenSet() const { return m_elasticChannelConfigurationHasBeenSet; }
    template<typename ElasticChannelConfigurationT = ElasticChannelConfiguration>
    void SetElasticChannelConfiguration(ElasticChannelConfigurationT&& value) { m_elasticChannelConfigurationHasBeenSet = true; m_elasticChannelConfiguration = std::forward<ElasticChannelConfigurationT>(value); }
    template<typename ElasticChannelConfigurationT = ElasticChannelConfiguration>
    CreateChannelRequest& WithElasticChannelConfiguration(ElasticChannelConfigurationT&& value) { SetElasticChannelConfiguration(std::forward<ElasticChannelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that control the interval after which the channel is automatically
     * deleted.</p>
     */
    inline const ExpirationSettings& GetExpirationSettings() const { return m_expirationSettings; }
    inline bool ExpirationSettingsHasBeenSet() const { return m_expirationSettingsHasBeenSet; }
    template<typename ExpirationSettingsT = ExpirationSettings>
    void SetExpirationSettings(ExpirationSettingsT&& value) { m_expirationSettingsHasBeenSet = true; m_expirationSettings = std::forward<ExpirationSettingsT>(value); }
    template<typename ExpirationSettingsT = ExpirationSettings>
    CreateChannelRequest& WithExpirationSettings(ExpirationSettingsT&& value) { SetExpirationSettings(std::forward<ExpirationSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelMode m_mode{ChannelMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    ChannelPrivacy m_privacy{ChannelPrivacy::NOT_SET};
    bool m_privacyHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

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

    ExpirationSettings m_expirationSettings;
    bool m_expirationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
