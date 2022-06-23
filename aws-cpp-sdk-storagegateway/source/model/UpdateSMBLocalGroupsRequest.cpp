/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateSMBLocalGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSMBLocalGroupsRequest::UpdateSMBLocalGroupsRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_sMBLocalGroupsHasBeenSet(false)
{
}

Aws::String UpdateSMBLocalGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_sMBLocalGroupsHasBeenSet)
  {
   payload.WithObject("SMBLocalGroups", m_sMBLocalGroups.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSMBLocalGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateSMBLocalGroups"));
  return headers;

}




