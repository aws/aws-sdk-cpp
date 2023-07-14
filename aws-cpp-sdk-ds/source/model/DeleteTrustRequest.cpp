/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DeleteTrustRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTrustRequest::DeleteTrustRequest() : 
    m_trustIdHasBeenSet(false),
    m_deleteAssociatedConditionalForwarder(false),
    m_deleteAssociatedConditionalForwarderHasBeenSet(false)
{
}

Aws::String DeleteTrustRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trustIdHasBeenSet)
  {
   payload.WithString("TrustId", m_trustId);

  }

  if(m_deleteAssociatedConditionalForwarderHasBeenSet)
  {
   payload.WithBool("DeleteAssociatedConditionalForwarder", m_deleteAssociatedConditionalForwarder);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTrustRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DeleteTrust"));
  return headers;

}




