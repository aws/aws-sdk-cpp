/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContactRequest::CreateContactRequest() : 
    m_instanceIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_relatedContactIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_initiationMethod(ContactInitiationMethod::NOT_SET),
    m_initiationMethodHasBeenSet(false),
    m_expiryDurationInMinutes(0),
    m_expiryDurationInMinutesHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_initiateAs(InitiateAs::NOT_SET),
    m_initiateAsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_segmentAttributesHasBeenSet(false)
{
}

Aws::String CreateContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_relatedContactIdHasBeenSet)
  {
   payload.WithString("RelatedContactId", m_relatedContactId);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_referencesHasBeenSet)
  {
   JsonValue referencesJsonMap;
   for(auto& referencesItem : m_references)
   {
     referencesJsonMap.WithObject(referencesItem.first, referencesItem.second.Jsonize());
   }
   payload.WithObject("References", std::move(referencesJsonMap));

  }

  if(m_channelHasBeenSet)
  {
   payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if(m_initiationMethodHasBeenSet)
  {
   payload.WithString("InitiationMethod", ContactInitiationMethodMapper::GetNameForContactInitiationMethod(m_initiationMethod));
  }

  if(m_expiryDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("ExpiryDurationInMinutes", m_expiryDurationInMinutes);

  }

  if(m_userInfoHasBeenSet)
  {
   payload.WithObject("UserInfo", m_userInfo.Jsonize());

  }

  if(m_initiateAsHasBeenSet)
  {
   payload.WithString("InitiateAs", InitiateAsMapper::GetNameForInitiateAs(m_initiateAs));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_segmentAttributesHasBeenSet)
  {
   JsonValue segmentAttributesJsonMap;
   for(auto& segmentAttributesItem : m_segmentAttributes)
   {
     segmentAttributesJsonMap.WithObject(segmentAttributesItem.first, segmentAttributesItem.second.Jsonize());
   }
   payload.WithObject("SegmentAttributes", std::move(segmentAttributesJsonMap));

  }

  return payload.View().WriteReadable();
}




