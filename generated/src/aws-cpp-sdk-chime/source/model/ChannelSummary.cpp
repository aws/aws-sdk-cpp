/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

ChannelSummary::ChannelSummary() : 
    m_nameHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_mode(ChannelMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_privacy(ChannelPrivacy::NOT_SET),
    m_privacyHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_lastMessageTimestampHasBeenSet(false)
{
}

ChannelSummary::ChannelSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_mode(ChannelMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_privacy(ChannelPrivacy::NOT_SET),
    m_privacyHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_lastMessageTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelSummary& ChannelSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("LastMessageTimestamp"))
  {
    m_lastMessageTimestamp = jsonValue.GetDouble("LastMessageTimestamp");

    m_lastMessageTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelSummary::Jsonize() const
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

  if(m_lastMessageTimestampHasBeenSet)
  {
   payload.WithDouble("LastMessageTimestamp", m_lastMessageTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
