/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserSecurityProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserSecurityProfilesRequest::UpdateUserSecurityProfilesRequest() : 
    m_securityProfileIdsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String UpdateUserSecurityProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityProfileIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityProfileIdsJsonList(m_securityProfileIds.size());
   for(unsigned securityProfileIdsIndex = 0; securityProfileIdsIndex < securityProfileIdsJsonList.GetLength(); ++securityProfileIdsIndex)
   {
     securityProfileIdsJsonList[securityProfileIdsIndex].AsString(m_securityProfileIds[securityProfileIdsIndex]);
   }
   payload.WithArray("SecurityProfileIds", std::move(securityProfileIdsJsonList));

  }

  return payload.View().WriteReadable();
}




