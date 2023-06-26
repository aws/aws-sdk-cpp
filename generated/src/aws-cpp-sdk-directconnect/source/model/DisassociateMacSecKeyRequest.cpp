/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DisassociateMacSecKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateMacSecKeyRequest::DisassociateMacSecKeyRequest() : 
    m_connectionIdHasBeenSet(false),
    m_secretARNHasBeenSet(false)
{
}

Aws::String DisassociateMacSecKeyRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateMacSecKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DisassociateMacSecKey"));
  return headers;

}




