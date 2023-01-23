/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/CreateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChannelRequest::CreateChannelRequest() : 
    m_appInstanceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mode(ChannelMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_privacy(ChannelPrivacy::NOT_SET),
    m_privacyHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false),
    m_chimeBearerHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_memberArnsHasBeenSet(false),
    m_moderatorArnsHasBeenSet(false),
    m_elasticChannelConfigurationHasBeenSet(false)
{
}

Aws::String CreateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appInstanceArnHasBeenSet)
  {
   payload.WithString("AppInstanceArn", m_appInstanceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("ChannelId", m_channelId);

  }

  if(m_memberArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberArnsJsonList(m_memberArns.size());
   for(unsigned memberArnsIndex = 0; memberArnsIndex < memberArnsJsonList.GetLength(); ++memberArnsIndex)
   {
     memberArnsJsonList[memberArnsIndex].AsString(m_memberArns[memberArnsIndex]);
   }
   payload.WithArray("MemberArns", std::move(memberArnsJsonList));

  }

  if(m_moderatorArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> moderatorArnsJsonList(m_moderatorArns.size());
   for(unsigned moderatorArnsIndex = 0; moderatorArnsIndex < moderatorArnsJsonList.GetLength(); ++moderatorArnsIndex)
   {
     moderatorArnsJsonList[moderatorArnsIndex].AsString(m_moderatorArns[moderatorArnsIndex]);
   }
   payload.WithArray("ModeratorArns", std::move(moderatorArnsJsonList));

  }

  if(m_elasticChannelConfigurationHasBeenSet)
  {
   payload.WithObject("ElasticChannelConfiguration", m_elasticChannelConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_chimeBearerHasBeenSet)
  {
    ss << m_chimeBearer;
    headers.emplace("x-amz-chime-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}




