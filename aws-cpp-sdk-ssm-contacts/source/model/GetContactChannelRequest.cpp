/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/GetContactChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetContactChannelRequest::GetContactChannelRequest() : 
    m_contactChannelIdHasBeenSet(false)
{
}

Aws::String GetContactChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactChannelIdHasBeenSet)
  {
   payload.WithString("ContactChannelId", m_contactChannelId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetContactChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.GetContactChannel"));
  return headers;

}




