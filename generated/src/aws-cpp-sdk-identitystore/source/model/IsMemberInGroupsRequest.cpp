/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/IsMemberInGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IsMemberInGroupsRequest::IsMemberInGroupsRequest() : 
    m_identityStoreIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

Aws::String IsMemberInGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_memberIdHasBeenSet)
  {
   payload.WithObject("MemberId", m_memberId.Jsonize());

  }

  if(m_groupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupIdsJsonList(m_groupIds.size());
   for(unsigned groupIdsIndex = 0; groupIdsIndex < groupIdsJsonList.GetLength(); ++groupIdsIndex)
   {
     groupIdsJsonList[groupIdsIndex].AsString(m_groupIds[groupIdsIndex]);
   }
   payload.WithArray("GroupIds", std::move(groupIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection IsMemberInGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.IsMemberInGroups"));
  return headers;

}




