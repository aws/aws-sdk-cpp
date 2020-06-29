/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/UpdateLagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLagRequest::UpdateLagRequest() : 
    m_lagIdHasBeenSet(false),
    m_lagNameHasBeenSet(false),
    m_minimumLinks(0),
    m_minimumLinksHasBeenSet(false)
{
}

Aws::String UpdateLagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lagIdHasBeenSet)
  {
   payload.WithString("lagId", m_lagId);

  }

  if(m_lagNameHasBeenSet)
  {
   payload.WithString("lagName", m_lagName);

  }

  if(m_minimumLinksHasBeenSet)
  {
   payload.WithInteger("minimumLinks", m_minimumLinks);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLagRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateLag"));
  return headers;

}




