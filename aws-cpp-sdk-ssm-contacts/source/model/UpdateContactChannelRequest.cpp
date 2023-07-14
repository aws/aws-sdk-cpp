/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/UpdateContactChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactChannelRequest::UpdateContactChannelRequest() : 
    m_contactChannelIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_deliveryAddressHasBeenSet(false)
{
}

Aws::String UpdateContactChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactChannelIdHasBeenSet)
  {
   payload.WithString("ContactChannelId", m_contactChannelId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_deliveryAddressHasBeenSet)
  {
   payload.WithObject("DeliveryAddress", m_deliveryAddress.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContactChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.UpdateContactChannel"));
  return headers;

}




