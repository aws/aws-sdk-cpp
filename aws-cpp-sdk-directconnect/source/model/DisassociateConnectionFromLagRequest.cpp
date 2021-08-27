/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DisassociateConnectionFromLagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateConnectionFromLagRequest::DisassociateConnectionFromLagRequest() : 
    m_connectionIdHasBeenSet(false),
    m_lagIdHasBeenSet(false)
{
}

Aws::String DisassociateConnectionFromLagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_lagIdHasBeenSet)
  {
   payload.WithString("lagId", m_lagId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateConnectionFromLagRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DisassociateConnectionFromLag"));
  return headers;

}




