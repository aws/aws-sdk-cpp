/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

Channel::Channel() : 
    m_nameHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_mode(ChannelMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_privacy(ChannelPrivacy::NOT_SET),
    m_privacyHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastMessageTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_channelFlowArnHasBeenSet(false),
    m_elasticChannelConfigurationHasBeenSet(false),
    m_expirationSettingsHasBeenSet(false)
{
}

Channel::Channel(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_mode(ChannelMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_privacy(ChannelPrivacy::NOT_SET),
    m_privacyHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastMessageTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_channelFlowArnHasBeenSet(false),
    m_elasticChannelConfigurationHasBeenSet(false),
    m_expirationSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

    m_channelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ChannelModeMapper::GetChannelModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Privacy"))
  {
    m_privacy = ChannelPrivacyMapper::GetChannelPrivacyForName(jsonValue.GetString("Privacy"));

    m_privacyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastMessageTimestamp"))
  {
    m_lastMessageTimestamp = jsonValue.GetDouble("LastMessageTimestamp");

    m_lastMessageTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelFlowArn"))
  {
    m_channelFlowArn = jsonValue.GetString("ChannelFlowArn");

    m_channelFlowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticChannelConfiguration"))
  {
    m_elasticChannelConfiguration = jsonValue.GetObject("ElasticChannelConfiguration");

    m_elasticChannelConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationSettings"))
  {
    m_expirationSettings = jsonValue.GetObject("ExpirationSettings");

    m_expirationSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("ChannelArn", m_channelArn);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ChannelModeMapper::GetNameForChannelMode(m_mode));
  }

  if(m_privacyHasBeenSet)
  {
   payload.WithString("Privacy", ChannelPrivacyMapper::GetNameForChannelPrivacy(m_privacy));
  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastMessageTimestampHasBeenSet)
  {
   payload.WithDouble("LastMessageTimestamp", m_lastMessageTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_channelFlowArnHasBeenSet)
  {
   payload.WithString("ChannelFlowArn", m_channelFlowArn);

  }

  if(m_elasticChannelConfigurationHasBeenSet)
  {
   payload.WithObject("ElasticChannelConfiguration", m_elasticChannelConfiguration.Jsonize());

  }

  if(m_expirationSettingsHasBeenSet)
  {
   payload.WithObject("ExpirationSettings", m_expirationSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
