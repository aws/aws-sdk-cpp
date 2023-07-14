/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AssociateMacSecKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateMacSecKeyRequest::AssociateMacSecKeyRequest() : 
    m_connectionIdHasBeenSet(false),
    m_secretARNHasBeenSet(false),
    m_cknHasBeenSet(false),
    m_cakHasBeenSet(false)
{
}

Aws::String AssociateMacSecKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_secretARNHasBeenSet)
  {
   payload.WithString("secretARN", m_secretARN);

  }

  if(m_cknHasBeenSet)
  {
   payload.WithString("ckn", m_ckn);

  }

  if(m_cakHasBeenSet)
  {
   payload.WithString("cak", m_cak);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateMacSecKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AssociateMacSecKey"));
  return headers;

}




