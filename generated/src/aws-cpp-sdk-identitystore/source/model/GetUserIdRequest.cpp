/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/GetUserIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUserIdRequest::GetUserIdRequest() : 
    m_identityStoreIdHasBeenSet(false),
    m_alternateIdentifierHasBeenSet(false)
{
}

Aws::String GetUserIdRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_alternateIdentifierHasBeenSet)
  {
   payload.WithObject("AlternateIdentifier", m_alternateIdentifier.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUserIdRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIdentityStore.GetUserId"));
  return headers;

}




