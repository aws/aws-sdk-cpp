/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DeleteProtectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProtectionRequest::DeleteProtectionRequest() : 
    m_protectionIdHasBeenSet(false)
{
}

Aws::String DeleteProtectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protectionIdHasBeenSet)
  {
   payload.WithString("ProtectionId", m_protectionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProtectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DeleteProtection"));
  return headers;

}




