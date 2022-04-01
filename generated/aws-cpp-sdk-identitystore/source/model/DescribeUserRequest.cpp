/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/DescribeUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeUserRequest::DescribeUserRequest() : 
    m_identityStoreIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String DescribeUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.DescribeUser"));
  return headers;

}




