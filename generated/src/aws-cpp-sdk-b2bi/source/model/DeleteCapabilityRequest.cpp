/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/DeleteCapabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCapabilityRequest::DeleteCapabilityRequest() : 
    m_capabilityIdHasBeenSet(false)
{
}

Aws::String DeleteCapabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilityIdHasBeenSet)
  {
   payload.WithString("capabilityId", m_capabilityId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCapabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.DeleteCapability"));
  return headers;

}




