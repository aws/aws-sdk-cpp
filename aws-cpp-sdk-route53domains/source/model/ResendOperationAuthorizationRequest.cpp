/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ResendOperationAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResendOperationAuthorizationRequest::ResendOperationAuthorizationRequest() : 
    m_operationIdHasBeenSet(false)
{
}

Aws::String ResendOperationAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationIdHasBeenSet)
  {
   payload.WithString("OperationId", m_operationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResendOperationAuthorizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.ResendOperationAuthorization"));
  return headers;

}




