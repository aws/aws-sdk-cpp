/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint-email/model/SendEmailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendEmailRequest::SendEmailRequest() : 
    m_fromEmailAddressHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_replyToAddressesHasBeenSet(false),
    m_feedbackForwardingEmailAddressHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_emailTagsHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false)
{
}

Aws::String SendEmailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fromEmailAddressHasBeenSet)
  {
   payload.WithString("FromEmailAddress", m_fromEmailAddress);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  if(m_replyToAddressesHasBeenSet)
  {
   Array<JsonValue> replyToAddressesJsonList(m_replyToAddresses.size());
   for(unsigned replyToAddressesIndex = 0; replyToAddressesIndex < replyToAddressesJsonList.GetLength(); ++replyToAddressesIndex)
   {
     replyToAddressesJsonList[replyToAddressesIndex].AsString(m_replyToAddresses[replyToAddressesIndex]);
   }
   payload.WithArray("ReplyToAddresses", std::move(replyToAddressesJsonList));

  }

  if(m_feedbackForwardingEmailAddressHasBeenSet)
  {
   payload.WithString("FeedbackForwardingEmailAddress", m_feedbackForwardingEmailAddress);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_emailTagsHasBeenSet)
  {
   Array<JsonValue> emailTagsJsonList(m_emailTags.size());
   for(unsigned emailTagsIndex = 0; emailTagsIndex < emailTagsJsonList.GetLength(); ++emailTagsIndex)
   {
     emailTagsJsonList[emailTagsIndex].AsObject(m_emailTags[emailTagsIndex].Jsonize());
   }
   payload.WithArray("EmailTags", std::move(emailTagsJsonList));

  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  return payload.View().WriteReadable();
}




