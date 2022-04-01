/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/GetGroupMembershipIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetGroupMembershipIdRequest::GetGroupMembershipIdRequest() : 
    m_identityStoreIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

Aws::String GetGroupMembershipIdRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_memberIdHasBeenSet)
  {
   payload.WithObject("MemberId", m_memberId.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetGroupMembershipIdRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.GetGroupMembershipId"));
  return headers;

}




