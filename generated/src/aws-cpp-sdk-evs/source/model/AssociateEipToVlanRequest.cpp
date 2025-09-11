/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/AssociateEipToVlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateEipToVlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_vlanNameHasBeenSet)
  {
   payload.WithString("vlanName", m_vlanName);

  }

  if(m_allocationIdHasBeenSet)
  {
   payload.WithString("allocationId", m_allocationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateEipToVlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.AssociateEipToVlan"));
  return headers;

}




