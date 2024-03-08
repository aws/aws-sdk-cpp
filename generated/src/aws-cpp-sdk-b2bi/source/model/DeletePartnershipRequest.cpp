/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/DeletePartnershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePartnershipRequest::DeletePartnershipRequest() : 
    m_partnershipIdHasBeenSet(false)
{
}

Aws::String DeletePartnershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_partnershipIdHasBeenSet)
  {
   payload.WithString("partnershipId", m_partnershipId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePartnershipRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.DeletePartnership"));
  return headers;

}




