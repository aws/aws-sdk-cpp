/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/DeleteGroupMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGroupMembershipRequest::DeleteGroupMembershipRequest() : 
    m_identityStoreIdHasBeenSet(false),
    m_membershipIdHasBeenSet(false)
{
}

Aws::String DeleteGroupMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("MembershipId", m_membershipId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteGroupMembershipRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.DeleteGroupMembership"));
  return headers;

}




