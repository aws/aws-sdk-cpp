/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetOperationRequest::GetOperationRequest() : 
    m_operationIdHasBeenSet(false)
{
}

Aws::String GetOperationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationIdHasBeenSet)
  {
   payload.WithString("operationId", m_operationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetOperationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetOperation"));
  return headers;

}




