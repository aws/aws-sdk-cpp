/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/PutChannelExpirationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutChannelExpirationSettingsRequest::PutChannelExpirationSettingsRequest() : 
    m_channelArnHasBeenSet(false),
    m_chimeBearerHasBeenSet(false),
    m_expirationSettingsHasBeenSet(false)
{
}

Aws::String PutChannelExpirationSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_expirationSettingsHasBeenSet)
  {
   payload.WithObject("ExpirationSettings", m_expirationSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutChannelExpirationSettingsRequest::GetRequestSpecificHeaders() const
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




