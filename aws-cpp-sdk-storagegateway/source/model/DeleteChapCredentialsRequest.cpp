/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DeleteChapCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteChapCredentialsRequest::DeleteChapCredentialsRequest() : 
    m_targetARNHasBeenSet(false),
    m_initiatorNameHasBeenSet(false)
{
}

Aws::String DeleteChapCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetARNHasBeenSet)
  {
   payload.WithString("TargetARN", m_targetARN);

  }

  if(m_initiatorNameHasBeenSet)
  {
   payload.WithString("InitiatorName", m_initiatorName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteChapCredentialsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DeleteChapCredentials"));
  return headers;

}




