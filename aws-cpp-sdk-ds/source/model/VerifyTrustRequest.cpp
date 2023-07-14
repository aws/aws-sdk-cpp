/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/VerifyTrustRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyTrustRequest::VerifyTrustRequest() : 
    m_trustIdHasBeenSet(false)
{
}

Aws::String VerifyTrustRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trustIdHasBeenSet)
  {
   payload.WithString("TrustId", m_trustId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection VerifyTrustRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.VerifyTrust"));
  return headers;

}




