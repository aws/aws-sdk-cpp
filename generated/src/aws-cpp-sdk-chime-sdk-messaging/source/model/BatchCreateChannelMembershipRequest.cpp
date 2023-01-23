/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/BatchCreateChannelMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCreateChannelMembershipRequest::BatchCreateChannelMembershipRequest() : 
    m_channelArnHasBeenSet(false),
    m_type(ChannelMembershipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_memberArnsHasBeenSet(false),
    m_chimeBearerHasBeenSet(false),
    m_subChannelIdHasBeenSet(false)
{
}

Aws::String BatchCreateChannelMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelMembershipTypeMapper::GetNameForChannelMembershipType(m_type));
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

  if(m_subChannelIdHasBeenSet)
  {
   payload.WithString("SubChannelId", m_subChannelId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreateChannelMembershipRequest::GetRequestSpecificHeaders() const
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




