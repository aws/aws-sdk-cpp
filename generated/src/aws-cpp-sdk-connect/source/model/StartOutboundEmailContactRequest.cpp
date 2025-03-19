/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartOutboundEmailContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartOutboundEmailContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_fromEmailAddressHasBeenSet)
  {
   payload.WithObject("FromEmailAddress", m_fromEmailAddress.Jsonize());

  }

  if(m_destinationEmailAddressHasBeenSet)
  {
   payload.WithObject("DestinationEmailAddress", m_destinationEmailAddress.Jsonize());

  }

  if(m_additionalRecipientsHasBeenSet)
  {
   payload.WithObject("AdditionalRecipients", m_additionalRecipients.Jsonize());

  }

  if(m_emailMessageHasBeenSet)
  {
   payload.WithObject("EmailMessage", m_emailMessage.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




