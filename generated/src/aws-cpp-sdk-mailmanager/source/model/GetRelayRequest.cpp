/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetRelayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRelayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relayIdHasBeenSet)
  {
   payload.WithString("RelayId", m_relayId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRelayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.GetRelay"));
  return headers;

}




