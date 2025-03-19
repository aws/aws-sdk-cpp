/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMode.h>
#include <aws/chime-sdk-messaging/model/ChannelPrivacy.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-messaging/model/ElasticChannelConfiguration.h>
#include <aws/chime-sdk-messaging/model/ExpirationSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The details of a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_CHIMESDKMESSAGING_API Channel() = default;
    AWS_CHIMESDKMESSAGING_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Channel& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    Channel& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the channel.</p>
     */
    inline ChannelMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ChannelMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline Channel& WithMode(ChannelMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's privacy setting.</p>
     */
    inline ChannelPrivacy GetPrivacy() const { return m_privacy; }
    inline bool PrivacyHasBeenSet() const { return m_privacyHasBeenSet; }
    inline void SetPrivacy(ChannelPrivacy value) { m_privacyHasBeenSet = true; m_privacy = value; }
    inline Channel& WithPrivacy(ChannelPrivacy value) { SetPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's metadata.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    Channel& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AppInstanceUser</code> who created the channel.</p>
     */
    inline const Identity& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Identity>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Identity>
    Channel& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the <code>AppInstanceUser</code> created the channel.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    Channel& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a member sent the last message in the channel.</p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageTimestamp() const { return m_lastMessageTimestamp; }
    inline bool LastMessageTimestampHasBeenSet() const { return m_lastMessageTimestampHasBeenSet; }
    template<typename LastMessageTimestampT = Aws::Utils::DateTime>
    void SetLastMessageTimestamp(LastMessageTimestampT&& value) { m_lastMessageTimestampHasBeenSet = true; m_lastMessageTimestamp = std::forward<LastMessageTimestampT>(value); }
    template<typename LastMessageTimestampT = Aws::Utils::DateTime>
    Channel& WithLastMessageTimestamp(LastMessageTimestampT&& value) { SetLastMessageTimestamp(std::forward<LastMessageTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a channel was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    Channel& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
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
    Channel& WithChannelFlowArn(ChannelFlowArnT&& value) { SetChannelFlowArn(std::forward<ChannelFlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes required to configure and create an elastic channel. An
     * elastic channel can support a maximum of 1-million members.</p>
     */
    inline const ElasticChannelConfiguration& GetElasticChannelConfiguration() const { return m_elasticChannelConfiguration; }
    inline bool ElasticChannelConfigurationHasBeenSet() const { return m_elasticChannelConfigurationHasBeenSet; }
    template<typename ElasticChannelConfigurationT = ElasticChannelConfiguration>
    void SetElasticChannelConfiguration(ElasticChannelConfigurationT&& value) { m_elasticChannelConfigurationHasBeenSet = true; m_elasticChannelConfiguration = std::forward<ElasticChannelConfigurationT>(value); }
    template<typename ElasticChannelConfigurationT = ElasticChannelConfiguration>
    Channel& WithElasticChannelConfiguration(ElasticChannelConfigurationT&& value) { SetElasticChannelConfiguration(std::forward<ElasticChannelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that control when a channel expires.</p>
     */
    inline const ExpirationSettings& GetExpirationSettings() const { return m_expirationSettings; }
    inline bool ExpirationSettingsHasBeenSet() const { return m_expirationSettingsHasBeenSet; }
    template<typename ExpirationSettingsT = ExpirationSettings>
    void SetExpirationSettings(ExpirationSettingsT&& value) { m_expirationSettingsHasBeenSet = true; m_expirationSettings = std::forward<ExpirationSettingsT>(value); }
    template<typename ExpirationSettingsT = ExpirationSettings>
    Channel& WithExpirationSettings(ExpirationSettingsT&& value) { SetExpirationSettings(std::forward<ExpirationSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    ChannelMode m_mode{ChannelMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    ChannelPrivacy m_privacy{ChannelPrivacy::NOT_SET};
    bool m_privacyHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Identity m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageTimestamp{};
    bool m_lastMessageTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_channelFlowArn;
    bool m_channelFlowArnHasBeenSet = false;

    ElasticChannelConfiguration m_elasticChannelConfiguration;
    bool m_elasticChannelConfigurationHasBeenSet = false;

    ExpirationSettings m_expirationSettings;
    bool m_expirationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
