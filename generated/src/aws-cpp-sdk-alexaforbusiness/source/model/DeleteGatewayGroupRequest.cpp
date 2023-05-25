/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeleteGatewayGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGatewayGroupRequest::DeleteGatewayGroupRequest() : 
    m_gatewayGroupArnHasBeenSet(false)
{
}

Aws::String DeleteGatewayGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayGroupArnHasBeenSet)
  {
   payload.WithString("GatewayGroupArn", m_gatewayGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteGatewayGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DeleteGatewayGroup"));
  return headers;

}




