/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SendOutboundEmailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendOutboundEmailRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_trafficTypeHasBeenSet)
  {
   payload.WithString("TrafficType", TrafficTypeMapper::GetNameForTrafficType(m_trafficType));
  }

  if(m_sourceCampaignHasBeenSet)
  {
   payload.WithObject("SourceCampaign", m_sourceCampaign.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




