/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ActivateContactChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ActivateContactChannelRequest::ActivateContactChannelRequest() : 
    m_contactChannelIdHasBeenSet(false),
    m_activationCodeHasBeenSet(false)
{
}

Aws::String ActivateContactChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactChannelIdHasBeenSet)
  {
   payload.WithString("ContactChannelId", m_contactChannelId);

  }

  if(m_activationCodeHasBeenSet)
  {
   payload.WithString("ActivationCode", m_activationCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ActivateContactChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.ActivateContactChannel"));
  return headers;

}




