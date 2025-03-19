/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetSegmentMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetSegmentMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profileIdsJsonList(m_profileIds.size());
   for(unsigned profileIdsIndex = 0; profileIdsIndex < profileIdsJsonList.GetLength(); ++profileIdsIndex)
   {
     profileIdsJsonList[profileIdsIndex].AsString(m_profileIds[profileIdsIndex]);
   }
   payload.WithArray("ProfileIds", std::move(profileIdsJsonList));

  }

  return payload.View().WriteReadable();
}




