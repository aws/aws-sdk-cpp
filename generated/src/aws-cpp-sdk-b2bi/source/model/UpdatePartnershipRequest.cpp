/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/UpdatePartnershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePartnershipRequest::UpdatePartnershipRequest() : 
    m_partnershipIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

Aws::String UpdatePartnershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_partnershipIdHasBeenSet)
  {
   payload.WithString("partnershipId", m_partnershipId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(m_capabilities[capabilitiesIndex]);
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePartnershipRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.UpdatePartnership"));
  return headers;

}




