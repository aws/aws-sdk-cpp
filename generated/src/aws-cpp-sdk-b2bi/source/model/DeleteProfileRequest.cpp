/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/DeleteProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProfileRequest::DeleteProfileRequest() : 
    m_profileIdHasBeenSet(false)
{
}

Aws::String DeleteProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("profileId", m_profileId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.DeleteProfile"));
  return headers;

}




