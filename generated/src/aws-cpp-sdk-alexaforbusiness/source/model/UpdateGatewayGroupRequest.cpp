/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateGatewayGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGatewayGroupRequest::UpdateGatewayGroupRequest() : 
    m_gatewayGroupArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateGatewayGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayGroupArnHasBeenSet)
  {
   payload.WithString("GatewayGroupArn", m_gatewayGroupArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGatewayGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.UpdateGatewayGroup"));
  return headers;

}




