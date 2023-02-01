/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/PutAccountConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountConfigurationRequest::PutAccountConfigurationRequest() : 
    m_expiryEventsHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false)
{
}

Aws::String PutAccountConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_expiryEventsHasBeenSet)
  {
   payload.WithObject("ExpiryEvents", m_expiryEvents.Jsonize());

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAccountConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.PutAccountConfiguration"));
  return headers;

}




